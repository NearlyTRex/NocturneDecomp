// Name: crt_time.c__localtime_FUN_005665e8
// Address: 005665e8
// Address Range: [[005665e8, 005665ff]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c__localtime_FUN_005665e8(time_t *timer)

#include "nocturne.h"

_tm * __cdecl _localtime(time_t *timer)

{
  int iVar1;
  _tm *p_Var2;
  
  iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
  p_Var2 = localtime_r(timer,(_tm *)(iVar1 + 0x14));
  return p_Var2;
}
