// Name: crt_unknown.c_FUN_005a81b8
// Address: 005a81b8
// Address Range: [[005a81b8, 005a820e]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005a81b8(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a81b8(uint param_1,uint param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  FUN_005a7f6c(0,param_2,pHVar1);
  uVar2 = (*(code *)PTR_crt_unknown_c_FUN_005a7f3c_006079a0)(&DAT_00607960);
  FUN_005adf10(uVar2);
  FUN_005ae418(param_1);
  FUN_005ae4a0();
  (*(code *)PTR_crt_unknown_c_FUN_005a7f68_006079e0)();
  FUN_005ae4a0();
  return;
}
