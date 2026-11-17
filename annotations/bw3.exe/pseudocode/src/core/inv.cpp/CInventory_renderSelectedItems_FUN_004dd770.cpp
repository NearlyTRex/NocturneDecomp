// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd770
// Address: 004dd770
// Address Range: [[004dd770, 004dda88]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd770(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd770(CInventory *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  int iStack_40;
  int local_34;
  int local_20;
  
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14])) {
    if (g_INT_005fba1c != g_INT_01d70a34) {
      iStack_40 = 0x4dd9f6;
      core_inv_cpp_loadAssets_FUN_004da570();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar6 = 0x50;
      iVar5 = g_INT_00600184;
      iVar4 = g_INT_00600180;
      if ((g_INT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_INT_00600180 / 2;
        iVar5 = g_INT_00600184 / 2;
        iVar6 = 0x28;
      }
      if (this_ptr->weapon_highlight_timer < 1.0) {
        iStack_40 = 0x4dd84a;
        dVar7 = round
                          ((double)(this_ptr->weapon_highlight_timer * 65535.0f));
        local_20 = (int)ROUND(dVar7);
      }
      iVar1 = (local_20 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004dd3f0
                  (g_INT_005fba18 - iVar5,g_INT_005fba1c - iVar5,g_INT_005fba18 + -1,
                   g_INT_005fba1c + -1,iVar1);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004dd5b0
                  (g_INT_005fba18 - iVar4,g_INT_005fba1c - iVar5,g_INT_005fba18 + -1,
                   g_INT_005fba1c + -1,iVar1);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004dbe70
                (this_ptr,&this_ptr->selected_weapon->base,iStack_40,local_34,iVar6,1.5707964,
                 local_20);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar6 = 0x10;
      iVar1 = 0x40;
      iVar5 = g_INT_00600184;
      iVar4 = g_INT_00600180;
      if ((g_INT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_INT_00600180 / 2;
        iVar5 = g_INT_00600184 / 2;
        iVar1 = 0x20;
        iVar6 = 8;
      }
      iVar2 = g_INT_005fba18 - iVar1;
      iVar3 = g_INT_005fba1c - iVar1;
      if (this_ptr->item_highlight_timer < 1.0) {
        round((double)(this_ptr->item_highlight_timer * 65535.0f));
      }
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004dd3f0
                  (g_INT_005fba18 - iVar5,g_INT_005fba1c - iVar5,g_INT_005fba18 + -1,
                   g_INT_005fba1c + -1,0xaaaa);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004dd5b0
                  (g_INT_005fba18 - iVar4,g_INT_005fba1c - iVar5,g_INT_005fba18 + -1,
                   g_INT_005fba1c + -1,0xaaaa);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004dbe70
                (this_ptr,this_ptr->selected_item,iVar2 - iVar6,iVar3 - iVar6,iVar1,0.0,0xffff);
    }
  }
  return;
}
