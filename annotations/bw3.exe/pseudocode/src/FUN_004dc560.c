// Name: FUN_004dc560
// Address: 004dc560
// Address Range: [[004dc560, 004dc6f8]]
// Convention: unknown
// Signature: void FUN_004dc560(float *param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004dc560(float *param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  FUN_005a3140(param_2,"%s{ // Inventory\n",&DAT_005f0990);
  FUN_0040afa0();
  param_1[0xcd] = 2.8026e-45;
  FUN_005a3140(param_2,"%s// fileVersion\n",&DAT_005f0990);
  FUN_005a3140(param_2,"%s%d\n",&DAT_005f0990,param_1[0xcd]);
  FUN_005a3140(param_2,"%s// itemCount\n",&DAT_005f0990);
  FUN_005a3140(param_2,"%s%d\n",&DAT_005f0990,param_1[4]);
  iVar1 = 0;
  pfVar2 = param_1;
  iVar3 = -1;
  if (0 < (int)param_1[4]) {
    do {
      iVar3 = iVar1;
      if (param_1[0xce] == pfVar2[5]) break;
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 1;
      iVar3 = -1;
    } while (iVar1 < (int)param_1[4]);
  }
  FUN_005a3140(param_2,"%s// currentWeapon\n",&DAT_005f0990,iVar3);
  FUN_005a3140(param_2,"%s%d\n",&DAT_005f0990,iVar3);
  FUN_005a3140(param_2,"%s// battery strength\n",&DAT_005f0990);
  FUN_005a3140(param_2,"%s%f\n",&DAT_005f0990,(double)*param_1);
  FUN_005a3140(param_2,"%s// actor name list\n",&DAT_005f0990);
  FUN_004dc700(param_1,param_2);
  iVar3 = 0;
  FUN_005a3140(param_2,"%s// actor data list\n",&DAT_005f0990);
  pfVar2 = param_1;
  if (0 < (int)param_1[4]) {
    do {
      iVar3 = iVar3 + 1;
      FUN_0040aff0(pfVar2[5],param_2);
      pfVar2 = pfVar2 + 1;
    } while (iVar3 < (int)param_1[4]);
  }
  FUN_0040afa0();
  FUN_005a3140(param_2,"%s} // End inventory\n",&DAT_005f0990);
  return;
}
