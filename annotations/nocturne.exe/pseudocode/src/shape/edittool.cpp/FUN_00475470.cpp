// Name: shape_edittool.cpp_FUN_00475470
// Address: 00475470
// Address Range: [[00475470, 004759c5]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00475470(int *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00475470(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char local_144 [300];
  int local_18;
  int local_14;
  
  param_1[0x44] = _DAT_01bcd9bc + 1;
  param_1[0x45] = 8;
  param_1[0x29] = 1;
  memset(param_1 + 0x1f,0,0x28);
  local_14 = 0;
  if (0 < *param_1) {
    do {
      pcVar3 = (char *)shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,local_14);
      iVar10 = 0;
      piVar5 = param_1;
      while( true ) {
        cVar1 = *pcVar3;
        pcVar2 = pcVar3;
        pcVar8 = local_144;
        while ((pcVar3 = pcVar2, cVar1 != '\0' && (pcVar3 = pcVar2 + 1, *pcVar2 != '\t'))) {
          *pcVar8 = *pcVar2;
          pcVar8 = pcVar8 + 1;
          cVar1 = *pcVar3;
          pcVar2 = pcVar3;
        }
        *pcVar8 = '\0';
        iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_01bcd070,local_144);
        if (piVar5[0x1f] < iVar4) {
          piVar5[0x1f] = iVar4;
        }
        iVar10 = iVar10 + 1;
        piVar5 = piVar5 + 1;
        if (*pcVar3 == '\0') break;
        if (9 < iVar10) {
          PTR_01cc4800 = "..\\shape\\edittool.cpp";
          INT_01cc4804 = 0xd01;
          core_main_c_FUN_004c8440("Too many picklist columns!");
        }
      }
      if (param_1[0x29] < iVar10) {
        param_1[0x29] = iVar10;
      }
      local_14 = local_14 + 1;
    } while (local_14 < *param_1);
  }
  piVar5 = param_1;
  for (iVar10 = 0; iVar10 < param_1[0x29] + -1; iVar10 = iVar10 + 1) {
    piVar5[0x1f] = piVar5[0x1f] + DAT_005b761c / 0x28;
    piVar5 = piVar5 + 1;
  }
  iVar10 = 0;
  param_1[0x4a] = 0;
  piVar5 = param_1;
  if (0 < param_1[0x29]) {
    do {
      iVar10 = iVar10 + 1;
      param_1[0x4a] = param_1[0x4a] + piVar5[0x1f];
      piVar5 = piVar5 + 1;
    } while (iVar10 < param_1[0x29]);
  }
  param_1[0x4a] = param_1[0x4a] + param_1[0x45] * 2;
  iVar10 = (DAT_005b7620 + _DAT_01bcd9bc * -4) / param_1[0x44];
  param_1[0x49] = iVar10;
  if (iVar10 < 1) {
    param_1[0x49] = 1;
  }
  if (*param_1 < param_1[0x49]) {
    param_1[0x49] = *param_1;
  }
  iVar10 = DAT_005b761c * 7 >> 0x1f;
  iVar10 = ((int)((DAT_005b761c * 7 + iVar10 * -8) - (uint)(iVar10 << 2 < 0)) >> 3) / param_1[0x4a];
  param_1[0x4b] = iVar10;
  if (iVar10 < 1) {
    param_1[0x4b] = 1;
  }
  iVar10 = (*param_1 + param_1[0x49] + -1) / param_1[0x49];
  if (iVar10 < param_1[0x4b]) {
    param_1[0x4b] = iVar10;
  }
  if (param_1[4] != 0) {
    param_1[0x4b] = 1;
  }
  param_1[0x5b] = 0;
  if (param_1[0x49] * param_1[0x4b] < *param_1) {
    if (param_1[0x4b] < 2) {
      param_1[0x5b] = 1;
    }
    else {
      param_1[0x5b] = 2;
    }
  }
  iVar10 = param_1[0x4a] * param_1[0x4b] + 8;
  iVar4 = param_1[0x49] * param_1[0x44] + 6;
  iVar6 = shape_edittool_cpp_calculateGridWidth_FUN_00476df0();
  local_18 = iVar6;
  iVar7 = shape_edittool_cpp_calculateGridHeight_FUN_00476e10();
  if (param_1[0x5b] == 1) {
    iVar10 = iVar10 + iVar6;
  }
  else if (param_1[0x5b] == 2) {
    iVar4 = iVar4 + iVar7;
  }
  shape_edittool_cpp_CEditorTools_createCenteredModal_FUN_00471a80
            (0x01BCD074,iVar10,iVar4,param_2,param_3);
  iVar10 = (_DAT_01c00c60 - _DAT_01c00c58) + 1;
  iVar4 = (_DAT_01c00c64 - _DAT_01c00c5c) + 1;
  if (param_1[0x5b] == 1) {
    iVar10 = iVar10 - local_18;
    iVar6 = (_DAT_01c00c60 - local_18) + 1;
    iVar9 = _DAT_01c00c5c;
  }
  else {
    if (param_1[0x5b] != 2) goto LAB_0047587b;
    iVar9 = (_DAT_01c00c64 - iVar7) + 1;
    iVar4 = iVar4 - iVar7;
    iVar6 = _DAT_01c00c58;
  }
  shape_edittool_cpp_CEdScrollBar_setPosition_FUN_004764d0
            (param_1 + 0x4e,iVar6,iVar9,_DAT_01c00c60,_DAT_01c00c64);
LAB_0047587b:
  param_1[0x49] = iVar4 / param_1[0x44];
  param_1[0x4b] = iVar10 / param_1[0x4a];
  iVar4 = (*param_1 + param_1[0x49] + -1) / param_1[0x49];
  if (iVar4 < param_1[0x4b]) {
    param_1[0x4b] = iVar4;
  }
  if (param_1[0x4b] < 1) {
    param_1[0x4b] = 1;
  }
  param_1[0x48] = param_1[0x49] * param_1[0x4b];
  param_1[0x47] = 0;
  param_1[0x4a] = iVar10 / param_1[0x4b];
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  *(byte *)(param_1 + 0x2a) = 0;
  _DAT_01bcde20 = 0xffffffff;
  param_1[0x43] = 0;
  return;
}
