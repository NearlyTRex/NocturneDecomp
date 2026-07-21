// Name: FUN_004c2470
// Address: 004c2470
// Address Range: [[004c2470, 004c31a9]]
// Convention: unknown
// Signature: void FUN_004c2470(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c2470(float *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte *puVar9;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  float10 fVar13;
  byte *puVar14;
  char *pcVar15;
  uint uVar18;
  longlong lVar16;
  ulonglong uVar17;
  float fStack_684;
  float local_680;
  byte local_67c [256];
  byte auStack_57c [252];
  byte auStack_480 [260];
  byte auStack_37c [256];
  byte auStack_27c [256];
  char acStack_17c [252];
  int iStack_80;
  int iStack_7c;
  int local_78;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  byte *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar12 = 0;
  if (*(int *)(0x01C775EC + 0x228) != 0) {
    return;
  }
  if (param_1[1] != *(float *)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    return;
  }
  if (DAT_005b7620 != _DAT_01cc30a0) {
    core_inv_cpp_loadAssets_FUN_004befa0();
  }
  local_6c = _DAT_01c02594;
  _DAT_01c02594 = 0;
  local_44 = _DAT_014b9904;
  if ((DAT_005b7620 < 0x180) && (param_1[0x113] == 0.0)) {
    local_44 = _DAT_014b990c;
  }
  if ((param_1[0xcc] == 0.0) || (param_1[0xce] <= 0.0)) goto LAB_004c27a0;
  local_50 = 0x000000D0;
  local_48 = (byte *)0x10;
  local_58 = 0x70;
  iVar10 = 0x24;
  local_54 = 0x00000060;
  if ((DAT_005b7620 < 0x180) && (param_1[0x113] == 0.0)) {
    local_50 = 0x000000D0 / 2;
    local_54 = 0x00000060 / 2;
    iVar10 = 0x12;
    local_58 = 0x28;
    local_48 = (byte *)0x8;
  }
  local_68 = 0xffff;
  if (param_1[0xce] < 1.0) {
    fVar13 = (float10)round((float10)param_1[0xce] * (float10)_DAT_005874dd)
    ;
    local_6c = (int)ROUND(fVar13);
  }
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(param_1[0xcc],_DAT_01cc36c0);
  if (iVar3 == 0) {
    iVar3 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(param_1,param_1[0xcc],3);
    if (iVar3 == 0) {
      iVar7 = DAT_005b761c - iVar10;
      iVar10 = DAT_005b7620 - iVar10;
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1[0xcc],"CTommyGun");
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = 0x1cc3014;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1[0xcc],"CShotgun");
      if (iVar3 != 0) {
        iVar4 = 0x1cc3064;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1[0xcc],"CElephantGun");
      if (iVar3 != 0) {
        iVar4 = 0x1cc3064;
      }
      iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(param_1[0xcc],&DAT_00587492);
      if (iVar3 != 0) {
        if (*(int *)((int)param_1[0xcc] + 0x564) == 0) {
          iVar4 = 0x1cc3028;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 3) {
          iVar4 = 0x1cc303c;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 7) {
          iVar4 = 0x1cc3050;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 8) {
          iVar4 = 0x1cc3078;
        }
        if (*(int *)((int)param_1[0xcc] + 0x564) == 1) {
          iVar4 = 0x1cc308c;
        }
      }
      if (iVar4 != 0) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(iVar4,iVar7,iVar10,local_6c);
      }
      if ((param_1[0xd2] <= 0.0) || (param_1[0x113] != 0.0)) {
        _sprintf(local_67c,&DAT_00587497,*(uint *)((int)param_1[0xcc] + 0x560));
      }
      else {
        uVar5 = core_inv_cpp_getItemDisplayName_FUN_004beca0
                          (param_1[0x116],*(uint *)((int)param_1[0xcc] + 0x560));
        _sprintf(local_67c,"%s %d",uVar5);
      }
      iVar3 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      puVar14 = local_48;
      iVar10 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,local_67c);
      lVar16 = 0xf8;
      iVar3 = (DAT_005b7620 - local_4c) - iVar3;
      iVar10 = (DAT_005b761c - local_4c) - iVar10;
      puVar9 = local_67c;
      goto LAB_004c2650;
    }
  }
  else {
    uVar18 = 0x4c25da;
    fVar13 = (float10)round
                                ((float10)*(float *)(iVar3 + 0x57c) * (float10)_DAT_005874e1);
    local_1c = (int)ROUND(fVar13);
    _sprintf(auStack_480,&DAT_0058746d,local_1c,uVar18);
    iVar3 = local_4c;
    iVar10 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_4c,0x58);
    iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(iVar3,auStack_480);
    lVar16 = (ulonglong)uVar18 << 0x20;
    iVar3 = 0xf8;
    iVar10 = (DAT_005b7620 - local_50) - iVar10;
    puVar9 = (byte *)((DAT_005b761c - local_50) - iVar4);
    puVar14 = auStack_480;
