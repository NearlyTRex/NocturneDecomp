// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
// Address: 00500370
// MANUAL RECONSTRUCTION
// Address Range: [[00500370, 00500688]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar8;
  int iVar9;
  int alpha;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar10;
  int iVar7;
  int iVar11;
  int local_1c;
  int local_18;
  int icon_w;
  int icon_h;

#if NOCTURNE_AUTHENTIC_HUD_ICON_SPACE
  icon_w = g_WindowWidth;
  icon_h = g_WindowHeight;
#else
  icon_w = g_CDemonCameraInstance.framebuffer_width;
  icon_h = g_CDemonCameraInstance.framebuffer_height;
#endif
  if ((g_CGamePtr->letterbox_mode == 0) &&
     ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex])) {
    if (g_WindowHeight != g_InventoryScreenHeight) {
      core_inv_cpp_loadAssets_FUN_004fd220();
    }
    if ((this_ptr->selected_weapon != (CWeapon *)0x0) && (0.0 < this_ptr->weapon_highlight_timer)) {
      iVar1 = 8;
      iVar7 = 0x50;
      iVar10 = g_InventoryHeight;
      iVar11 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar11 = g_InventoryWidth / 2;
        iVar10 = g_InventoryHeight / 2;
        iVar7 = 0x28;
        iVar1 = 4;
      }
      iVar5 = icon_w - iVar7;
      iVar6 = icon_h - iVar7;
      local_1c = 0xffff;
      if (this_ptr->weapon_highlight_timer < 1.0) {
        local_1c = (int)ROUND(ROUND(this_ptr->weapon_highlight_timer * 65535.0f));
      }
      iVar2 = (local_1c * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (icon_w - iVar10,icon_h - iVar10,icon_w + -1,icon_h + -1,iVar2);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (icon_w - iVar11,icon_h - iVar10,icon_w + -1,icon_h + -1,iVar2);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,&this_ptr->selected_weapon->base,iVar5 - iVar1,iVar6 - iVar1,iVar7,
                 1.5707964,local_1c);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar10 = 0x10;
      iVar11 = 0x40;
      iVar4 = g_InventoryHeight;
      iVar3 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar3 = g_InventoryWidth / 2;
        iVar4 = g_InventoryHeight / 2;
        iVar11 = 0x20;
        iVar10 = 8;
      }
      iVar8 = icon_w - iVar11;
      iVar9 = icon_h - iVar11;
      local_18 = 0xffff;
      if (this_ptr->item_highlight_timer < 1.0) {
        local_18 = (int)ROUND(ROUND(this_ptr->item_highlight_timer * 65535.0f));
      }
      alpha = (local_18 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (icon_w - iVar4,icon_h - iVar4,icon_w + -1,icon_h + -1,alpha);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (icon_w - iVar3,icon_h - iVar4,icon_w + -1,icon_h + -1,alpha);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,this_ptr->selected_item,iVar8 - iVar10,iVar9 - iVar10,iVar11,0.0,local_18)
      ;
    }
  }
  return;
}
