// Name: crt_time.c__localtime_FUN_005a5628
// Address: 005a5628
// Address Range: [[005a5628, 005a563f]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c__localtime_FUN_005a5628(time_t *timer)

#include "nocturne.h"

_tm * __cdecl _localtime(time_t *timer)

{
  int iVar1;
  _tm *p_Var2;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
  p_Var2 = (_tm *)FUN_005a55d0(timer,iVar1 + 0x14);
  return p_Var2;
}
