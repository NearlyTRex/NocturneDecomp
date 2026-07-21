// Name: core_inv.cpp_CInventory_save_FUN_004c0fa0
// Address: 004c0fa0
// Address Range: [[004c0fa0, 004c1138]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_save_FUN_004c0fa0(float *param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_save_FUN_004c0fa0(float *param_1,uint param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  
  _fprintf(param_2,"%s{ // Inventory\n",&DAT_005acc90);
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0();
  param_1[0xcb] = 2.8026e-45;
  _fprintf(param_2,"%s// fileVersion\n",&DAT_005acc90);
  _fprintf(param_2,"%s%d\n",&DAT_005acc90,param_1[0xcb]);
  _fprintf(param_2,"%s// itemCount\n",&DAT_005acc90);
  _fprintf(param_2,"%s%d\n",&DAT_005acc90,param_1[2]);
  iVar1 = 0;
  pfVar2 = param_1;
  iVar3 = -1;
  if (0 < (int)param_1[2]) {
    do {
      iVar3 = iVar1;
      if (param_1[0xcc] == pfVar2[3]) break;
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 1;
      iVar3 = -1;
    } while (iVar1 < (int)param_1[2]);
  }
  _fprintf(param_2,"%s// currentWeapon\n",&DAT_005acc90,iVar3);
  _fprintf(param_2,"%s%d\n",&DAT_005acc90,iVar3);
  _fprintf(param_2,"%s// battery strength\n",&DAT_005acc90);
  _fprintf(param_2,"%s%f\n",&DAT_005acc90,(double)*param_1);
  _fprintf(param_2,"%s// actor name list\n",&DAT_005acc90);
  core_inv_cpp_CInventory_saveItems_FUN_004c1140(param_1,param_2);
  iVar3 = 0;
  _fprintf(param_2,"%s// actor data list\n",&DAT_005acc90);
  pfVar2 = param_1;
  if (0 < (int)param_1[2]) {
    do {
      iVar3 = iVar3 + 1;
      core_actor_cpp_CDemonActor_save_FUN_0040c040(pfVar2[3],param_2);
      pfVar2 = pfVar2 + 1;
    } while (iVar3 < (int)param_1[2]);
  }
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0();
  _fprintf(param_2,"%s} // End inventory\n",&DAT_005acc90);
  return;
}
