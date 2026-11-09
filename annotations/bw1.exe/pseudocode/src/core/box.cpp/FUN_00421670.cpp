// Name: core_box.cpp_FUN_00421670
// Address: 00421670
// Address Range: [[00421670, 00421aed]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_FUN_00421670(CBoundingBox3D *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_FUN_00421670(CBoundingBox3D *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1020 [978];
  CVector3i local_cc [96];
  SMRGLHeaderPrimitive local_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  float afStack_34 [2];
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c [2];
  int *local_14;
  
  bVar3 = 0;
  local_14 = (int *)local_cc;
  iVar2 = 0;
  do {
    core_box_cpp_FUN_00420570(this_ptr,iVar2);
    local_20 = local_38;
    local_1c[(uint)bVar3 * -2] = afStack_34[(uint)bVar3 * -2];
    local_1c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    *local_14 = (int)ROUND(local_20 * _DAT_005fce08);
    local_14[1] = (int)ROUND(local_1c[0] * _DAT_005fce08);
    local_14[2] = (int)ROUND(local_1c[1] * _DAT_005fce08);
    local_14 = local_14 + 3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00553140(g_CDemonSetPtr,8,local_cc);
  local_68 = 4;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(DAT_00612560,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00483d80(DAT_00612560,0);
  local_44 = (int)ROUND(*(float *)this_ptr * _DAT_005fce08);
  local_40 = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005fce08);
  local_3c = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005fce08);
  local_2c = (int)ROUND(*(float *)&this_ptr->field_0xc * _DAT_005fce08);
  local_28 = (int)ROUND(*(float *)&this_ptr->field_0x10 * _DAT_005fce08);
  local_24 = (int)ROUND(*(float *)&this_ptr->field_0x14 * _DAT_005fce08);
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(DAT_00612560);
  pCVar1 = DAT_00612560;
  if (iVar2 == 0) {
    _DAT_01c50930 = iVar2;
    _DAT_01c50934 = iVar2;
    *(uint *)(*(int *)DAT_00612560 + 0x20) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x24) = 0;
    *(uint *)(*(int *)pCVar1 + 0x28) = 0;
    *(uint *)(*(int *)pCVar1 + 0x50) = 0;
    *(uint *)(*(int *)pCVar1 + 0x54) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x58) = 0;
    *(uint *)(*(int *)pCVar1 + 0x80) = 0;
    *(uint *)(*(int *)pCVar1 + 0x84) = 0;
    *(uint *)(*(int *)pCVar1 + 0x88) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0xb0) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0xb4) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0xb8) = 0;
    *(uint *)(*(int *)pCVar1 + 0xe0) = 0;
    *(uint *)(*(int *)pCVar1 + 0xe4) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0xe8) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x110) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x114) = 0;
    *(uint *)(*(int *)pCVar1 + 0x118) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x140) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x144) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x148) = 0x7fff;
    *(uint *)(*(int *)pCVar1 + 0x170) = 0;
    *(uint *)(*(int *)pCVar1 + 0x174) = 0;
    *(uint *)(*(int *)pCVar1 + 0x178) = 0;
  }
  local_64 = 0xffffffff;
  local_60 = 0;
  local_5c = 0;
  local_54 = 0;
  local_50 = 4;
  local_4c = 6;
  local_58 = -local_44;
  local_48 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 1;
  local_60 = 0;
  local_5c = 0;
  local_54 = 1;
  local_58 = local_2c;
  local_50 = 3;
  local_4c = 7;
  local_48 = 5;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 0xffffffff;
  local_5c = 0;
  local_54 = 0;
  local_50 = 1;
  local_4c = 5;
  local_48 = 4;
  local_58 = -local_40;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 1;
  local_5c = 0;
  local_58 = local_28;
  local_50 = 6;
  local_48 = 3;
  local_4c = 7;
  local_54 = 2;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 0;
  local_5c = 0xffffffff;
  local_54 = 0;
  local_4c = 3;
  local_50 = 2;
  local_58 = -local_3c;
  local_48 = 1;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_6c,0x2c4);
  local_64 = 0;
  local_60 = 0;
  local_5c = 1;
  local_58 = local_24;
  local_50 = 5;
  local_54 = 4;
  local_4c = 7;
  local_48 = 6;
  engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_00482170(DAT_00612560,local_6c,0x2c4);
  return;
}
