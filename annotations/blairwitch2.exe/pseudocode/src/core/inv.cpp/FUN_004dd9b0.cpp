// Name: core_inv.cpp_FUN_004dd9b0
// Address: 004dd9b0
// Address Range: [[004dd9b0, 004dee69]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004dd9b0(CInventory *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004dd9b0(CInventory *param_1)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CBitFont *pCVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  CAlphaBitmap *this_ptr;
  char *pcVar9;
  byte bVar10;
  double dVar11;
  float afStackY_117c [36];
  int aiStackY_10ec [21];
  float afStackY_1098 [472];
  int iVar12;
  int iVar13;
  CMatrix3x3f *this_ptr_00;
  uint uVar15;
  longlong lVar14;
  CVector3f *euler_angles;
  float fStack_90c;
  float local_908;
  char local_904 [256];
  char acStack_804 [252];
  char acStack_708 [260];
  char acStack_604 [256];
  char acStack_504 [256];
  char acStack_404 [256];
  char acStack_304 [256];
  byte auStack_204 [112];
  float fStack_194;
  int local_190;
  char local_18c [4];
  char local_188 [4];
  float local_184 [2];
  CVector3f local_17c;
  float fStack_170;
  int local_16c;
  char local_168 [4];
  float local_164;
  int local_160;
  char local_15c [4];
  CVector3f local_158;
  CVector3f CStack_14c;
  int local_140;
  float local_13c [2];
  CVector3f CStack_134;
  CVector3i local_128;
  CVector3f CStack_11c;
  float fStack_110;
  int local_10c;
  char local_108 [4];
  int local_104;
  int local_100 [5];
  int iStack_ec;
  CVector3f CStack_e0;
  CVector3f local_d4;
  CVector3f CStack_c8;
  float local_bc;
  int local_b8;
  char local_b4 [4];
  CVector3f local_b0;
  int iStack_a4;
  int local_a0;
  char local_98 [4];
  int local_94;
  int local_90;
  char local_8c [4];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  CBitFont *local_48;
  CBitFont *local_44;
  int local_40;
  int local_3c;
  CBitFont *local_38;
  CBitFont *local_34;
  CBitFont *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  
  bVar10 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if (param_1->owner != *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
    return;
  }
  if (DAT_006141bc != _DAT_01d02f40) {
    core_inv_cpp_loadAssets_FUN_004da990();
  }
  local_94 = _DAT_01c37788;
  local_30 = _DAT_01511cc4;
  _DAT_01c37788 = 0;
  if ((DAT_006141bc < 0x180) && (param_1->render_mode_flag == 0)) {
    local_30 = _DAT_01511ccc;
  }
  if ((param_1->selected_weapons[param_1->current_group] == (CWeapon *)0x0) ||
     (param_1->weapon_highlight_timer <= 0.0)) goto LAB_004ddd00;
  local_68 = 0x000000D0;
  local_5c = 0x10;
  local_88 = 0x70;
  local_78 = (float)0x00000060;
  iVar8 = 0x24;
  if ((DAT_006141bc < 0x180) && (param_1->render_mode_flag == 0)) {
    local_68 = 0x000000D0 / 2;
    local_78 = (float)(0x00000060 / 2);
    iVar8 = 0x12;
    local_88 = 0x28;
    local_5c = 8;
  }
  local_8c[0] = -1;
  local_8c[1] = -1;
  local_8c[2] = '\0';
  local_8c[3] = '\0';
  if (param_1->weapon_highlight_timer < 1.0) {
    dVar11 = round
                       ((double)(param_1->weapon_highlight_timer * _DAT_005dbb06));
    local_90 = (int)ROUND(dVar11);
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (&param_1->selected_weapons[param_1->current_group]->base,
                      g_CLightGunClassInfo.name_hash);
  if (pCVar3 == (CDemonActor *)0x0) {
    iVar12 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd0a0
                       (param_1,&param_1->selected_weapons[param_1->current_group]->base,3);
    if ((iVar12 == 0) &&
       (iVar12 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd0a0
                           (param_1,&param_1->selected_weapons[param_1->current_group]->base,6),
       iVar12 == 0)) {
      local_94 = DAT_006141bc - iVar8;
      iVar8 = DAT_006141b8 - iVar8;
      this_ptr = (CAlphaBitmap *)0x0;
      iVar12 = core_actor_cpp_isOfClass_FUN_0040c840
                         (&param_1->selected_weapons[param_1->current_group]->base,
                          "CTommyGun");
      if (iVar12 != 0) {
        this_ptr = &CAlphaBitmap_01d02e44;
      }
      iVar12 = core_actor_cpp_isOfClass_FUN_0040c840
                         (&param_1->selected_weapons[param_1->current_group]->base,
                          "CShotgun");
      if (iVar12 != 0) {
        this_ptr = &CAlphaBitmap_01d02e94;
      }
      iVar12 = core_actor_cpp_isOfClass_FUN_0040c840
                         (&param_1->selected_weapons[param_1->current_group]->base,
                          "CElephantGun");
      if (iVar12 != 0) {
        this_ptr = &CAlphaBitmap_01d02e94;
      }
      iVar12 = core_actor_cpp_isOfClass_FUN_0040c840
                         (&param_1->selected_weapons[param_1->current_group]->base,&DAT_005dbaaf);
      if (iVar12 != 0) {
        if (param_1->selected_weapons[param_1->current_group]->ammo_type == AMMO_TYPE_GENERIC) {
          this_ptr = &CAlphaBitmap_01d02e58;
        }
        if (param_1->selected_weapons[param_1->current_group]->ammo_type == AMMO_TYPE_SILVER) {
          this_ptr = &CAlphaBitmap_01d02e6c;
        }
        if (param_1->selected_weapons[param_1->current_group]->ammo_type == AMMO_TYPE_LITHIUM) {
          this_ptr = &CAlphaBitmap_01d02e80;
        }
        if (param_1->selected_weapons[param_1->current_group]->ammo_type == AMMO_TYPE_MERCURY) {
          this_ptr = &CAlphaBitmap_01d02ea8;
        }
        if (param_1->selected_weapons[param_1->current_group]->ammo_type == AMMO_TYPE_HOLY) {
          this_ptr = &CAlphaBitmap_01d02ebc;
        }
      }
      if (this_ptr != (CAlphaBitmap *)0x0) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(this_ptr,iVar8,local_94,local_90);
      }
      if ((param_1->ammo_detail_timer <= 0.0) || (param_1->render_mode_flag != 0)) {
        pcVar7 = &DAT_005dbab4;
      }
      else {
        pcVar7 = "Bullets %d";
      }
      _sprintf(acStack_304,pcVar7);
      iVar12 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_34,0x58);
      iVar8 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_34,acStack_304);
      lVar14 = 0xf8;
      iVar12 = (DAT_006141bc - local_60) - iVar12;
      iVar8 = (DAT_006141b8 - local_60) - iVar8;
      pcVar7 = acStack_304;
      pCVar5 = local_34;
      goto LAB_004ddb97;
    }
  }
  else {
    uVar15 = 0x4ddb13;
    dVar11 = round
                       ((double)(pCVar3[2].particle_systems[0].fade_start * (float)_DAT_005dbb0a));
    local_24 = (int)ROUND(dVar11);
    _sprintf(acStack_708,&DAT_005dba8a);
    iVar8 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_38,0x58);
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_38,acStack_708);
    lVar14 = (ulonglong)uVar15 << 0x20;
    iVar12 = 0xf8;
    iVar8 = (DAT_006141bc - (int)local_64) - iVar8;
    pcVar7 = (char *)((DAT_006141b8 - (int)local_64) - iVar4);
    pCVar5 = (CBitFont *)acStack_708;
