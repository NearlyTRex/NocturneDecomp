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
  int iVar5;
  int alpha;
  char *pcVar6;
  int iVar7;
  byte *puVar8;
  CAlphaBitmap *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  CBitFont *unaff_EDI;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  CBitFont *pCVar12;
  char *in_stack_fffff970;
  char *pcVar13;
  float fVar14;
  char acStack_658 [4];
  char acStack_654 [220];
  char local_578 [20];
  char acStack_564 [240];
  char acStack_474 [4];
  char acStack_470 [248];
  char local_378 [4];
  char acStack_374 [4];
  char acStack_370 [252];
  char acStack_274 [4];
  char acStack_270 [8];
  char acStack_268 [244];
  char acStack_174 [28];
  char acStack_158 [4];
  char acStack_154 [224];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  int local_44;
  CBitFont *local_40;
  CBitFont *local_3c;
  CBitFont *local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  int local_28;
  CBitFont *local_24;
  byte *local_20;
  CBitFont *local_1c;
  CBitFont *local_18;
  CBitFont *local_14;
  
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
  local_60 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_38 = g_SmallEditorFont;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_38 = g_MicroFont;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_005009c0;
  local_44 = g_InventoryWidth;
  local_3c = (CBitFont *)&DAT_00000010;
  local_4c = 0x70;
  iVar7 = 0x24;
  local_48 = g_InventoryHeight;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = g_InventoryWidth / 2;
    local_48 = g_InventoryHeight / 2;
    iVar7 = 0x12;
    local_4c = 0x28;
    local_3c = (CBitFont *)&DAT_00000008;
  }
  local_5c = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)(this_ptr->weapon_highlight_timer * 65535f));
    local_64 = (int)ROUND(dVar11);
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->selected_weapon->base_actor,g_CLightGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
    in_stack_fffff970 = (char *)0x501070;
    iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base_actor,3);
    if (iVar3 == 0) {
      iVar4 = g_WindowWidth - iVar7;
      iVar7 = g_WindowHeight - iVar7;
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
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(this_ptr_00,iVar4,iVar7,local_4c);
      }
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_658,"%d");
      }
      else {
        core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base_actor);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_654,"%s %d");
      }
      iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      pCVar12 = local_40;
      iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_40,&stack0xfffff98c);
      iVar7 = (g_WindowHeight - (int)local_40) - iVar7;
      in_stack_fffff970 = (char *)((g_WindowWidth - (int)local_40) - iVar3);
      pcVar13 = &stack0xfffff990;
      goto LAB_00500870;
    }
  }
  else {
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)(pCVar2[4].location.position.y * (float)100));
    unaff_EBP = (int)ROUND(dVar11);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_474,"%d%%",unaff_EBP);
    pCVar12 = (CBitFont *)local_44;
    iVar7 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(pCVar12,acStack_474);
    iVar7 = (g_WindowHeight - (int)local_40) - iVar7;
    in_stack_fffff970 = (char *)((g_WindowWidth - (int)local_40) - iVar3);
    pcVar13 = acStack_470;
LAB_00500870:
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
              (pCVar12,pcVar13,(int)in_stack_fffff970,iVar7,0xf8,0);
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_005009c0;
  iVar7 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                    (this_ptr,&this_ptr->selected_weapon->base_actor,3);
  if (iVar7 == 0) {
    iVar7 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base_actor,0);
    if ((iVar7 == 0) &&
       (iVar7 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                          (this_ptr,&this_ptr->selected_weapon->base_actor,1), iVar7 == 0)) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
      core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
      pcVar13 = "%s\n\n%s";
      goto LAB_005008cd;
    }
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base_actor);
    core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_154,"%s\n\n%s %s");
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" are loaded.");
    iVar7 = -1;
    pcVar13 = acStack_174;
    do {
      pcVar9 = pcVar13;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar9 = pcVar13 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar9;
    } while (cVar1 != '\0');
    pcVar9 = pcVar9 + -1;
    do {
      cVar1 = *pcVar6;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
    pcVar13 = "%s\n\n%s";
LAB_005008cd:
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_158,pcVar13);
  }
  local_24 = local_40;
  in_stack_fffff970 = (char *)0xa;
  iVar7 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (local_40,acStack_174,DAT_02db8c70,10,0x100,local_4c - local_54);
  local_28 = iVar7;
  local_28 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_3c,0x58);
  puVar8 = (byte *)((g_WindowHeight - local_48) + (int)local_3c);
  local_20 = (byte *)((int)local_3c + (g_WindowWidth - local_44));
  iVar3 = 0;
  if (0 < iVar7) {
    pcVar13 = DAT_02db8c70;
    do {
      iVar3 = iVar3 + 1;
      in_stack_fffff970 = pcVar13;
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (local_1c,pcVar13,(int)local_20,(int)puVar8,0xf8,0);
      pcVar13 = pcVar13 + 0x100;
      puVar8 = puVar8 + local_28;
    } while (iVar3 < (int)local_24);
  }
