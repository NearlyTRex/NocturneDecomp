// Name: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
// Address: 00500690
// Address Range: [[00500690, 005013c9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory *this_ptr)

{
  double dVar1;
  char cVar2;
  CDemonActor *pCVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  CAlphaBitmap *this_ptr_00;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  CBitFont *pCVar12;
  ulonglong uVar13;
  float local_680;
  float local_67c;
  char local_678 [256];
  char local_578 [256];
  char local_478 [256];
  char local_378 [256];
  char local_278 [256];
  char local_178 [256];
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CBitFont *local_28;
  CBitFont *local_24;
  int local_20;
  int local_1c;
  CBitFont *local_18;
  int local_14;
  
  bVar11 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  if (g_WindowHeight != g_InventoryScreenHeight) {
    core_inv_cpp_loadAssets_FUN_004fd220();
  }
  local_6c = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_44 = (int)g_SmallEditorFont;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = (int)g_MicroFont;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_005009c0;
  local_50 = g_InventoryWidth;
  local_48 = 0x10;
  local_58 = 0x70;
  iVar8 = 0x24;
  local_54 = g_InventoryHeight;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_50 = g_InventoryWidth / 2;
    local_54 = g_InventoryHeight / 2;
    iVar8 = 0x12;
    local_58 = 0x28;
    local_48 = 8;
  }
  local_68 = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    local_68 = (int)ROUND(ROUND(this_ptr->weapon_highlight_timer * 65535.0f));
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->selected_weapon->base,g_CLightGunClassInfo.name_hash);
  if (pCVar3 == (CDemonActor *)0x0) {
    iVar4 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base,3);
    if (iVar4 == 0) {
      iVar9 = g_WindowWidth - iVar8;
      iVar8 = g_WindowHeight - iVar8;
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CTommyGun");
      this_ptr_00 = (CAlphaBitmap *)0x0;
      if (iVar4 != 0) {
        this_ptr_00 = &g_TommyClipIconBitmap;
      }
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CShotgun");
      if (iVar4 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CElephantGun");
      if (iVar4 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar4 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base,"CGun");
      if (iVar4 != 0) {
        if (this_ptr->selected_weapon->ammo_type == 0) {
          this_ptr_00 = &g_BulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 3) {
          this_ptr_00 = &g_LithiumIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 7) {
          this_ptr_00 = &g_MercuryBulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 8) {
          this_ptr_00 = &g_SilverBulletIconBitmap;
        }
        if (this_ptr->selected_weapon->ammo_type == 1) {
          this_ptr_00 = &g_HolyBulletIconBitmap;
        }
      }
      if (this_ptr_00 != (CAlphaBitmap *)0x0) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(this_ptr_00,iVar9,iVar8,local_68);
      }
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        _sprintf(local_678,"%d");
      }
      else {
        pcVar5 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base);
        _sprintf(local_678,"%s %d",pcVar5);
      }
      iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      pCVar12 = (CBitFont *)local_44;
      iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_678);
      iVar8 = (g_WindowHeight - local_48) - iVar8;
      iVar4 = (g_WindowWidth - local_48) - iVar4;
      pcVar5 = local_678;
      goto LAB_00500870;
    }
  }
  else {
    local_14 = (int)ROUND(ROUND(pCVar3[4].location.position.y * (float)100));
    _sprintf(local_478,"%d%%");
    pCVar12 = (CBitFont *)local_44;
    iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(pCVar12,local_478);
    iVar8 = (g_WindowHeight - local_48) - iVar8;
    iVar4 = (g_WindowWidth - local_48) - iVar4;
    pcVar5 = local_478;
LAB_00500870:
    engine_font_cpp_CBitFont_drawText_FUN_004cda80(pCVar12,pcVar5,iVar4,iVar8,0xf8,0);
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_005009c0;
  iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                    (this_ptr,&this_ptr->selected_weapon->base,3);
  if (iVar8 == 0) {
    iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base,0);
    if ((iVar8 == 0) &&
       (iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                          (this_ptr,&this_ptr->selected_weapon->base,1), iVar8 == 0)) {
      pcVar5 = core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base);
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base);
      uVar13 = CONCAT44(pcVar5,pcVar6);
      pcVar5 = "%s\n\n%s";
      goto LAB_005008cd;
    }
    pcVar5 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base);
    pcVar6 = core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base);
    uVar13 = CONCAT44(pcVar5,pcVar6);
    pcVar5 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base);
    _sprintf(local_178,"%s\n\n%s %s",pcVar5,uVar13);
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" are loaded.");
    iVar8 = -1;
    pcVar5 = local_178;
    do {
      pcVar10 = pcVar5;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar5 + (uint)bVar11 * -2 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
  }
  else {
    pcVar5 = core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base);
    pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base);
    uVar13 = CONCAT44(pcVar5,pcVar6);
    pcVar5 = "%s\n\n%s";
LAB_005008cd:
    _sprintf(local_178,pcVar5,uVar13);
  }
  local_28 = (CBitFont *)local_44;
  iVar8 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    ((CBitFont *)local_44,local_178,CHAR_ARRAY_02db8c70,10,0x100,local_50 - local_58
                    );
  local_30 = iVar8;
  local_34 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
  iVar4 = (g_WindowHeight - local_54) + local_48;
  local_2c = local_48 + (g_WindowWidth - local_50);
  iVar9 = 0;
  if (0 < iVar8) {
    pcVar5 = CHAR_ARRAY_02db8c70;
    do {
      iVar9 = iVar9 + 1;
      engine_font_cpp_CBitFont_drawText_FUN_004cda80(local_28,pcVar5,local_2c,iVar4,0xf8,0);
      pcVar5 = pcVar5 + 0x100;
      iVar4 = iVar4 + local_34;
    } while (iVar9 < local_30);
  }
