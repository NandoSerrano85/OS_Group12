# OS_Group12

## Project1
---
Please make sure to run the following commands in order to make sure changes work.
 - rm ****.o nachos
 - make

Note: There should only be one star.

In order to run the different changes you must change the Makefile so that it can run based on the pre-processes made
In the Makefile go to:
  - DEFINES = -DTHREADS

and add your pre-processes one at a time to test:
  - DEFINES = -DTHREADS -DHW1_SEMAPHORES
  - DEFINES = -DTHREADS -DHW1_SEMAPHORES -DHW1_LOCKS
  - DEFINES = -DTHREADS -DHW1_ELEVATOR
