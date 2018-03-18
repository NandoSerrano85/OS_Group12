#ifndef MEMORYMANAGER_H
#define MEMORYMANAGER_H

class Lock;
class AddrSpace;

#include "synch.h"
#include "bitmap.h"
#include "addrspace.h"

class CoreMapEntry
{
 public:
    bool allocated;
    AddrSpace* space;
    int vPageNumber;
    bool ioLocked;
};

class MemoryManager
{
 public:
    static MemoryManager* GetInstance();
    ~MemoryManager();
    int GetPage();
    bool ClearPage(int which);
    int GetFreePages();
    CoreMapEntry* entries;
    int replaceIndex;
    int totalPages;
 private:
    MemoryManager(int numPages);
    BitMap* pages;
    int usedPages;
    Lock* mmLock;
    static MemoryManager* manager;
};

#endif
