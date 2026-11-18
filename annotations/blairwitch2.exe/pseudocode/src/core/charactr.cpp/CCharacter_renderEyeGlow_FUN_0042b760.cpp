// Name: core_charactr.cpp_CCharacter_renderEyeGlow_FUN_0042b760
// Address: 0042b760
// Address Range: [[0042b760, 0042be67]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderEyeGlow_FUN_0042b760(CCharacter *this_ptr,CVector3f *eye_position)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_renderEyeGlow_FUN_0042b760(CCharacter *this_ptr,CVector3f *eye_position)

{
  SRenderVertex *pSVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  byte bVar3;
  double dVar4;
  double dVar5;
  float afStackY_1100 [985];
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  uint uStack_188;
  uint uStack_184;
  SMRGLHeaderPrimitive SStack_180;
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
  float local_24;
  float local_20;
  float local_18;
  
  bVar3 = 0;
  local_18 = 1.0;
  local_20 = 0.1;
  local_24 = 0.1;
  local_f8 = eye_position->z;
  local_100 = eye_position->x + 0.1f;
  local_fc = eye_position->y + 0.1f;
  if (&local_124 != local_114 + 5) {
    local_124 = local_100;
    local_120 = local_fc;
    local_11c = local_f8;
  }
  local_64.x = (int)ROUND(local_124 * 256.0f);
  local_64.y = (int)ROUND(local_120 * 256.0f);
  local_64.z = (int)ROUND(local_11c * 256.0f);
  SStack_180.surface_normal.D.f = 6.12736e-39;
  local_f0[2] = local_100;
  local_f0[3] = local_fc;
  local_e0 = local_f8;
  local_dc = local_100;
  local_d8 = local_fc;
  local_d4 = local_f8;
  local_a0 = local_100;
  local_9c = local_fc;
  local_98 = local_f8;
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr->projected_vertex,&local_64);
  local_54[2] = -local_20 + eye_position->x;
  local_44 = eye_position->z;
  local_54[3] = eye_position->y + local_24;
  local_118 = local_54[2];
  local_114[(uint)bVar3 * -2] = local_54[(uint)bVar3 * -2 + 3];
  local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  local_90[2] = local_118 * local_18;
  local_90[3] = local_114[0] * local_18;
  local_80 = local_114[1] * local_18;
  local_c0[2] = local_118 * local_18;
  local_c0[(uint)bVar3 * -2 + 3] = local_90[(uint)bVar3 * -2 + 3];
  local_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (&local_124 != local_c0 + 2) {
    local_124 = local_c0[2];
    local_120 = local_c0[3];
    local_11c = local_b0;
  }
  local_d0.x = (int)ROUND(local_124 * 256.0f);
  local_d0.y = (int)ROUND(local_120 * 256.0f);
  local_d0.z = (int)ROUND(local_11c * 256.0f);
  SStack_180.surface_normal.D.f = 6.127714e-39;
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_d0);
  local_f4 = -local_20 + eye_position->x;
  local_f0[1] = eye_position->z;
  local_f0[0] = eye_position->y + -local_24;
  local_34 = local_f4;
  local_54[(uint)bVar3 * -2 + 9] = local_f0[(uint)bVar3 * -2];
  local_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10] =
       local_f0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_7c = local_34 * local_18;
  local_78 = local_30 * local_18;
  local_74 = local_2c * local_18;
  local_40 = local_34 * local_18;
  local_54[(uint)bVar3 * -2 + 6] = local_90[(uint)bVar3 * -2 + 6];
  local_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
       local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  if (&local_124 != local_54 + 5) {
    local_124 = local_40;
    local_120 = local_3c;
    local_11c = local_38;
  }
  local_70.x = (int)ROUND(local_124 * 256.0f);
  local_70.y = (int)ROUND(local_120 * 256.0f);
  local_70.z = (int)ROUND(local_11c * 256.0f);
  SStack_180.surface_normal.D.f = 6.128076e-39;
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_70);
  local_94 = eye_position->x + local_20;
  local_90[1] = eye_position->z;
  local_90[0] = eye_position->y + -local_24;
  local_58 = local_94;
  local_54[(uint)bVar3 * -2] = local_90[(uint)bVar3 * -2];
  local_54[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_90[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  local_114[2] = local_58 * local_18;
  local_114[3] = local_54[0] * local_18;
  local_104 = local_54[1] * local_18;
  local_c4 = local_58 * local_18;
  local_c0[(uint)bVar3 * -2] = local_114[(uint)bVar3 * -2 + 3];
  local_c0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       local_114[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  if (&local_124 != &local_c4) {
    local_124 = local_c4;
    local_120 = local_c0[0];
    local_11c = local_c0[1];
  }
  local_ac.x = (int)ROUND(local_124 * 256.0f);
  local_ac.y = (int)ROUND(local_120 * 256.0f);
  local_ac.z = (int)ROUND(local_11c * 256.0f);
  SStack_180.surface_normal.D.f = 6.128422e-39;
  engine_special_cpp_transformAndProjectPoint_FUN_0055d723
            (&g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_ac);
  this_ptr_00 = g_CDemonRenderer_PTR_0060b280;
  fVar2 = 65535.0f;
  pSVar1 = g_CDemonRenderer_PTR_0060b280->vertex_buffer_ptr;
  dVar4 = round((double)((this_ptr->eye_glow_color).x * 65535.0f));
  local_2c = (float)(int)ROUND(dVar4);
  pSVar1->r = (int)local_2c;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar4 = round((double)((this_ptr->eye_glow_color).y * fVar2));
  local_30 = (float)(int)ROUND(dVar4);
  pSVar1->g = (int)local_30;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  SStack_180.surface_normal.D.f = 6.128566e-39;
  dVar4 = round((double)((this_ptr->eye_glow_color).z * fVar2));
  local_34 = (float)(int)ROUND(dVar4);
  pSVar1->b = (int)local_34;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  SStack_180.surface_normal.C.f = 6.128615e-39;
  dVar4 = round((double)((this_ptr->eye_glow_color).x * fVar2));
  local_38 = (float)(int)ROUND(dVar4);
  pSVar1[1].r = (int)local_38;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  SStack_180.surface_normal.B.f = 6.128664e-39;
  dVar4 = round((double)((this_ptr->eye_glow_color).y * fVar2));
  local_3c = (float)(int)ROUND(dVar4);
  pSVar1[1].g = (int)local_3c;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  SStack_180.surface_normal.A.f = 6.128713e-39;
  dVar4 = round((double)((this_ptr->eye_glow_color).z * fVar2));
  local_40 = (float)(int)ROUND(dVar4);
  pSVar1[1].b = (int)local_40;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  SStack_180.base.count = 0x42bc7f;
  dVar4 = round((double)((this_ptr->eye_glow_color).x * fVar2));
  local_44 = (float)(int)ROUND(dVar4);
  pSVar1[2].r = (int)local_44;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  SStack_180.base.type = 0x42bca5;
  dVar4 = round((double)((this_ptr->eye_glow_color).y * fVar2));
  local_54[3] = (float)(int)ROUND(dVar4);
  pSVar1[2].g = (int)local_54[3];
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar4 = round((double)((this_ptr->eye_glow_color).z * fVar2));
  local_54[2] = (float)(int)ROUND(dVar4);
  pSVar1[2].b = (int)local_54[2];
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  dVar4 = round((double)((this_ptr->eye_glow_color).x * fVar2));
  local_54[1] = (float)(int)ROUND(dVar4);
  pSVar1[3].r = (int)local_54[1];
  dVar4 = (double)SStack_180.surface_normal.A.f;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  uStack_18c = 0x42bd1e;
  dVar5 = round((double)((this_ptr->eye_glow_color).y * fVar2));
  uStack_188 = SUB84(__BITCAST_UINT64(dVar4),0);
  local_54[0] = (float)(int)ROUND(dVar5);
  pSVar1[3].g = (int)local_54[0];
  dVar4 = __BITCAST_DOUBLE(CONCAT44(uStack_188,uStack_18c)) * 65535;
  pSVar1 = this_ptr_00->vertex_buffer_ptr;
  uStack_190 = 0x42bd51;
  dVar5 = round((double)((this_ptr->eye_glow_color).z * fVar2));
  SStack_180.base.type = (int)((ulonglong)dVar4 >> 0x20);
  uStack_184 = SUB84(__BITCAST_UINT64(dVar4),0);
  local_58 = (float)(int)ROUND(dVar5);
  pSVar1[3].b = (int)local_58;
  uStack_194 = 0x42bd6e;
  dVar4 = round(__BITCAST_DOUBLE(CONCAT44(uStack_184,uStack_188)));
  local_54[1] = (float)(int)ROUND(dVar4);
  this_ptr_00->vertex_buffer_ptr->a = (int)local_54[1];
  this_ptr_00->vertex_buffer_ptr[1].a = (int)local_54[1];
  this_ptr_00->vertex_buffer_ptr[2].a = (int)local_54[1];
  this_ptr_00->vertex_buffer_ptr[3].a = (int)local_54[1];
  this_ptr_00->vertex_buffer_ptr->u = 0;
  this_ptr_00->vertex_buffer_ptr->v = 0xff0000;
  this_ptr_00->vertex_buffer_ptr[1].u = 0xff0000;
  this_ptr_00->vertex_buffer_ptr[1].v = 0xff0000;
  this_ptr_00->vertex_buffer_ptr[2].u = 0xff0000;
  this_ptr_00->vertex_buffer_ptr[2].v = 0;
  this_ptr_00->vertex_buffer_ptr[3].u = 0;
  this_ptr_00->vertex_buffer_ptr[3].v = 0;
  SStack_180.base.count = 4;
  SStack_180.surface_normal.D.i = 0;
  SStack_180.surface_normal.C.i = 0;
  SStack_180.surface_normal.B.i = 0;
  SStack_180.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (this_ptr_00,&g_SMRGLTextureBasic_00609ae4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
            (g_CDemonRenderer_PTR_0060b280,&SStack_180);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
  return;
}
