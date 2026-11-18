// Name: core_inv.cpp_CInventory_renderAllItems_FUN_004c2470
// Address: 004c2470
// Address Range: [[004c2470, 004c31a9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004c2470(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004c2470(CInventory *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  CAlphaBitmap *this_ptr_00;
  char (*pacVar8) [256];
  char *pcVar9;
  byte bVar10;
  double dVar11;
  CBitFont *pCVar12;
  int iVar13;
  uint uVar16;
  longlong lVar14;
  ulonglong uVar15;
  float fStack_684;
  float local_680;
  char local_67c [256];
  char acStack_57c [252];
  char acStack_480 [260];
  char acStack_37c [256];
  char acStack_27c [256];
  char acStack_17c [252];
  int iStack_80;
  int iStack_7c;
  int local_78;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  CBitFont *local_4c;
  CBitFont *local_48;
  CBitFont *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CBitFont *local_2c;
  CBitFont *local_28;
  int local_24;
  int local_20;
  CBitFont *local_1c;
  CBitFont *local_18;
  
  bVar10 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  if (g_WindowHeight != g_InventoryScreenHeight) {
    core_inv_cpp_loadAssets_FUN_004befa0();
  }
  local_6c = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_44 = g_SmallEditorFont;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = g_MicroFont;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_004c27a0;
  local_50 = g_InventoryWidth;
  local_48 = (CBitFont *)0x10;
  local_58 = 0x70;
  iVar7 = 0x24;
  local_54 = g_InventoryHeight;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_50 = g_InventoryWidth / 2;
    local_54 = g_InventoryHeight / 2;
    iVar7 = 0x12;
    local_58 = 0x28;
    local_48 = (CBitFont *)&DAT_00000008;
  }
  local_68 = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    dVar11 = round
                       ((double)(this_ptr->weapon_highlight_timer * 65535.0f));
    local_6c = (int)ROUND(dVar11);
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (&this_ptr->selected_weapon->base,g_CLightGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
    iVar13 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
                       (this_ptr,&this_ptr->selected_weapon->base,3);
    if (iVar13 == 0) {
      iVar3 = g_WindowWidth - iVar7;
      iVar7 = g_WindowHeight - iVar7;
      iVar13 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CTommyGun");
      this_ptr_00 = (CAlphaBitmap *)0x0;
      if (iVar13 != 0) {
        this_ptr_00 = &g_TommyClipIconBitmap;
      }
      iVar13 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CShotgun");
      if (iVar13 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar13 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CElephantGun");
      if (iVar13 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar13 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CGun");
      if (iVar13 != 0) {
        if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_GENERIC) {
          this_ptr_00 = &g_BulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_SILVER) {
          this_ptr_00 = &g_LithiumIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_LITHIUM) {
          this_ptr_00 = &g_MercuryBulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MERCURY) {
          this_ptr_00 = &g_SilverBulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_HOLY) {
          this_ptr_00 = &g_HolyBulletIconBitmap;
        }
      }
      if (this_ptr_00 != (CAlphaBitmap *)0x0) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(this_ptr_00,iVar3,iVar7,local_6c);
      }
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        _sprintf(local_67c,"%d");
      }
      else {
        pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->ammo_ptr->base);
        _sprintf(local_67c,"%s %d",pcVar6);
      }
      iVar13 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      pCVar12 = local_48;
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,local_67c);
      lVar14 = 0xf8;
      iVar13 = (g_WindowHeight - (int)local_4c) - iVar13;
      iVar7 = (g_WindowWidth - (int)local_4c) - iVar7;
      pcVar6 = local_67c;
      goto LAB_004c2650;
    }
  }
  else {
    uVar16 = 0x4c25da;
    dVar11 = round
                       ((double)(pCVar2[4].orient_matrix.m[0].x * (float)100));
    local_1c = (CBitFont *)(int)ROUND(dVar11);
    _sprintf(acStack_480,"%d%%",local_1c);
    pCVar12 = local_4c;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_4c,0x58);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(pCVar12,acStack_480);
    lVar14 = (ulonglong)uVar16 << 0x20;
    iVar13 = 0xf8;
    iVar7 = (g_WindowHeight - local_50) - iVar7;
    pcVar6 = (char *)((g_WindowWidth - local_50) - iVar3);
    pCVar12 = (CBitFont *)acStack_480;