LAB_005009c0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_5c = 0x70;
    local_4c = 0x10;
    iVar8 = g_InventoryWidth;
    iVar4 = g_InventoryHeight;
    if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar8 = g_InventoryWidth / 2;
      iVar4 = g_InventoryHeight / 2;
      local_5c = 0x28;
      local_4c = 8;
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      _sprintf
                (local_378,"%d x%3.0f%%",pCVar3[2].location.position.y,
                 (double)pCVar3[2].location.position.z);
      iVar9 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_378);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                ((CBitFont *)local_44,local_378,(g_WindowWidth - local_4c) - iVar7,
                 (g_WindowHeight - local_4c) - iVar9,0xf8,0);
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar3);
      _sprintf(local_278,"%s");
      iVar9 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_278);
      engine_font_cpp_CBitFont_drawText_FUN_004cda80
                ((CBitFont *)local_44,local_278,(g_WindowWidth - local_4c) - iVar7,
                 (g_WindowHeight - local_4c) - iVar9,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(this_ptr->selected_item);
      pcVar5 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(this_ptr->selected_item);
      _sprintf(local_578,"%s\n\n%s",pcVar5);
      local_24 = (CBitFont *)local_44;
      local_40 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                           ((CBitFont *)local_44,local_578,DAT_02db9670,10,0x100,iVar8 - local_5c);
      local_14 = local_40;
      local_3c = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar4 = (g_WindowHeight - iVar4) + local_4c;
      local_38 = local_4c + (g_WindowWidth - iVar8);
      iVar8 = 0;
      if (0 < local_14) {
        pcVar5 = DAT_02db9670;
        do {
          iVar8 = iVar8 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_004cda80(local_24,pcVar5,local_38,iVar4,0xf8,0);
          pcVar5 = pcVar5 + 0x100;
          iVar4 = iVar4 + local_3c;
        } while (iVar8 < local_40);
      }
    }
  }
  iVar8 = g_WindowHeight;
  if ((g_CGamePtr->auto_save_blocked != 0) || (g_CGamePtr->block_auto_save != 0)) {
    local_14 = g_WindowHeight + -6;
    local_78 = (int)ROUND(ROUND((float)local_14 +
                                (float)((g_WindowHeight + -0x21) - local_14) *
                                this_ptr->battery_charge * (float)0.01));
    engine_2d_c_fillRectColor_FUN_00403170(6,local_78,0x10,local_14,2);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_BatteryIconBitmap,4,iVar8 + -0x24,0xffff);
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    local_67c = this_ptr->inventory_display_timer;
    if (local_67c < this_ptr->item_highlight_timer) {
      local_67c = this_ptr->item_highlight_timer;
    }
    local_64 = 0xffff;
    if (local_67c < 1.0) {
      local_64 = (int)ROUND(ROUND(local_67c * 65535.0f));
    }
    local_680 = (g_HeroActors[g_LocalHeroIndex]->base).hit_points * (float)0.01;
    if (local_680 < 0.0) {
      local_680 = 0.0;
    }
    if (1.0 < local_680) {
      local_680 = 1.0;
    }
    local_14 = 0x3f;
    iVar8 = 0x1b;
    if (g_WindowHeight < 0x180) {
      local_14 = 0x1f;
      iVar8 = 0xd;
    }
    local_74 = (g_WindowWidth + -4) - iVar8;
    iVar4 = local_64 / 2;
    local_70 = (int)ROUND(ROUND((float)local_14 - (float)local_14 * local_680));
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
              (&g_HealthBar1Bitmap,local_74,local_70 + 4,0,local_70,iVar8 + -1,local_14);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_HealthBar2Bitmap,local_74,4,iVar4);
  }
  dVar1 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar1) {
    local_60 = 0xffff;
    if (dVar1 < 1.0) {
      local_60 = (int)ROUND(ROUND(dVar1 * 65535));
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(local_60);
    local_18 = g_SmallEditorFont;
    iVar8 = g_InventoryHeight;
    if (g_WindowHeight < 0x180) {
      iVar8 = g_InventoryHeight / 2;
      local_18 = g_MicroFont;
    }
    pCVar12 = local_18;
    iVar8 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_18,this_ptr->message_text,CHAR_ARRAY_02dba070,10,0x100,
                       (g_WindowWidth - iVar8) + -4);
    local_1c = iVar8;
    local_20 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar12,0x58);
    iVar8 = (g_WindowHeight + -4) - local_20 * iVar8;
    if (((g_MicroFont != local_18) || (g_MessageCount == 0)) && (iVar4 = 0, 0 < local_1c)) {
      pcVar5 = CHAR_ARRAY_02dba070;
      do {
        iVar4 = iVar4 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004cda80(local_18,pcVar5,4,iVar8,0xf8,0);
        pcVar5 = pcVar5 + 0x100;
        iVar8 = iVar8 + local_20;
      } while (iVar4 < local_1c);
    }
  }
  g_UseExternalRenderer = local_6c;
  return;
}
