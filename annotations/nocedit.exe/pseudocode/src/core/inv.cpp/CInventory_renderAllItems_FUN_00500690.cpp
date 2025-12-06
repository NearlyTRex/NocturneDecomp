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
  char *pcVar4;
  uint extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int extraout_EDX_03;
  int extraout_EDX_04;
  int extraout_EDX_05;
  int extraout_EDX_06;
  int extraout_EDX_07;
  int iVar5;
  int iVar6;
  CAlphaBitmap *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  float10 fVar10;
  double dVar11;
  char *pcVar12;
  char *in_stack_fffff968;
  int in_stack_fffff96c;
  float fVar13;
  CBitFont *pCVar14;
  char acStack_660 [4];
  char acStack_65c [8];
  char acStack_654 [4];
  char acStack_650 [208];
  char acStack_580 [4];
  char acStack_57c [288];
  char acStack_45c [8];
  char acStack_454 [4];
  char acStack_450 [180];
  char acStack_39c [8];
  char acStack_394 [4];
  char acStack_390 [268];
  char acStack_284 [8];
  char acStack_27c [4];
  char local_278 [240];
  char acStack_188 [4];
  char acStack_184 [8];
  char acStack_17c [256];
  int iStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_68;
  CBitFont *local_64;
  CBitFont *local_60;
  CBitFont *local_5c;
  uint local_58;
  int local_54;
  int local_50;
  CBitFont *local_4c;
  int local_48;
  int local_44;
  CBitFont *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CBitFont *local_24;
  CBitFont *local_20;
  CBitFont *local_1c;
  int local_18;
  CBitFont *local_14;
  
  bVar9 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  iVar3 = g_LocalHeroIndex;
  if (g_WindowHeight != g_InventoryScreenHeight) {
    core_inv_cpp_loadInventory_FUN_004fd220();
    iVar3 = extraout_EDX_06;
  }
  local_68 = g_UseExternalRenderer;
  g_UseExternalRenderer = 0;
  local_40 = g_SmallEditorFont;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_40 = g_MicroFont;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_005009c0;
  local_4c = (CBitFont *)g_InventoryWidth;
  local_44 = 0x10;
  local_54 = 0x70;
  iVar5 = 0x24;
  local_50 = g_InventoryHeight;
  if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_4c = (CBitFont *)(g_InventoryWidth / 2);
    iVar3 = g_InventoryHeight >> 0x1f;
    local_50 = g_InventoryHeight / 2;
    iVar5 = 0x12;
    local_54 = 0x28;
    local_44 = 8;
  }
  local_64 = (CBitFont *)0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    fVar10 = (float10)this_ptr->weapon_highlight_timer * (float10)65535f;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar3,this_ptr));
    local_64 = (CBitFont *)(int)ROUND(fVar10);
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->selected_weapon->base_actor,g_CLightGunClassInfo.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
    in_stack_fffff968 = (char *)0x501070;
    iVar6 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base_actor,3);
    iVar3 = extraout_EDX_07;
    if (iVar6 == 0) {
      iVar6 = g_WindowWidth - iVar5;
      iVar5 = g_WindowHeight - iVar5;
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
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(this_ptr_00,iVar6,iVar5,local_54);
      }
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_660,"%d",this_ptr->selected_weapon->ammo_count);
      }
      else {
        pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base_actor);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_65c,"%s %d",pcVar4);
      }
      iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_24,0x58);
      pCVar14 = local_20;
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_20,acStack_654);
      iVar3 = (g_WindowHeight - (int)local_20) - iVar3;
      iVar5 = (g_WindowWidth - (int)local_20) - iVar5;
      pcVar4 = acStack_650;
      goto LAB_00500870;
    }
  }
  else {
    fVar10 = (float10)pCVar2[4].location.position.y * (float10)100;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,pCVar2));
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_45c,"%d%%",(int)ROUND(fVar10));
    pCVar14 = local_24;
    iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_24,0x58);
    iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(pCVar14,acStack_454);
    iVar3 = (g_WindowHeight - (int)local_20) - iVar3;
    iVar5 = (g_WindowWidth - (int)local_20) - iVar5;
    pcVar4 = acStack_450;
