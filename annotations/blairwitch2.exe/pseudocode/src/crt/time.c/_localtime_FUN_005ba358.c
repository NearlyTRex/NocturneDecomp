// Name: crt_time.c__localtime_FUN_005ba358
// Address: 005ba358
// Address Range: [[005ba358, 005ba36f]]
// Convention: __cdecl
// Signature: _tm * __cdecl crt_time_c__localtime_FUN_005ba358(time_t *timer)

#include "nocturne.h"

_tm * __cdecl _localtime(time_t *timer)

{
  int iVar1;
  _tm *p_Var2;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
  p_Var2 = (_tm *)FUN_005ba300(timer,iVar1 + 0x14);
  return p_Var2;
}
