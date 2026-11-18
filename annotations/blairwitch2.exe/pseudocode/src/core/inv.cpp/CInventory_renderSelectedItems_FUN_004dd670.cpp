// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670
// Address: 004dd670
// Address Range: [[004dd670, 004dd9a4]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670(CInventory *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int local_38;
  int local_20;
  
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4])) {
    if (g_INT_006141bc != g_InventoryScreenHeight) {
      core_inv_cpp_loadAssets_FUN_004da990();
    }
    if ((this_ptr->selected_weapons[this_ptr->current_group] != (CWeapon *)0x0) &&
       (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar5 = 8;
      iVar6 = 0x50;
      iVar4 = g_InventoryHeight;
      iVar3 = g_InventoryWidth;
      if ((g_INT_006141bc < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = g_InventoryWidth / 2;
        iVar4 = g_InventoryHeight / 2;
        iVar6 = 0x28;
        iVar5 = 4;
      }
      iVar1 = g_INT_006141bc - iVar6;
      if (this_ptr->weapon_highlight_timer < 1.0) {
        dVar7 = round
                          ((double)(this_ptr->weapon_highlight_timer * 65535.0f));
        local_20 = (int)ROUND(dVar7);
      }
      iVar2 = (local_20 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004dd320
                  (g_INT_006141b8 - iVar4,g_INT_006141bc - iVar4,g_INT_006141b8 + -1,
                   g_INT_006141bc + -1,iVar2);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004dd4e0
                  (g_INT_006141b8 - iVar3,g_INT_006141bc - iVar4,g_INT_006141b8 + -1,
                   g_INT_006141bc + -1,iVar2);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80
                (this_ptr,&this_ptr->selected_weapons[this_ptr->current_group]->base,iVar1 - iVar5,
                 local_38,iVar6,1.5707964,local_20);
    }
    if ((this_ptr->selected_items[this_ptr->current_group] != (CDemonActor *)0x0) &&
       (0.0 < this_ptr->item_highlight_timer)) {
      iVar5 = 0x10;
      iVar6 = 0x40;
      iVar4 = g_InventoryHeight;
      iVar3 = g_InventoryWidth;
      if ((g_INT_006141bc < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = g_InventoryWidth / 2;
        iVar4 = g_InventoryHeight / 2;
        iVar6 = 0x20;
        iVar5 = 8;
      }
      iVar1 = g_INT_006141b8 - iVar6;
      iVar2 = g_INT_006141bc - iVar6;
      if (this_ptr->item_highlight_timer < 1.0) {
        round((double)(this_ptr->item_highlight_timer * 65535.0f));
      }
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004dd320
                  (g_INT_006141b8 - iVar4,g_INT_006141bc - iVar4,g_INT_006141b8 + -1,
                   g_INT_006141bc + -1,0xaaaa);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004dd4e0
                  (g_INT_006141b8 - iVar3,g_INT_006141bc - iVar4,g_INT_006141b8 + -1,
                   g_INT_006141bc + -1,0xaaaa);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004dbd80
                (this_ptr,this_ptr->selected_items[this_ptr->current_group],iVar1 - iVar5,
                 iVar2 - iVar5,iVar6,0.0,0xffff);
    }
  }
  return;
}
