// Name: crt_time.c_asctime_FUN_00601768
// Address: 00601768
// Address Range: [[00601768, 0060177f]]
// Convention: __watcallStack
// Signature: char * __watcallStack crt_time_c_asctime_FUN_00601768(tm *timeptr)

#include "nocturne.h"

char * __watcallStack crt_time_c_asctime_FUN_00601768(tm *timeptr)

{
  ThreadData *pTVar1;
  char *pcVar2;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pcVar2 = crt_time_c_asctimeFormat_FUN_00601678(timeptr,pTVar1->asctime_buffer);
  return pcVar2;
}
