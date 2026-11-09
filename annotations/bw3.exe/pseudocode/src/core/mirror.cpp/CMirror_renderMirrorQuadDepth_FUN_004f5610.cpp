// Name: core_mirror.cpp_CMirror_renderMirrorQuadDepth_FUN_004f5610
// Address: 004f5610
// Address Range: [[004f5610, 004f57b3]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004f5610(CMirror *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mirror_cpp_CMirror_renderMirrorQuadDepth_FUN_004f5610(CMirror *this_ptr)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  SMRGLPrimitivePoly aSStack_88 [4];
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
  
  local_34 = (int)ROUND(*(float *)this_ptr * _DAT_005e29c0);
  local_30 = (int)ROUND(*(float *)(this_ptr + 4) * _DAT_005e29c0);
  local_2c = (int)ROUND(*(float *)(this_ptr + 8) * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c(*(SProjectedVertex **)DAT_005f2afc,(CVector3i *)&local_34);
  local_40 = (int)ROUND(*(float *)(this_ptr + 0xc) * _DAT_005e29c0);
  local_3c = (int)ROUND(*(float *)(this_ptr + 0x10) * _DAT_005e29c0);
  local_38 = (int)ROUND(*(float *)(this_ptr + 0x14) * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x30),(CVector3i *)&local_40);
  local_1c = (int)ROUND(*(float *)(this_ptr + 0x18) * _DAT_005e29c0);
  local_18 = (int)ROUND(*(float *)(this_ptr + 0x1c) * _DAT_005e29c0);
  local_14 = (int)ROUND(*(float *)(this_ptr + 0x20) * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x60),(CVector3i *)&local_1c);
  local_28 = (int)ROUND(*(float *)(this_ptr + 0x24) * _DAT_005e29c0);
  local_24 = (int)ROUND(*(float *)(this_ptr + 0x28) * _DAT_005e29c0);
  local_20 = (int)ROUND(*(float *)(this_ptr + 0x2c) * _DAT_005e29c0);
  engine_special_cpp_FUN_0056356c
            ((SProjectedVertex *)(*(int *)DAT_005f2afc + 0x90),(CVector3i *)&local_28);
  iVar3 = 0;
  do {
    *(int *)(*(int *)DAT_005f2afc + iVar3) = *(int *)(*(int *)DAT_005f2afc + iVar3) << 4;
    piVar1 = (int *)(*(int *)DAT_005f2afc + 4 + iVar3);
    *piVar1 = *piVar1 << 4;
    piVar1 = (int *)(*(int *)DAT_005f2afc + 8 + iVar3);
    *piVar1 = *piVar1 << 4;
    puVar2 = (uint *)(*(int *)DAT_005f2afc + 0xc + iVar3);
    iVar3 = iVar3 + 0x30;
    *(uint *)(*(int *)DAT_005f2afc + -0x24 + iVar3) = *puVar2 >> 4;
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
  engine_drender_cpp_CDemonRenderer_renderZPrepassPoly_FUN_0046b370(DAT_005f2afc,aSStack_88);
  return;
}
