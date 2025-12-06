// Name: core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370
// Address: 00500370
// Address Range: [[00500370, 00500688]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory * this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_00500370(CInventory *this_ptr)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int alpha;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar6;
  float10 fVar7;
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
      iVar2 = 8;
      iVar6 = 0x50;
      iVar5 = g_InventoryHeight;
      iVar4 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_InventoryWidth / 2;
        iVar5 = g_InventoryHeight / 2;
        iVar6 = 0x28;
        iVar2 = 4;
      }
      fVar1 = this_ptr->weapon_highlight_timer;
      local_2c = (g_WindowHeight - iVar6) - iVar2;
      local_18 = 0xffff;
      if (1.0 >= fVar1 && (fVar1 == 1.0) == 0) {
        fVar7 = (float10)this_ptr->weapon_highlight_timer * (float10)65535f;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44 /* combine 2-byte values */(local_2c,(uint)(ushort)((ushort)(1.0 < fVar1) << 8 |
                                                            (ushort)NAN(fVar1) << 10 |
                                                           (ushort)(fVar1 == 1.0) << 0xe)));
        local_18 = (int)ROUND(fVar7);
        iVar5 = extraout_ECX;
      }
      iVar2 = (local_18 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar2);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,iVar2);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,&this_ptr->selected_weapon->base_actor,iVar2,local_30,iVar6,0x3fc90fdb,
                 local_1c);
    }
    if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
      iVar2 = 0x10;
      iVar6 = 0x40;
      iVar5 = g_InventoryHeight;
      iVar4 = g_InventoryWidth;
      if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
        iVar4 = g_InventoryWidth / 2;
        iVar5 = g_InventoryHeight / 2;
        iVar6 = 0x20;
        iVar2 = 8;
      }
      iVar3 = g_WindowWidth - iVar6;
      fVar1 = this_ptr->item_highlight_timer;
      local_14 = 0xffff;
      if (1.0 >= fVar1 && (fVar1 == 1.0) == 0) {
        fVar7 = (float10)this_ptr->item_highlight_timer * (float10)65535f;
        crt_math_c_round_FUN_005fe6b0
                  ((double)CONCAT44 /* combine 2-byte values */(0xffff,CONCAT22 /* combine 2-byte values */((short)((uint)((g_WindowHeight - iVar6) - iVar2)
                                                           >> 0x10),
                                                    (ushort)(1.0 < fVar1) << 8 |
                                                    (ushort)NAN(fVar1) << 10 |
                                                    (ushort)(fVar1 == 1.0) << 0xe)));
        local_14 = (int)ROUND(fVar7);
        iVar5 = extraout_ECX_00;
      }
      alpha = (local_14 * 2) / 3;
      if (this_ptr->render_mode_flag == 0) {
        core_inv_cpp_drawWeaponIconBackground_FUN_00500050
                  (g_WindowWidth - iVar5,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,alpha);
      }
      else {
        core_inv_cpp_drawItemIconBackground_FUN_005001e0
                  (g_WindowWidth - iVar4,g_WindowHeight - iVar5,g_WindowWidth + -1,
                   g_WindowHeight + -1,alpha);
      }
      core_inv_cpp_CInventory_renderItemModel_FUN_004fee00
                (this_ptr,this_ptr->selected_item,local_2c,iVar3 - iVar2,iVar6,0,3);
    }
  }
  return;
}
