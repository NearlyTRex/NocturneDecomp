// Name: crt_time.c__localtime_FUN_005c2738
// Address: 005c2738
// Address Range: [[005c2738, 005c274f]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__localtime_FUN_005c2738(undefined4 param_1)

#include "nocturne.h"

void __cdecl _localtime(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)();
  FUN_005c26e0(param_1,iVar1 + 0x14);
  return;
}
