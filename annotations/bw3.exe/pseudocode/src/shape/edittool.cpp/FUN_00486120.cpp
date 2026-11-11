// Name: shape_edittool.cpp_FUN_00486120
// Address: 00486120
// Address Range: [[00486120, 00486430]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00486120(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_edittool_cpp_FUN_00486120(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte bVar13;
  byte local_dc [200];
  int local_14;
  
  uVar2 = _DAT_01c6b5ac;
  bVar13 = 0;
  _DAT_01c6b5ac = *(uint *)(param_1 + 0xc);
  shape_edittool_cpp_FUN_004850a0
            (*(uint *)(param_1 + 8),_DAT_01c6b5ac,*(uint *)(param_1 + 0x10),
             *(uint *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
  pcVar8 = (char *)(param_1 + 0x1c);
  _DAT_01c6b5ac = uVar2;
  iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(_DAT_01c5b0e0,pcVar8);
  iVar4 = engine_font_cpp_CBitFont_getTextHeight_FUN_004b2b30(_DAT_01c5b0e0,pcVar8);
  iVar5 = engine_font_cpp_CBitFont_getCharYOffset_FUN_004b3120(_DAT_01c5b0e0,0x41);
  iVar3 = *(int *)(param_1 + 0x18) +
          ((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 8)) - iVar3) / 2;
  local_14 = *(int *)(param_1 + 0x18) +
             ((*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x14)) - (iVar4 + iVar5)) / 2;
  engine_font_cpp_FUN_004b0a20(_DAT_01c5b0e0,pcVar8,iVar3,local_14,_DAT_01c5bb60,0xffffffff);
  if (_DAT_01c5baec == 0) {
    _DAT_01c6b5c0 = _DAT_01c5bb60;
  }
  else {
    iVar4 = (_DAT_01c5bb60 & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f3520
              ((uint)(byte)(&DAT_01c6af9a)[iVar4] |
               (uint)(byte)(&DAT_01c6af99)[iVar4] << 8 | (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10)
    ;
  }
  pbVar11 = local_dc;
  pbVar9 = local_dc;
  pbVar12 = local_dc;
  if (param_2 != 0) {
    shape_edittool_cpp_FUN_0047b5e0
              (*(int *)(param_1 + 8) + 3,*(int *)(param_1 + 0xc) + 3,*(int *)(param_1 + 0x10) + -5,
               *(int *)(param_1 + 0x14) + -4,1);
  }
  pcVar8 = (char *)(param_1 + 0x1c);
  do {
    cVar1 = *pcVar8;
    *pbVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pbVar11[1] = cVar1;
    pbVar11 = pbVar11 + 2;
  } while (cVar1 != '\0');
  uVar6 = 0;
  do {
    uVar7 = 0xffffffff;
    pbVar11 = local_dc;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pbVar11;
      pbVar11 = pbVar11 + (uint)bVar13 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar7 - 1 <= uVar6) break;
    iVar4 = toupper((uint)local_dc[uVar6]);
    local_dc[uVar6] = (byte)iVar4;
    uVar6 = uVar6 + 1;
  } while( true );
  iVar4 = toupper((uint)*(byte *)(param_1 + 4));
  do {
    pcVar8 = (char *)pbVar9;
    if (*pbVar9 == (char)iVar4) goto LAB_004862e7;
    if (*pbVar9 == '\0') break;
    pcVar8 = (char *)(pbVar9 + 1);
    if (*pcVar8 == (char)iVar4) goto LAB_004862e7;
    pbVar9 = pbVar9 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_004862e7:
  if (pcVar8 == (char *)0x0) {
    return;
  }
  pcVar10 = (char *)(param_1 + 0x1c);
  do {
    cVar1 = *pcVar10;
    *pbVar12 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pbVar12[1] = cVar1;
    pbVar12 = pbVar12 + 2;
  } while (cVar1 != '\0');
  *pcVar8 = '\0';
  iVar4 = engine_font_cpp_CBitFont_getTextWidth_FUN_004b2a80(_DAT_01c5b0e0,(char *)local_dc);
  uVar6 = iVar4 + _DAT_01c5b0e0->char_spacing;
  bVar13 = *(byte *)(param_1 + 0x1c);
  uVar7 = toupper((uint)*(byte *)(param_1 + 4));
  if (uVar7 == bVar13) {
    uVar6 = uVar7 ^ bVar13;
  }
  iVar3 = iVar3 + uVar6;
  iVar4 = engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0(_DAT_01c5b0e0,0x41);
  local_14 = local_14 + iVar4 + 1;
  uVar6 = _DAT_01c5bb60;
  if (_DAT_01c5baec != 0) {
    iVar4 = (_DAT_01c5bb60 & 0xff) * 3;
    engine_mini3d_cpp_FUN_004f3520
              ((uint)(byte)(&DAT_01c6af9a)[iVar4] |
               (uint)(byte)(&DAT_01c6af99)[iVar4] << 8 | (uint)(byte)(&DAT_01c6af98)[iVar4] << 0x10)
    ;
    uVar6 = _DAT_01c6b5c0;
  }
  _DAT_01c6b5c0 = uVar6;
  iVar4 = engine_font_cpp_CBitFont_getCharWidth_FUN_004b30c0
                    (_DAT_01c5b0e0,(uint)*(byte *)(param_1 + 4));
  iVar4 = iVar4 + iVar3 + -1;
  if (_DAT_01c5baec == 0) {
    engine_2d_c_drawHLine_FUN_00402f30(iVar3,local_14,iVar4);
    return;
  }
  engine_mini3d_cpp_FUN_004f3ab0(iVar3,local_14,iVar4);
  return;
}
