// Name: core_inv.cpp_FUN_004c2470
// Address: 004c2470
// Address Range: [[004c2470, 004c31a9]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_FUN_004c2470(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_FUN_004c2470(CInventory *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  CAlphaBitmap *this_ptr_00;
  char *pcVar8;
  byte bVar9;
  double dVar10;
  CBitFont *pCVar11;
  int iVar12;
  uint uVar15;
  longlong lVar13;
  ulonglong uVar14;
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
  char local_70 [4];
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
  
  bVar9 = 0;
  if (*(int *)(0x01C775EC + 0x228) != 0) {
    return;
  }
  if (this_ptr->owner != *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  if (DAT_005b7620 != _DAT_01cc30a0) {
    core_inv_cpp_loadAssets_FUN_004befa0();
  }
  local_6c = _DAT_01c02594;
  _DAT_01c02594 = 0;
  local_44 = _DAT_014b9904;
  if ((DAT_005b7620 < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_44 = _DAT_014b990c;
  }
  if ((this_ptr->selected_weapon == (CWeapon *)0x0) || (this_ptr->weapon_highlight_timer <= 0.0))
  goto LAB_004c27a0;
  local_50 = INT_005bab60;
  local_48 = (CBitFont *)0x10;
  local_58 = 0x70;
  iVar7 = 0x24;
  local_54 = INT_005bab64;
  if ((DAT_005b7620 < 0x180) && (this_ptr->render_mode_flag == 0)) {
    local_50 = INT_005bab60 / 2;
    local_54 = INT_005bab64 / 2;
    iVar7 = 0x12;
    local_58 = 0x28;
    local_48 = (CBitFont *)0x8;
  }
  local_68 = 0xffff;
  if (this_ptr->weapon_highlight_timer < 1.0) {
    dVar10 = round
                       ((double)(this_ptr->weapon_highlight_timer * 65535.0f));
    local_6c = (int)ROUND(dVar10);
  }
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (&this_ptr->selected_weapon->base,g_CLightGunActorType_01cc3688.name_hash);
  if (pCVar2 == (CDemonActor *)0x0) {
    iVar12 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0
                       (this_ptr,&this_ptr->selected_weapon->base,3);
    if (iVar12 == 0) {
      iVar3 = DAT_005b761c - iVar7;
      iVar7 = DAT_005b7620 - iVar7;
      iVar12 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CTommyGun");
      this_ptr_00 = (CAlphaBitmap *)0x0;
      if (iVar12 != 0) {
        this_ptr_00 = (CAlphaBitmap *)&DAT_01cc3014;
      }
      iVar12 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CShotgun");
      if (iVar12 != 0) {
        this_ptr_00 = (CAlphaBitmap *)&DAT_01cc3064;
      }
      iVar12 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CElephantGun");
      if (iVar12 != 0) {
        this_ptr_00 = (CAlphaBitmap *)&DAT_01cc3064;
      }
      iVar12 = core_actor_cpp_isOfClass_FUN_0040d7e0
                         (&this_ptr->selected_weapon->base,"CGun");
      if (iVar12 != 0) {
        if (this_ptr->selected_weapon->ammo_type == 0) {
          this_ptr_00 = (CAlphaBitmap *)&DAT_01cc3028;
        }
        if (this_ptr->selected_weapon->ammo_type == 3) {
          this_ptr_00 = (CAlphaBitmap *)&DAT_01cc303c;
        }
        if (this_ptr->selected_weapon->ammo_type == 7) {
          this_ptr_00 = (CAlphaBitmap *)&DAT_01cc3050;
        }
        if (this_ptr->selected_weapon->ammo_type == 8) {
          this_ptr_00 = (CAlphaBitmap *)&DAT_01cc3078;
        }
        if (this_ptr->selected_weapon->ammo_type == 1) {
          this_ptr_00 = (CAlphaBitmap *)&DAT_01cc308c;
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
      iVar12 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      pCVar11 = local_48;
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,local_67c);
      lVar13 = 0xf8;
      iVar12 = (DAT_005b7620 - (int)local_4c) - iVar12;
      iVar7 = (DAT_005b761c - (int)local_4c) - iVar7;
      pcVar6 = local_67c;
      goto LAB_004c2650;
    }
  }
  else {
    uVar15 = 0x4c25da;
    dVar10 = round
                       ((double)(pCVar2[4].orient_matrix.m[0].x * (float)100));
    local_1c = (CBitFont *)(int)ROUND(dVar10);
    _sprintf(acStack_480,"%d%%",local_1c);
    pCVar11 = local_4c;
    iVar7 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_4c,0x58);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(pCVar11,acStack_480);
    lVar13 = (ulonglong)uVar15 << 0x20;
    iVar12 = 0xf8;
    iVar7 = (DAT_005b7620 - local_50) - iVar7;
    pcVar6 = (char *)((DAT_005b761c - local_50) - iVar3);
    pCVar11 = (CBitFont *)acStack_480;
LAB_004c2650:
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (pCVar11,pcVar6,iVar7,iVar12,(int)lVar13,(int)((ulonglong)lVar13 >> 0x20));
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
      pcVar6 = core_inv_cpp_getItemIconName_FUN_004bed10(&this_ptr->selected_weapon->base);
      pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->selected_weapon->base);
      uVar14 = CONCAT44(pcVar6,pcVar4);
      pcVar6 = "%s\n\n%s";
      goto LAB_004c26ad;
    }
    pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->ammo_ptr->base);
    pcVar4 = core_inv_cpp_getItemIconName_FUN_004bed10(&this_ptr->selected_weapon->base);
    uVar14 = CONCAT44(pcVar6,pcVar4);
    pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->selected_weapon->base);
    _sprintf(acStack_17c,"%s\n\n%s %s",pcVar6,uVar14);
    pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370(" are loaded.");
    iVar7 = -1;
    pcVar6 = acStack_17c;
    do {
      pcVar8 = pcVar6;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      pcVar8 = pcVar6 + (uint)bVar9 * -2 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
  }
  else {
    pcVar6 = core_inv_cpp_getItemIconName_FUN_004bed10(&this_ptr->selected_weapon->base);
    pcVar4 = core_inv_cpp_getItemDisplayName_FUN_004beca0(&this_ptr->selected_weapon->base);
    uVar14 = CONCAT44(pcVar6,pcVar4);
    pcVar6 = "%s\n\n%s";
LAB_004c26ad:
    _sprintf(acStack_17c,pcVar6,uVar14);
  }
  local_2c = local_48;
  iVar7 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                    (local_48,acStack_17c,(char *)0x1cae580,10,0x100,local_54 - local_5c);
  local_34 = iVar7;
  local_38 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
  iVar12 = (DAT_005b7620 - local_58) + (int)local_4c;
  local_30 = (int)local_4c + (DAT_005b761c - local_54);
  iVar3 = 0;
  if (0 < iVar7) {
    pcVar6 = (char *)0x1cae580;
    do {
      iVar3 = iVar3 + 1;
      engine_font_cpp_CBitFont_drawText_FUN_00490980(local_2c,pcVar6,local_30,iVar12,0xf8,0);
      pcVar6 = pcVar6 + 0x100;
      iVar12 = iVar12 + local_38;
    } while (iVar3 < local_34);
  }
