// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_004c2150
// Address: 004c2150
// Address Range: [[004c2150, 004c2468]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004c2150(CInventory *this_ptr)

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
  
  if ((g_CGame_PTR_005b9354->letterbox_mode == 0) &&
     (this_ptr->owner == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8))) {
    if (g_WindowHeight != _DAT_01cc30a0) {
      iStack_40 = 0x4c23d6;
      core_inv_cpp_loadAssets_FUN_004befa0();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar6 = 0x50;
      iVar5 = INT_005bab64;
      iVar4 = INT_005bab60;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = INT_005bab60 / 2;
        iVar5 = INT_005bab64 / 2;
        iVar6 = 0x28;
      }
      if (this_ptr->weapon_highlight_timer < 1.0) {
        iStack_40 = 0x4c222a;
        dVar7 = round
                          ((double)(this_ptr->weapon_highlight_timer * 65535.0f));
        local_20 = (int)ROUND(dVar7);
      }
      iVar1 = (local_20 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar1);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004c1f90
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar1);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40
                (this_ptr,&this_ptr->selected_weapon->base,iStack_40,local_34,iVar6,1.5707964,
                 local_20);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar6 = 0x10;
      iVar1 = 0x40;
      iVar5 = INT_005bab64;
      iVar4 = INT_005bab60;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = INT_005bab60 / 2;
        iVar5 = INT_005bab64 / 2;
        iVar1 = 0x20;
        iVar6 = 8;
      }
      iVar2 = g_WindowWidth - iVar1;
      iVar3 = g_WindowHeight - iVar1;
      if (this_ptr->item_highlight_timer < 1.0) {
        round((double)(this_ptr->item_highlight_timer * 65535.0f));
      }
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_004c1dd0
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,0xaaaa);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_004c1f90
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,0xaaaa);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004c0b40
                (this_ptr,this_ptr->selected_item,iVar2 - iVar6,iVar3 - iVar6,iVar1,0.0,0xffff);
    }
  }
  return;
}
