// Name: engine_palette.cpp_FUN_00509bc0
// Address: 00509bc0
// Address Range: [[00509bc0, 00509d87]]
// Convention: unknown
// Signature: undefined4 engine_palette_cpp_FUN_00509bc0(int *param_1,char *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_palette_cpp_FUN_00509bc0(int *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float unaff_EDI;
  int *piVar4;
  double dVar5;
  
  if (99 < *param_1) {
    return 0;
  }
  piVar4 = param_1 + *param_1 * 0x40 + 0xc9;
  do {
    cVar1 = *param_2;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  iVar3 = *param_1;
  dVar5 = round((double)((float)param_3 * _DAT_01d76cc4));
  param_1[iVar3 + 1] = (int)ROUND(dVar5);
  iVar3 = *param_1;
  dVar5 = round((double)((float)param_3 * unaff_EDI));
  param_1[iVar3 + 0x65] = (int)ROUND(dVar5);
  if (param_5 < 0) {
    uVar2 = engine_font_cpp_getDefaultTextColor_FUN_004b12e0();
    iVar3 = *param_1;
  }
  else {
    param_5 = param_5 * 3;
    if (DAT_005fba20 != 0x10) {
      if (DAT_005fba20 == 0x20) {
        param_1[*param_1 + 0x19c9] =
             (uint)(byte)(&DAT_01c6af9a)[param_5] << (DAT_01c6af8c & 0x1f) |
             (uint)(byte)(&DAT_01c6af98)[param_5] << (DAT_01c6af74 & 0x1f) |
             (uint)(byte)(&DAT_01c6af99)[param_5] << (DAT_01c6af80 & 0x1f);
      }
      else {
        param_1[*param_1 + 0x19c9] =
             (uint)(byte)(&DAT_01c6af99)[param_5] << 8 |
             (uint)(byte)(&DAT_01c6af98)[param_5] << 0x10 | (uint)(byte)(&DAT_01c6af9a)[param_5];
      }
      goto LAB_00509d02;
    }
    iVar3 = *param_1;
    uVar2 = ((byte)(&DAT_01c6af9a)[param_5] / _DAT_01c6af90 << (DAT_01c6af8c & 0x1f) |
            (byte)(&DAT_01c6af98)[param_5] / _DAT_01c6af78 << (DAT_01c6af74 & 0x1f) |
            (byte)(&DAT_01c6af99)[param_5] / _DAT_01c6af84 << (DAT_01c6af80 & 0x1f)) & 0xffff;
  }
  param_1[iVar3 + 0x19c9] = uVar2;
LAB_00509d02:
  param_1[*param_1 + 0x1a2d] = param_4;
  *param_1 = *param_1 + 1;
  return 0;
}
