// Name: core_menu.cpp_renderMenuAndGetChoice_FUN_004cf440
// Address: 004cf440
// Address Range: [[004cf440, 004cf809]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(uint *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int local_20;
  uint *local_1c;
  
  uVar1 = _DAT_014b9900;
  if (param_5 != 0) {
    engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_014b9900,param_5,0xa0,param_4,7,0);
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(uVar1,0x58);
    param_4 = param_4 + iVar2 * 2;
  }
  local_20 = 0;
  if (0 < param_2) {
    local_1c = param_1;
    do {
      engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(uVar1,*local_1c);
      iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(uVar1,0x58);
      uVar10 = 0xf8;
      uVar9 = 0xa0;
      if (local_20 == *param_3) {
        iVar3 = core_moon_cpp_CMoon_isAnimationFirstHalf_FUN_004df170(0x1cc5780,0xa0,iVar2,0xf8);
        uVar10 = 7;
        if (iVar3 == 0) {
          uVar10 = 0xff;
        }
        else {
          iVar3 = 0;
          do {
            uVar4 = rand(uVar9,iVar2,uVar10);
            uVar5 = rand();
            iVar6 = rand();
            engine_3d_c_setRenderAlpha_FUN_00408370
                      ((uint)((longlong)iVar6 * 48000) >> 0x10 |
                       (int)((ulonglong)((longlong)iVar6 * 48000) >> 0x20) << 0x10);
            iVar3 = iVar3 + 1;
            engine_font_cpp_CBitFont_drawText_FUN_00490980
                      (uVar1,*local_1c,(uVar4 & 3) + 0x9e,((uVar5 & 3) - 2) + param_4,7,0xffffffff);
          } while (iVar3 < 5);
        }
      }
      engine_3d_c_setRenderAlpha_FUN_00408370(48000,uVar9,iVar2,uVar10);
      engine_font_cpp_CBitFont_drawText_FUN_00490980
                (uVar1,*local_1c,uVar9,param_4,uVar10,0xffffffff);
      param_4 = param_4 + iVar2;
      if (param_5 == 0) {
        param_4 = param_4 + iVar2;
      }
      local_1c = local_1c + 1;
      local_20 = local_20 + 1;
    } while (local_20 < param_2);
  }
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  if (_DAT_01d16810 == 0) {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (_DAT_014b9904,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                      (_DAT_014b9904,"Nocturne 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar8 = "Nocturne 1999 Terminal Reality Inc.  Patent Pending.";
  }
  else {
    iVar2 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (_DAT_014b9904,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    iVar3 = engine_font_cpp_CBitFont_getTextHeight_FUN_00492e60
                      (_DAT_014b9904,"Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.");
    pcVar8 = "Nocturne (c) 1999 Terminal Reality Inc.  Patent Pending.";
  }
  engine_font_cpp_CBitFont_drawText_FUN_00490980
            (_DAT_014b9904,pcVar8,0x27f - iVar2,0x1df - iVar3,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00408370(0x8000);
  engine_font_cpp_CBitFont_drawText_FUN_00490980(_DAT_014b9904,"",0x206,99,0xf8,0);
  engine_3d_c_setRenderAlpha_FUN_00408370(0xffff);
  pcVar8 = (char *)param_1[*param_3];
  do {
    pcVar7 = pcVar8;
    if (*pcVar8 == ':') goto LAB_004cf677;
    if (*pcVar8 == '\0') break;
    pcVar7 = pcVar8 + 1;
    if (*pcVar7 == ':') goto LAB_004cf677;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_004cf677:
  _DAT_01cc5b68 = 0;
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x48);
  if (iVar2 != 0) {
    _DAT_01cc5b68 = 1;
    iVar2 = *param_3;
    *param_3 = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      *param_3 = param_2 + -1;
    }
  }
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x50);
  if (iVar2 != 0) {
    iVar2 = *param_3;
    _DAT_01cc5b68 = 1;
    *param_3 = iVar2 + 1;
    if (param_2 <= iVar2 + 1) {
      *param_3 = 0;
    }
  }
  if (pcVar7 != (char *)0x0) {
    _DAT_01cc5b5c = 0;
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4b);
    if (iVar2 != 0) {
      _DAT_01cc5b5c = 1;
      return *param_3;
    }
    iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4d);
    if (iVar2 != 0) goto LAB_004cf73d;
  }
  iVar2 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x1c);
  if (iVar2 == 0) {
    return -1;
  }
LAB_004cf73d:
  return *param_3;
}