LAB_004c2650:
    engine_font_cpp_CBitFont_drawText_FUN_00490980(puVar14,puVar9,iVar10,iVar3,lVar16);
  }
  if (param_1[0x113] == 0.0) goto LAB_004c27a0;
  iVar10 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(param_1,param_1[0xcc],3);
  if (iVar10 == 0) {
    iVar10 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(param_1,param_1[0xcc],0);
    if ((iVar10 == 0) &&
       (iVar10 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004c1bf0(param_1,param_1[0xcc],1),
       iVar10 == 0)) {
      uVar5 = core_inv_cpp_getItemIconName_FUN_004bed10();
      uVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(param_1[0xcc],uVar5);
      uVar17 = CONCAT44(uVar5,uVar6);
      pcVar15 = "%s\n\n%s";
      goto LAB_004c26ad;
    }
    uVar5 = core_inv_cpp_getItemDisplayName_FUN_004beca0();
    uVar5 = core_inv_cpp_getItemIconName_FUN_004bed10(param_1[0xcc],uVar5);
    uVar5 = core_inv_cpp_getItemDisplayName_FUN_004beca0(param_1[0xcc],uVar5);
    _sprintf(acStack_17c,"%s\n\n%s %s",uVar5);
    pcVar8 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370();
    iVar10 = -1;
    pcVar15 = acStack_17c;
    do {
      pcVar11 = pcVar15;
      if (iVar10 == 0) break;
      iVar10 = iVar10 + -1;
      pcVar11 = pcVar15 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar15;
      pcVar15 = pcVar11;
    } while (cVar2 != '\0');
    pcVar11 = pcVar11 + -1;
    do {
      cVar2 = *pcVar8;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar8[1];
      pcVar8 = pcVar8 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
  }
  else {
    uVar5 = core_inv_cpp_getItemIconName_FUN_004bed10();
    uVar6 = core_inv_cpp_getItemDisplayName_FUN_004beca0(param_1[0xcc],uVar5);
    uVar17 = CONCAT44(uVar5,uVar6);
    pcVar15 = "%s\n\n%s";
LAB_004c26ad:
    _sprintf(acStack_17c,pcVar15,uVar17);
  }
  local_2c = local_48;
  iVar10 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                     (local_48,acStack_17c,0x1cae580,10,0x100,local_54 - local_5c);
  local_34 = iVar10;
  local_38 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
  iVar3 = (DAT_005b7620 - local_58) + local_4c;
  local_30 = local_4c + (DAT_005b761c - local_54);
  iVar4 = 0;
  if (0 < iVar10) {
    iVar10 = 0x1cae580;
    do {
      iVar4 = iVar4 + 1;
      engine_font_cpp_CBitFont_drawText_FUN_00490980(local_2c,iVar10,local_30,iVar3,0xf8,0);
      iVar10 = iVar10 + 0x100;
      iVar3 = iVar3 + local_38;
    } while (iVar4 < local_34);
  }
LAB_004c27a0:
  if ((param_1[0xcd] != 0.0) && (0.0 < param_1[0xcf])) {
    local_60 = 0x70;
    local_50 = 0x10;
    iVar10 = 0x000000D0;
    iVar3 = 0x00000060;
    if ((DAT_005b7620 < 0x180) && (param_1[0x113] == 0.0)) {
      iVar10 = 0x000000D0 / 2;
      iVar3 = 0x00000060 / 2;
      local_60 = 0x28;
      local_50 = 8;
    }
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(param_1[0xcd],_DAT_01cae0d0);
    if (iVar4 != 0) {
      _sprintf(auStack_37c,"%d x%3.0f%%",*(uint *)(iVar4 + 0x2cc),
                 (double)*(float *)(iVar4 + 0x2d0));
      iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,auStack_37c);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (local_48,auStack_37c,(DAT_005b761c - local_50) - iVar7,
                 (DAT_005b7620 - local_50) - iVar4,0xf8,0);
    }
    iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890(param_1[0xcd],_DAT_01c08cc4);
    if (iVar4 != 0) {
      uVar5 = core_inv_cpp_getItemDisplayName_FUN_004beca0();
      _sprintf(auStack_27c,&DAT_005874d1,uVar5);
      iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar7 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_48,auStack_27c);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (local_48,auStack_27c,(DAT_005b761c - local_50) - iVar7,
                 (DAT_005b7620 - local_50) - iVar4,0xf8,0);
    }
    if (param_1[0x113] != 0.0) {
      uVar5 = core_inv_cpp_getItemIconName_FUN_004bed10();
      uVar5 = core_inv_cpp_getItemDisplayName_FUN_004beca0(param_1[0xcd],uVar5);
      _sprintf(auStack_57c,"%s\n\n%s",uVar5);
      local_28 = local_48;
      local_44 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                           (local_48,auStack_57c,0x1caef80,10,0x100,iVar10 - local_60);
      local_18 = local_44;
      local_40 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(local_48,0x58);
      iVar3 = (DAT_005b7620 - iVar3) + local_50;
      local_3c = local_50 + (DAT_005b761c - iVar10);
      iVar10 = 0;
      if (0 < local_18) {
        iVar4 = 0x1caef80;
        do {
          iVar10 = iVar10 + 1;
          engine_font_cpp_CBitFont_drawText_FUN_00490980(local_28,iVar4,local_3c,iVar3,0xf8,0);
          iVar4 = iVar4 + 0x100;
          iVar3 = iVar3 + local_40;
        } while (iVar10 < local_44);
      }
    }
  }
  if ((*(int *)(0x01C775EC + 0x244) != 0) || (*(int *)(0x01C775EC + 0x240) != 0)) {
    iStack_7c = DAT_005b7620 + -0x21;
    local_18 = DAT_005b7620 + -6;
    uVar17 = CONCAT44(2,local_18);
    uVar6 = 0x10;
    uVar5 = 0x4c2ae5;
    fVar13 = (float10)round
                                ((float10)local_18 +
                                 (float10)(iStack_7c - local_18) * (float10)*param_1 *
                                 (float10)_DAT_005874e9);
    iVar10 = DAT_005b7620;
    iStack_80 = (int)ROUND(fVar13);
    engine_2d_c_fillRectColor_FUN_00403e60(6,iStack_80,uVar5,uVar6,uVar17);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(0x1cc2fd8,4,iVar10 + -0x24,0xffff);
  }
  if ((0.0 < param_1[0xcf]) || (0.0 < param_1[0xd0])) {
    local_680 = param_1[0xd0];
    if (local_680 < param_1[0xcf]) {
      local_680 = param_1[0xcf];
    }
    local_68 = 0xffff;
    if (local_680 < 1.0) {
      fVar13 = (float10)round((float10)local_680 * (float10)_DAT_005874dd);
      local_6c = (int)ROUND(fVar13);
    }
    fStack_684 = *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2434) * (float)_DAT_005874e9
    ;
    if (fStack_684 < 0.0) {
      fStack_684 = 0.0;
    }
    if (1.0 < fStack_684) {
      fStack_684 = 1.0;
    }
    local_18 = 0x3f;
    iVar10 = 0x1b;
    if (DAT_005b7620 < 0x180) {
      local_18 = 0x1f;
      iVar10 = 0xd;
    }
    local_78 = (DAT_005b761c + -4) - iVar10;
    iVar3 = local_68 / 2;
    uVar17 = CONCAT44(iVar3,local_18);
    uVar5 = 0x4c2c2e;
    fVar13 = (float10)round
                                ((float10)local_18 - (float10)local_18 * (float10)fStack_684);
    local_78 = (int)ROUND(fVar13);
    engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040e8c0
              (0x1cc2fec,iStack_7c,local_78 + 4,0,local_78,iVar10 + -1,uVar5,uVar17);
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(0x1cc3000,iStack_7c,4,iVar3);
  }
  fVar1 = param_1[0xd1];
  if (0.0 < fVar1) {
    local_64 = 0xffff;
    if (fVar1 < 1.0) {
      fVar13 = (float10)round((float10)fVar1 * (float10)_DAT_005874f1);
      local_68 = (int)ROUND(fVar13);
    }
    engine_3d_c_setRenderAlpha_FUN_00408370();
    local_1c = _DAT_014b9904;
    iVar10 = 0x00000060;
    if (DAT_005b7620 < 0x180) {
      iVar10 = 0x00000060 / 2;
      local_1c = _DAT_014b990c;
    }
    iVar3 = local_1c;
    iVar10 = engine_font_cpp_CBitFont_wrapText_FUN_00492f30
                       (local_1c,param_1 + 0xd3,0x1caf980,10,0x100,(DAT_005b761c - iVar10) + -4);
    local_20 = iVar10;
    local_24 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(iVar3,0x58);
    iVar10 = (DAT_005b7620 + -4) - local_24 * iVar10;
    if (((_DAT_014b990c != local_1c) || (_DAT_01d16810 == 0)) && (iVar3 = 0, 0 < local_20)) {
      iVar4 = 0x1caf980;
      do {
        iVar3 = iVar3 + 1;
        engine_font_cpp_CBitFont_drawText_FUN_00490980(local_1c,iVar4,4,iVar10,0xf8,0);
        iVar4 = iVar4 + 0x100;
        iVar10 = iVar10 + local_24;
      } while (iVar3 < local_20);
    }
  }
  _DAT_01c02594 = local_70;
  return;
}