LAB_005009c0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_50 = 0x70;
    local_40 = (CBitFont *)&DAT_00000010;
    iVar7 = g_InventoryWidth;
    iVar3 = g_InventoryHeight;
    if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar7 = g_InventoryWidth / 2;
      iVar3 = g_InventoryHeight / 2;
      local_50 = 0x28;
      local_40 = (CBitFont *)&DAT_00000008;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_370,"%d x%3.0f%%",pCVar2[2].location.position.y,
                 (double)pCVar2[2].location.position.z);
      iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_44,local_378);
      in_stack_fffff970 = (char *)((g_WindowHeight - local_48) - iVar4);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (local_40,acStack_374,(g_WindowWidth - local_48) - iVar5,(int)in_stack_fffff970,0xf8
                 ,0);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      pcVar13 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_268,"%s",pcVar13);
      iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_40,acStack_274);
      in_stack_fffff970 = (char *)((g_WindowWidth - local_44) - iVar5);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (local_3c,acStack_270,(int)in_stack_fffff970,(g_WindowHeight - local_44) - iVar4,
                 0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(this_ptr->selected_item);
      pcVar13 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(this_ptr->selected_item);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_564,"%s\n\n%s",pcVar13);
      local_24 = (CBitFont *)local_44;
      in_stack_fffff970 = (char *)0x100;
      unaff_EDI = (CBitFont *)
                  engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                            ((CBitFont *)local_44,local_578,DAT_02db9670,10,0x100,iVar7 - local_5c);
      local_38 = unaff_EDI;
      local_30 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_3c,0x58);
      puVar8 = (byte *)((g_WindowHeight - iVar3) + (int)local_40);
      local_2c = (byte *)((int)local_40 + (g_WindowWidth - iVar7));
      iVar7 = 0;
      if (0 < unaff_ESI) {
        pcVar13 = DAT_02db9670;
        do {
          iVar7 = iVar7 + 1;
          in_stack_fffff970 = pcVar13;
          engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                    (local_18,pcVar13,(int)local_2c,(int)puVar8,0xf8,0);
          pcVar13 = pcVar13 + 0x100;
          puVar8 = puVar8 + local_30;
        } while (iVar7 < local_34);
      }
    }
  }
  if ((g_CGamePtr->auto_save_blocked != 0) || (g_CGamePtr->block_auto_save != 0)) {
    local_6c = g_WindowHeight + -0x21;
    iVar4 = 0x10;
    iVar3 = 0x500d05;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)((float)(g_WindowHeight + -6) +
                                (float)(local_6c - (g_WindowHeight + -6)) * this_ptr->battery_charge
                                * (float)0.01));
    iVar7 = g_WindowHeight;
    local_74 = (int)ROUND(dVar11);
    engine_2d_c_fillRectColor_FUN_00403170(6,local_74,(int)in_stack_fffff970,iVar3,iVar4);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_BatteryIconBitmap,4,iVar7 + -0x24,0xffff);
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    fVar14 = this_ptr->inventory_display_timer;
    if (fVar14 < this_ptr->item_highlight_timer) {
      fVar14 = this_ptr->item_highlight_timer;
    }
    local_58 = 0xffff;
    if (fVar14 < 1.0) {
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar14 * 65535f));
      local_58 = (int)ROUND(dVar11);
    }
    fVar14 = (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points * (float)0.01;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    if (1.0 < fVar14) {
      fVar14 = 1.0;
    }
    iVar7 = 0x3f;
    iVar3 = 0x1b;
    if (g_WindowHeight < 0x180) {
      iVar7 = 0x1f;
      iVar3 = 0xd;
    }
    local_68 = (g_WindowWidth + -4) - iVar3;
    iVar4 = 0x500e4e;
    dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float)iVar7 - (float)iVar7 * fVar14));
    local_6c = (int)ROUND(dVar11);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
              (&g_HealthBar1Bitmap,local_70,local_6c + 4,0,local_6c,iVar3 + -1,iVar4);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_HealthBar2Bitmap,local_6c,4,alpha);
  }
  dVar11 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar11) {
    local_54 = 0xffff;
    if (dVar11 < 1.0) {
      dVar11 = crt_math_c_round_FUN_005fe6b0(dVar11 * 65535);
      local_54 = (int)ROUND(dVar11);
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80(local_54);
    local_14 = g_SmallEditorFont;
    iVar7 = g_InventoryHeight;
    if (g_WindowHeight < 0x180) {
      iVar7 = g_InventoryHeight / 2;
      local_14 = g_MicroFont;
    }
    pCVar12 = local_14;
    iVar7 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_14,this_ptr->message_text,DAT_02dba070,10,0x100,
                       (g_WindowWidth - iVar7) + -4);
    local_14 = (CBitFont *)iVar7;
    local_14 = (CBitFont *)engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar12,0x58);
    iVar7 = (g_WindowHeight + -4) - (int)local_14 * iVar7;
    if (((g_MicroFont != unaff_EDI) || (g_MessageCount == 0)) && (iVar3 = 0, 0 < unaff_EBP)) {
      pcVar13 = DAT_02dba070;
      do {
        iVar3 = iVar3 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(unaff_EDI,pcVar13,4,iVar7,0xf8,0);
        pcVar13 = pcVar13 + 0x100;
        iVar7 = iVar7 + (int)local_14;
      } while (iVar3 < unaff_EBP);
    }
  }
  g_UseExternalRenderer = local_60;
  return;
}
