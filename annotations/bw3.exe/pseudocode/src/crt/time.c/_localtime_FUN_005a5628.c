// Name: crt_time.c__localtime_FUN_005a5628
// Address: 005a5628
// Address Range: [[005a5628, 005a563f]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__localtime_FUN_005a5628(undefined4 param_1)

#include "nocturne.h"

void __cdecl _localtime(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)();
  FUN_005a55d0(param_1,iVar1 + 0x14);
  return;
}
