// Name: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
// Address: 00500690
// Address Range: [[00500690, 005013c9]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderAllItems_FUN_00500690(CInventory * this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  int alpha;
  char *pcVar5;
  int iVar6;
  CAlphaBitmap *this_ptr_00;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  CBitFont *pCVar12;
  float fStack_684;
  float local_67c;
  char local_678 [4];
  char acStack_674 [252];
  char local_578 [4];
  char acStack_574 [248];
  char acStack_47c [4];
  char local_478 [256];
  char local_378 [256];
  char local_278 [256];
  char local_178 [4];
  char acStack_174 [4];
  char acStack_170 [244];
  int iStack_7c;
  int local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
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
  
  bVar10 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  if (g_WindowHeight != g_InventoryScreenHeight) {
    core_inv_cpp_loadInventory_FUN_004fd220();
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
  iVar6 = 0x24;
  local_54 = g_InventoryHeight;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_50 = g_InventoryWidth / 2;
    local_54 = g_InventoryHeight / 2;
    iVar6 = 0x12;
    local_58 = 0x28;
    local_48 = 8;
  }
  local_68 = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)(this_ptr->weapon_highlight_timer * 65535f));
    local_6c = (int)ROUND(dVar11);
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->selected_weapon->base_actor,g_CLightGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
    iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base_actor,3);
    if (iVar3 == 0) {
      iVar8 = g_WindowWidth - iVar6;
      iVar6 = g_WindowHeight - iVar6;
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base_actor,"CTommyGun");
      this_ptr_00 = (CAlphaBitmap *)0x0;
      if (iVar3 != 0) {
        this_ptr_00 = &g_TommyClipIconBitmap;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base_actor,"CShotgun");
      if (iVar3 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base_actor,"CElephantGun");
      if (iVar3 != 0) {
        this_ptr_00 = &g_ShotShellIconBitmap;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040c6d0
                        (&this_ptr->selected_weapon->base_actor,"CGun");
      if (iVar3 != 0) {
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
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(this_ptr_00,iVar8,iVar6,local_68);
      }
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_678,"%d");
      }
      else {
        core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base_actor);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_674,"%s %d");
      }
      iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      pCVar12 = (CBitFont *)local_44;
      iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_678);
      iVar6 = (g_WindowHeight - local_48) - iVar6;
      iVar3 = (g_WindowWidth - local_48) - iVar3;
      pcVar7 = local_678;
      goto LAB_00500870;
    }
  }
  else {
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)(pCVar2[4].location.position.y * (float)100));
    local_18 = (CBitFont *)(int)ROUND(dVar11);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_47c,"%d%%",local_18);
    pCVar12 = (CBitFont *)local_44;
    iVar6 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(pCVar12,local_478);
    iVar6 = (g_WindowHeight - local_48) - iVar6;
    iVar3 = (g_WindowWidth - local_48) - iVar3;
    pcVar7 = local_478;
LAB_00500870:
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(pCVar12,pcVar7,iVar3,iVar6,0xf8,0);
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_005009c0;
  iVar6 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                    (this_ptr,&this_ptr->selected_weapon->base_actor,3);
  if (iVar6 == 0) {
    iVar6 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base_actor,0);
    if ((iVar6 == 0) &&
       (iVar6 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                          (this_ptr,&this_ptr->selected_weapon->base_actor,1), iVar6 == 0)) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
      core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
      pcVar7 = "%s\n\n%s";
      goto LAB_005008cd;
    }
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base_actor);
    core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_170,"%s\n\n%s %s");
    pcVar5 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" are loaded.");
    iVar6 = -1;
    pcVar7 = local_178;
    do {
      pcVar9 = pcVar7;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
    pcVar7 = "%s\n\n%s";
LAB_005008cd:
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_174,pcVar7);
  }
  local_28 = (CBitFont *)local_44;
  iVar6 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    ((CBitFont *)local_44,local_178,DAT_02db8c70,10,0x100,local_50 - local_58);
  local_30 = iVar6;
  local_34 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
  iVar3 = (g_WindowHeight - local_54) + local_48;
  local_2c = local_48 + (g_WindowWidth - local_50);
  iVar8 = 0;
  if (0 < iVar6) {
    pcVar7 = DAT_02db8c70;
    do {
      iVar8 = iVar8 + 1;
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(local_28,pcVar7,local_2c,iVar3,0xf8,0);
      pcVar7 = pcVar7 + 0x100;
      iVar3 = iVar3 + local_34;
    } while (iVar8 < local_30);
  }
