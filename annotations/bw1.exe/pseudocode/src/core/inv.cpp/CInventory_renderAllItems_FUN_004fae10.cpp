// Name: core_inv.cpp_CInventory_renderAllItems_FUN_004fae10
// Address: 004fae10
// Address Range: [[004fae10, 004fc23d]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004fae10(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_renderAllItems_FUN_004fae10(CInventory *this_ptr)

{
  char cVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  CBitFont *pCVar6;
  char *pcVar7;
  int iVar8;
  CAlphaBitmap *this_ptr_00;
  int iVar9;
  char *pcVar10;
  byte bVar11;
  double dVar12;
  float afStackY_115c [529];
  char *pcVar13;
  CMatrix3x3f *this_ptr_01;
  int alpha;
  CVector3f *euler_angles;
  float fStack_8ec;
  float local_8e8 [65];
  char acStack_7e4 [252];
  char acStack_6e8 [260];
  char acStack_5e4 [256];
  char acStack_4e4 [256];
  char acStack_3e4 [256];
  char acStack_2e4 [256];
  byte auStack_1e4 [112];
  int iStack_174;
  float local_170 [4];
  uint local_160;
  CVector3f local_15c;
  CVector3f CStack_150;
  CVector3f local_144;
  int iStack_138;
  float local_134 [4];
  uint local_124;
  int local_120;
  float local_11c [2];
  CVector3f CStack_114;
  float fStack_108;
  float local_104 [5];
  CVector3f local_f0;
  float fStack_e4;
  float local_e0 [2];
  CVector3i local_d8;
  CVector3f CStack_cc;
  CVector3f CStack_c0;
  float local_b4;
  float local_b0 [2];
  int local_a8;
  CVector3f CStack_9c;
  CVector3f local_90;
  int local_84;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  CBitFont *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  CBitFont *local_30;
  int local_2c;
  int local_28;
  CBitFont *local_24;
  CBitFont *local_20;
  CBitFont *local_1c;
  float local_18;
  
  bVar11 = 0;
  if (g_CGamePtr->letterbox_mode != 0) {
    return;
  }
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    return;
  }
  if (g_CFieldNotesPtr->is_displayed != 0) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->message_display_timer = 0.0;
    this_ptr->ammo_detail_timer = 0.0;
    this_ptr->weapon_highlight_timer = 0.0;
  }
  if (DAT_0061b49c != _DAT_01d1bc5c) {
    core_inv_cpp_loadAssets_FUN_004f70e0();
  }
  local_78 = _DAT_01c50948;
  local_1c = _DAT_0152d248;
  _DAT_01c50948 = 0;
  if ((DAT_0061b49c < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_1c = _DAT_0152d250;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_004fb230;
  iVar9 = 0x30;
  local_54 = (float)0x000000D0;
  local_48 = 0x10;
  local_70 = 0x70;
  local_60 = (float)0x00000060;
  iVar8 = 0x24;
  if ((DAT_0061b49c < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_54 = (float)(0x000000D0 / 2);
    local_60 = (float)(0x00000060 / 2);
    iVar9 = 0x18;
    iVar8 = 0x12;
    local_70 = 0x28;
    local_48 = 8;
  }
  local_64 = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    dVar12 = round
                       ((double)(this_ptr->weapon_highlight_timer * _DAT_005e6914));
    local_68 = (int)ROUND(dVar12);
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                     (&this_ptr->selected_weapon->base,g_CLightGunClassInfo.name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    dVar12 = round
                       ((double)(pCVar3[4].location.position.y * (float)_DAT_005e6918));
    local_1c = (CBitFont *)(int)ROUND(dVar12);
    _sprintf(acStack_6e8,&DAT_005e6894);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_24,0x58);
    iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_24,acStack_6e8);
    engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
              (local_24,acStack_6e8,(DAT_0061b498 - iVar9) - iVar5,
               (DAT_0061b49c - (int)local_50) - iVar4,0xf8,0);
  }
  pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                     (&this_ptr->selected_weapon->base,g_CLightPisClassInfo.name_hash);
  if (pCVar3 != (CDemonActor *)0x0) {
    dVar12 = round
                       ((double)(pCVar3[4].location.position.y * (float)_DAT_005e6918));
    local_1c = (CBitFont *)(int)ROUND(dVar12);
    _sprintf((char *)local_8e8,&DAT_005e6899);
    iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_24,0x58);
    iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_24,(char *)local_8e8);
    engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
              (local_24,(char *)local_8e8,(DAT_0061b498 - iVar9) - iVar5,
               (DAT_0061b49c - (int)local_50) - iVar4,0xf8,0);
  }
  iVar9 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004fa540
                    (this_ptr,&this_ptr->selected_weapon->base,3);
  if (iVar9 == 0) {
    iVar4 = DAT_0061b498 - iVar8;
    iVar8 = DAT_0061b49c - iVar8;
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                      (&this_ptr->selected_weapon->base,"CTommyGun");
    this_ptr_00 = (CAlphaBitmap *)0x0;
    if (iVar9 != 0) {
      this_ptr_00 = &CAlphaBitmap_01d1ba0c;
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                      (&this_ptr->selected_weapon->base,"CShotgun");
    if (iVar9 != 0) {
      this_ptr_00 = &CAlphaBitmap_01d1ba5c;
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550
                      (&this_ptr->selected_weapon->base,"CElephantGun");
    if (iVar9 != 0) {
      this_ptr_00 = &CAlphaBitmap_01d1ba5c;
    }
    iVar9 = core_actor_cpp_isOfClass_FUN_0040c550(&this_ptr->selected_weapon->base,&DAT_005e68be);
    if (iVar9 != 0) {
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_GENERIC) {
        this_ptr_00 = &CAlphaBitmap_01d1ba20;
      }
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_SILVER) {
        this_ptr_00 = &CAlphaBitmap_01d1ba34;
      }
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_LITHIUM) {
        this_ptr_00 = &CAlphaBitmap_01d1ba48;
      }
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_MERCURY) {
        this_ptr_00 = &CAlphaBitmap_01d1ba70;
      }
      if (this_ptr->selected_weapon->ammo_type == AMMO_TYPE_HOLY) {
        this_ptr_00 = &CAlphaBitmap_01d1ba84;
      }
    }
    if (this_ptr_00 != (CAlphaBitmap *)0x0) {
      engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(this_ptr_00,iVar4,iVar8,local_68);
    }
    iVar8 = core_actor_cpp_isOfClass_FUN_0040c550
                      (&this_ptr->selected_weapon->base,"CFlashlight");
    if (iVar8 == 0) {
      if ((this_ptr->ammo_detail_timer <= 0.0) || (this_ptr->render_mode_flag != 0)) {
        _sprintf(acStack_5e4,&DAT_005e68cf);
      }
      else {
        core_inv_cpp_getItemDisplayName_FUN_004f62e0(&this_ptr->ammo_ptr->base);
        _sprintf(acStack_5e4,"%s %d");
      }
      iVar8 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_20,0x58);
      pCVar6 = local_20;
      iVar9 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_20,acStack_5e4);
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                (pCVar6,acStack_5e4,(DAT_0061b498 - local_4c) - iVar9,
                 (DAT_0061b49c - local_4c) - iVar8,0xf8,0);
    }
  }
  if (this_ptr->render_mode_flag == 0) goto LAB_004fb230;
  iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004fa540
                    (this_ptr,&this_ptr->selected_weapon->base,3);
  if (iVar8 == 0) {
    iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004fa540
                      (this_ptr,&this_ptr->selected_weapon->base,0);
    if ((iVar8 == 0) &&
       (iVar8 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004fa540
                          (this_ptr,&this_ptr->selected_weapon->base,1), iVar8 == 0)) {
      core_inv_cpp_getItemDescription_FUN_004f6350(&this_ptr->selected_weapon->base);
      core_inv_cpp_getItemDisplayName_FUN_004f62e0(&this_ptr->selected_weapon->base);
      pcVar13 = "%s\n\n%s";
      goto LAB_004fb13d;
    }
    core_inv_cpp_getItemDisplayName_FUN_004f62e0(&this_ptr->ammo_ptr->base);
    core_inv_cpp_getItemDescription_FUN_004f6350(&this_ptr->selected_weapon->base);
    core_inv_cpp_getItemDisplayName_FUN_004f62e0(&this_ptr->selected_weapon->base);
    _sprintf(acStack_2e4,"%s\n\n%s %s");
    pcVar7 = support_newmsg_cpp_getLocalizedString_FUN_00531090(" are loaded.");
    iVar8 = -1;
    pcVar13 = acStack_2e4;
    do {
      pcVar10 = pcVar13;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar13 + (uint)bVar11 * -2 + 1;
      cVar1 = *pcVar13;
      pcVar13 = pcVar10;
    } while (cVar1 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar1 = *pcVar7;
      *pcVar10 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pcVar10[1] = cVar1;
      pcVar10 = pcVar10 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_inv_cpp_getItemDescription_FUN_004f6350(&this_ptr->selected_weapon->base);
    core_inv_cpp_getItemDisplayName_FUN_004f62e0(&this_ptr->selected_weapon->base);
    pcVar13 = "%s\n\n%s";
LAB_004fb13d:
    _sprintf(acStack_2e4,pcVar13);
  }
  pCVar6 = local_20;
  local_30 = local_20;
  iVar8 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260
                    (local_20,acStack_2e4,(char *)0x1d06f78,10,0x100,local_58 - local_74);
  local_38 = iVar8;
  local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(pCVar6,0x58);
  iVar9 = (DAT_0061b49c - local_64) + local_4c;
  local_34 = local_4c + (DAT_0061b498 - local_58);
  iVar4 = 0;
  if (0 < iVar8) {
    pcVar13 = (char *)0x1d06f78;
    do {
      iVar4 = iVar4 + 1;
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0(local_30,pcVar13,local_34,iVar9,0xf8,0);
      pcVar13 = pcVar13 + 0x100;
      iVar9 = iVar9 + local_40;
    } while (iVar4 < local_38);
  }
LAB_004fb230:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    iVar4 = 0x10;
    local_70 = 0x70;
    iVar8 = 0x00000060;
    iVar9 = 0x000000D0;
    if ((DAT_0061b49c < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar9 = 0x000000D0 / 2;
      iVar8 = 0x00000060 / 2;
      iVar4 = 8;
      local_70 = 0x28;
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                       (this_ptr->selected_item,g_CHealthItemClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      _sprintf(acStack_4e4,"%d x%3.0f%%");
      local_18 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_20,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_20,acStack_4e4);
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                (local_20,acStack_4e4,(DAT_0061b498 - iVar4) - iVar5,
                 (DAT_0061b49c - iVar4) - (int)local_18,0xf8,0);
    }
    pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c600
                       (this_ptr->selected_item,g_CFilmReelClassInfo.name_hash);
    if (pCVar3 != (CDemonActor *)0x0) {
      core_inv_cpp_getItemDisplayName_FUN_004f62e0(pCVar3);
      _sprintf(acStack_7e4,&DAT_005e6909);
      local_18 = (float)engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_20,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_004c3ea0(local_20,acStack_7e4);
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                (local_20,acStack_7e4,(DAT_0061b498 - iVar4) - iVar5,
                 (DAT_0061b49c - iVar4) - (int)local_18,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemDescription_FUN_004f6350(this_ptr->selected_item);
      core_inv_cpp_getItemDisplayName_FUN_004f62e0(this_ptr->selected_item);
      _sprintf(acStack_3e4,"%s\n\n%s");
      local_44 = local_20;
      local_28 = engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260
                           (local_20,acStack_3e4,(char *)0x1d07978,10,0x100,iVar9 - local_70);
      local_18 = (float)local_28;
      local_3c = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_20,0x58);
      iVar8 = (DAT_0061b49c - iVar8) + iVar4;
      local_2c = (DAT_0061b498 - iVar9) + iVar4;
      iVar9 = 0;
      if (0 < (int)local_18) {
        pcVar13 = (char *)0x1d07978;
        do {
          iVar9 = iVar9 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_004c1dd0(local_44,pcVar13,local_2c,iVar8,0xf8,0);
          pcVar13 = pcVar13 + 0x100;
          iVar8 = iVar8 + local_3c;
        } while (iVar9 < local_28);
      }
    }
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    fStack_8ec = this_ptr->inventory_display_timer;
    if (fStack_8ec < this_ptr->item_highlight_timer) {
      fStack_8ec = this_ptr->item_highlight_timer;
    }
    local_6c = 0xffff;
    if (fStack_8ec < 1.0) {
      dVar12 = round((double)(fStack_8ec * _DAT_005e6914));
      local_70 = (int)ROUND(dVar12);
    }
    local_8e8[0] = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x2538) *
                   (float)_DAT_005e6920;
    if (local_8e8[0] < 0.0) {
      local_8e8[0] = 0.0;
    }
    if (1.0 < local_8e8[0]) {
      local_8e8[0] = 1.0;
    }
    local_18 = 8.82818e-44;
    iVar8 = 0x1b;
    if (DAT_0061b49c < 0x180) {
      local_18 = 4.34403e-44;
      iVar8 = 0xd;
    }
    local_84 = (DAT_0061b498 + -4) - iVar8;
    iVar4 = local_6c / 2;
    iVar5 = 0x4fb620;
    iVar9 = (int)local_18;
    dVar12 = round
                       ((double)((float)(int)local_18 - (float)(int)local_18 * local_8e8[0]));
    local_84 = (int)ROUND(dVar12);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d660
              (&CAlphaBitmap_01d1b9e4,(int)local_90.z,local_84 + 4,0,local_84,iVar8 + -1,iVar5,iVar9
              );
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01d1b9f8,(int)local_90.z,4,iVar4);
  }
  dVar12 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar12) {
    local_78 = 0xffff;
    if (dVar12 < 1.0) {
      dVar12 = round(dVar12 * _DAT_005e6928);
      local_7c = (int)ROUND(dVar12);
    }
    engine_3d_c_setRenderAlpha_FUN_00406bd0(local_78);
    local_1c = _DAT_0152d248;
    iVar8 = 0x00000060;
    if (DAT_0061b49c < 0x180) {
      iVar8 = 0x00000060 / 2;
      local_1c = _DAT_0152d250;
    }
    pCVar6 = (CBitFont *)
             engine_font_cpp_CBitFont_wrapTextToLines_FUN_004c4260
                       (local_1c,this_ptr->message_text,(char *)0x1d08378,10,0x100,
                        (DAT_0061b498 - iVar8) + -4);
    local_24 = pCVar6;
    local_48 = engine_font_cpp_CBitFont_getCharHeight_FUN_004c4510(local_1c,0x58);
    iVar8 = (DAT_0061b49c + -4) - local_48 * (int)pCVar6;
    if (((_DAT_0152d250 != local_1c) || (_DAT_01d7f1b8 == 0)) && (iVar9 = 0, 0 < (int)local_24)) {
      pcVar13 = (char *)0x1d08378;
      do {
        iVar9 = iVar9 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_004c1dd0(local_1c,pcVar13,4,iVar8,0xf8,0);
        pcVar13 = pcVar13 + 0x100;
        iVar8 = iVar8 + local_48;
      } while (iVar9 < (int)local_24);
    }
  }
  if ((this_ptr->show_sps != 0) &&
     (engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1baf4,2,2,0xffff),
     iVar8 = _DAT_01d1bc48, _DAT_01d1bc48 != -1)) {
    alpha = 0xffff;
    iVar5 = 7;
    iVar4 = 0x20;
    iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (CAlphaBitmap_ARRAY_01d1bb08 + iVar8 * 4 + iVar9,iVar4,iVar5,alpha);
  }
  iVar8 = CAlphaBitmap_01d1ba98.width;
  if (this_ptr->show_compass != 0) {
    iVar4 = DAT_0061b49c + -2;
    iVar9 = iVar4 - CAlphaBitmap_01d1ba98.height;
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01d1ba98,2,iVar9,0xffff);
    fVar2 = (float)_DAT_005e6930;
    _DAT_01c50948 = 0;
    local_104[2] = 0.0;
    local_104[3] = 0.0;
    local_54 = (float)iVar8 * fVar2;
    local_18 = *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x34) -
               g_CDemonSetPtr->altitude_reference_y;
    local_60 = (float)(iVar8 + 4) * fVar2;
    local_104[4] = local_18;
    euler_angles = &local_144;
    local_5c = (float)(iVar4 - iVar9) * fVar2;
    this_ptr_01 = (CMatrix3x3f *)(auStack_1e4 + 0x48);
    local_50 = (float)(iVar9 + iVar4) * fVar2;
    local_144.x = 0.0;
    *(float *)((int)&local_144 + (uint)bVar11 * -8 + 4) = local_104[(uint)bVar11 * -2 + 3];
    *(float *)((int)&local_144 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(this_ptr_01,euler_angles);
    engine_matrix_c_invertTransformMatrix_FUN_005073d0();
    CStack_c0.y = -local_5c;
    CStack_c0.z = 0.0;
    CStack_c0.x = -local_54;
    local_18 = CStack_c0.y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(auStack_1e4 + 0x48),&CStack_c0,&CStack_114);
    fStack_108 = CStack_114.x;
    local_104[(uint)bVar11 * -2] = *(float *)((int)&CStack_114 + (uint)bVar11 * -8 + 4);
    local_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&CStack_114 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    if (local_134 + 2 != &fStack_108) {
      local_134[2] = fStack_108;
      local_134[3] = local_104[0];
      local_124 = local_104[1];
    }
    core_inv_cpp_FUN_004f63c0(local_60 + local_134[2]);
    local_d8.x = iStack_138;
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + 4) = local_134[(uint)bVar11 * -2];
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_134[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_d8);
    CStack_9c.y = -local_5c;
    CStack_9c.x = local_54;
    CStack_9c.z = 0.0;
    local_18 = CStack_9c.y;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(auStack_1e4 + 0x48),&CStack_9c,&CStack_cc);
    local_170[2] = CStack_cc.x;
    local_170[(uint)bVar11 * -2 + 3] = *(float *)((int)&CStack_cc + (uint)bVar11 * -8 + 4);
    local_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         *(float *)((int)&CStack_cc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    if (local_134 + 2 != local_170 + 2) {
      local_134[2] = local_170[2];
      local_134[3] = local_170[3];
      local_124 = local_160;
    }
    core_inv_cpp_FUN_004f63c0(local_60 + local_134[2]);
    local_d8.x = local_120;
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + 4) = local_11c[(uint)bVar11 * -2];
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_11c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_d8);
    CStack_150.x = local_54;
    CStack_150.y = local_5c;
    CStack_150.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(auStack_1e4 + 0x48),&CStack_150,&local_f0);
    local_b4 = local_f0.x;
    local_b0[(uint)bVar11 * -2] = *(float *)((int)&local_f0 + (uint)bVar11 * -8 + 4);
    local_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&local_f0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    if (local_134 + 2 != &local_b4) {
      local_134[2] = local_b4;
      local_134[3] = local_b0[0];
      local_124 = local_b0[1];
    }
    core_inv_cpp_FUN_004f63c0(local_60 + local_134[2]);
    local_d8.x = iStack_174;
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + 4) = local_170[(uint)bVar11 * -2];
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_170[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_d8);
    local_90.y = local_5c;
    local_90.x = -local_54;
    local_90.z = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
              ((CMatrix3x3f *)(auStack_1e4 + 0x48),&local_90,&local_15c);
    fStack_e4 = local_15c.x;
    local_e0[(uint)bVar11 * -2] = *(float *)((int)&local_15c + (uint)bVar11 * -8 + 4);
    local_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         *(float *)((int)&local_15c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    if (local_134 + 2 != &fStack_e4) {
      local_134[2] = fStack_e4;
      local_134[3] = local_e0[0];
      local_124 = local_e0[1];
    }
    core_inv_cpp_FUN_004f63c0(local_60 + local_134[2]);
    local_d8.x = local_a8;
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + 4) = local_b0[(uint)bVar11 * -2 + 3];
    *(float *)((int)&local_d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         local_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    engine_special_cpp_transformAndProjectPoint_FUN_00580173
              (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_d8);
    auStack_1e4._4_4_ = 4;
    auStack_1e4._24_4_ = 0;
    auStack_1e4._28_4_ = 0;
    auStack_1e4._32_4_ = 0;
    auStack_1e4._36_4_ = 1;
    auStack_1e4._40_4_ = 0x1000000;
    auStack_1e4._44_4_ = 0;
    auStack_1e4._52_4_ = 0x1000000;
    auStack_1e4._56_4_ = 0x1000000;
    auStack_1e4._48_4_ = 2;
    auStack_1e4._68_4_ = 0x1000000;
    auStack_1e4._60_4_ = 3;
    auStack_1e4._64_4_ = 0;
    engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,0);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(DAT_00612560,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)0x1d1baac);
    engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
              (DAT_00612560,(SMRGLPrimitivePoly *)auStack_1e4,0x23);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  }
  _DAT_01c50948 = local_7c;
  return;
}
