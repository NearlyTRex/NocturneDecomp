// Name: crt_unknown.c_FUN_005c5348
// Address: 005c5348
// Address Range: [[005c5348, 005c539e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005c5348(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005c5348(uint param_1,uint param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  FUN_005c50fc(0,param_2,pHVar1);
  uVar2 = (*(code *)PTR_crt_unknown_c_FUN_005c50cc_006265fc)(&DAT_006265bc);
  unkafter_zombie_cpp_FUN_005cb0a0(uVar2);
  unkafter_zombie_cpp_FUN_005cb5a8(param_1);
  unkafter_zombie_cpp_FUN_005cb630();
  (*(code *)PTR_crt_unknown_c_FUN_005c50f8_0062663c)();
  unkafter_zombie_cpp_FUN_005cb630();
  return;
}