LAB_005009c0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_5c = 0x70;
    local_4c = 0x10;
    iVar6 = g_InventoryWidth;
    iVar3 = g_InventoryHeight;
    if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar6 = g_InventoryWidth / 2;
      iVar3 = g_InventoryHeight / 2;
      local_5c = 0x28;
      local_4c = 8;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_378,"%d x%3.0f%%",pCVar2[2].location.position.y,
                 (double)pCVar2[2].location.position.z);
      iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_378);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                ((CBitFont *)local_44,local_378,(g_WindowWidth - local_4c) - iVar4,
                 (g_WindowHeight - local_4c) - iVar8,0xf8,0);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_278,"%s");
      iVar8 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_278);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                ((CBitFont *)local_44,local_278,(g_WindowWidth - local_4c) - iVar4,
                 (g_WindowHeight - local_4c) - iVar8,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(this_ptr->selected_item);
      core_inv_cpp_getItemDisplayName_FUN_004fcf00(this_ptr->selected_item);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_574,"%s\n\n%s");
      local_24 = (CBitFont *)local_44;
      local_40 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                           ((CBitFont *)local_44,local_578,DAT_02db9670,10,0x100,iVar6 - local_5c);
      local_14 = local_40;
      local_3c = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar3 = (g_WindowHeight - iVar3) + local_4c;
      local_38 = local_4c + (g_WindowWidth - iVar6);
      iVar6 = 0;
      if (0 < local_14) {
        pcVar7 = DAT_02db9670;
        do {
          iVar6 = iVar6 + 1;
          engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(local_24,pcVar7,local_38,iVar3,0xf8,0);
          pcVar7 = pcVar7 + 0x100;
          iVar3 = iVar3 + local_3c;
        } while (iVar6 < local_40);
      }
    }
  }
  if ((g_CGamePtr->auto_save_blocked != 0) || (g_CGamePtr->block_auto_save != 0)) {
    local_78 = g_WindowHeight + -0x21;
    local_14 = g_WindowHeight + -6;
    iVar4 = 0x10;
    iVar8 = 0x500d05;
    iVar3 = local_14;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)local_14 +
                                (float)(local_78 - local_14) * this_ptr->battery_charge *
                                (float)0.01));
    iVar6 = g_WindowHeight;
    iStack_7c = (int)ROUND(dVar11);
    engine_2d_c_fillRectColor_FUN_00403170(6,iStack_7c,iVar8,iVar4,iVar3);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_BatteryIconBitmap,4,iVar6 + -0x24,0xffff);
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    local_67c = this_ptr->inventory_display_timer;
    if (local_67c < this_ptr->item_highlight_timer) {
      local_67c = this_ptr->item_highlight_timer;
    }
    local_64 = 0xffff;
    if (local_67c < 1.0) {
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)(local_67c * 65535f));
      local_68 = (int)ROUND(dVar11);
    }
    fStack_684 = (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points *
                 (float)0.01;
    if (fStack_684 < 0.0) {
      fStack_684 = 0.0;
    }
    if (1.0 < fStack_684) {
      fStack_684 = 1.0;
    }
    local_18 = (CBitFont *)0x3f;
    iVar6 = 0x1b;
    if (g_WindowHeight < 0x180) {
      local_18 = (CBitFont *)0x1f;
      iVar6 = 0xd;
    }
    local_78 = (g_WindowWidth + -4) - iVar6;
    iVar3 = 0x500e4e;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)(int)local_18 - (float)(int)local_18 * fStack_684));
    local_78 = (int)ROUND(dVar11);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
              (&g_HealthBar1Bitmap,iStack_7c,local_78 + 4,0,local_78,iVar6 + -1,iVar3);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_HealthBar2Bitmap,local_74,4,alpha);
  }
  dVar11 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar11) {
    local_60 = 0xffff;
    if (dVar11 < 1.0) {
      dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11 * 65535);
      local_64 = (int)ROUND(dVar11);
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(local_64);
    local_18 = g_SmallEditorFont;
    iVar6 = g_InventoryHeight;
    if (g_WindowHeight < 0x180) {
      iVar6 = g_InventoryHeight / 2;
      local_18 = g_MicroFont;
    }
    pCVar12 = local_18;
    iVar6 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_18,this_ptr->message_text,DAT_02dba070,10,0x100,
                       (g_WindowWidth - iVar6) + -4);
    local_1c = iVar6;
    local_20 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar12,0x58);
    iVar6 = (g_WindowHeight + -4) - local_20 * iVar6;
    if (((g_MicroFont != local_18) || (g_MessageCount == 0)) && (iVar3 = 0, 0 < local_1c)) {
      pcVar7 = DAT_02dba070;
      do {
        iVar3 = iVar3 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(local_18,pcVar7,4,iVar6,0xf8,0);
        pcVar7 = pcVar7 + 0x100;
        iVar6 = iVar6 + local_20;
      } while (iVar3 < local_1c);
    }
  }
  g_UseExternalRenderer = local_6c;
  return;
}
