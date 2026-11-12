// Name: crt_time.c__localtime_FUN_005c2738
// Address: 005c2738
// Address Range: [[005c2738, 005c274f]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c__localtime_FUN_005c2738(time_t *timer)

#include "nocturne.h"

_tm * __cdecl _localtime(time_t *timer)

{
  int iVar1;
  _tm *p_Var2;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
  p_Var2 = (_tm *)FUN_005c26e0(timer,iVar1 + 0x14);
  return p_Var2;
}
