// Name: crt_unknown.c_FUN_005bd078
// Address: 005bd078
// Address Range: [[005bd078, 005bd0ce]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bd078(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005bd078(uint param_1,uint param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  FUN_005bce2c(0,param_2,pHVar1);
  uVar2 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)(&DAT_0061f264);
  FUN_005c2da0(uVar2);
  FUN_005c32a8(param_1);
  FUN_005c3330();
  (*(code *)PTR_crt_unknown_c_FUN_005bce28_0061f2e4)();
  FUN_005c3330();
  return;
}