LAB_004ddb97:
    engine_font_cpp_FUN_004a8df0(pCVar5,pcVar7,iVar8,iVar12,lVar14);
  }
  if (param_1->render_mode_flag == 0) goto LAB_004ddd00;
  iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd0a0
                    (param_1,&param_1->selected_weapons[param_1->current_group]->base,3);
  if (iVar8 == 0) {
    iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd0a0
                      (param_1,&param_1->selected_weapons[param_1->current_group]->base,0);
    if ((iVar8 == 0) &&
       (iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004dd0a0
                          (param_1,&param_1->selected_weapons[param_1->current_group]->base,1),
       iVar8 == 0)) {
      core_inv_cpp_getItemDescription_FUN_004d9f80
                (&param_1->selected_weapons[param_1->current_group]->base);
      core_inv_cpp_getItemDisplayName_FUN_004d9f10
                (&param_1->selected_weapons[param_1->current_group]->base);
      pcVar7 = "%s\n\n%s";
      goto LAB_004ddc00;
    }
    core_inv_cpp_getItemDisplayName_FUN_004d9f10(&param_1->ammo_ptr->base);
    core_inv_cpp_getItemDescription_FUN_004d9f80
              (&param_1->selected_weapons[param_1->current_group]->base);
    core_inv_cpp_getItemDisplayName_FUN_004d9f10
              (&param_1->selected_weapons[param_1->current_group]->base);
    _sprintf(local_904,"%s\n\n%s %s");
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(" are loaded.");
    iVar8 = -1;
    pcVar7 = local_904;
    do {
      pcVar9 = pcVar7;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar9 = pcVar7 + (uint)bVar10 * -2 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
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
    core_inv_cpp_getItemDescription_FUN_004d9f80
              (&param_1->selected_weapons[param_1->current_group]->base);
    core_inv_cpp_getItemDisplayName_FUN_004d9f10
              (&param_1->selected_weapons[param_1->current_group]->base);
    pcVar7 = "%s\n\n%s";
LAB_004ddc00:
    _sprintf(local_904,pcVar7);
  }
  local_44 = local_34;
  iVar8 = engine_font_cpp_FUN_004ab2b0(local_34,local_904,0x1cee3b0,10,0x100);
  local_50 = iVar8;
  local_5c = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_34,0x58);
  iVar12 = (DAT_006141bc - local_7c) + local_60;
  local_54 = local_60 + (DAT_006141b8 - local_6c);
  local_24 = 0;
  if (0 < iVar8) {
    iVar8 = 0x1cee3b0;
    do {
      engine_font_cpp_FUN_004a8df0(local_44,iVar8,local_54,iVar12,0xf8);
      iVar8 = iVar8 + 0x100;
      local_24 = local_24 + 1;
      iVar12 = iVar12 + local_5c;
    } while (local_24 < local_50);
  }
