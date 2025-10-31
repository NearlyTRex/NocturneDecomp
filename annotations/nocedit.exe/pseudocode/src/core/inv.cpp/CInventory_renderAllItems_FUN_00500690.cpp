// Name: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
// Address: 00500690
// Address Range: [[00500690, 005013c9]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_renderAllItems_FUN_00500690(CInventory * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da4b5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00630b0e
//   TerminatedCString s_CTommyGun_00630b13
//   TerminatedCString s_CShotgun_00630b1d
//   TerminatedCString s_CElephantGun_00630b26
//   TerminatedCString s_CGun_00630b33
//   TerminatedCString s_d_00630b38
//   TerminatedCString s_s_d_00630b3b
//   TerminatedCString s_s_s_00630b41
//   TerminatedCString s_s_s_s_00630b48
//   TerminatedCString s_are_loaded_00630b52
//   TerminatedCString s_s_s_00630b5f
//   TerminatedCString s_d_x_3_0f_00630b66
//   TerminatedCString s_s_00630b72
//   TerminatedCString s_s_s_00630b75
//   float FLOAT_00630b7e = 65535
//   double DOUBLE_00630b82 = 100
//   double DOUBLE_00630b8a = 0.0100000000000000
//   double DOUBLE_00630b92 = 65535
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   int g_InventoryWidth = 0xd0
//   int g_InventoryHeight = 0x60
//   CBitFont* g_SmallEditorFont
//   CBitFont* g_MicroFont
//   int g_UseExternalRenderer
//   undefined4 g_CFilmReelClassInfo.name_hash
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cc4
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 g_CGameInstance.auto_save_blocked
//   undefined4 DAT_02db8780.name_hash
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char[256] DAT_02db8c70
//   undefined4 DAT_02db8d70
//   char[256] DAT_02db9670
//   undefined4 DAT_02db9770
//   char[256] DAT_02dba070
//   undefined4 DAT_02dba170
//   CAlphaBitmap g_BatteryIconBitmap
//   CAlphaBitmap g_HealthBar1Bitmap
//   CAlphaBitmap g_HealthBar2Bitmap
//   CAlphaBitmap g_TommyClipIconBitmap
//   CAlphaBitmap g_BulletIconBitmap
//   CAlphaBitmap g_LithiumIconBitmap
//   CAlphaBitmap g_MercuryBulletIconBitmap
//   CAlphaBitmap g_ShotShellIconBitmap
//   CAlphaBitmap g_SilverBulletIconBitmap
//   CAlphaBitmap g_HolyBulletIconBitmap
//   int g_InventoryScreenHeight
//   undefined4 g_CLightGunClassInfo.name_hash
//   int g_MessageCount
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_isOfClass_FUN_0040c6d0
//   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   core_inv.cpp_getItemIconName_FUN_004fcf70
//   core_inv.cpp_loadInventory_FUN_004fd220
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_fillRectColor_FUN_00403170
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
//   engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_00500690(CInventory *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_EDX;
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
  undefined4 local_58;
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
    fVar10 = (float10)this_ptr->weapon_highlight_timer * (float10)FLOAT_00630b7e;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar3,this_ptr));
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
    fVar10 = (float10)pCVar2[4].location.position.y * (float10)DOUBLE_00630b82;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,pCVar2));
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
             (float10)DOUBLE_00630b8a;
    iVar6 = 0x10;
    iVar5 = 0x500d05;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(this_ptr,iVar3));
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
      fVar10 = (float10)fVar13 * (float10)FLOAT_00630b7e;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44(iVar3,(uint)(ushort)((ushort)(1.0 < fVar13) << 8 |
                                                       (ushort)NAN(fVar13) << 10 |
                                                      (ushort)(fVar13 == 1.0) << 0xe)));
      local_60 = (CBitFont *)(int)ROUND(fVar10);
    }
    fVar13 = (g_HeroActors[g_LocalHeroIndex]->base_character).hit_points * (float)DOUBLE_00630b8a;
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
                       ((double)CONCAT44((int)local_60 >> 0x1f,(int)local_60 / 2));
    local_74 = (int)ROUND(fVar10);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_00410b00
              (&g_HealthBar1Bitmap,local_78,local_74 + 4,0,local_74,iVar5 + -1,in_stack_fffff96c);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
              (&g_HealthBar2Bitmap,local_74,4,SUB84(dVar11,0));
    iVar3 = extraout_EDX_05;
  }
  fVar13 = this_ptr->message_display_timer;
  if (0.0 < fVar13) {
    local_5c = (CBitFont *)0xffff;
    if (1.0 >= fVar13 && (fVar13 == 1.0) == 0) {
      fVar10 = (float10)fVar13 * (float10)DOUBLE_00630b92;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44(iVar3,CONCAT22((short)((uint)this_ptr >> 0x10),
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


// Assembly code:
// 00500690: PUSH EBX
//   Label: core_inv.cpp_CInventory_renderAllItems_FUN_00500690
// 00500691: PUSH ESI
// 00500692: PUSH EDI
// 00500693: PUSH EBP
// 00500694: MOV EBP,ESP
// 00500696: SUB ESP,0x678
// 0050069c: AND ESP,0xfffffff8
// 0050069f: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005006a4: CMP dword ptr [EAX + 0x228],0x0
//   XREF to: 02d81cc4 (READ)
// 005006ab: JNZ 0x00500fec
//   XREF to: 00500fec (CONDITIONAL_JUMP)
// 005006b1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005006b4: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005006ba: MOV EAX,dword ptr [EAX + 0x4]
// 005006bd: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005006c4: JNZ 0x00500fec
//   XREF to: 00500fec (CONDITIONAL_JUMP)
// 005006ca: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005006d0: CMP EBX,dword ptr [0x02dcd790]
//   XREF to: 02dcd790 (READ)
// 005006d6: JNZ 0x00500ff3
//   XREF to: 00500ff3 (CONDITIONAL_JUMP)
// 005006dc: MOV EAX,[0x02d03e94]
//   Label: LAB_005006dc
//   XREF to: 02d03e94 (READ)
// 005006e1: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005006e7: XOR ESI,ESI
// 005006e9: MOV dword ptr [ESP + 0x61c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005006f0: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 005006f5: MOV dword ptr [0x02d03e94],ESI
//   XREF to: 02d03e94 (WRITE)
// 005006fb: MOV dword ptr [ESP + 0x644],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00500702: CMP EDI,0x180
// 00500708: JGE 0x0050071a
//   XREF to: 0050071a (CONDITIONAL_JUMP)
// 0050070a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050070d: CMP dword ptr [EAX + 0x44c],0x0
// 00500714: JZ 0x00500ffd
//   XREF to: 00500ffd (CONDITIONAL_JUMP)
// 0050071a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050071a
//   XREF to: Stack[0x4] (READ)
// 0050071d: CMP dword ptr [EAX + 0x330],0x0
// 00500724: JZ 0x005009c0
//   XREF to: 005009c0 (CONDITIONAL_JUMP)
// 0050072a: FLD float ptr [EAX + 0x338]
// 00500730: FLDZ
// 00500732: FCOMPP
// 00500734: FNSTSW AX
// 00500736: SAHF
// 00500737: JNC 0x005009c0
//   XREF to: 005009c0 (CONDITIONAL_JUMP)
// 0050073d: MOV EBX,0x10
// 00500742: MOV ESI,0x70
// 00500747: MOV EAX,[0x0067ce40]
//   XREF to: 0067ce40 (READ)
// 0050074c: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500752: MOV dword ptr [ESP + 0x638],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00500759: MOV dword ptr [ESP + 0x640],EBX
//   XREF to: Stack[-0x48] (WRITE)
// 00500760: MOV dword ptr [ESP + 0x630],ESI
//   XREF to: Stack[-0x58] (WRITE)
// 00500767: MOV EAX,[0x0067ce44]
//   XREF to: 0067ce44 (READ)
// 0050076c: MOV EBX,0x24
// 00500771: MOV dword ptr [ESP + 0x634],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00500778: CMP EDI,0x180
// 0050077e: JGE 0x00500790
//   XREF to: 00500790 (CONDITIONAL_JUMP)
// 00500780: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500783: CMP dword ptr [EAX + 0x44c],0x0
// 0050078a: JZ 0x0050100e
//   XREF to: 0050100e (CONDITIONAL_JUMP)
// 00500790: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00500790
//   XREF to: Stack[0x4] (READ)
// 00500793: MOV EDI,0xffff
// 00500798: FLD float ptr [EAX + 0x338]
// 0050079e: FLD1
// 005007a0: MOV dword ptr [ESP + 0x620],EDI
//   XREF to: Stack[-0x68] (WRITE)
// 005007a7: FCOMPP
// 005007a9: FNSTSW AX
// 005007ab: SAHF
// 005007ac: JBE 0x005007c9
//   XREF to: 005007c9 (CONDITIONAL_JUMP)
// 005007ae: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005007b1: FLD float ptr [EAX + 0x338]
// 005007b7: FMUL float ptr [0x00630b7e]
//   XREF to: 00630b7e (READ)
// 005007bd: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005007c2: FISTP dword ptr [ESP + 0x620]
//   XREF to: Stack[-0x68] (WRITE)
// 005007c9: MOV EAX,[0x02dd30f0]
//   Label: LAB_005007c9
//   XREF to: 02dd30f0 (READ)
// 005007ce: PUSH EAX
// 005007cf: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005007d2: MOV EDX,dword ptr [EAX + 0x330]
// 005007d8: PUSH EDX
// 005007d9: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005007de: ADD ESP,0x8
// 005007e1: TEST EAX,EAX
// 005007e3: JZ 0x0050105e
//   XREF to: 0050105e (CONDITIONAL_JUMP)
// 005007e9: FLD float ptr [EAX + 0x584]
// 005007ef: FMUL double ptr [0x00630b82]
//   XREF to: 00630b82 (READ)
// 005007f5: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005007fa: FISTP dword ptr [ESP + 0x674]
//   XREF to: Stack[-0x14] (WRITE)
// 00500801: MOV ESI,dword ptr [ESP + 0x674]
//   XREF to: Stack[-0x14] (READ)
// 00500808: PUSH ESI
// 00500809: PUSH 0x630b0e
//   XREF to: 00630b0e (DATA)
// 0050080e: LEA EAX,[ESP + 0x218]
//   XREF to: Stack[-0x478] (DATA)
// 00500815: PUSH EAX
// 00500816: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0050081b: ADD ESP,0xc
// 0050081e: PUSH 0x58
// 00500820: MOV EDI,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500827: PUSH EDI
// 00500828: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 0050082d: ADD ESP,0x8
// 00500830: MOV EBX,EAX
// 00500832: LEA EAX,[ESP + 0x210]
//   XREF to: Stack[-0x478] (DATA)
// 00500839: PUSH EAX
// 0050083a: PUSH EDI
// 0050083b: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00500840: ADD ESP,0x8
// 00500843: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500849: MOV ECX,dword ptr [ESP + 0x640]
//   XREF to: Stack[-0x48] (READ)
// 00500850: PUSH 0x0
// 00500852: SUB EDX,ECX
// 00500854: PUSH 0xf8
// 00500859: SUB EDX,EBX
// 0050085b: PUSH EDX
// 0050085c: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00500862: SUB EDX,ECX
// 00500864: SUB EDX,EAX
// 00500866: PUSH EDX
// 00500867: LEA EAX,[ESP + 0x220]
//   XREF to: Stack[-0x478] (DATA)
// 0050086e: PUSH EAX
// 0050086f: PUSH EDI
// 00500870: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   Label: LAB_00500870
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00500875: ADD ESP,0x18
// 00500878: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00500878
//   XREF to: Stack[0x4] (READ)
// 0050087b: CMP dword ptr [EAX + 0x44c],0x0
// 00500882: JZ 0x005009c0
//   XREF to: 005009c0 (CONDITIONAL_JUMP)
// 00500888: PUSH 0x3
// 0050088a: MOV EDX,dword ptr [EAX + 0x330]
// 00500890: PUSH EDX
// 00500891: PUSH EAX
// 00500892: CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
// 00500897: ADD ESP,0xc
// 0050089a: TEST EAX,EAX
// 0050089c: JZ 0x00501276
//   XREF to: 00501276 (CONDITIONAL_JUMP)
// 005008a2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005008a5: MOV EDX,dword ptr [EAX + 0x330]
// 005008ab: PUSH EDX
// 005008ac: CALL core_inv.cpp_getItemIconName_FUN_004fcf70
//   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
// 005008b1: ADD ESP,0x4
// 005008b4: PUSH EAX
// 005008b5: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005008b8: MOV ECX,dword ptr [EAX + 0x330]
// 005008be: PUSH ECX
// 005008bf: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 005008c4: ADD ESP,0x4
// 005008c7: PUSH EAX
// 005008c8: PUSH 0x630b41
//   XREF to: 00630b41 (DATA)
// 005008cd: LEA EAX,[ESP + 0x51c]
//   Label: LAB_005008cd
//   XREF to: Stack[-0x178] (DATA)
// 005008d4: PUSH EAX
// 005008d5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005008da: ADD ESP,0x10
// 005008dd: MOV EAX,dword ptr [ESP + 0x644]
//   Label: LAB_005008dd
//   XREF to: Stack[-0x44] (READ)
// 005008e4: MOV EBX,dword ptr [ESP + 0x630]
//   XREF to: Stack[-0x58] (READ)
// 005008eb: MOV dword ptr [ESP + 0x660],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005008f2: MOV EAX,dword ptr [ESP + 0x638]
//   XREF to: Stack[-0x50] (READ)
// 005008f9: SUB EAX,EBX
// 005008fb: PUSH EAX
// 005008fc: PUSH 0x100
// 00500901: PUSH 0xa
// 00500903: PUSH 0x2db8c70
//   XREF to: 02db8c70 (DATA)
// 00500908: LEA EAX,[ESP + 0x520]
//   XREF to: Stack[-0x178] (DATA)
// 0050090f: PUSH EAX
// 00500910: MOV ESI,dword ptr [ESP + 0x658]
//   XREF to: Stack[-0x44] (READ)
// 00500917: PUSH ESI
// 00500918: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 0050091d: ADD ESP,0x18
// 00500920: PUSH 0x58
// 00500922: MOV EDI,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500929: PUSH EDI
// 0050092a: MOV ESI,EAX
// 0050092c: MOV dword ptr [ESP + 0x660],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00500933: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00500938: ADD ESP,0x8
// 0050093b: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500941: MOV dword ptr [ESP + 0x654],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00500948: MOV EAX,dword ptr [ESP + 0x634]
//   XREF to: Stack[-0x54] (READ)
// 0050094f: MOV ECX,dword ptr [ESP + 0x638]
//   XREF to: Stack[-0x50] (READ)
// 00500956: SUB EBX,EAX
// 00500958: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 0050095d: MOV EDX,dword ptr [ESP + 0x640]
//   XREF to: Stack[-0x48] (READ)
// 00500964: SUB EAX,ECX
// 00500966: ADD EBX,EDX
// 00500968: ADD EDX,EAX
// 0050096a: XOR EDI,EDI
// 0050096c: MOV dword ptr [ESP + 0x65c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00500973: TEST ESI,ESI
// 00500975: JLE 0x005009c0
//   XREF to: 005009c0 (CONDITIONAL_JUMP)
// 00500977: MOV ESI,0x2db8c70
//   XREF to: 02db8c70 (DATA)
// 0050097c: PUSH 0x0
//   Label: LAB_0050097c
// 0050097e: PUSH 0xf8
// 00500983: PUSH EBX
// 00500984: MOV EAX,dword ptr [ESP + 0x668]
//   XREF to: Stack[-0x2c] (READ)
// 0050098b: PUSH EAX
// 0050098c: PUSH ESI
//   XREF to: 02db8c70 (DATA)
//   XREF to: 02db8d70 (DATA)
// 0050098d: MOV EDX,dword ptr [ESP + 0x674]
//   XREF to: Stack[-0x28] (READ)
// 00500994: PUSH EDX
// 00500995: INC EDI
// 00500996: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 0050099b: ADD ESP,0x18
// 0050099e: ADD ESI,0x100
// 005009a4: MOV ECX,dword ptr [ESP + 0x654]
//   XREF to: Stack[-0x34] (READ)
// 005009ab: MOV EAX,dword ptr [ESP + 0x658]
//   XREF to: Stack[-0x30] (READ)
// 005009b2: ADD EBX,ECX
// 005009b4: CMP EDI,EAX
// 005009b6: JL 0x0050097c
//   XREF to: 0050097c (CONDITIONAL_JUMP)
// 005009b8: LEA EAX,[EAX]
// 005009be: MOV EDX,EDX
// 005009c0: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005009c0
//   XREF to: Stack[0x4] (READ)
// 005009c3: CMP dword ptr [EAX + 0x334],0x0
// 005009ca: JZ 0x00500ca0
//   XREF to: 00500ca0 (CONDITIONAL_JUMP)
// 005009d0: FLD float ptr [EAX + 0x33c]
// 005009d6: FLDZ
// 005009d8: FCOMPP
// 005009da: FNSTSW AX
// 005009dc: SAHF
// 005009dd: JNC 0x00500ca0
//   XREF to: 00500ca0 (CONDITIONAL_JUMP)
// 005009e3: MOV EBX,0x70
// 005009e8: MOV ECX,0x10
// 005009ed: MOV ESI,dword ptr [0x0067ce44]
//   XREF to: 0067ce44 (READ)
// 005009f3: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005009f9: MOV dword ptr [ESP + 0x62c],EBX
//   XREF to: Stack[-0x5c] (WRITE)
// 00500a00: MOV dword ptr [ESP + 0x63c],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00500a07: MOV EBX,dword ptr [0x0067ce40]
//   XREF to: 0067ce40 (READ)
// 00500a0d: CMP EDI,0x180
// 00500a13: JGE 0x00500a25
//   XREF to: 00500a25 (CONDITIONAL_JUMP)
// 00500a15: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500a18: CMP dword ptr [EAX + 0x44c],0x0
// 00500a1f: JZ 0x00501366
//   XREF to: 00501366 (CONDITIONAL_JUMP)
// 00500a25: MOV EAX,[0x02db87b8]
//   Label: LAB_00500a25
//   XREF to: 02db87b8 (READ)
// 00500a2a: PUSH EAX
// 00500a2b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500a2e: MOV EDX,dword ptr [EAX + 0x334]
// 00500a34: PUSH EDX
// 00500a35: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00500a3a: ADD ESP,0x8
// 00500a3d: TEST EAX,EAX
// 00500a3f: JZ 0x00500ad5
//   XREF to: 00500ad5 (CONDITIONAL_JUMP)
// 00500a45: SUB ESP,0x8
// 00500a48: FLD float ptr [EAX + 0x2d8]
// 00500a4e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x690] (DATA)
// 00500a51: MOV ECX,dword ptr [EAX + 0x2d4]
// 00500a57: PUSH ECX
// 00500a58: PUSH 0x630b66
//   XREF to: 00630b66 (DATA)
// 00500a5d: LEA EAX,[ESP + 0x320]
//   XREF to: Stack[-0x378] (DATA)
// 00500a64: PUSH EAX
// 00500a65: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00500a6a: ADD ESP,0x14
// 00500a6d: PUSH 0x58
// 00500a6f: MOV EDI,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500a76: PUSH EDI
// 00500a77: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00500a7c: ADD ESP,0x8
// 00500a7f: MOV EDI,EAX
// 00500a81: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x378] (DATA)
// 00500a88: PUSH EAX
// 00500a89: MOV EAX,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500a90: PUSH EAX
// 00500a91: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00500a96: ADD ESP,0x8
// 00500a99: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500a9f: MOV ECX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[-0x4c] (READ)
// 00500aa6: PUSH 0x0
// 00500aa8: SUB EDX,ECX
// 00500aaa: PUSH 0xf8
// 00500aaf: SUB EDX,EDI
// 00500ab1: PUSH EDX
// 00500ab2: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00500ab8: SUB EDX,ECX
// 00500aba: SUB EDX,EAX
// 00500abc: PUSH EDX
// 00500abd: LEA EAX,[ESP + 0x320]
//   XREF to: Stack[-0x378] (DATA)
// 00500ac4: PUSH EAX
// 00500ac5: MOV EAX,dword ptr [ESP + 0x658]
//   XREF to: Stack[-0x44] (READ)
// 00500acc: PUSH EAX
// 00500acd: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00500ad2: ADD ESP,0x18
// 00500ad5: MOV EDX,dword ptr [0x02d12d70]
//   Label: LAB_00500ad5
//   XREF to: 02d12d70 (READ)
// 00500adb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500ade: PUSH EDX
// 00500adf: MOV ECX,dword ptr [EAX + 0x334]
// 00500ae5: PUSH ECX
// 00500ae6: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00500aeb: ADD ESP,0x8
// 00500aee: TEST EAX,EAX
// 00500af0: JZ 0x00500b7d
//   XREF to: 00500b7d (CONDITIONAL_JUMP)
// 00500af6: PUSH EAX
// 00500af7: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 00500afc: ADD ESP,0x4
// 00500aff: PUSH EAX
// 00500b00: PUSH 0x630b72
//   XREF to: 00630b72 (DATA)
// 00500b05: LEA EAX,[ESP + 0x418]
//   XREF to: Stack[-0x278] (DATA)
// 00500b0c: PUSH EAX
// 00500b0d: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00500b12: ADD ESP,0xc
// 00500b15: PUSH 0x58
// 00500b17: MOV EDI,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500b1e: PUSH EDI
// 00500b1f: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00500b24: ADD ESP,0x8
// 00500b27: MOV EDI,EAX
// 00500b29: LEA EAX,[ESP + 0x410]
//   XREF to: Stack[-0x278] (DATA)
// 00500b30: PUSH EAX
// 00500b31: MOV EAX,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500b38: PUSH EAX
// 00500b39: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 00500b3e: ADD ESP,0x8
// 00500b41: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500b47: MOV ECX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[-0x4c] (READ)
// 00500b4e: PUSH 0x0
// 00500b50: SUB EDX,ECX
// 00500b52: PUSH 0xf8
// 00500b57: SUB EDX,EDI
// 00500b59: PUSH EDX
// 00500b5a: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00500b60: SUB EDX,ECX
// 00500b62: SUB EDX,EAX
// 00500b64: PUSH EDX
// 00500b65: LEA EAX,[ESP + 0x420]
//   XREF to: Stack[-0x278] (DATA)
// 00500b6c: PUSH EAX
// 00500b6d: MOV EAX,dword ptr [ESP + 0x658]
//   XREF to: Stack[-0x44] (READ)
// 00500b74: PUSH EAX
// 00500b75: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00500b7a: ADD ESP,0x18
// 00500b7d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00500b7d
//   XREF to: Stack[0x4] (READ)
// 00500b80: CMP dword ptr [EAX + 0x44c],0x0
// 00500b87: JZ 0x00500ca0
//   XREF to: 00500ca0 (CONDITIONAL_JUMP)
// 00500b8d: MOV ECX,dword ptr [EAX + 0x334]
// 00500b93: PUSH ECX
// 00500b94: CALL core_inv.cpp_getItemIconName_FUN_004fcf70
//   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
// 00500b99: ADD ESP,0x4
// 00500b9c: PUSH EAX
// 00500b9d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500ba0: MOV EDI,dword ptr [EAX + 0x334]
// 00500ba6: PUSH EDI
// 00500ba7: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 00500bac: ADD ESP,0x4
// 00500baf: PUSH EAX
// 00500bb0: PUSH 0x630b75
//   XREF to: 00630b75 (DATA)
// 00500bb5: LEA EAX,[ESP + 0x11c]
//   XREF to: Stack[-0x578] (DATA)
// 00500bbc: PUSH EAX
// 00500bbd: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00500bc2: ADD ESP,0x10
// 00500bc5: MOV EAX,dword ptr [ESP + 0x644]
//   XREF to: Stack[-0x44] (READ)
// 00500bcc: MOV EDX,dword ptr [ESP + 0x62c]
//   XREF to: Stack[-0x5c] (READ)
// 00500bd3: MOV dword ptr [ESP + 0x664],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00500bda: MOV EAX,EBX
// 00500bdc: SUB EAX,EDX
// 00500bde: PUSH EAX
// 00500bdf: PUSH 0x100
// 00500be4: PUSH 0xa
// 00500be6: PUSH 0x2db9670
//   XREF to: 02db9670 (DATA)
// 00500beb: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x578] (DATA)
// 00500bf2: PUSH EAX
// 00500bf3: MOV ECX,dword ptr [ESP + 0x658]
//   XREF to: Stack[-0x44] (READ)
// 00500bfa: PUSH ECX
// 00500bfb: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 00500c00: MOV dword ptr [ESP + 0x68c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00500c07: ADD ESP,0x18
// 00500c0a: PUSH 0x58
// 00500c0c: MOV EDI,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 00500c13: PUSH EDI
// 00500c14: MOV dword ptr [ESP + 0x650],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 00500c1b: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00500c20: ADD ESP,0x8
// 00500c23: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500c29: MOV dword ptr [ESP + 0x64c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00500c30: SUB EDI,ESI
// 00500c32: ADD EDI,dword ptr [ESP + 0x63c]
//   XREF to: Stack[-0x4c] (READ)
// 00500c39: MOV EAX,[0x00679394]
//   XREF to: 00679394 (READ)
// 00500c3e: MOV EDX,dword ptr [ESP + 0x63c]
//   XREF to: Stack[-0x4c] (READ)
// 00500c45: SUB EAX,EBX
// 00500c47: ADD EDX,EAX
// 00500c49: MOV dword ptr [ESP + 0x650],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 00500c50: MOV EDX,dword ptr [ESP + 0x674]
//   XREF to: Stack[-0x14] (READ)
// 00500c57: XOR ESI,ESI
// 00500c59: TEST EDX,EDX
// 00500c5b: JLE 0x00500ca0
//   XREF to: 00500ca0 (CONDITIONAL_JUMP)
// 00500c5d: MOV EBX,0x2db9670
//   XREF to: 02db9670 (PARAM)
// 00500c62: PUSH 0x0
//   Label: LAB_00500c62
// 00500c64: PUSH 0xf8
// 00500c69: PUSH EDI
// 00500c6a: MOV ECX,dword ptr [ESP + 0x65c]
//   XREF to: Stack[-0x38] (READ)
// 00500c71: PUSH ECX
// 00500c72: PUSH EBX
//   XREF to: 02db9670 (DATA)
//   XREF to: 02db9770 (DATA)
// 00500c73: MOV EAX,dword ptr [ESP + 0x678]
//   XREF to: Stack[-0x24] (READ)
// 00500c7a: PUSH EAX
// 00500c7b: INC ESI
// 00500c7c: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00500c81: ADD ESP,0x18
// 00500c84: ADD EBX,0x100
//   XREF to: 02db9770 (PARAM)
// 00500c8a: MOV EDX,dword ptr [ESP + 0x64c]
//   XREF to: Stack[-0x3c] (READ)
// 00500c91: MOV ECX,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x40] (READ)
// 00500c98: ADD EDI,EDX
// 00500c9a: CMP ESI,ECX
// 00500c9c: JL 0x00500c62
//   XREF to: 00500c62 (CONDITIONAL_JUMP)
// 00500c9e: MOV EAX,EAX
// 00500ca0: MOV EAX,[0x0067b654]
//   Label: LAB_00500ca0
//   XREF to: 0067b654 (READ)
// 00500ca5: CMP dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (READ)
// 00500cac: JZ 0x0050139d
//   XREF to: 0050139d (CONDITIONAL_JUMP)
// 00500cb2: MOV EAX,[0x00679398]
//   Label: LAB_00500cb2
//   XREF to: 00679398 (READ)
// 00500cb7: SUB EAX,0x21
// 00500cba: MOV dword ptr [ESP + 0x610],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00500cc1: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 00500cc6: MOV EDX,dword ptr [ESP + 0x610]
//   XREF to: Stack[-0x78] (READ)
// 00500ccd: SUB EAX,0x6
// 00500cd0: SUB EDX,EAX
// 00500cd2: MOV dword ptr [ESP + 0x674],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 00500cd9: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500cdc: FILD dword ptr [ESP + 0x674]
//   XREF to: Stack[-0x14] (READ)
// 00500ce3: FMUL float ptr [EDX]
// 00500ce5: FMUL double ptr [0x00630b8a]
//   XREF to: 00630b8a (READ)
// 00500ceb: PUSH 0x2
// 00500ced: MOV dword ptr [ESP + 0x678],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00500cf4: PUSH EAX
// 00500cf5: FILD dword ptr [ESP + 0x67c]
//   XREF to: Stack[-0x14] (READ)
// 00500cfc: FADDP
// 00500cfe: PUSH 0x10
// 00500d00: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00500d05: FISTP dword ptr [ESP + 0x61c]
//   XREF to: Stack[-0x78] (WRITE)
// 00500d0c: MOV EDI,dword ptr [ESP + 0x61c]
//   XREF to: Stack[-0x78] (READ)
// 00500d13: PUSH EDI
// 00500d14: PUSH 0x6
// 00500d16: MOV EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500d1c: CALL engine_2d.c_fillRectColor_FUN_00403170
//   XREF to: 00403170 (UNCONDITIONAL_CALL)
// 00500d21: ADD ESP,0x14
// 00500d24: PUSH 0xffff
// 00500d29: SUB EBX,0x24
// 00500d2c: PUSH EBX
// 00500d2d: PUSH 0x4
// 00500d2f: PUSH 0x2dcd6c8
//   XREF to: 02dcd6c8 (DATA)
// 00500d34: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00500d39: ADD ESP,0x10
// 00500d3c: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00500d3c
//   XREF to: Stack[0x4] (READ)
// 00500d3f: FLD float ptr [EAX + 0x33c]
// 00500d45: FLDZ
// 00500d47: FCOMPP
// 00500d49: FNSTSW AX
// 00500d4b: SAHF
// 00500d4c: JNC 0x005013af
//   XREF to: 005013af (CONDITIONAL_JUMP)
// 00500d52: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00500d52
//   XREF to: Stack[0x4] (READ)
// 00500d55: MOV EAX,dword ptr [EAX + 0x340]
// 00500d5b: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x67c] (WRITE)
// 00500d5f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500d62: FLD float ptr [EAX + 0x33c]
// 00500d68: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x67c] (READ)
// 00500d6c: FNSTSW AX
// 00500d6e: SAHF
// 00500d6f: JBE 0x00500d7e
//   XREF to: 00500d7e (CONDITIONAL_JUMP)
// 00500d71: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500d74: MOV EAX,dword ptr [EAX + 0x33c]
// 00500d7a: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x67c] (WRITE)
// 00500d7e: FLD float ptr [ESP + 0xc]
//   Label: LAB_00500d7e
//   XREF to: Stack[-0x67c] (READ)
// 00500d82: MOV EAX,0xffff
// 00500d87: FLD1
// 00500d89: MOV dword ptr [ESP + 0x624],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00500d90: FCOMPP
// 00500d92: FNSTSW AX
// 00500d94: SAHF
// 00500d95: JBE 0x00500dad
//   XREF to: 00500dad (CONDITIONAL_JUMP)
// 00500d97: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x67c] (READ)
// 00500d9b: FMUL float ptr [0x00630b7e]
//   XREF to: 00630b7e (READ)
// 00500da1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00500da6: FISTP dword ptr [ESP + 0x624]
//   XREF to: Stack[-0x64] (WRITE)
// 00500dad: MOV EAX,[0x02db87d0]
//   Label: LAB_00500dad
//   XREF to: 02db87d0 (READ)
// 00500db2: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00500db9: FLD float ptr [EAX + 0x243c]
// 00500dbf: FMUL double ptr [0x00630b8a]
//   XREF to: 00630b8a (READ)
// 00500dc5: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x680] (WRITE)
// 00500dc9: FLDZ
// 00500dcb: FCOMPP
// 00500dcd: FNSTSW AX
// 00500dcf: SAHF
// 00500dd0: JBE 0x00500dd8
//   XREF to: 00500dd8 (CONDITIONAL_JUMP)
// 00500dd2: XOR EDX,EDX
// 00500dd4: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x680] (WRITE)
// 00500dd8: FLD float ptr [ESP + 0x8]
//   Label: LAB_00500dd8
//   XREF to: Stack[-0x680] (READ)
// 00500ddc: FLD1
// 00500dde: FCOMPP
// 00500de0: FNSTSW AX
// 00500de2: SAHF
// 00500de3: JNC 0x00500ded
//   XREF to: 00500ded (CONDITIONAL_JUMP)
// 00500de5: MOV dword ptr [ESP + 0x8],0x3f800000
//   XREF to: Stack[-0x680] (WRITE)
// 00500ded: MOV EBX,0x3f
//   Label: LAB_00500ded
// 00500df2: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500df8: MOV EDI,0x1b
// 00500dfd: CMP ESI,0x180
// 00500e03: JGE 0x00500e0f
//   XREF to: 00500e0f (CONDITIONAL_JUMP)
// 00500e05: MOV EBX,0x1f
// 00500e0a: MOV EDI,0xd
// 00500e0f: MOV EAX,[0x00679394]
//   Label: LAB_00500e0f
//   XREF to: 00679394 (READ)
// 00500e14: SUB EAX,0x4
// 00500e17: SUB EAX,EDI
// 00500e19: MOV dword ptr [ESP + 0x614],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00500e20: MOV EAX,dword ptr [ESP + 0x624]
//   XREF to: Stack[-0x64] (READ)
// 00500e27: MOV EDX,EAX
// 00500e29: SAR EDX,0x1f
// 00500e2c: SUB EAX,EDX
// 00500e2e: SAR EAX,0x1
// 00500e30: MOV dword ptr [ESP + 0x674],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 00500e37: FILD dword ptr [ESP + 0x674]
//   XREF to: Stack[-0x14] (READ)
// 00500e3e: FLD ST0
// 00500e40: FMUL float ptr [ESP + 0x8]
//   XREF to: Stack[-0x680] (READ)
// 00500e44: DEC EDI
// 00500e45: PUSH EAX
// 00500e46: FSUBP
// 00500e48: PUSH EBX
// 00500e49: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00500e4e: PUSH EDI
// 00500e4f: FISTP dword ptr [ESP + 0x624]
//   XREF to: Stack[-0x70] (WRITE)
// 00500e56: MOV EDI,dword ptr [ESP + 0x624]
//   XREF to: Stack[-0x70] (READ)
// 00500e5d: PUSH EDI
// 00500e5e: PUSH 0x0
// 00500e60: MOV ESI,EAX
// 00500e62: LEA EAX,[EDI + 0x4]
// 00500e65: PUSH EAX
// 00500e66: MOV EAX,dword ptr [ESP + 0x62c]
//   XREF to: Stack[-0x74] (READ)
// 00500e6d: PUSH EAX
// 00500e6e: PUSH 0x2dcd6dc
//   XREF to: 02dcd6dc (DATA)
// 00500e73: CALL engine_alphabit.cpp_CAlphaBitmap_render_FUN_00410b00
//   XREF to: 00410b00 (UNCONDITIONAL_CALL)
// 00500e78: ADD ESP,0x20
// 00500e7b: PUSH ESI
// 00500e7c: PUSH 0x4
// 00500e7e: MOV EDX,dword ptr [ESP + 0x61c]
//   XREF to: Stack[-0x74] (READ)
// 00500e85: PUSH EDX
// 00500e86: PUSH 0x2dcd6f0
//   XREF to: 02dcd6f0 (DATA)
// 00500e8b: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00500e90: ADD ESP,0x10
// 00500e93: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00500e93
//   XREF to: Stack[0x4] (READ)
// 00500e96: FLDZ
// 00500e98: FLD float ptr [EAX + 0x344]
// 00500e9e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x688] (DATA)
// 00500ea1: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x688] (DATA)
// 00500ea4: FNSTSW AX
// 00500ea6: SAHF
// 00500ea7: JNC 0x00500fe0
//   XREF to: 00500fe0 (CONDITIONAL_JUMP)
// 00500ead: MOV ECX,0xffff
// 00500eb2: FLD1
// 00500eb4: MOV dword ptr [ESP + 0x628],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 00500ebb: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x688] (DATA)
// 00500ebe: FNSTSW AX
// 00500ec0: SAHF
// 00500ec1: JBE 0x00500ed8
//   XREF to: 00500ed8 (CONDITIONAL_JUMP)
// 00500ec3: FLD double ptr [ESP]
//   XREF to: Stack[-0x688] (DATA)
// 00500ec6: FMUL double ptr [0x00630b92]
//   XREF to: 00630b92 (READ)
// 00500ecc: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00500ed1: FISTP dword ptr [ESP + 0x628]
//   XREF to: Stack[-0x60] (WRITE)
// 00500ed8: MOV EBX,dword ptr [ESP + 0x628]
//   Label: LAB_00500ed8
//   XREF to: Stack[-0x60] (READ)
// 00500edf: PUSH EBX
// 00500ee0: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 00500ee5: MOV EAX,[0x020a5724]
//   XREF to: 020a5724 (READ)
// 00500eea: MOV EDX,dword ptr [0x0067ce44]
//   XREF to: 0067ce44 (READ)
// 00500ef0: ADD ESP,0x4
// 00500ef3: MOV ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500ef9: MOV dword ptr [ESP + 0x670],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00500f00: CMP ESI,0x180
// 00500f06: JGE 0x00500f1f
//   XREF to: 00500f1f (CONDITIONAL_JUMP)
// 00500f08: MOV EAX,EDX
// 00500f0a: SAR EDX,0x1f
// 00500f0d: SUB EAX,EDX
// 00500f0f: SAR EAX,0x1
// 00500f11: MOV EDX,EAX
// 00500f13: MOV EAX,[0x020a572c]
//   XREF to: 020a572c (READ)
// 00500f18: MOV dword ptr [ESP + 0x670],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00500f1f: MOV EAX,[0x00679394]
//   Label: LAB_00500f1f
//   XREF to: 00679394 (READ)
// 00500f24: SUB EAX,EDX
// 00500f26: SUB EAX,0x4
// 00500f29: PUSH EAX
// 00500f2a: PUSH 0x100
// 00500f2f: PUSH 0xa
// 00500f31: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00500f34: PUSH 0x2dba070
//   XREF to: 02dba070 (DATA)
// 00500f39: ADD EAX,0x34c
// 00500f3e: PUSH EAX
// 00500f3f: MOV EDI,dword ptr [ESP + 0x684]
//   XREF to: Stack[-0x18] (READ)
// 00500f46: PUSH EDI
// 00500f47: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 00500f4c: ADD ESP,0x18
// 00500f4f: PUSH 0x58
// 00500f51: PUSH EDI
// 00500f52: MOV EBX,EAX
// 00500f54: MOV dword ptr [ESP + 0x674],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00500f5b: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 00500f60: ADD ESP,0x8
// 00500f63: MOV dword ptr [ESP + 0x668],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00500f6a: IMUL EAX,EBX
// 00500f6d: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00500f73: SUB EDI,0x4
// 00500f76: MOV EDX,dword ptr [0x020a572c]
//   XREF to: 020a572c (READ)
// 00500f7c: SUB EDI,EAX
// 00500f7e: CMP EDX,dword ptr [ESP + 0x670]
//   XREF to: Stack[-0x18] (READ)
// 00500f85: JNZ 0x00500f90
//   XREF to: 00500f90 (CONDITIONAL_JUMP)
// 00500f87: CMP dword ptr [0x02fa8cd0],0x0
//   XREF to: 02fa8cd0 (READ)
// 00500f8e: JNZ 0x00500fe0
//   XREF to: 00500fe0 (CONDITIONAL_JUMP)
// 00500f90: MOV ESI,dword ptr [ESP + 0x66c]
//   Label: LAB_00500f90
//   XREF to: Stack[-0x1c] (READ)
// 00500f97: XOR EBX,EBX
// 00500f99: TEST ESI,ESI
// 00500f9b: JLE 0x00500fe0
//   XREF to: 00500fe0 (CONDITIONAL_JUMP)
// 00500f9d: MOV ESI,0x2dba070
//   XREF to: 02dba070 (DATA)
// 00500fa2: PUSH 0x0
//   Label: LAB_00500fa2
// 00500fa4: PUSH 0xf8
// 00500fa9: PUSH EDI
// 00500faa: PUSH 0x4
// 00500fac: PUSH ESI
//   XREF to: 02dba070 (DATA)
//   XREF to: 02dba170 (DATA)
// 00500fad: MOV EAX,dword ptr [ESP + 0x684]
//   XREF to: Stack[-0x18] (READ)
// 00500fb4: PUSH EAX
// 00500fb5: INC EBX
// 00500fb6: CALL engine_font.cpp_CBitFont_drawTextLeft_FUN_004cda80
//   XREF to: 004cda80 (UNCONDITIONAL_CALL)
// 00500fbb: ADD ESP,0x18
// 00500fbe: ADD ESI,0x100
// 00500fc4: MOV EDX,dword ptr [ESP + 0x668]
//   XREF to: Stack[-0x20] (READ)
// 00500fcb: MOV ECX,dword ptr [ESP + 0x66c]
//   XREF to: Stack[-0x1c] (READ)
// 00500fd2: ADD EDI,EDX
// 00500fd4: CMP EBX,ECX
// 00500fd6: JL 0x00500fa2
//   XREF to: 00500fa2 (CONDITIONAL_JUMP)
// 00500fd8: LEA EAX,[EAX]
// 00500fde: MOV EDX,EDX
// 00500fe0: MOV EAX,dword ptr [ESP + 0x61c]
//   Label: LAB_00500fe0
//   XREF to: Stack[-0x6c] (READ)
// 00500fe7: MOV [0x02d03e94],EAX
//   XREF to: 02d03e94 (WRITE)
// 00500fec: MOV ESP,EBP
//   Label: LAB_00500fec
// 00500fee: POP EBP
// 00500fef: POP EDI
// 00500ff0: POP ESI
// 00500ff1: POP EBX
// 00500ff2: RET
// 00500ff3: CALL core_inv.cpp_loadInventory_FUN_004fd220
//   Label: LAB_00500ff3
//   XREF to: 004fd220 (UNCONDITIONAL_CALL)
// 00500ff8: JMP 0x005006dc
//   XREF to: 005006dc (UNCONDITIONAL_JUMP)
// 00500ffd: MOV EAX,[0x020a572c]
//   Label: LAB_00500ffd
//   XREF to: 020a572c (READ)
// 00501002: MOV dword ptr [ESP + 0x644],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00501009: JMP 0x0050071a
//   XREF to: 0050071a (UNCONDITIONAL_JUMP)
// 0050100e: MOV EAX,dword ptr [ESP + 0x638]
//   Label: LAB_0050100e
//   XREF to: Stack[-0x50] (READ)
// 00501015: MOV EDX,EAX
// 00501017: SAR EDX,0x1f
// 0050101a: SUB EAX,EDX
// 0050101c: SAR EAX,0x1
// 0050101e: MOV dword ptr [ESP + 0x638],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 00501025: MOV EAX,dword ptr [ESP + 0x634]
//   XREF to: Stack[-0x54] (READ)
// 0050102c: MOV EDX,EAX
// 0050102e: SAR EDX,0x1f
// 00501031: SUB EAX,EDX
// 00501033: SAR EAX,0x1
// 00501035: MOV ESI,0x28
// 0050103a: MOV ECX,0x8
// 0050103f: MOV EBX,0x12
// 00501044: MOV dword ptr [ESP + 0x630],ESI
//   XREF to: Stack[-0x58] (WRITE)
// 0050104b: MOV dword ptr [ESP + 0x640],ECX
//   XREF to: Stack[-0x48] (WRITE)
// 00501052: MOV dword ptr [ESP + 0x634],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 00501059: JMP 0x00500790
//   XREF to: 00500790 (UNCONDITIONAL_JUMP)
// 0050105e: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050105e
//   XREF to: Stack[0x4] (READ)
// 00501061: PUSH 0x3
// 00501063: MOV ECX,dword ptr [EAX + 0x330]
// 00501069: PUSH ECX
// 0050106a: PUSH EAX
// 0050106b: CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
// 00501070: ADD ESP,0xc
// 00501073: TEST EAX,EAX
// 00501075: JNZ 0x00500878
//   XREF to: 00500878 (CONDITIONAL_JUMP)
// 0050107b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050107e: PUSH 0x630b13
//   XREF to: 00630b13 (DATA)
// 00501083: MOV ESI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00501089: MOV EDX,dword ptr [EAX + 0x330]
// 0050108f: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00501095: PUSH EDX
// 00501096: SUB ESI,EBX
// 00501098: SUB EDI,EBX
// 0050109a: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 0050109f: XOR EBX,EBX
// 005010a1: ADD ESP,0x8
// 005010a4: TEST EAX,EAX
// 005010a6: JZ 0x005010ad
//   XREF to: 005010ad (CONDITIONAL_JUMP)
// 005010a8: MOV EBX,0x2dcd704
//   XREF to: 02dcd704 (DATA)
// 005010ad: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005010ad
//   XREF to: Stack[0x4] (READ)
// 005010b0: PUSH 0x630b1d
//   XREF to: 00630b1d (DATA)
// 005010b5: MOV ECX,dword ptr [EAX + 0x330]
// 005010bb: PUSH ECX
// 005010bc: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005010c1: ADD ESP,0x8
// 005010c4: TEST EAX,EAX
// 005010c6: JZ 0x005010cd
//   XREF to: 005010cd (CONDITIONAL_JUMP)
// 005010c8: MOV EBX,0x2dcd754
//   XREF to: 02dcd754 (DATA)
// 005010cd: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005010cd
//   XREF to: Stack[0x4] (READ)
// 005010d0: PUSH 0x630b26
//   XREF to: 00630b26 (DATA)
// 005010d5: MOV EDX,dword ptr [EAX + 0x330]
// 005010db: PUSH EDX
// 005010dc: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005010e1: ADD ESP,0x8
// 005010e4: TEST EAX,EAX
// 005010e6: JZ 0x005010ed
//   XREF to: 005010ed (CONDITIONAL_JUMP)
// 005010e8: MOV EBX,0x2dcd754
//   XREF to: 02dcd754 (DATA)
// 005010ed: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005010ed
//   XREF to: Stack[0x4] (READ)
// 005010f0: PUSH 0x630b33
//   XREF to: 00630b33 (DATA)
// 005010f5: MOV ECX,dword ptr [EAX + 0x330]
// 005010fb: PUSH ECX
// 005010fc: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00501101: ADD ESP,0x8
// 00501104: TEST EAX,EAX
// 00501106: JZ 0x0050117f
//   XREF to: 0050117f (CONDITIONAL_JUMP)
// 0050110c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050110f: MOV EAX,dword ptr [EAX + 0x330]
// 00501115: CMP dword ptr [EAX + 0x56c],0x0
// 0050111c: JNZ 0x00501123
//   XREF to: 00501123 (CONDITIONAL_JUMP)
// 0050111e: MOV EBX,0x2dcd718
//   XREF to: 02dcd718 (DATA)
// 00501123: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00501123
//   XREF to: Stack[0x4] (READ)
// 00501126: MOV EAX,dword ptr [EAX + 0x330]
// 0050112c: CMP dword ptr [EAX + 0x56c],0x3
// 00501133: JNZ 0x0050113a
//   XREF to: 0050113a (CONDITIONAL_JUMP)
// 00501135: MOV EBX,0x2dcd72c
//   XREF to: 02dcd72c (DATA)
// 0050113a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050113a
//   XREF to: Stack[0x4] (READ)
// 0050113d: MOV EAX,dword ptr [EAX + 0x330]
// 00501143: CMP dword ptr [EAX + 0x56c],0x7
// 0050114a: JNZ 0x00501151
//   XREF to: 00501151 (CONDITIONAL_JUMP)
// 0050114c: MOV EBX,0x2dcd740
//   XREF to: 02dcd740 (DATA)
// 00501151: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00501151
//   XREF to: Stack[0x4] (READ)
// 00501154: MOV EAX,dword ptr [EAX + 0x330]
// 0050115a: CMP dword ptr [EAX + 0x56c],0x8
// 00501161: JNZ 0x00501168
//   XREF to: 00501168 (CONDITIONAL_JUMP)
// 00501163: MOV EBX,0x2dcd768
//   XREF to: 02dcd768 (DATA)
// 00501168: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00501168
//   XREF to: Stack[0x4] (READ)
// 0050116b: MOV EAX,dword ptr [EAX + 0x330]
// 00501171: CMP dword ptr [EAX + 0x56c],0x1
// 00501178: JNZ 0x0050117f
//   XREF to: 0050117f (CONDITIONAL_JUMP)
// 0050117a: MOV EBX,0x2dcd77c
//   XREF to: 02dcd77c (PARAM)
// 0050117f: TEST EBX,EBX
//   Label: LAB_0050117f
// 00501181: JNZ 0x00501217
//   XREF to: 00501217 (CONDITIONAL_JUMP)
// 00501187: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00501187
//   XREF to: Stack[0x4] (READ)
// 0050118a: FLD float ptr [EAX + 0x348]
// 00501190: FLDZ
// 00501192: FCOMPP
// 00501194: FNSTSW AX
// 00501196: SAHF
// 00501197: JC 0x0050122f
//   XREF to: 0050122f (CONDITIONAL_JUMP)
// 0050119d: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050119d
//   XREF to: Stack[0x4] (READ)
// 005011a0: MOV EAX,dword ptr [EAX + 0x330]
// 005011a6: MOV EDX,dword ptr [EAX + 0x568]
// 005011ac: PUSH EDX
// 005011ad: PUSH 0x630b38
//   XREF to: 00630b38 (DATA)
// 005011b2: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x678] (DATA)
// 005011b6: PUSH EAX
// 005011b7: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005011bc: ADD ESP,0xc
// 005011bf: PUSH 0x58
//   Label: LAB_005011bf
// 005011c1: MOV ECX,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 005011c8: PUSH ECX
// 005011c9: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 005011ce: ADD ESP,0x8
// 005011d1: MOV EBX,EAX
// 005011d3: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x678] (DATA)
// 005011d7: PUSH EAX
// 005011d8: MOV ESI,dword ptr [ESP + 0x648]
//   XREF to: Stack[-0x44] (READ)
// 005011df: PUSH ESI
// 005011e0: CALL engine_font.cpp_CBitFont_getTextWidth_FUN_004cfe80
//   XREF to: 004cfe80 (UNCONDITIONAL_CALL)
// 005011e5: ADD ESP,0x8
// 005011e8: MOV EDX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 005011ee: MOV EDI,dword ptr [ESP + 0x640]
//   XREF to: Stack[-0x48] (READ)
// 005011f5: PUSH 0x0
// 005011f7: SUB EDX,EDI
// 005011f9: PUSH 0xf8
// 005011fe: SUB EDX,EBX
// 00501200: PUSH EDX
// 00501201: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00501207: SUB EDX,EDI
// 00501209: SUB EDX,EAX
// 0050120b: PUSH EDX
// 0050120c: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x678] (DATA)
// 00501210: PUSH EAX
// 00501211: PUSH ESI
// 00501212: JMP 0x00500870
//   XREF to: 00500870 (UNCONDITIONAL_JUMP)
// 00501217: MOV ECX,dword ptr [ESP + 0x620]
//   Label: LAB_00501217
//   XREF to: Stack[-0x68] (READ)
// 0050121e: PUSH ECX
// 0050121f: PUSH EDI
// 00501220: PUSH ESI
// 00501221: PUSH EBX
//   XREF to: 02dcd77c (DATA)
// 00501222: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 00501227: ADD ESP,0x10
// 0050122a: JMP 0x00501187
//   XREF to: 00501187 (UNCONDITIONAL_JUMP)
// 0050122f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0050122f
//   XREF to: Stack[0x4] (READ)
// 00501232: CMP dword ptr [EAX + 0x44c],0x0
// 00501239: JNZ 0x0050119d
//   XREF to: 0050119d (CONDITIONAL_JUMP)
// 0050123f: MOV EAX,dword ptr [EAX + 0x330]
// 00501245: MOV ESI,dword ptr [EAX + 0x568]
// 0050124b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050124e: PUSH ESI
// 0050124f: MOV EDI,dword ptr [EAX + 0x458]
// 00501255: PUSH EDI
// 00501256: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 0050125b: ADD ESP,0x4
// 0050125e: PUSH EAX
// 0050125f: PUSH 0x630b3b
//   XREF to: 00630b3b (DATA)
// 00501264: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x678] (DATA)
// 00501268: PUSH EAX
// 00501269: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0050126e: ADD ESP,0x10
// 00501271: JMP 0x005011bf
//   XREF to: 005011bf (UNCONDITIONAL_JUMP)
// 00501276: PUSH EAX
//   Label: LAB_00501276
// 00501277: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050127a: MOV EBX,dword ptr [EAX + 0x330]
// 00501280: PUSH EBX
// 00501281: PUSH EAX
// 00501282: CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
// 00501287: ADD ESP,0xc
// 0050128a: TEST EAX,EAX
// 0050128c: JNZ 0x005012ab
//   XREF to: 005012ab (CONDITIONAL_JUMP)
// 0050128e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00501291: PUSH 0x1
// 00501293: MOV EDI,dword ptr [EAX + 0x330]
// 00501299: PUSH EDI
// 0050129a: PUSH EAX
// 0050129b: CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
// 005012a0: ADD ESP,0xc
// 005012a3: TEST EAX,EAX
// 005012a5: JZ 0x00501336
//   XREF to: 00501336 (CONDITIONAL_JUMP)
// 005012ab: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005012ab
//   XREF to: Stack[0x4] (READ)
// 005012ae: MOV EBX,dword ptr [EAX + 0x458]
// 005012b4: PUSH EBX
// 005012b5: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 005012ba: ADD ESP,0x4
// 005012bd: PUSH EAX
// 005012be: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005012c1: MOV ESI,dword ptr [EAX + 0x330]
// 005012c7: PUSH ESI
// 005012c8: CALL core_inv.cpp_getItemIconName_FUN_004fcf70
//   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
// 005012cd: ADD ESP,0x4
// 005012d0: PUSH EAX
// 005012d1: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005012d4: MOV EDI,dword ptr [EAX + 0x330]
// 005012da: PUSH EDI
// 005012db: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 005012e0: ADD ESP,0x4
// 005012e3: PUSH EAX
// 005012e4: PUSH 0x630b48
//   XREF to: 00630b48 (DATA)
// 005012e9: LEA EAX,[ESP + 0x520]
//   XREF to: Stack[-0x178] (DATA)
// 005012f0: PUSH EAX
// 005012f1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005012f6: ADD ESP,0x14
// 005012f9: PUSH 0x630b52
//   XREF to: 00630b52 (DATA)
// 005012fe: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00501303: ADD ESP,0x4
// 00501306: LEA EDI,[ESP + 0x510]
//   XREF to: Stack[-0x178] (DATA)
// 0050130d: MOV ESI,EAX
// 0050130f: PUSH EDI
// 00501310: SUB ECX,ECX
// 00501312: DEC ECX
// 00501313: MOV AL,0x0
// 00501315: SCASB.REPNE ES:EDI
// 00501317: DEC EDI
// 00501318: MOV AL,byte ptr [ESI]
//   Label: LAB_00501318
// 0050131a: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x178] (DATA)
// 0050131c: CMP AL,0x0
// 0050131e: JZ 0x00501330
//   XREF to: 00501330 (CONDITIONAL_JUMP)
// 00501320: MOV AL,byte ptr [ESI + 0x1]
// 00501323: ADD ESI,0x2
// 00501326: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x177] (WRITE)
// 00501329: ADD EDI,0x2
// 0050132c: CMP AL,0x0
// 0050132e: JNZ 0x00501318
//   XREF to: 00501318 (CONDITIONAL_JUMP)
// 00501330: POP EDI
//   Label: LAB_00501330
// 00501331: JMP 0x005008dd
//   XREF to: 005008dd (UNCONDITIONAL_JUMP)
// 00501336: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00501336
//   XREF to: Stack[0x4] (READ)
// 00501339: MOV EDX,dword ptr [EAX + 0x330]
// 0050133f: PUSH EDX
// 00501340: CALL core_inv.cpp_getItemIconName_FUN_004fcf70
//   XREF to: 004fcf70 (UNCONDITIONAL_CALL)
// 00501345: ADD ESP,0x4
// 00501348: PUSH EAX
// 00501349: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050134c: MOV ECX,dword ptr [EAX + 0x330]
// 00501352: PUSH ECX
// 00501353: CALL core_inv.cpp_getItemDisplayName_FUN_004fcf00
//   XREF to: 004fcf00 (UNCONDITIONAL_CALL)
// 00501358: ADD ESP,0x4
// 0050135b: PUSH EAX
// 0050135c: PUSH 0x630b5f
//   XREF to: 00630b5f (DATA)
// 00501361: JMP 0x005008cd
//   XREF to: 005008cd (UNCONDITIONAL_JUMP)
// 00501366: MOV EDX,EBX
//   Label: LAB_00501366
// 00501368: MOV EAX,EBX
// 0050136a: SAR EDX,0x1f
// 0050136d: SUB EAX,EDX
// 0050136f: SAR EAX,0x1
// 00501371: MOV EBX,EAX
// 00501373: MOV EDX,ESI
// 00501375: MOV EAX,ESI
// 00501377: SAR EDX,0x1f
// 0050137a: SUB EAX,EDX
// 0050137c: SAR EAX,0x1
// 0050137e: MOV EDI,0x28
// 00501383: MOV ECX,0x8
// 00501388: MOV dword ptr [ESP + 0x62c],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 0050138f: MOV dword ptr [ESP + 0x63c],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00501396: MOV ESI,EAX
// 00501398: JMP 0x00500a25
//   XREF to: 00500a25 (UNCONDITIONAL_JUMP)
// 0050139d: CMP dword ptr [EAX + 0x240],0x0
//   Label: LAB_0050139d
//   XREF to: 02d81cdc (READ)
// 005013a4: JNZ 0x00500cb2
//   XREF to: 00500cb2 (CONDITIONAL_JUMP)
// 005013aa: JMP 0x00500d3c
//   XREF to: 00500d3c (UNCONDITIONAL_JUMP)
// 005013af: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005013af
//   XREF to: Stack[0x4] (READ)
// 005013b2: FLD float ptr [EAX + 0x340]
// 005013b8: FLDZ
// 005013ba: FCOMPP
// 005013bc: FNSTSW AX
// 005013be: SAHF
// 005013bf: JC 0x00500d52
//   XREF to: 00500d52 (CONDITIONAL_JUMP)
// 005013c5: JMP 0x00500e93
//   XREF to: 00500e93 (UNCONDITIONAL_JUMP)