LAB_004c2650:
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (pCVar12,pcVar6,iVar7,iVar13,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_004c27a0;
  iVar7 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
                    (this_ptr,&this_ptr->selected_weapon->base,3);
  if (iVar7 == 0) {
    iVar7 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
                      (this_ptr,&this_ptr->selected_weapon->base,0);
    if ((iVar7 == 0) &&
       (iVar7 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
                          (this_ptr,&this_ptr->selected_weapon->base,1), iVar7 == 0)) {
      pcVar6 = core_inv_cpp_getItemDescription_FUN_004bed10(&this_ptr->selected_weapon->base);
      pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->selected_weapon->base);
      uVar15 = CONCAT44(pcVar6,pcVar4);
      pcVar6 = "%s\n\n%s";
      goto LAB_004c26ad;
    }
    pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->ammo_ptr->base);
    pcVar4 = core_inv_cpp_getItemDescription_FUN_004bed10(&this_ptr->selected_weapon->base);
    uVar15 = CONCAT44(pcVar6,pcVar4);
    pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->selected_weapon->base);
    _sprintf(acStack_17c,"%s\n\n%s %s",pcVar6,uVar15);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(" are loaded.");
    iVar7 = -1;
    pcVar6 = acStack_17c;
    do {
      pcVar9 = pcVar6;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar6 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  else {
    pcVar6 = core_inv_cpp_getItemDescription_FUN_004bed10(&this_ptr->selected_weapon->base);
    pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->selected_weapon->base);
    uVar15 = CONCAT44(pcVar6,pcVar4);
    pcVar6 = "%s\n\n%s";
LAB_004c26ad:
    _sprintf(acStack_17c,pcVar6,uVar15);
  }
  local_2c = local_48;
  iVar7 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                    (local_48,acStack_17c,g_InventoryWrappedTextLines[0],10,0x100,
                     local_54 - local_5c);
  local_34 = iVar7;
  local_38 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
  iVar13 = (g_WindowHeight - local_58) + (int)local_4c;
  local_30 = (int)local_4c + (g_WindowWidth - local_54);
  iVar3 = 0;
  if (0 < iVar7) {
    pacVar8 = g_InventoryWrappedTextLines;
    do {
      iVar3 = iVar3 + 1;
      engine_font_cpp_CBitFont_drawText_FUN_00490980(local_2c,*pacVar8,local_30,iVar13,0xf8,0);
      pacVar8 = pacVar8 + 1;
      iVar13 = iVar13 + local_38;
    } while (iVar3 < local_34);
  }
