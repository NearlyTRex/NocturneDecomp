// Name: unkafter_asgaya.cpp_FUN_005afbf0
// Address: 005afbf0
// Address Range: [[005afbf0, 005afc5b]]
// Convention: unknown
// Signature: undefined4 unkafter_asgaya_cpp_FUN_005afbf0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint unkafter_asgaya_cpp_FUN_005afbf0(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079cc)();
  uVar3 = 1;
  puVar1 = (uint *)FUN_005a4b20(1,0x10);
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    iVar2 = unkafter_2d_cpp_FUN_005b0d90(param_2);
    if (iVar2 == 0) {
      puVar1[2] = param_2;
      puVar1[1] = param_1;
      puVar1[3] = (uint)*(byte *)(param_2 + 0x52);
      *puVar1 = _DAT_02d261f0;
      _DAT_02d261f0 = puVar1;
    }
    else {
      FUN_005a3770(puVar1);
      uVar3 = 0;
    }
  }
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079d0)();
  return uVar3;
}
