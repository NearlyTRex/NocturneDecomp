// Name: crt_time.c_localtime_FUN_00600288
// Address: 00600288
// Address Range: [[00600288, 0060029f]]
// Convention: __cdecl
// Signature: tm * __cdecl crt_time_c_localtime_FUN_00600288(time_t *timer)

#include "nocturne.h"

tm * __cdecl crt_time_c_localtime_FUN_00600288(time_t *timer)

{
  ThreadData *pTVar1;
  tm *ptVar2;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  ptVar2 = crt_time_c_localtime_r_FUN_00600230(timer,&pTVar1->localtime_buffer);
  return ptVar2;
}