LAB_004ddd00:
  if ((param_1->selected_items[param_1->current_group] != (CDemonActor *)0x0) &&
     (0.0 < param_1->item_highlight_timer)) {
    iVar12 = 0x10;
    local_88 = 0x70;
    local_68 = 0x000000D0;
    iVar8 = 0x00000060;
    if ((DAT_006141bc < 0x180) && (param_1->render_mode_flag == 0)) {
      local_68 = 0x000000D0 / 2;
      iVar8 = 0x00000060 / 2;
      iVar12 = 8;
      local_88 = 0x28;
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (param_1->selected_items[param_1->current_group],
                        g_CHealthItemClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      _sprintf(acStack_404,"%d x%3.0f%%");
      local_20 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_34,0x58);
      iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_34,acStack_404);
      engine_font_cpp_FUN_004a8df0
                (local_34,acStack_404,(DAT_006141b8 - iVar12) - iVar4,
                 (DAT_006141bc - iVar12) - (int)local_20,0xf8);
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (param_1->selected_items[param_1->current_group],g_CAmmoClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      _sprintf(acStack_504,"%d x 6");
      local_20 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_34,0x58);
      iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_34,acStack_504);
      engine_font_cpp_FUN_004a8df0
                (local_34,acStack_504,(DAT_006141b8 - iVar12) - iVar4,
                 (DAT_006141bc - iVar12) - (int)local_20,0xf8);
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                       (param_1->selected_items[param_1->current_group],
                        g_CFilmReelClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      core_inv_cpp_getItemDisplayName_FUN_004d9f10(pCVar3);
      _sprintf(acStack_604,&DAT_005dbafa);
      local_20 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_34,0x58);
      iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004aaf00(local_34,acStack_604);
      engine_font_cpp_FUN_004a8df0
                (local_34,acStack_604,(DAT_006141b8 - iVar12) - iVar4,
                 (DAT_006141bc - iVar12) - (int)local_20,0xf8);
    }
    if (param_1->render_mode_flag != 0) {
      core_inv_cpp_getItemDescription_FUN_004d9f80(param_1->selected_items[param_1->current_group]);
      core_inv_cpp_getItemDisplayName_FUN_004d9f10(param_1->selected_items[param_1->current_group]);
      _sprintf(acStack_804,"%s\n\n%s");
      local_48 = local_34;
      local_4c = engine_font_cpp_FUN_004ab2b0(local_34,acStack_804,0x1ceedb0,10,0x100);
      local_20 = (float)local_4c;
      local_58 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_34,0x58);
      iVar8 = (DAT_006141bc - iVar8) + iVar12;
      local_3c = (DAT_006141b8 - local_68) + iVar12;
      local_28 = 0;
      if (0 < (int)local_20) {
        iVar12 = 0x1ceedb0;
        do {
          engine_font_cpp_FUN_004a8df0(local_48,iVar12,local_3c,iVar8,0xf8);
          iVar12 = iVar12 + 0x100;
          local_28 = local_28 + 1;
          iVar8 = iVar8 + local_58;
        } while (local_28 < local_4c);
      }
    }
  }
  if ((g_CGamePtr->flashlight_active != 0) || (g_CGamePtr->goggles_active != 0)) {
    iStack_a4 = DAT_006141bc + -0x21;
    local_20 = (float)(DAT_006141bc + -6);
    iVar13 = 0x10;
    iVar4 = 0x4de122;
    iVar12 = (int)local_20;
    dVar11 = round
                       ((double)((float)(int)local_20 +
                                (float)(iStack_a4 - (int)local_20) * param_1->battery_charge *
                                (float)_DAT_005dbb12));
    iVar8 = DAT_006141bc;
    local_b0.z = (float)(int)ROUND(dVar11);
    engine_2d_c_fillRectColor_FUN_004031c0(6,(int)local_b0.z,iVar4,iVar13,iVar12);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01d02e08,4,iVar8 + -0x24,0xffff);
  }
  if ((0.0 < param_1->item_highlight_timer) || (0.0 < param_1->inventory_display_timer)) {
    fStack_90c = param_1->inventory_display_timer;
    if (fStack_90c < param_1->item_highlight_timer) {
      fStack_90c = param_1->item_highlight_timer;
    }
    local_84 = 0xffff;
    if (fStack_90c < 1.0) {
      dVar11 = round((double)(fStack_90c * _DAT_005dbb06));
      local_88 = (int)ROUND(dVar11);
    }
    local_908 = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x25a8) * (float)_DAT_005dbb12;
    if (local_908 < 0.0) {
      local_908 = 0.0;
    }
    if (1.0 < local_908) {
      local_908 = 1.0;
    }
    iVar8 = 0x3f;
    iVar12 = 0x1b;
    if (DAT_006141bc < 0x180) {
      iVar8 = 0x1f;
      iVar12 = 0xd;
    }
    local_a0 = (DAT_006141b8 + -4) - iVar12;
    iVar4 = local_84 / 2;
    iVar13 = 0x4de25e;
    local_20 = (float)iVar8;
    dVar11 = round((double)((float)iVar8 - (float)iVar8 * local_908));
    local_a0 = (int)ROUND(dVar11);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0
              (&CAlphaBitmap_01d02e1c,iStack_a4,local_a0 + 4,0,local_a0,iVar12 + -1,iVar8,iVar13);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01d02e30,iStack_a4,4,iVar4);
  }
  dVar11 = (double)param_1->message_display_timer;
  if (0.0 < dVar11) {
    local_80 = 0xffff;
    if (dVar11 < 1.0) {
      dVar11 = round(dVar11 * _DAT_005dbb1a);
      local_84 = (int)ROUND(dVar11);
    }
    engine_3d_c_setRenderAlpha_FUN_00406da0(local_80);
    local_30 = _DAT_01511cc4;
    if (DAT_006141bc < 0x180) {
      local_30 = _DAT_01511ccc;
    }
    pCVar5 = (CBitFont *)
             engine_font_cpp_FUN_004ab2b0(local_30,param_1->message_text,0x1cef7b0,10,0x100);
    local_38 = pCVar5;
    local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(local_30,0x58);
    iVar8 = (DAT_006141bc + -4) - local_40 * (int)pCVar5;
    if (((_DAT_01511ccc != local_30) || (_DAT_01d63250 == 0)) && (iVar12 = 0, 0 < (int)local_38)) {
      local_2c = 0x1cef7b0;
      do {
        engine_font_cpp_FUN_004a8df0(local_30,local_2c,4,iVar8,0xf8);
        iVar12 = iVar12 + 1;
        local_2c = local_2c + 0x100;
        iVar8 = iVar8 + local_40;
      } while (iVar12 < (int)local_38);
    }
  }
  iVar8 = CAlphaBitmap_01d02ed0.width;
  if (param_1->show_compass != 0) {
    iVar12 = DAT_006141bc + -2;
    iVar4 = iVar12 - CAlphaBitmap_01d02ed0.height;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01d02ed0,2,iVar4,0xffff);
    fVar2 = (float)_DAT_005dbb22;
    local_1c = iVar12 + iVar4;
    _DAT_01c37788 = 0;
    local_188[0] = '\0';
    local_188[1] = '\0';
    local_188[2] = '\0';
    local_188[3] = '\0';
    local_184[0] = 0.0;
    local_70 = (float)iVar8 * fVar2;
    local_20 = *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x34) -
               g_CDemonSetPtr->altitude_reference_y;
    local_74 = (float)(iVar8 + 4) * fVar2;
    local_184[1] = local_20;
    euler_angles = &local_b0;
    local_64 = (float)(iVar12 - iVar4) * fVar2;
    this_ptr_00 = (CMatrix3x3f *)(auStack_204 + 0x48);
    local_78 = (float)(iVar12 + iVar4) * fVar2;
    local_b0.x = 0.0;
    *(float *)((int)&local_b0 + (uint)bVar10 * -8 + 4) = local_184[(uint)bVar10 * -2];
    *(float *)((int)&local_b0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_184[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(this_ptr_00,euler_angles);
    engine_matrix_c_invertTransformMatrix_FUN_004e8730();
    CStack_134.y = -local_64;
    CStack_134.z = 0.0;
    CStack_134.x = -local_70;
    local_20 = CStack_134.y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
              ((CMatrix3x3f *)(auStack_204 + 0x48),&CStack_134,&local_d4);
    local_164 = local_d4.x;
    (&local_160)[(uint)bVar10 * -2] = *(int *)((int)&local_d4 + (uint)bVar10 * -8 + 4);
    *(uint *)(local_15c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&local_d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    if (&fStack_110 != &local_164) {
      fStack_110 = local_164;
      local_10c = local_160;
      local_108[0] = local_15c[0];
      local_108[1] = local_15c[1];
      local_108[2] = local_15c[2];
      local_108[3] = local_15c[3];
    }
    core_inv_cpp_FUN_004d9ff0(local_74 + fStack_110);
    local_128.x = iStack_ec;
    *(int *)((int)&local_128 + (uint)bVar10 * -8 + 4) = local_100[(uint)bVar10 * -2 + 6];
    *(int *)((int)&local_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_128);
    CStack_e0.y = -local_64;
    CStack_e0.x = local_70;
    CStack_e0.z = 0.0;
    local_20 = CStack_e0.y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
              ((CMatrix3x3f *)(auStack_204 + 0x48),&CStack_e0,&local_158);
    local_bc = local_158.x;
    (&local_b8)[(uint)bVar10 * -2] = *(int *)((int)&local_158 + (uint)bVar10 * -8 + 4);
    *(uint *)(local_b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&local_158 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    if (&fStack_110 != &local_bc) {
      fStack_110 = local_bc;
      local_10c = local_b8;
      local_108[0] = local_b4[0];
      local_108[1] = local_b4[1];
      local_108[2] = local_b4[2];
      local_108[3] = local_b4[3];
    }
    core_inv_cpp_FUN_004d9ff0(local_74 + fStack_110);
    local_128.x = local_100[2];
    *(int *)((int)&local_128 + (uint)bVar10 * -8 + 4) = local_100[(uint)bVar10 * -2 + 3];
    *(int *)((int)&local_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_128);
    CStack_14c.x = local_70;
    CStack_14c.y = local_64;
    CStack_14c.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
              ((CMatrix3x3f *)(auStack_204 + 0x48),&CStack_14c,&CStack_11c);
    fStack_194 = CStack_11c.x;
    (&local_190)[(uint)bVar10 * -2] = *(int *)((int)&CStack_11c + (uint)bVar10 * -8 + 4);
    *(uint *)(local_18c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&CStack_11c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    if (&fStack_110 != &fStack_194) {
      fStack_110 = fStack_194;
      local_10c = local_190;
      local_108[0] = local_18c[0];
      local_108[1] = local_18c[1];
      local_108[2] = local_18c[2];
      local_108[3] = local_18c[3];
    }
    core_inv_cpp_FUN_004d9ff0(local_74 + fStack_110);
    local_128.x = local_104;
    *(int *)((int)&local_128 + (uint)bVar10 * -8 + 4) = local_100[(uint)bVar10 * -2];
    *(int *)((int)&local_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_100[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_128);
    CStack_c8.y = local_64;
    CStack_c8.x = -local_70;
    CStack_c8.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
              ((CMatrix3x3f *)(auStack_204 + 0x48),&CStack_c8,&local_17c);
    fStack_170 = local_17c.x;
    (&local_16c)[(uint)bVar10 * -2] = *(int *)((int)&local_17c + (uint)bVar10 * -8 + 4);
    *(uint *)(local_168 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
         *(uint *)((int)&local_17c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    if (&fStack_110 != &fStack_170) {
      fStack_110 = fStack_170;
      local_10c = local_16c;
      local_108[0] = local_168[0];
      local_108[1] = local_168[1];
      local_108[2] = local_168[2];
      local_108[3] = local_168[3];
    }
    core_inv_cpp_FUN_004d9ff0(local_74 + fStack_110);
    local_128.x = local_140;
    *(float *)((int)&local_128 + (uint)bVar10 * -8 + 4) = local_13c[(uint)bVar10 * -2];
    *(float *)((int)&local_128 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         local_13c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_128);
    auStack_204._4_4_ = 4;
    auStack_204._24_4_ = 0;
    auStack_204._28_4_ = 0;
    auStack_204._32_4_ = 0;
    auStack_204._36_4_ = 1;
    auStack_204._40_4_ = 0x1000000;
    auStack_204._44_4_ = 0;
    auStack_204._52_4_ = 0x1000000;
    auStack_204._56_4_ = 0x1000000;
    auStack_204._48_4_ = 2;
    auStack_204._68_4_ = 0x1000000;
    auStack_204._60_4_ = 3;
    auStack_204._64_4_ = 0;
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0046b880(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)0x1d02ee4);
    engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
              (DAT_0060b280,(SMRGLPrimitivePoly *)auStack_204,0x23);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
  }
  DAT_01c37788 = local_98[0];
  DAT_01c37788_1._0_1_ = local_98[1];
  DAT_01c37788_1._1_1_ = local_98[2];
  DAT_01c37788_1._2_1_ = local_98[3];
  return;
}
