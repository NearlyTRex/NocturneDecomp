// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_004faaf0
// Address: 004faaf0
// Address Range: [[004faaf0, 004fae08]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004faaf0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004faaf0(CInventory *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int local_1c;
  int local_18;
  
  if ((g_CGamePtr->letterbox_mode == 0) &&
     (this_ptr->owner == *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4))) {
    if (DAT_0061b49c != _DAT_01d1bc5c) {
      core_inv_cpp_FUN_004f70e0();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar1 = 8;
      iVar7 = 0x50;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_0061b49c < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x28;
        iVar1 = 4;
      }
      iVar5 = DAT_0061b498 - iVar7;
      iVar6 = DAT_0061b49c - iVar7;
      local_1c = 0xffff;
      if (this_ptr->weapon_highlight_timer < 1.0) {
        fVar8 = (float10)this_ptr->weapon_highlight_timer * (float10)_DAT_005e6890;
        round();
        local_1c = (int)ROUND(fVar8);
        iVar4 = extraout_ECX;
      }
      iVar2 = (local_1c * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004fa770
                  (DAT_0061b498 - iVar4,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                   iVar2);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004fa930
                  (DAT_0061b498 - iVar3,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                   iVar2);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004f90d0
                (this_ptr,&this_ptr->selected_weapon->base,iVar5 - iVar1,iVar6 - iVar1,iVar7,
                 1.5707964,local_1c);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar1 = 0x10;
      iVar7 = 0x40;
      iVar4 = 0x00000060;
      iVar3 = 0x000000D0;
      if ((DAT_0061b49c < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = 0x000000D0 / 2;
        iVar4 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar1 = 8;
      }
      iVar5 = DAT_0061b498 - iVar7;
      iVar6 = DAT_0061b49c - iVar7;
      local_18 = 0xffff;
      if (this_ptr->item_highlight_timer < 1.0) {
        fVar8 = (float10)this_ptr->item_highlight_timer * (float10)_DAT_005e6890;
        round();
        local_18 = (int)ROUND(fVar8);
        iVar4 = extraout_ECX_00;
      }
      iVar2 = (local_18 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004fa770
                  (DAT_0061b498 - iVar4,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                   iVar2);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004fa930
                  (DAT_0061b498 - iVar3,DAT_0061b49c - iVar4,DAT_0061b498 + -1,DAT_0061b49c + -1,
                   iVar2);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004f90d0
                (this_ptr,this_ptr->selected_item,iVar5 - iVar1,iVar6 - iVar1,iVar7,0.0,local_18);
    }
  }
  return;
}
