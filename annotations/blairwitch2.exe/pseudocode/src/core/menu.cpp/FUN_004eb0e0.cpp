// Name: core_menu.cpp_FUN_004eb0e0
// Address: 004eb0e0
// Address Range: [[004eb0e0, 004eb3c7]]
// Convention: unknown
// Signature: int core_menu_cpp_FUN_004eb0e0(undefined4 *param_1,int param_2,int *param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_menu_cpp_FUN_004eb0e0(uint *param_1,int param_2,int *param_3,int param_4,int param_5)

{
  CBitFont *this_ptr;
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_14;
  
  this_ptr = _DAT_01511cc0;
  if (param_5 != 0) {
    iVar4 = engine_font_cpp_FUN_004aaf00(_DAT_01511cc0,param_5);
    iVar4 = (0x280 - iVar4) / 2;
    engine_font_cpp_FUN_004a8df0(this_ptr,param_5,iVar4 + 1,param_4 + 1,2,0);
    engine_font_cpp_FUN_004a8df0(this_ptr,param_5,iVar4,param_4,0xfa,0);
    iVar4 = engine_font_cpp_FUN_004ab560(this_ptr,0x58);
    param_4 = param_4 + iVar4;
  }
  iVar4 = 0;
  puVar3 = param_1;
  if (0 < param_2) {
    do {
      iVar1 = engine_font_cpp_FUN_004aaf00(this_ptr,*puVar3);
      iVar2 = engine_font_cpp_FUN_004ab560(this_ptr,0x58);
      iVar1 = (0x280 - iVar1) / 2;
      engine_font_cpp_FUN_004a8df0(this_ptr,*puVar3,iVar1,param_4 + 1,4,0xffffffff);
      local_14 = 0xfc;
      if (iVar4 == *param_3) {
        local_14 = 0xff;
      }
      engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
      engine_font_cpp_FUN_004a8df0(this_ptr,*puVar3,iVar1,param_4,local_14,0xffffffff);
      param_4 = param_4 + iVar2;
      if (param_5 == 0) {
        param_4 = param_4 + iVar2;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar4 < param_2);
  }
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  iVar4 = engine_font_cpp_FUN_004aaf00(_DAT_01511cc4,&DAT_005dcacd);
  engine_font_cpp_FUN_004aafb0(_DAT_01511cc4,&DAT_005dcacd);
  engine_font_cpp_FUN_004a8df0(_DAT_01511cc4,&DAT_005dcacd,0x280 - iVar4,0,0xfa,0);
  engine_3d_c_setRenderAlpha_FUN_00406da0(0x8000);
  engine_3d_c_setRenderAlpha_FUN_00406da0(0xffff);
  pcVar6 = (char *)param_1[*param_3];
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == ':') goto LAB_004eb260;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == ':') goto LAB_004eb260;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_004eb260:
  _DAT_01d06138 = 0;
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x48);
  if (iVar4 != 0) {
    iVar4 = *param_3;
    _DAT_01d06138 = 1;
    *param_3 = iVar4 + -1;
    if (iVar4 + -1 < 0) {
      *param_3 = param_2 + -1;
    }
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x50);
  if (iVar4 != 0) {
    iVar4 = *param_3;
    _DAT_01d06138 = 1;
    *param_3 = iVar4 + 1;
    if (param_2 <= iVar4 + 1) {
      *param_3 = 0;
    }
  }
  if (pcVar5 != (char *)0x0) {
    _DAT_01d0612c = 0;
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4b);
    if (iVar4 != 0) {
      _DAT_01d0612c = 1;
      return *param_3;
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x4d);
    if (iVar4 != 0) goto LAB_004eb328;
  }
  iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x1c);
  if (iVar4 == 0) {
    return -1;
  }
LAB_004eb328:
  return *param_3;
}