LAB_00500870:
    engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(pCVar14,pcVar4,iVar5,iVar3,0xf8,0);
    iVar3 = extraout_EDX_00;
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_005009c0;
  iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                    (this_ptr,&this_ptr->selected_weapon->base_actor,3);
  if (iVar3 == 0) {
    iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                      (this_ptr,&this_ptr->selected_weapon->base_actor,0);
    if ((iVar3 == 0) &&
       (iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                          (this_ptr,&this_ptr->selected_weapon->base_actor,1), iVar3 == 0)) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
      pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
      pcVar12 = "%s\n\n%s";
      goto LAB_005008cd;
    }
    core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->ammo_ptr->base_actor);
    core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
    pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_184,"%s\n\n%s %s",pcVar4);
    pcVar12 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(" are loaded.");
    iVar3 = -1;
    pcVar4 = acStack_17c;
    do {
      pcVar8 = pcVar4;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar8 = pcVar4 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar12;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_inv_cpp_getItemIconName_FUN_004fcf70(&this_ptr->selected_weapon->base_actor);
    pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(&this_ptr->selected_weapon->base_actor);
    pcVar12 = "%s\n\n%s";
LAB_005008cd:
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_188,pcVar12,pcVar4);
  }
  local_2c = local_48;
  in_stack_fffff968 = (char *)0xa;
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    ((CBitFont *)local_48,acStack_17c,DAT_02db8c70,10,0x100,local_54 - (int)local_5c
                    );
  in_stack_fffff96c = 0x500938;
  local_30 = iVar5;
  local_30 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
  iVar6 = (g_WindowHeight - local_50) + local_44;
  iVar3 = local_44 + (g_WindowWidth - (int)local_4c);
  iVar7 = 0;
  local_28 = iVar3;
  if (0 < iVar5) {
    pcVar4 = DAT_02db8c70;
    do {
      iVar7 = iVar7 + 1;
      in_stack_fffff968 = pcVar4;
      in_stack_fffff96c = local_28;
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(local_24,pcVar4,local_28,iVar6,0xf8,0);
      pcVar4 = pcVar4 + 0x100;
      iVar6 = iVar6 + local_30;
      iVar3 = extraout_EDX_01;
    } while (iVar7 < local_2c);
  }
