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
  int alpha;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar5;
  double dVar6;
  int local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int local_14;
  
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex])) {
    if (g_WindowHeight != g_InventoryScreenHeight) {
      core_inv_cpp_loadInventory_FUN_004fd220();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar1 = 8;
      iVar5 = 0x50;
      iVar4 = g_InventoryHeight;
      iVar3 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = g_InventoryWidth / 2;
        iVar4 = g_InventoryHeight / 2;
        iVar5 = 0x28;
        iVar1 = 4;
      }
      local_2c = (g_WindowHeight - iVar5) - iVar1;
      local_18 = 0xffff;
      if (this_ptr->weapon_highlight_timer < 1.0) {
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)(this_ptr->weapon_highlight_timer * 65535f));
        local_18 = (int)ROUND(dVar6);
        iVar4 = extraout_ECX;
      }
      iVar1 = (local_18 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar4,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar1);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar3,g_WindowHeight - iVar4,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar1);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,&this_ptr->selected_weapon->base_actor,iVar1,local_30,iVar5,0x3fc90fdb,
                 local_1c);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar1 = 0x10;
      iVar5 = 0x40;
      iVar4 = g_InventoryHeight;
      iVar3 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = g_InventoryWidth / 2;
        iVar4 = g_InventoryHeight / 2;
        iVar5 = 0x20;
        iVar1 = 8;
      }
      iVar2 = g_WindowWidth - iVar5;
      local_14 = 0xffff;
      if (this_ptr->item_highlight_timer < 1.0) {
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)(this_ptr->item_highlight_timer * 65535f));
        local_14 = (int)ROUND(dVar6);
        iVar4 = extraout_ECX_00;
      }
      alpha = (local_14 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar4,g_WindowWidth + -1,
                   g_WindowHeight + -1,alpha);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar3,g_WindowHeight - iVar4,g_WindowWidth + -1,
                   g_WindowHeight + -1,alpha);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,this_ptr->selected_item,local_2c,iVar2 - iVar1,iVar5,0,3);
    }
  }
  return;
}
