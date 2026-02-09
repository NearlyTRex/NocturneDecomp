// Name: crt_time.c__asctime_FUN_00601768
// Address: 00601768
// Address Range: [[00601768, 0060177f]]
// Convention: __cdecl
// Signature: char * __cdecl crt_time_c__asctime_FUN_00601768(_tm *timeptr)

#include "nocturne.h"

char * __cdecl _asctime(_tm *timeptr)

{
  ThreadData *pTVar1;
  char *pcVar2;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pcVar2 = asctimeFormat(timeptr,pTVar1->asctime_buffer);
  return pcVar2;
}