LAB_004c27a0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_60 = 0x70;
    local_50 = 0x10;
    iVar7 = g_InventoryWidth;
    iVar13 = g_InventoryHeight;
    if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar7 = g_InventoryWidth / 2;
      iVar13 = g_InventoryHeight / 2;
      local_60 = 0x28;
      local_50 = 8;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      _sprintf(acStack_37c,"%d x%3.0f%%",pCVar2[2].location.area_id,
                 (double)pCVar2[2].orient.vec.x);
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,acStack_37c);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (local_48,acStack_37c,(g_WindowWidth - local_50) - iVar5,
                 (g_WindowHeight - local_50) - iVar3,0xf8,0);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      core_inv_cpp_getItemDisplayName_FUN_004beca0(pCVar2);
      _sprintf(acStack_27c,"%s");
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,acStack_27c);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (local_48,acStack_27c,(g_WindowWidth - local_50) - iVar5,
                 (g_WindowHeight - local_50) - iVar3,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemDescription_FUN_004bed10(this_ptr->selected_item);
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(this_ptr->selected_item);
      _sprintf(acStack_57c,"%s\n\n%s",pcVar6);
      local_28 = local_48;
      local_44 = (CBitFont *)
                 engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                           (local_48,acStack_57c,g_InventoryWrappedTextLines2[0],10,0x100,
                            iVar7 - local_60);
      local_18 = local_44;
      local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar13 = (g_WindowHeight - iVar13) + local_50;
      local_3c = local_50 + (g_WindowWidth - iVar7);
      iVar7 = 0;
      if (0 < (int)local_18) {
        pacVar8 = g_InventoryWrappedTextLines2;
        do {
          iVar7 = iVar7 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_00490980(local_28,*pacVar8,local_3c,iVar13,0xf8,0);
          pacVar8 = pacVar8 + 1;
          iVar13 = iVar13 + local_40;
        } while (iVar7 < (int)local_44);
      }
    }
  }
  if ((g_CGamePtr->flashlight_active != 0) || (g_CGamePtr->goggles_active != 0)) {
    iStack_7c = g_WindowHeight + -0x21;
    local_18 = (CBitFont *)(g_WindowHeight + -6);
    iVar3 = 0x10;
    iVar13 = 0x4c2ae5;
    pCVar12 = local_18;
    dVar11 = round
                       ((double)((float)(int)local_18 +
                                (float)(iStack_7c - (int)local_18) * this_ptr->battery_charge *
                                (float)0.01));
    iVar7 = g_WindowHeight;
    iStack_80 = (int)ROUND(dVar11);
    engine_2d_c_fillRectColor_FUN_00403e60(6,iStack_80,iVar13,iVar3,(int)pCVar12);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
              (&g_BatteryIconBitmap,4,iVar7 + -0x24,0xffff);
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    local_680 = this_ptr->inventory_display_timer;
    if (local_680 < this_ptr->item_highlight_timer) {
      local_680 = this_ptr->item_highlight_timer;
    }
    local_68 = 0xffff;
    if (local_680 < 1.0) {
      dVar11 = round((double)(local_680 * 65535.0f));
      local_6c = (int)ROUND(dVar11);
    }
    fStack_684 = (g_HeroActors[g_LocalHeroIndex]->base).hit_points * (float)0.01;
    if (fStack_684 < 0.0) {
      fStack_684 = 0.0;
    }
    if (1.0 < fStack_684) {
      fStack_684 = 1.0;
    }
    local_18 = (CBitFont *)0x3f;
    iVar7 = 0x1b;
    if (g_WindowHeight < 0x180) {
      local_18 = (CBitFont *)0x1f;
      iVar7 = 0xd;
    }
    local_78 = (g_WindowWidth + -4) - iVar7;
    iVar13 = local_68 / 2;
    iVar3 = 0x4c2c2e;
    pCVar12 = local_18;
    dVar11 = round
                       ((double)((float)(int)local_18 - (float)(int)local_18 * fStack_684));
    local_78 = (int)ROUND(dVar11);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0
              (&g_HealthBar1Bitmap,iStack_7c,local_78 + 4,0,local_78,iVar7 + -1,iVar3,(int)pCVar12);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&g_HealthBar2Bitmap,iStack_7c,4,iVar13);
  }
  dVar11 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar11) {
    local_64 = 0xffff;
    if (dVar11 < 1.0) {
      dVar11 = round(dVar11 * 65535);
      local_68 = (int)ROUND(dVar11);
    }
    engine_3d_c_setRenderAlpha_FUN_00408370(local_64);
    local_1c = g_SmallEditorFont;
    iVar7 = g_InventoryHeight;
    if (g_WindowHeight < 0x180) {
      iVar7 = g_InventoryHeight / 2;
      local_1c = g_MicroFont;
    }
    pCVar12 = local_1c;
    iVar7 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (local_1c,this_ptr->message_text,g_InventoryWrappedTextLines3[0],10,0x100,
                       (g_WindowWidth - iVar7) + -4);
    local_20 = iVar7;
    local_24 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(pCVar12,0x58);
    iVar7 = (g_WindowHeight + -4) - local_24 * iVar7;
    if (((g_MicroFont != local_1c) || (g_UseOSFonts == 0)) && (iVar13 = 0, 0 < local_20)) {
      pacVar8 = g_InventoryWrappedTextLines3;
      do {
        iVar13 = iVar13 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_00490980(local_1c,*pacVar8,4,iVar7,0xf8,0);
        pacVar8 = pacVar8 + 1;
        iVar7 = iVar7 + local_24;
      } while (iVar13 < local_20);
    }
  }
  g_UseExternalRenderer = local_70;
  return;
}