LAB_005009c0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_58 = 0x70;
    local_48 = 0x10;
    iVar5 = g_InventoryWidth;
    iVar6 = g_InventoryHeight;
    if ((g_WindowHeight < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar5 = g_InventoryWidth / 2;
      iVar6 = g_InventoryHeight / 2;
      local_58 = 0x28;
      local_48 = 8;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_39c,"%d x%3.0f%%",pCVar2[2].location.position.y,
                 (double)pCVar2[2].location.position.z);
      iVar3 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_64,0x58);
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(local_60,acStack_394);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                (local_5c,acStack_390,(g_WindowWidth - (int)local_64) - iVar7,
                 (g_WindowHeight - (int)local_64) - iVar3,0xf8,0);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    iVar3 = extraout_EDX_02;
    if (pCVar2 != (CDemonActor *)0x0) {
      pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(pCVar2);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_284,"%s",pcVar4);
      in_stack_fffff96c = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(local_4c,0x58);
      iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80((CBitFont *)local_48,acStack_27c);
      in_stack_fffff96c = (g_WindowHeight - (int)local_4c) - in_stack_fffff96c;
      in_stack_fffff968 = (char *)((g_WindowWidth - (int)local_4c) - iVar3);
      engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80
                ((CBitFont *)local_44,local_278,(int)in_stack_fffff968,in_stack_fffff96c,0xf8,0);
      iVar3 = extraout_EDX_03;
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemIconName_FUN_004fcf70(this_ptr->selected_item);
      pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004fcf00(this_ptr->selected_item);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_580,"%s\n\n%s",pcVar4);
      local_28 = local_48;
      in_stack_fffff968 = (char *)0xa;
      local_40 = (CBitFont *)
                 engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                           ((CBitFont *)local_48,acStack_57c,DAT_02db9670,10,0x100,
                            iVar5 - (int)local_60);
      in_stack_fffff96c = 0x500c20;
      local_14 = local_40;
      local_38 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0((CBitFont *)local_44,0x58);
      iVar6 = (g_WindowHeight - iVar6) + local_48;
      local_34 = local_48 + (g_WindowWidth - iVar5);
      iVar5 = 0;
      iVar3 = unaff_EBP;
      if (0 < unaff_EBP) {
        pcVar4 = DAT_02db9670;
        do {
          iVar5 = iVar5 + 1;
          in_stack_fffff968 = pcVar4;
          in_stack_fffff96c = local_34;
          engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(local_20,pcVar4,local_34,iVar6,0xf8,0);
          pcVar4 = pcVar4 + 0x100;
          iVar6 = iVar6 + local_38;
          iVar3 = local_38;
        } while (iVar5 < local_3c);
      }
    }
  }
  if ((g_CGamePtr->auto_save_blocked != 0) || (g_CGamePtr->block_auto_save != 0)) {
    local_74 = g_WindowHeight + -0x21;
    iVar3 = g_WindowHeight + -6;
    fVar10 = (float10)iVar3 +
             (float10)(local_74 - iVar3) * (float10)this_ptr->battery_charge *
             (float10)0.01;
    iVar6 = 0x10;
    iVar5 = 0x500d05;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(this_ptr,iVar3));
    iVar3 = g_WindowHeight;
    iStack_7c = (int)ROUND(fVar10);
    engine_2d_c_fillRectColor_FUN_00403170(6,iStack_7c,(int)in_stack_fffff968,iVar5,iVar6);
    in_stack_fffff96c = 4;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_BatteryIconBitmap,4,iVar3 + -0x24,0xffff);
    iVar3 = extraout_EDX_04;
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    fVar13 = this_ptr->inventory_display_timer;
    if (fVar13 < this_ptr->item_highlight_timer) {
      fVar13 = this_ptr->item_highlight_timer;
    }
    local_60 = (CBitFont *)0xffff;
    if (1.0 >= fVar13 && (fVar13 == 1.0) == 0) {
      fVar10 = (float10)fVar13 * (float10)65535f;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44 /* combine 2-byte values */(iVar3,(uint)(ushort)((ushort)(1.0 < fVar13) << 8 |
                                                       (ushort)NAN(fVar13) << 10 |
                                                      (ushort)(fVar13 == 1.0) << 0xe)));
      local_60 = (CBitFont *)(int)ROUND(fVar10);
    }
    fVar13 = (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points * (float)0.01;
    if (fVar13 < 0.0) {
      fVar13 = 0.0;
    }
    if (1.0 < fVar13) {
      fVar13 = 1.0;
    }
    iVar3 = 0x3f;
    iVar5 = 0x1b;
    if (g_WindowHeight < 0x180) {
      iVar3 = 0x1f;
      iVar5 = 0xd;
    }
    local_70 = (g_WindowWidth + -4) - iVar5;
    fVar10 = (float10)iVar3 - (float10)iVar3 * (float10)fVar13;
    dVar11 = crt_math_c_round_FUN_005fe6b0
                       ((double)CONCAT44 /* combine 2-byte values */((int)local_60 >> 0x1f,(int)local_60 / 2));
    local_74 = (int)ROUND(fVar10);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
              (&g_HealthBar1Bitmap,local_78,local_74 + 4,0,local_74,iVar5 + -1,in_stack_fffff96c);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_HealthBar2Bitmap,local_74,4,SUB84 /* extract 2-byte value */(dVar11,0));
    iVar3 = extraout_EDX_05;
  }
  fVar13 = this_ptr->message_display_timer;
  if (0.0 < fVar13) {
    local_5c = (CBitFont *)0xffff;
    if (1.0 >= fVar13 && (fVar13 == 1.0) == 0) {
      fVar10 = (float10)fVar13 * (float10)65535;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44 /* combine 2-byte values */(iVar3,CONCAT22 /* combine 2-byte values */((short)((uint)this_ptr >> 0x10),
                                                 (ushort)(1.0 < fVar13) << 8 |
                                                 (ushort)NAN(fVar13) << 10 |
                                                 (ushort)(fVar13 == 1.0) << 0xe)));
      local_5c = (CBitFont *)(int)ROUND(fVar10);
    }
    engine_3d_c_setRenderAlpha_FUN_00406d80((int)local_5c);
    local_1c = g_SmallEditorFont;
    iVar3 = g_InventoryHeight;
    if (g_WindowHeight < 0x180) {
      iVar3 = g_InventoryHeight / 2;
      local_1c = g_MicroFont;
    }
    pCVar14 = local_1c;
    iVar3 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                      (local_1c,this_ptr->message_text,DAT_02dba070,10,0x100,
                       (g_WindowWidth - iVar3) + -4);
    local_1c = (CBitFont *)iVar3;
    local_1c = (CBitFont *)engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(pCVar14,0x58);
    iVar3 = (g_WindowHeight + -4) - (int)local_1c * iVar3;
    if (((g_MicroFont != local_14) || (g_MessageCount == 0)) && (iVar5 = 0, 0 < local_18)) {
      pcVar4 = DAT_02dba070;
      do {
        iVar5 = iVar5 + 1;
        engine_font_cpp_CBitFont_drawTextLeft_FUN_004cda80(local_14,pcVar4,4,iVar3,0xf8,0);
        pcVar4 = pcVar4 + 0x100;
        iVar3 = iVar3 + (int)local_1c;
      } while (iVar5 < local_18);
    }
  }
  g_UseExternalRenderer = local_68;
  return;
}
