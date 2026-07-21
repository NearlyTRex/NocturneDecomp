// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150
// Address: 004c2150
// Address Range: [[004c2150, 004c2468]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  uint uStack_40;
  uint local_34;
  uint local_20;
  
  if ((*(int *)(0x01C775EC + 0x228) == 0) &&
     (*(int *)(param_1 + 4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8))) {
    if (DAT_005b7620 != _DAT_01cc30a0) {
      uStack_40 = 0x4c23d6;
      core_inv_cpp_loadAssets_FUN_004befa0();
    }
    if ((*(int *)(param_1 + 0x330) != 0) && (0.0 < *(float *)(param_1 + 0x338))) {
      uVar6 = 0x50;
      iVar5 = 0x00000060;
      iVar4 = 0x000000D0;
      if ((DAT_005b7620 < 0x180) && (*(int *)(param_1 + 0x44c) == 0)) {
        iVar4 = 0x000000D0 / 2;
        iVar5 = 0x00000060 / 2;
        uVar6 = 0x28;
      }
      if (*(float *)(param_1 + 0x338) < 1.0) {
        uStack_40 = 0x4c222a;
        fVar8 = (float10)round
                                   ((float10)*(float *)(param_1 + 0x338) * (float10)_DAT_00587469);
        local_20 = (int)ROUND(fVar8);
      }
      iVar1 = (local_20 * 2) / 3;
      if (*(int *)(param_1 + 0x44c) == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0
                  (DAT_005b761c - iVar5,DAT_005b7620 - iVar5,DAT_005b761c + -1,DAT_005b7620 + -1,
                   iVar1);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004c1f90
                  (DAT_005b761c - iVar4,DAT_005b7620 - iVar5,DAT_005b761c + -1,DAT_005b7620 + -1,
                   iVar1);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40
                (param_1,*(uint *)(param_1 + 0x330),uStack_40,local_34,uVar6,0x3fc90fdb,
                 local_20);
    }
    if ((*(int *)(param_1 + 0x334) != 0) && (0.0 < *(float *)(param_1 + 0x33c))) {
      iVar1 = 0x10;
      iVar7 = 0x40;
      iVar5 = 0x00000060;
      iVar4 = 0x000000D0;
      if ((DAT_005b7620 < 0x180) && (*(int *)(param_1 + 0x44c) == 0)) {
        iVar4 = 0x000000D0 / 2;
        iVar5 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar1 = 8;
      }
      iVar2 = DAT_005b761c - iVar7;
      iVar3 = DAT_005b7620 - iVar7;
      if (*(float *)(param_1 + 0x33c) < 1.0) {
        round((float10)*(float *)(param_1 + 0x33c) * (float10)_DAT_00587469)
        ;
      }
      if (*(int *)(param_1 + 0x44c) == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0
                  (DAT_005b761c - iVar5,DAT_005b7620 - iVar5,DAT_005b761c + -1,DAT_005b7620 + -1,
                   0xaaaa);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004c1f90
                  (DAT_005b761c - iVar4,DAT_005b7620 - iVar5,DAT_005b761c + -1,DAT_005b7620 + -1,
                   0xaaaa);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40
                (param_1,*(uint *)(param_1 + 0x334),iVar2 - iVar1,iVar3 - iVar1,iVar7,0,0xffff
                );
    }
  }
  return;
}
