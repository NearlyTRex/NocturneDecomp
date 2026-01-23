// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
// Address: 00500370
// Address Range: [[00500370, 00500688]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory * this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory *this_ptr)

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
     ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex])) {
    if (g_WindowHeight != g_InventoryScreenHeight) {
      iStack_40 = 0x5005f6;
      core_inv_cpp_loadInventory_FUN_004fd220();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar6 = 0x50;
      iVar5 = g_InventoryHeight;
      iVar4 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_InventoryWidth / 2;
        iVar5 = g_InventoryHeight / 2;
        iVar6 = 0x28;
      }
      if (this_ptr->weapon_highlight_timer < 1.0) {
        iStack_40 = 0x50044a;
        dVar7 = crt_math_c_round_FUN_005fe6b0
                          ((double)(this_ptr->weapon_highlight_timer * 65535.0f));
        local_20 = (int)ROUND(dVar7);
      }
      iVar1 = (local_20 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar1);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar1);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,&this_ptr->selected_weapon->base_actor,iStack_40,local_34,iVar6,0x3fc90fdb
                 ,local_20);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar6 = 0x10;
      iVar1 = 0x40;
      iVar5 = g_InventoryHeight;
      iVar4 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_InventoryWidth / 2;
        iVar5 = g_InventoryHeight / 2;
        iVar1 = 0x20;
        iVar6 = 8;
      }
      iVar2 = g_WindowWidth - iVar1;
      iVar3 = g_WindowHeight - iVar1;
      if (this_ptr->item_highlight_timer < 1.0) {
        crt_math_c_round_FUN_005fe6b0((double)(this_ptr->item_highlight_timer * 65535.0f));
      }
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,0xaaaa);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,0xaaaa);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,this_ptr->selected_item,iVar2 - iVar6,iVar3 - iVar6,iVar1,0,0xffff);
    }
  }
  return;
}
