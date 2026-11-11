// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670
// Address: 004dd670
// Address Range: [[004dd670, 004dd9a4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670(CInventory *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  int iVar7;
  float10 fVar8;
  int local_1c;
  int local_18;
  
  if ((g_CGamePtr->letterbox_mode == 0) &&
     (this_ptr->owner == *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4))) {
    if (DAT_006141bc != _DAT_01d02f40) {
      core_inv_cpp_loadAssets_FUN_004da990();
    }
    if ((this_ptr->selected_weapons[this_ptr->current_group] != (CWeapon *)0x0) &&
       (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar6 = 8;
      iVar7 = 0x50;
      iVar5 = 0x00000060;
      iVar4 = 0x000000D0;
      if ((DAT_006141bc < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = 0x000000D0 / 2;
        iVar5 = 0x00000060 / 2;
        iVar7 = 0x28;
        iVar6 = 4;
      }
      iVar1 = DAT_006141b8 - iVar7;
      iVar2 = DAT_006141bc - iVar7;
      local_1c = 0xffff;
      if (this_ptr->weapon_highlight_timer < 1.0) {
        fVar8 = (float10)this_ptr->weapon_highlight_timer * (float10)_DAT_005dba86;
        round();
        local_1c = (int)ROUND(fVar8);
        iVar5 = extraout_ECX;
      }
      iVar3 = (local_1c * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004dd320
                  (DAT_006141b8 - iVar5,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                   iVar3);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004dd4e0
                  (DAT_006141b8 - iVar4,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                   iVar3);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80
                (this_ptr,&this_ptr->selected_weapons[this_ptr->current_group]->base,iVar1 - iVar6,
                 iVar2 - iVar6,iVar7,1.5707964,local_1c);
    }
    if ((this_ptr->selected_items[this_ptr->current_group] != (CDemonActor *)0x0) &&
       (0.0 < this_ptr->item_highlight_timer)) {
      iVar6 = 0x10;
      iVar7 = 0x40;
      iVar5 = 0x00000060;
      iVar4 = 0x000000D0;
      if ((DAT_006141bc < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = 0x000000D0 / 2;
        iVar5 = 0x00000060 / 2;
        iVar7 = 0x20;
        iVar6 = 8;
      }
      iVar1 = DAT_006141b8 - iVar7;
      iVar2 = DAT_006141bc - iVar7;
      local_18 = 0xffff;
      if (this_ptr->item_highlight_timer < 1.0) {
        fVar8 = (float10)this_ptr->item_highlight_timer * (float10)_DAT_005dba86;
        round();
        local_18 = (int)ROUND(fVar8);
        iVar5 = extraout_ECX_00;
      }
      iVar3 = (local_18 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004dd320
                  (DAT_006141b8 - iVar5,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                   iVar3);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004dd4e0
                  (DAT_006141b8 - iVar4,DAT_006141bc - iVar5,DAT_006141b8 + -1,DAT_006141bc + -1,
                   iVar3);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80
                (this_ptr,this_ptr->selected_items[this_ptr->current_group],iVar1 - iVar6,
                 iVar2 - iVar6,iVar7,0.0,local_18);
    }
  }
  return;
}
