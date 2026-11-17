// Name: core_inv.cpp_CInventory_renderAllItems_FUN_004dda90
// Address: 004dda90
// Address Range: [[004dda90, 004de609]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)

{
  float right_x;
  int iVar1;
  CDemonActor *pCVar2;
  int iVar3;
  CBitFont *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  CAlphaBitmap *this_ptr_00;
  int bottom_y;
  char *pcVar9;
  float fStack_574;
  float local_570;
  float local_56c;
  char local_564 [240];
  char acStack_474 [4];
  char acStack_470 [268];
  char local_364 [256];
  char local_264 [256];
  char local_164 [244];
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  float local_64;
  int local_60;
  int local_58;
  CBitFont *local_50;
  uint local_4c;
  int local_48;
  CBitFont *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]) {
    return;
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->message_display_timer = 0.0;
    this_ptr->ammo_detail_timer = 0.0;
    this_ptr->weapon_highlight_timer = 0.0;
  }
  if (g_INT_005fba1c != g_InventoryScreenHeight) {
    core_inv_cpp_loadAssets_FUN_004da570();
  }
  local_58 = g_INT_01c6cee8;
  local_44 = g_SmallEditorFont;
  g_INT_01c6cee8 = 0;
  if ((g_INT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = g_MicroFont;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_004ddcd0;
  iVar7 = 0x10;
  local_50 = (CBitFont *)0x70;
  iVar5 = g_InventoryHeight;
  iVar6 = g_InventoryWidth;
  if ((g_INT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
    iVar6 = g_InventoryWidth / 2;
    iVar5 = g_InventoryHeight / 2;
    iVar7 = 8;
    local_50 = (CBitFont *)0x28;
  }
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c790
                    (&this_ptr->selected_weapon->base,"CHolycross");
  if (iVar1 == 0) {
    if (this_ptr->selected_weapon->infinite_ammo == 0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (this_ptr->selected_weapon->carried_by_actor,g_CHeroClassInfo.name_hash);
      if (pCVar2 == (CDemonActor *)0x0) {
        pcVar9 = &DAT_005c661d;
        goto LAB_004de3dc;
      }
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MANA) {
        _sprintf(local_164,"%d");
      }
      else {
        _sprintf(local_164,"%d");
      }
    }
    else {
      pcVar9 = "infinite";
LAB_004de3dc:
      _sprintf(local_164,pcVar9);
    }
    local_14 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_44,local_164);
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (local_44,local_164,(g_INT_005fba18 - iVar7) - iVar1,
               (g_INT_005fba1c - iVar7) - local_14,0xf8,0);
  }
  if (this_ptr->render_mode_flag != 0) {
    iVar1 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd310
                      (this_ptr,&this_ptr->selected_weapon->base,1);
    if (iVar1 == 0) {
      core_inv_cpp_getItemDescription_FUN_004d9eb0(&this_ptr->selected_weapon->base);
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(&this_ptr->selected_weapon->base);
      pcVar9 = "%s\n\n%s";
    }
    else {
      core_inv_cpp_getItemDescription_FUN_004d9eb0(&this_ptr->selected_weapon->base);
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(&this_ptr->selected_weapon->base);
      pcVar9 = "%s\n\n%s";
    }
    _sprintf(local_564,pcVar9);
    local_24 = local_44;
    local_60 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004b2e40
                         (local_44,local_564,&g_CHAR_01d5be88,10,0x100,iVar6 - (int)local_50);
    local_38 = local_60;
    local_34 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
    iVar5 = (g_INT_005fba1c - iVar5) + iVar7;
    local_20 = (g_INT_005fba18 - iVar6) + iVar7;
    iVar6 = 0;
    if (0 < local_60) {
      pcVar9 = &g_CHAR_01d5be88;
      do {
        iVar6 = iVar6 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004b0a20(local_24,pcVar9,local_20,iVar5,0xf8,0);
        pcVar9 = pcVar9 + 0x100;
        iVar5 = iVar5 + local_34;
      } while (iVar6 < local_38);
    }
  }
LAB_004ddcd0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    iVar7 = 0x10;
    local_48 = 0x70;
    iVar5 = g_InventoryHeight;
    iVar6 = g_InventoryWidth;
    if ((g_INT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar6 = g_InventoryWidth / 2;
      iVar5 = g_InventoryHeight / 2;
      iVar7 = 8;
      local_48 = 0x28;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      _sprintf(local_364,"%d x%3.0f%%");
      local_60 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
      iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_44,local_364);
      engine_font_cpp_CBitFont_drawText_FUN_004b0a20
                (local_44,local_364,(g_INT_005fba18 - iVar7) - iVar1,
                 (g_INT_005fba1c - iVar7) - local_60,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemDescription_FUN_004d9eb0(this_ptr->selected_item);
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(this_ptr->selected_item);
      _sprintf(local_264,"%s\n\n%s");
      local_28 = local_44;
      local_60 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004b2e40
                           (local_44,local_264,&g_CHAR_01d5c888,10,0x100,iVar6 - local_48);
      local_3c = local_60;
      local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
      iVar5 = (g_INT_005fba1c - iVar5) + iVar7;
      local_30 = (g_INT_005fba18 - iVar6) + iVar7;
      iVar6 = 0;
      if (0 < local_60) {
        pcVar9 = &g_CHAR_01d5c888;
        do {
          iVar6 = iVar6 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_004b0a20(local_28,pcVar9,local_30,iVar5,0xf8,0);
          pcVar9 = pcVar9 + 0x100;
          iVar5 = iVar5 + local_40;
        } while (iVar6 < local_3c);
      }
    }
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    local_56c = this_ptr->inventory_display_timer;
    if (local_56c < this_ptr->item_highlight_timer) {
      local_56c = this_ptr->item_highlight_timer;
    }
    local_4c = 0xffff;
    if (local_56c < 1.0) {
      dVar8 = round((double)(local_56c * 65535.0f));
      local_50 = (CBitFont *)(int)ROUND(dVar8);
    }
    iVar6 = 0x3f;
    iVar5 = 0x30;
    if (g_INT_005fba1c < 0x180) {
      iVar6 = 0x1f;
      iVar5 = 0x18;
    }
    fStack_574 = (float)g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->mana * (float)0.01;
    iVar7 = (g_INT_005fba18 + -4) - iVar5;
    if (fStack_574 < 0.0) {
      fStack_574 = 0.0;
    }
    if (1.0 < fStack_574) {
      fStack_574 = 1.0;
    }
    iVar3 = (int)local_50 / 2;
    local_64 = (float)iVar6;
    bottom_y = 0x4de062;
    iVar1 = iVar6;
    local_60 = iVar5 + -1;
    local_18 = iVar6;
    dVar8 = round((double)(local_64 - local_64 * fStack_574));
    iStack_6c = (int)ROUND(dVar8);
    local_1c = iVar3;
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d8a0
              (&CAlphaBitmap_01d708b8,iVar7,iStack_6c + 4,0,iStack_6c,iVar5 + -1,bottom_y,iVar1);
    right_x = local_64;
    iVar1 = 0x4de0b4;
    iVar5 = iVar6;
    dVar8 = round((double)(fStack_68 - fStack_68 * local_570));
    iStack_70 = (int)ROUND(dVar8);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d8a0
              (&CAlphaBitmap_01d70890,iVar7,iStack_70 + 4,0,iStack_70,(int)right_x,iVar1,iVar5);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d708a4,iVar7,4,local_20);
    if (g_CGamePtr->show_hero_numbers != 0) {
      if ((0x3f800000 < (int)(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).hit_points) ||
         ((g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).hit_points <= 0.0)) {
        dVar8 = round
                          ((double)(g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->base).hit_points);
        local_24 = (CBitFont *)(int)ROUND(dVar8);
        _sprintf(acStack_474,"%d");
      }
      else {
        _sprintf(acStack_470,"1");
      }
      engine_font_cpp_CBitFont_drawText_FUN_004b0a20(local_50,acStack_470,iVar7,iVar6 + -6,0xf9,0);
      _sprintf(acStack_470,"%d");
      engine_font_cpp_CBitFont_drawText_FUN_004b0a20
                (local_50,acStack_470,iVar7 + 0x1c,iVar6 + -6,0xfc,0);
    }
  }
  dVar8 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar8) {
    local_60 = 0xffff;
    if (dVar8 < 1.0) {
      dVar8 = round(dVar8 * 65535);
      local_64 = (float)(int)ROUND(dVar8);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(local_60);
    local_24 = g_SmallEditorFont;
    iVar5 = g_InventoryHeight;
    if (g_INT_005fba1c < 0x180) {
      iVar5 = g_InventoryHeight / 2;
      local_24 = g_MicroFont;
    }
    pCVar4 = (CBitFont *)
             engine_font_cpp_CBitFont_wrapTextToLines_FUN_004b2e40
                       (local_24,this_ptr->message_text,&g_CHAR_01d5d288,10,0x100,
                        (g_INT_005fba18 - iVar5) + -4);
    local_28 = pCVar4;
    local_38 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_24,0x58);
    iVar5 = (g_INT_005fba1c + -4) - local_38 * (int)pCVar4;
    if (((g_MicroFont != local_24) || (g_UseOSFonts == 0)) && (iVar6 = 0, 0 < (int)local_28)) {
      pcVar9 = &g_CHAR_01d5d288;
      do {
        iVar6 = iVar6 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004b0a20(local_24,pcVar9,4,iVar5,0xf8,0);
        pcVar9 = pcVar9 + 0x100;
        iVar5 = iVar5 + local_38;
      } while (iVar6 < (int)local_28);
    }
  }
  if (((this_ptr->show_sps != 0) && (g_CFieldNotesPtr->is_displayed == 0)) &&
     (g_CGamePtr->letterbox_mode == 0)) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d708cc,2,2,0xffff);
    iVar5 = g_INT_01d70a20;
    if (g_INT_01d70a20 == -1) {
      iVar3 = 0xffff;
      iVar1 = 2;
      iVar7 = 2;
      this_ptr_00 = CAlphaBitmap_ARRAY_01d708e0;
    }
    else {
      iVar3 = 0xffff;
      iVar1 = 2;
      iVar7 = 2;
      iVar6 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      this_ptr_00 = CAlphaBitmap_ARRAY_01d708e0 + iVar5 * 4 + iVar6;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(this_ptr_00,iVar7,iVar1,iVar3);
  }
  g_INT_01c6cee8 = (int)local_64;
  return;
}
