// Name: core_inv.cpp_CInventory_renderAllItems_FUN_004dda90
// Address: 004dda90
// Address Range: [[004dda90, 004de609]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004dda90(CInventory *this_ptr)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint extraout_ECX;
  uint extraout_EDX;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  CAlphaBitmap *this_ptr_00;
  char *pcVar8;
  int alpha;
  float local_570;
  float local_56c;
  float local_568;
  char local_564 [256];
  char local_464 [256];
  char local_364 [256];
  char local_264 [256];
  char local_164 [256];
  int local_64;
  float local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  CBitFont *local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_20;
  int local_1c;
  CBitFont *local_18;
  int local_14;
  
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    return;
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->message_display_timer = 0.0;
    this_ptr->ammo_detail_timer = 0.0;
    this_ptr->weapon_highlight_timer = 0.0;
  }
  if (DAT_005fba1c != _DAT_01d70a34) {
    core_inv_cpp_loadAssets_FUN_004da570();
  }
  local_58 = _DAT_01c6cee8;
  local_44 = _DAT_01549ab4;
  _DAT_01c6cee8 = 0;
  if ((DAT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = _DAT_01549abc;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_004ddcd0;
  iVar6 = 0x10;
  local_50 = 0x70;
  iVar4 = 0x00000060;
  iVar5 = 0x000000D0;
  if ((DAT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
    iVar5 = 0x000000D0 / 2;
    iVar4 = 0x00000060 / 2;
    iVar6 = 8;
    local_50 = 0x28;
  }
  iVar2 = core_actor_cpp_isOfClass_FUN_0040c790
                    (&this_ptr->selected_weapon->base,"GCHolycross" + 1);
  if (iVar2 == 0) {
    if (this_ptr->selected_weapon->infinite_ammo == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (this_ptr->selected_weapon->carried_by_actor,g_CHeroClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        pcVar8 = &DAT_005c661d;
        goto LAB_004de3dc;
      }
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MANA) {
        _sprintf(local_164,&DAT_005c6617);
      }
      else {
        _sprintf(local_164,&DAT_005c661a);
      }
    }
    else {
      pcVar8 = "infinite";
LAB_004de3dc:
      _sprintf(local_164,pcVar8);
    }
    local_14 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_44,local_164);
    engine_font_cpp_FUN_004b0a20
              (local_44,local_164,(DAT_005fba18 - iVar6) - iVar2,(DAT_005fba1c - iVar6) - local_14,
               0xf8);
  }
  if (this_ptr->render_mode_flag != 0) {
    iVar2 = core_inv_cpp_FUN_004dd310(this_ptr,this_ptr->selected_weapon);
    if (iVar2 == 0) {
      core_inv_cpp_getItemDescription_FUN_004d9eb0(&this_ptr->selected_weapon->base);
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(&this_ptr->selected_weapon->base);
      pcVar8 = "%s\n\n%s";
    }
    else {
      core_inv_cpp_getItemDescription_FUN_004d9eb0(&this_ptr->selected_weapon->base);
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(&this_ptr->selected_weapon->base);
      pcVar8 = "%s\n\n%s";
    }
    _sprintf(local_564,pcVar8);
    local_24 = local_44;
    local_60 = (float)engine_font_cpp_FUN_004b2e40(local_44,local_564,0x1d5be88,10,0x100);
    local_38 = local_60;
    local_34 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
    iVar4 = (DAT_005fba1c - iVar4) + iVar6;
    local_20 = (DAT_005fba18 - iVar5) + iVar6;
    iVar5 = 0;
    if (0 < (int)local_60) {
      iVar6 = 0x1d5be88;
      do {
        iVar5 = iVar5 + 1;
        engine_font_cpp_FUN_004b0a20(local_24,iVar6,local_20,iVar4,0xf8);
        iVar6 = iVar6 + 0x100;
        iVar4 = iVar4 + local_34;
      } while (iVar5 < (int)local_38);
    }
  }
LAB_004ddcd0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    iVar6 = 0x10;
    local_48 = 0x70;
    iVar4 = 0x00000060;
    iVar5 = 0x000000D0;
    if ((DAT_005fba1c < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar5 = 0x000000D0 / 2;
      iVar4 = 0x00000060 / 2;
      iVar6 = 8;
      local_48 = 0x28;
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c840
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      _sprintf(local_364,"%d x%3.0f%%");
      local_60 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
      iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(local_44,local_364);
      engine_font_cpp_FUN_004b0a20
                (local_44,local_364,(DAT_005fba18 - iVar6) - iVar2,
                 (DAT_005fba1c - iVar6) - (int)local_60,0xf8);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemDescription_FUN_004d9eb0(this_ptr->selected_item);
      core_inv_cpp_getItemDisplayName_FUN_004d9e40(this_ptr->selected_item);
      _sprintf(local_264,"%s\n\n%s");
      local_28 = local_44;
      local_60 = (float)engine_font_cpp_FUN_004b2e40(local_44,local_264,0x1d5c888,10,0x100);
      local_3c = local_60;
      local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_44,0x58);
      iVar4 = (DAT_005fba1c - iVar4) + iVar6;
      local_30 = (DAT_005fba18 - iVar5) + iVar6;
      iVar5 = 0;
      if (0 < (int)local_60) {
        iVar6 = 0x1d5c888;
        do {
          iVar5 = iVar5 + 1;
          engine_font_cpp_FUN_004b0a20(local_28,iVar6,local_30,iVar4,0xf8);
          iVar6 = iVar6 + 0x100;
          iVar4 = iVar4 + local_40;
        } while (iVar5 < (int)local_3c);
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
      fVar7 = (float10)local_56c * (float10)_DAT_005c664b;
      round();
      local_4c = (int)ROUND(fVar7);
    }
    local_568 = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538) * (float)_DAT_005c664f;
    if (local_568 < 0.0) {
      local_568 = 0.0;
    }
    if (1.0 < local_568) {
      local_568 = 1.0;
    }
    iVar4 = 0x3f;
    local_5c = 0x30;
    if (DAT_005fba1c < 0x180) {
      iVar4 = 0x1f;
      local_5c = 0x18;
    }
    local_570 = (float)*(int *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20b80) *
                (float)_DAT_005c664f;
    iVar5 = (DAT_005fba18 + -4) - local_5c;
    if (local_570 < 0.0) {
      local_570 = 0.0;
    }
    if (1.0 < local_570) {
      local_570 = 1.0;
    }
    local_5c = local_5c + -1;
    local_60 = (float)iVar4;
    fVar7 = (float10)iVar4 - (float10)iVar4 * (float10)local_570;
    local_14 = iVar4;
    local_14 = round(iVar4);
    local_64 = (int)ROUND(fVar7);
    engine_alphabit_cpp_FUN_0040d8a0
              (&CAlphaBitmap_01d708b8,iVar5,local_64 + 4,0,local_64,extraout_ECX);
    fVar7 = (float10)local_60 - (float10)local_60 * (float10)local_568;
    round(iVar4);
    local_64 = (int)ROUND(fVar7);
    engine_alphabit_cpp_FUN_0040d8a0
              (&CAlphaBitmap_01d70890,iVar5,local_64 + 4,0,local_64,extraout_EDX);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d708a4,iVar5,4,local_14);
    if (g_CGamePtr->show_hero_numbers != 0) {
      iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if ((0x3f800000 < *(int *)(iVar6 + 0x2538)) || (*(float *)(iVar6 + 0x2538) <= 0.0)) {
        fVar7 = (float10)*(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2538);
        round();
        local_14 = (int)ROUND(fVar7);
        _sprintf(local_464,&DAT_005c6640);
      }
      else {
        _sprintf(local_464,&DAT_005c6643);
      }
      engine_font_cpp_FUN_004b0a20(local_44,local_464,iVar5,iVar4 + -6,0xf9);
      _sprintf(local_464,&DAT_005c6645);
      engine_font_cpp_FUN_004b0a20(local_44,local_464,iVar5 + 0x1c,iVar4 + -6,0xfc);
    }
  }
  fVar1 = this_ptr->message_display_timer;
  if (0.0 < fVar1) {
    local_54 = 0xffff;
    if (fVar1 < 1.0) {
      fVar7 = (float10)fVar1 * (float10)_DAT_005c6657;
      round();
      local_54 = (int)ROUND(fVar7);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bf0(local_54);
    local_18 = _DAT_01549ab4;
    if (DAT_005fba1c < 0x180) {
      local_18 = _DAT_01549abc;
    }
    iVar4 = engine_font_cpp_FUN_004b2e40(local_18,this_ptr->message_text,0x1d5d288,10,0x100);
    local_1c = iVar4;
    local_2c = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(local_18,0x58);
    iVar4 = (DAT_005fba1c + -4) - local_2c * iVar4;
    if (((_DAT_01549abc != local_18) || (_DAT_01dd4890 == 0)) && (iVar5 = 0, 0 < local_1c)) {
      iVar6 = 0x1d5d288;
      do {
        iVar5 = iVar5 + 1;
        engine_font_cpp_FUN_004b0a20(local_18,iVar6,4,iVar4,0xf8);
        iVar6 = iVar6 + 0x100;
        iVar4 = iVar4 + local_2c;
      } while (iVar5 < local_1c);
    }
  }
  if (((this_ptr->show_sps != 0) && (g_CFieldNotesPtr->is_displayed == 0)) &&
     (g_CGamePtr->letterbox_mode == 0)) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d708cc,2,2,0xffff);
    iVar4 = _DAT_01d70a20;
    if (_DAT_01d70a20 == -1) {
      alpha = 0xffff;
      iVar2 = 2;
      iVar6 = 2;
      this_ptr_00 = CAlphaBitmap_ARRAY_01d708e0;
    }
    else {
      alpha = 0xffff;
      iVar2 = 2;
      iVar6 = 2;
      iVar5 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
      this_ptr_00 = CAlphaBitmap_ARRAY_01d708e0 + iVar4 * 4 + iVar5;
    }
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(this_ptr_00,iVar6,iVar2,alpha);
  }
  _DAT_01c6cee8 = local_58;
  return;
}
