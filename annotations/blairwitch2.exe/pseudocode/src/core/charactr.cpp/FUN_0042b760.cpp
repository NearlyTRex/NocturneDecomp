// Name: core_charactr.cpp_FUN_0042b760
// Address: 0042b760
// Address Range: [[0042b760, 0042be67]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_0042b760(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_charactr_cpp_FUN_0042b760(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  SRenderVertex *pSVar6;
  int iVar7;
  double dVar8;
  int *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  int *extraout_EDX_02;
  int *extraout_EDX_03;
  int *extraout_EDX_04;
  int *extraout_EDX_05;
  int *extraout_EDX_06;
  int *extraout_EDX_07;
  int *extraout_EDX_08;
  int *extraout_EDX_09;
  CDemonRenderer *this_ptr;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_1100 [998];
  SMRGLHeaderPrimitive local_14c;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114 [4];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  CVector3i local_d0;
  float local_c4;
  float local_c0 [4];
  float local_b0;
  CVector3i local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  CVector3i local_70;
  CVector3i local_64;
  float local_58;
  float local_54 [4];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar9 = 0;
  fVar1 = *(float *)(param_1 + 0x10a38);
  fVar2 = *(float *)(param_1 + 0x10a34);
  fVar3 = *(float *)(param_1 + 0x10a30);
  fVar4 = *(float *)(param_1 + 0x10a2c);
  local_18 = 1.0;
  local_20 = 0.1;
  fVar5 = *(float *)(param_1 + 0x10a2c);
  local_24 = 0.1;
  local_f8 = param_2[2];
  local_100 = *param_2 + _DAT_005cd336;
  local_fc = param_2[1] + _DAT_005cd336;
  if (&local_124 != local_114 + 5) {
    local_124 = local_100;
    local_120 = local_fc;
    local_11c = local_f8;
  }
  local_64.x = (int)ROUND(local_124 * _DAT_005f4060);
  local_64.y = (int)ROUND(local_120 * _DAT_005f4060);
  local_64.z = (int)ROUND(local_11c * _DAT_005f4060);
  local_f0[2] = local_100;
  local_f0[3] = local_fc;
  local_e0 = local_f8;
  local_dc = local_100;
  local_d8 = local_fc;
  local_d4 = local_f8;
  local_a0 = local_100;
  local_9c = local_fc;
  local_98 = local_f8;
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&local_64);
  local_54[2] = -local_20 + *param_2;
  local_44 = param_2[2];
  local_54[3] = param_2[1] + local_24;
  local_118 = -local_20 + *param_2;
  local_114[(uint)bVar9 * -2] = local_54[(uint)bVar9 * -2 + 3];
  local_114[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  local_90[2] = local_118 * local_18;
  local_90[3] = local_114[0] * local_18;
  local_80 = local_114[1] * local_18;
  local_c0[2] = local_118 * local_18;
  local_c0[(uint)bVar9 * -2 + 3] = local_90[(uint)bVar9 * -2 + 3];
  local_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  if (&local_124 != local_c0 + 2) {
    local_124 = local_c0[2];
    local_120 = local_c0[3];
    local_11c = local_b0;
  }
  local_d0.x = (int)ROUND(local_124 * _DAT_005f4060);
  local_d0.y = (int)ROUND(local_120 * _DAT_005f4060);
  local_d0.z = (int)ROUND(local_11c * _DAT_005f4060);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&local_d0);
  local_f4 = -local_20 + *param_2;
  local_f0[1] = param_2[2];
  local_f0[0] = param_2[1] + -local_24;
  local_34 = -local_20 + *param_2;
  local_54[(uint)bVar9 * -2 + 9] = local_f0[(uint)bVar9 * -2];
  local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       local_f0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_7c = local_34 * local_18;
  local_78 = local_30 * local_18;
  local_74 = local_2c * local_18;
  local_40 = local_34 * local_18;
  local_54[(uint)bVar9 * -2 + 6] = local_90[(uint)bVar9 * -2 + 6];
  local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
       local_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  if (&local_124 != local_54 + 5) {
    local_124 = local_40;
    local_120 = local_3c;
    local_11c = local_38;
  }
  local_70.x = (int)ROUND(local_124 * _DAT_005f4060);
  local_70.y = (int)ROUND(local_120 * _DAT_005f4060);
  local_70.z = (int)ROUND(local_11c * _DAT_005f4060);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&local_70);
  local_94 = *param_2 + local_20;
  local_90[1] = param_2[2];
  local_90[0] = param_2[1] + -local_24;
  local_58 = *param_2 + local_20;
  local_54[(uint)bVar9 * -2] = local_90[(uint)bVar9 * -2];
  local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_114[2] = local_58 * local_18;
  local_114[3] = local_54[0] * local_18;
  local_104 = local_54[1] * local_18;
  local_c4 = local_58 * local_18;
  local_c0[(uint)bVar9 * -2] = local_114[(uint)bVar9 * -2 + 3];
  local_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_114[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  if (&local_124 != &local_c4) {
    local_124 = local_c4;
    local_120 = local_c0[0];
    local_11c = local_c0[1];
  }
  local_ac.x = (int)ROUND(local_124 * _DAT_005f4060);
  local_ac.y = (int)ROUND(local_120 * _DAT_005f4060);
  local_ac.z = (int)ROUND(local_11c * _DAT_005f4060);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&local_ac);
  fVar10 = (float10)_DAT_005cd33a;
  fVar11 = (float10)*(float *)(param_1 + 0x10a3c) * fVar10;
  pSVar6 = DAT_0060b280->vertex_buffer_ptr;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(pSVar6 + 0x20) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a40) * fVar10;
  iVar7 = *extraout_EDX;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x24) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a44) * fVar10;
  iVar7 = *extraout_EDX_00;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x28) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a3c) * fVar10;
  iVar7 = *extraout_EDX_01;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x50) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a40) * fVar10;
  iVar7 = *extraout_EDX_02;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x54) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a44) * fVar10;
  iVar7 = *extraout_EDX_03;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x58) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a3c) * fVar10;
  iVar7 = *extraout_EDX_04;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x80) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a40) * fVar10;
  iVar7 = *extraout_EDX_05;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x84) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a44) * fVar10;
  iVar7 = *extraout_EDX_06;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0x88) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a3c) * fVar10;
  iVar7 = *extraout_EDX_07;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0xb0) = local_28;
  fVar11 = (float10)*(float *)(param_1 + 0x10a40) * fVar10;
  iVar7 = *extraout_EDX_08;
  round();
  local_28 = (int)ROUND(fVar11);
  *(int *)(iVar7 + 0xb4) = local_28;
  dVar8 = (double)(fVar5 + (fVar3 - fVar4) * (1.0 - fVar1 / fVar2)) * _DAT_005cd33e;
  fVar10 = (float10)*(float *)(param_1 + 0x10a44) * fVar10;
  iVar7 = *extraout_EDX_09;
  round();
  local_28 = (int)ROUND(fVar10);
  fVar11 = (float10)dVar8;
  *(int *)(iVar7 + 0xb8) = local_28;
  round();
  local_1c = (int)ROUND(fVar11);
  *(int *)(this_ptr->vertex_buffer_ptr + 0x2c) = local_1c;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x5c) = local_1c;
  *(int *)(this_ptr->vertex_buffer_ptr + 0x8c) = local_1c;
  *(int *)(this_ptr->vertex_buffer_ptr + 0xbc) = local_1c;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x18) = 0;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x1c) = 0xff0000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x48) = 0xff0000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x4c) = 0xff0000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x78) = 0xff0000;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0x7c) = 0;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0xa8) = 0;
  *(uint *)(this_ptr->vertex_buffer_ptr + 0xac) = 0;
  local_14c.base.count = 4;
  local_14c.surface_normal.D.i = 0;
  local_14c.surface_normal.C.i = 0;
  local_14c.surface_normal.B.i = 0;
  local_14c.surface_normal.A.i = 0;
  local_134 = 0;
  local_128 = 3;
  local_12c = 2;
  local_130 = 1;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (this_ptr,(SMRGLTextureBasic *)&DAT_00609ae4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(DAT_0060b280,&local_14c);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  return;
}
