// Name: core_path.cpp_FUN_00534a70
// Address: 00534a70
// Address Range: [[00534a70, 00534c92]]
// Convention: unknown
// Signature: void core_path_cpp_FUN_00534a70(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,int param_7)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00534a70(int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,int param_7)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr;
  uint *puVar3;
  uint extraout_ECX;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  CVector3i *pCVar9;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_8;
  
  fVar1 = (float)g_CDemonRaytraceInstance._52_4_ * _DAT_005eca84;
  fVar2 = (float)g_CDemonRaytraceInstance._60_4_ * _DAT_005eca84;
  fVar4 = (float10)_DAT_005eca8c;
  fVar5 = (float10)(float)g_CDemonRaytraceInstance._20_4_ * fVar4;
  fVar6 = (float10)param_1 * (float10)fVar1;
  fVar7 = (float10)param_2 * (float10)((float)g_CDemonRaytraceInstance._56_4_ * _DAT_005eca84);
  fVar8 = (float10)param_3 * (float10)fVar2;
  param_4 = param_4 << 8;
  pCVar9 = (CVector3i *)&iStack_1c;
  round();
  round();
  iStack_1c = (int)ROUND(fVar6);
  fVar4 = fVar5 + fVar7 + fVar4;
  iStack_14 = (int)ROUND(fVar8);
  puVar3 = (uint *)round();
  iStack_18 = (int)ROUND(fVar4);
  param_6 = param_6 << 8;
  engine_special_cpp_FUN_00580173((SProjectedVertex *)*puVar3,pCVar9);
  iStack_8 = iStack_1c;
  pCVar9 = (CVector3i *)&iStack_1c;
  fVar5 = (float10)iStack_1c + (float10)fVar1;
  round();
  iStack_1c = (int)ROUND(fVar5);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(*extraout_EDX + 0x30),pCVar9);
  iStack_8 = iStack_14;
  pCVar9 = (CVector3i *)&iStack_1c;
  fVar5 = (float10)iStack_14 + (float10)fVar2;
  round();
  iStack_14 = (int)ROUND(fVar5);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(*extraout_EDX_00 + 0x60),pCVar9);
  iStack_8 = iStack_1c;
  pCVar9 = (CVector3i *)&iStack_1c;
  fVar5 = (float10)iStack_1c - (float10)fVar1;
  round();
  iStack_1c = (int)ROUND(fVar5);
  param_7 = param_7 << 8;
  engine_special_cpp_FUN_00580173((SProjectedVertex *)(*extraout_EDX_01 + 0x90),pCVar9);
  this_ptr = DAT_00612560;
  *(int *)(*(int *)DAT_00612560 + 0x20) = param_4;
  *(uint *)(*(int *)this_ptr + 0x24) = extraout_ECX;
  *(int *)(*(int *)this_ptr + 0x28) = param_6;
  *(int *)(*(int *)this_ptr + 0x2c) = param_7;
  *(int *)(*(int *)this_ptr + 0x50) = param_4;
  *(uint *)(*(int *)this_ptr + 0x54) = extraout_ECX;
  *(int *)(*(int *)this_ptr + 0x58) = param_6;
  *(int *)(*(int *)this_ptr + 0x5c) = param_7;
  *(int *)(*(int *)this_ptr + 0x80) = param_4;
  *(uint *)(*(int *)this_ptr + 0x84) = extraout_ECX;
  *(int *)(*(int *)this_ptr + 0x88) = param_6;
  *(int *)(*(int *)this_ptr + 0x8c) = param_7;
  *(int *)(*(int *)this_ptr + 0xb0) = param_4;
  *(uint *)(*(int *)this_ptr + 0xb4) = extraout_ECX;
  *(int *)(*(int *)this_ptr + 0xb8) = param_6;
  *(int *)(*(int *)this_ptr + 0xbc) = param_7;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
            (this_ptr,(SMRGLPrimitivePoly *)0x1e7d360);
  return;
}
