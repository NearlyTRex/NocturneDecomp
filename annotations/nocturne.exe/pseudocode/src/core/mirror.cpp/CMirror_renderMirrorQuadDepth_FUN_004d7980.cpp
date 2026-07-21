// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980
// Address: 004d7980
// Address Range: [[004d7980, 004d7b23]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004d7980(float *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  byte auStack_88 [4];
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_64;
  uint local_58;
  uint local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_34 = (int)ROUND(*param_1 * _DAT_005a0880);
  local_30 = (int)ROUND(param_1[1] * _DAT_005a0880);
  local_2c = (int)ROUND(param_1[2] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704,&local_34);
  local_40 = (int)ROUND(param_1[3] * _DAT_005a0880);
  local_3c = (int)ROUND(param_1[4] * _DAT_005a0880);
  local_38 = (int)ROUND(param_1[5] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x30,&local_40);
  local_1c = (int)ROUND(param_1[6] * _DAT_005a0880);
  local_18 = (int)ROUND(param_1[7] * _DAT_005a0880);
  local_14 = (int)ROUND(param_1[8] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x60,&local_1c);
  local_28 = (int)ROUND(param_1[9] * _DAT_005a0880);
  local_24 = (int)ROUND(param_1[10] * _DAT_005a0880);
  local_20 = (int)ROUND(param_1[0xb] * _DAT_005a0880);
  wincore_windll_cpp_transformPoint_FUN_00530a25(*DAT_005ae704 + 0x90,&local_28);
  iVar3 = 0;
  do {
    *(int *)(*DAT_005ae704 + iVar3) = *(int *)(*DAT_005ae704 + iVar3) << 4;
    piVar1 = (int *)(*DAT_005ae704 + 4 + iVar3);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)(*DAT_005ae704 + 8 + iVar3);
    *piVar1 = *piVar1 << 4;
    puVar2 = (uint *)(*DAT_005ae704 + 0xc + iVar3);
    iVar3 = iVar3 + 0x30;
    *(uint *)(*DAT_005ae704 + -0x24 + iVar3) = *puVar2 >> 4;
  } while (iVar3 != 0xc0);
  local_84 = 4;
  local_74 = 0;
  local_78 = 0;
  local_7c = 0;
  local_58 = 2;
  local_80 = 0;
  local_70 = 0;
  local_4c = 3;
  local_64 = 1;
  engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0045ef90(DAT_005ae704,auStack_88);
  return;
}