LAB_004c27a0:
  if ((this_ptr->selected_item != (CDemonActor *)0x0) && (0.0 < this_ptr->item_highlight_timer)) {
    local_60 = 0x70;
    local_50 = 0x10;
    iVar7 = INT_005bab60;
    iVar12 = INT_005bab64;
    if ((DAT_005b7620 < 0x180) && (this_ptr->render_mode_flag == 0)) {
      iVar7 = INT_005bab60 / 2;
      iVar12 = INT_005bab64 / 2;
      local_60 = 0x28;
      local_50 = 8;
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (this_ptr->selected_item,g_CHealthItemActorType_01cae098.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      _sprintf(acStack_37c,"%d x%3.0f%%",pCVar2[2].location.area_id,
                 (double)pCVar2[2].orient.vec.x);
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,acStack_37c);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (local_48,acStack_37c,(DAT_005b761c - local_50) - iVar5,
                 (DAT_005b7620 - local_50) - iVar3,0xf8,0);
    }
    pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                       (this_ptr->selected_item,g_CFilmReelActorType_01c08c8c.name_hash);
    if (pCVar2 != (CDemonActor *)0x0) {
      core_inv_cpp_getItemDisplayName_FUN_004beca0(pCVar2);
      _sprintf(acStack_27c,"%s");
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar5 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,acStack_27c);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (local_48,acStack_27c,(DAT_005b761c - local_50) - iVar5,
                 (DAT_005b7620 - local_50) - iVar3,0xf8,0);
    }
    if (this_ptr->render_mode_flag != 0) {
      core_inv_cpp_getItemIconName_FUN_004bed10(this_ptr->selected_item);
      pcVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(this_ptr->selected_item);
      _sprintf(acStack_57c,"%s\n\n%s",pcVar6);
      local_28 = local_48;
      local_44 = (CBitFont *)
                 engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                           (local_48,acStack_57c,(char *)0x1caef80,10,0x100,iVar7 - local_60);
      local_18 = local_44;
      local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar12 = (DAT_005b7620 - iVar12) + local_50;
      local_3c = local_50 + (DAT_005b761c - iVar7);
      iVar7 = 0;
      if (0 < (int)local_18) {
        pcVar6 = (char *)0x1caef80;
        do {
          iVar7 = iVar7 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_00490980(local_28,pcVar6,local_3c,iVar12,0xf8,0);
          pcVar6 = pcVar6 + 0x100;
          iVar12 = iVar12 + local_40;
        } while (iVar7 < (int)local_44);
      }
    }
  }
  if ((*(int *)(0x01C775EC + 0x244) != 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
    iStack_7c = DAT_005b7620 + -0x21;
    local_18 = (CBitFont *)(DAT_005b7620 + -6);
    iVar3 = 0x10;
    iVar12 = 0x4c2ae5;
    pCVar11 = local_18;
    dVar10 = round
                       ((double)((float)(int)local_18 +
                                (float)(iStack_7c - (int)local_18) * this_ptr->battery_charge *
                                (float)0.01));
    iVar7 = DAT_005b7620;
    iStack_80 = (int)ROUND(dVar10);
    engine_2d_c_fillRectColor_FUN_00403e60(6,iStack_80,iVar12,iVar3,(int)pCVar11);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
              ((CAlphaBitmap *)&DAT_01cc2fd8,4,iVar7 + -0x24,0xffff);
  }
  if ((0.0 < this_ptr->item_highlight_timer) || (0.0 < this_ptr->inventory_display_timer)) {
    local_680 = this_ptr->inventory_display_timer;
    if (local_680 < this_ptr->item_highlight_timer) {
      local_680 = this_ptr->item_highlight_timer;
    }
    local_68 = 0xffff;
    if (local_680 < 1.0) {
      dVar10 = round((double)(local_680 * 65535.0f));
      local_6c = (int)ROUND(dVar10);
    }
    fStack_684 = *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) *
                 (float)0.01;
    if (fStack_684 < 0.0) {
      fStack_684 = 0.0;
    }
    if (1.0 < fStack_684) {
      fStack_684 = 1.0;
    }
    local_18 = (CBitFont *)0x3f;
    iVar7 = 0x1b;
    if (DAT_005b7620 < 0x180) {
      local_18 = (CBitFont *)0x1f;
      iVar7 = 0xd;
    }
    local_78 = (DAT_005b761c + -4) - iVar7;
    iVar12 = local_68 / 2;
    iVar3 = 0x4c2c2e;
    pCVar11 = local_18;
    dVar10 = round
                       ((double)((float)(int)local_18 - (float)(int)local_18 * fStack_684));
    local_78 = (int)ROUND(dVar10);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0
              ((CAlphaBitmap *)&DAT_01cc2fec,iStack_7c,local_78 + 4,0,local_78,iVar7 + -1,iVar3,
               (int)pCVar11);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
              ((CAlphaBitmap *)&DAT_01cc3000,iStack_7c,4,iVar12);
  }
  dVar10 = (double)this_ptr->message_display_timer;
  if (0.0 < dVar10) {
    local_64 = 0xffff;
    if (dVar10 < 1.0) {
      dVar10 = round(dVar10 * 65535);
      local_68 = (int)ROUND(dVar10);
    }
    engine_3d_c_setRenderAlpha_FUN_00408370(local_64);
    local_1c = _DAT_014b9904;
    iVar7 = INT_005bab64;
    if (DAT_005b7620 < 0x180) {
      iVar7 = INT_005bab64 / 2;
      local_1c = _DAT_014b990c;
    }
    pCVar11 = local_1c;
    iVar7 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                      (local_1c,this_ptr->message_text,(char *)0x1caf980,10,0x100,
                       (DAT_005b761c - iVar7) + -4);
    local_20 = iVar7;
    local_24 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(pCVar11,0x58);
    iVar7 = (DAT_005b7620 + -4) - local_24 * iVar7;
    if (((_DAT_014b990c != local_1c) || (_DAT_01d16810 == 0)) && (iVar12 = 0, 0 < local_20)) {
      pcVar6 = (char *)0x1caf980;
      do {
        iVar12 = iVar12 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_00490980(local_1c,pcVar6,4,iVar7,0xf8,0);
        pcVar6 = pcVar6 + 0x100;
        iVar7 = iVar7 + local_24;
      } while (iVar12 < local_20);
    }
  }
  DAT_01c02594 = local_70[0];
  DAT_01c02594_1._0_1_ = local_70[1];
  DAT_01c02594_1._1_1_ = local_70[2];
  DAT_01c02594_1._2_1_ = local_70[3];
  return;
}
