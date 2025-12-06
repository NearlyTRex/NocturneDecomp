// Name: core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0
// Address: 004ea1c0
// Address Range: [[004ea1c0, 004eaee2]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass * this_ptr, SQuadVertices * quad_vertices, CVector4i * quad_uv_u, CVector4i * quad_uv_v, int subdivision_level)

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
          (CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v,
          int subdivision_level)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  byte local_1d0 [40];
  byte local_1a8 [8];
  byte local_1a0 [4];
  byte local_19c [4];
  byte local_198 [8];
  CVector4i local_190;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&stack0xfffffe1c,4,&g_CVectorTypeInfo);
  if (((in_stack_00000018 < 3) ||
      (iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5), iVar1 == 0)) && (unaff_EDI != 0)) {
    local_78 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_168 = local_78 / 2f;
    local_74 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_70 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_164 = local_74 * 0.5f;
    local_160 = local_70 * 0.5f;
    if ((float *)local_1d0 != &local_168) {
      local_1d0._0_4_ = local_168;
      local_1d0._4_4_ = local_164;
      local_1d0._8_4_ = local_160;
    }
    local_120 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_11c = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_118 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_108 = local_120 + quad_vertices->vertices[2].x;
    local_104 = local_11c + quad_vertices->vertices[2].y;
    local_100 = local_118 + quad_vertices->vertices[2].z;
    local_e4 = local_108 + quad_vertices->vertices[3].x;
    local_90 = local_e4 / 4f;
    local_e0 = local_104 + quad_vertices->vertices[3].y;
    local_dc = local_100 + quad_vertices->vertices[3].z;
    local_8c = local_e0 * 0.25f;
    local_88 = local_dc * 0.25f;
    if ((float *)(local_1d0 + 0xc) != &local_90) {
      local_1d0._12_4_ = local_90;
      local_1d0._16_4_ = local_8c;
      local_1d0._20_4_ = local_88;
    }
    local_48 = quad_vertices->vertices[0].x + quad_vertices->vertices[3].x;
    local_54 = local_48 / 2f;
    local_44 = quad_vertices->vertices[0].y + quad_vertices->vertices[3].y;
    local_40 = quad_vertices->vertices[0].z + quad_vertices->vertices[3].z;
    local_50 = local_44 * 0.5f;
    local_4c = local_40 * 0.5f;
    if ((float *)(local_1d0 + 0x18) != &local_54) {
      local_1d0._24_4_ = local_54;
      local_1d0._28_4_ = local_50;
      local_1d0._32_4_ = local_4c;
    }
    local_1d0._36_4_ = quad_uv_u->x;
    local_1a8._0_4_ = (local_1d0._36_4_ + quad_uv_u->y) / 2;
    iVar1 = quad_uv_u->w + quad_uv_u->x + quad_uv_u->y + quad_uv_u->z;
    iVar2 = iVar1 >> 0x1f;
    local_1a8._4_4_ = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1a0 = (byte  [4])((quad_uv_u->x + quad_uv_u->w) / 2);
    local_19c = (byte  [4])quad_uv_v->x;
    local_198._0_4_ = ((int)local_19c + quad_uv_v->y) / 2;
    iVar1 = quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z;
    iVar2 = iVar1 >> 0x1f;
    local_198._4_4_ = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_190.x = (quad_uv_v->x + quad_uv_v->w) / 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,(SQuadVertices *)&stack0xfffffe24,(CVector4i *)(local_1d0 + 0x24),
               (CVector4i *)local_19c,in_stack_0000001c + 1);
    local_38 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_140 = local_38 / 2f;
    local_34 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_30 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_13c = local_34 * 0.5f;
    local_138 = local_30 * 0.5f;
    if ((float *)&stack0xfffffe28 != &local_140) {
      local_1d0._0_4_ = local_138;
    }
    if ((CVector3f *)(local_1d0 + 4) != quad_vertices->vertices + 1) {
      local_1d0._4_4_ = quad_vertices->vertices[1].x;
      local_1d0._8_4_ = quad_vertices->vertices[1].y;
      local_1d0._12_4_ = quad_vertices->vertices[1].z;
    }
    local_14 = quad_vertices->vertices[1].x + quad_vertices->vertices[2].x;
    local_f8 = local_14 / 2f;
    local_f4 = (quad_vertices->vertices[1].y + quad_vertices->vertices[2].y) * 0.5f;
    local_f0 = (quad_vertices->vertices[1].z + quad_vertices->vertices[2].z) * 0.5f;
    if ((float *)(local_1d0 + 0x10) != &local_f8) {
      local_1d0._16_4_ = local_f8;
      local_1d0._20_4_ = local_f4;
      local_1d0._24_4_ = local_f0;
    }
    local_bc = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_b8 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_b4 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_d4 = local_bc + quad_vertices->vertices[2].x;
    local_d0 = local_b8 + quad_vertices->vertices[2].y;
    local_cc = local_b4 + quad_vertices->vertices[2].z;
    local_20 = local_d4 + quad_vertices->vertices[3].x;
    local_170 = local_20 / 4f;
    local_1c = local_d0 + quad_vertices->vertices[3].y;
    local_18 = local_cc + quad_vertices->vertices[3].z;
    local_16c = local_1c * 0.25f;
    local_168 = local_18 * 0.25f;
    if ((float *)(local_1d0 + 0x1c) != &local_170) {
      local_1d0._28_4_ = local_170;
      local_1d0._32_4_ = local_16c;
      local_1d0._36_4_ = local_168;
    }
    local_1a8._0_4_ = (quad_uv_u->x + quad_uv_u->y) / 2;
    local_1a8._4_4_ = quad_uv_u->y;
    local_1a0 = (byte  [4])((local_1a8._4_4_ + quad_uv_u->z) / 2);
    iVar1 = quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w;
    iVar2 = iVar1 >> 0x1f;
    local_19c = (byte  [4])((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_198._0_4_ = (quad_uv_v->x + quad_uv_v->y) / 2;
    local_198._4_4_ = quad_uv_v->y;
    local_190.x = (local_198._4_4_ + quad_uv_v->z) / 2;
    iVar1 = quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z;
    iVar2 = iVar1 >> 0x1f;
    local_190.y = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,(SQuadVertices *)&stack0xfffffe28,(CVector4i *)local_1a8,
               (CVector4i *)local_198,in_stack_00000020 + 1);
    local_178 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_174 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_170 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_94 = local_178 + quad_vertices->vertices[2].x;
    local_90 = local_174 + quad_vertices->vertices[2].y;
    local_8c = local_170 + quad_vertices->vertices[2].z;
    local_28 = local_94 + quad_vertices->vertices[3].x;
    local_e8 = local_28 / 4f;
    local_24 = local_90 + quad_vertices->vertices[3].y;
    local_20 = local_8c + quad_vertices->vertices[3].z;
    local_e4 = local_24 * 0.25f;
    local_e0 = local_20 * 0.25f;
    if ((float *)&stack0xfffffe2c != &local_e8) {
      local_1d0._0_4_ = local_e4;
      local_1d0._4_4_ = local_e0;
    }
    local_154 = quad_vertices->vertices[1].x + quad_vertices->vertices[2].x;
    local_64 = local_154 / 2f;
    local_150 = quad_vertices->vertices[1].y + quad_vertices->vertices[2].y;
    local_14c = quad_vertices->vertices[1].z + quad_vertices->vertices[2].z;
    local_60 = local_150 * 0.5f;
    local_5c = local_14c * 0.5f;
    if ((float *)(local_1d0 + 8) != &local_64) {
      local_1d0._8_4_ = local_64;
      local_1d0._12_4_ = local_60;
      local_1d0._16_4_ = local_5c;
    }
    if ((CVector3f *)(local_1d0 + 0x14) != quad_vertices->vertices + 2) {
      local_1d0._20_4_ = quad_vertices->vertices[2].x;
      local_1d0._24_4_ = quad_vertices->vertices[2].y;
      local_1d0._28_4_ = quad_vertices->vertices[2].z;
    }
    local_148 = quad_vertices->vertices[2].x + quad_vertices->vertices[3].x;
    local_190.w = (int)(local_148 / 2f);
    local_144 = quad_vertices->vertices[2].y + quad_vertices->vertices[3].y;
    local_140 = quad_vertices->vertices[2].z + quad_vertices->vertices[3].z;
    local_180 = local_144 * 0.5f;
    local_17c = local_140 * 0.5f;
    if ((int *)(local_1d0 + 0x20) != &local_190.w) {
      local_1d0._32_4_ = local_190.w;
      local_1d0._36_4_ = local_180;
      local_1a8._0_4_ = local_17c;
    }
    iVar1 = quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w;
    iVar2 = iVar1 >> 0x1f;
    local_1a8._4_4_ = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_1a0 = (byte  [4])((quad_uv_u->y + quad_uv_u->z) / 2);
    local_19c = (byte  [4])quad_uv_u->z;
    local_198._0_4_ = ((int)local_19c + quad_uv_u->w) / 2;
    iVar1 = quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z;
    iVar2 = iVar1 >> 0x1f;
    local_198._4_4_ = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_190.x = (quad_uv_v->y + quad_uv_v->z) / 2;
    local_190.y = quad_uv_v->z;
    local_190.z = (local_190.y + quad_uv_v->w) / 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,(SQuadVertices *)&stack0xfffffe2c,(CVector4i *)(local_1a8 + 4),
               (CVector4i *)(local_198 + 4),in_stack_00000024 + 1);
    local_108 = quad_vertices->vertices[0].x + quad_vertices->vertices[3].x;
    local_120 = local_108 / 2f;
    local_104 = quad_vertices->vertices[0].y + quad_vertices->vertices[3].y;
    local_100 = quad_vertices->vertices[0].z + quad_vertices->vertices[3].z;
    local_11c = local_104 * 0.5f;
    local_118 = local_100 * 0.5f;
    if ((float *)local_1d0 != &local_120) {
      local_1d0._0_4_ = local_120;
      local_1d0._4_4_ = local_11c;
      local_1d0._8_4_ = local_118;
    }
    local_54 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_50 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_4c = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_c0 = local_54 + quad_vertices->vertices[2].x;
    local_bc = local_50 + quad_vertices->vertices[2].y;
    local_b8 = local_4c + quad_vertices->vertices[2].z;
    local_a8 = local_c0 + quad_vertices->vertices[3].x;
    local_78 = local_a8 / 4f;
    local_a4 = local_bc + quad_vertices->vertices[3].y;
    local_a0 = local_b8 + quad_vertices->vertices[3].z;
    local_74 = local_a4 * 0.25f;
    local_70 = local_a0 * 0.25f;
    if ((float *)(local_1d0 + 0xc) != &local_78) {
      local_1d0._12_4_ = local_78;
      local_1d0._16_4_ = local_74;
      local_1d0._20_4_ = local_70;
    }
    local_9c = quad_vertices->vertices[2].x + quad_vertices->vertices[3].x;
    local_12c = local_9c / 2f;
    local_98 = quad_vertices->vertices[2].y + quad_vertices->vertices[3].y;
    local_94 = quad_vertices->vertices[2].z + quad_vertices->vertices[3].z;
    local_128 = local_98 * 0.5f;
    local_124 = local_94 * 0.5f;
    if ((float *)(local_1d0 + 0x18) != &local_12c) {
      local_1d0._24_4_ = local_12c;
      local_1d0._28_4_ = local_128;
      local_1d0._32_4_ = local_124;
    }
    if ((CVector3f *)(local_1d0 + 0x24) != quad_vertices->vertices + 3) {
      local_1d0._36_4_ = quad_vertices->vertices[3].x;
      local_1a8._0_4_ = quad_vertices->vertices[3].y;
      local_1a8._4_4_ = quad_vertices->vertices[3].z;
    }
    local_1a0 = (byte  [4])((quad_uv_u->x + quad_uv_u->w) / 2);
    iVar1 = quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w;
    iVar2 = iVar1 >> 0x1f;
    local_19c = (byte  [4])((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_198._0_4_ = (quad_uv_u->z + quad_uv_u->w) / 2;
    local_198._4_4_ = quad_uv_u->w;
    local_190.x = (quad_uv_v->x + quad_uv_v->w) / 2;
    iVar1 = quad_uv_v->z + quad_uv_v->x + quad_uv_v->y + quad_uv_v->w;
    iVar2 = iVar1 >> 0x1f;
    local_190.y = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_190.z = (quad_uv_v->z + quad_uv_v->w) / 2;
    local_190.w = quad_uv_v->w;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,(SQuadVertices *)local_1d0,(CVector4i *)local_1a0,&local_190,
               in_stack_00000028 + 1);
    return;
  }
  if ((CVector3f *)local_1d0 != quad_vertices->vertices + 1) {
    local_1d0._0_4_ = quad_vertices->vertices[1].x;
    local_1d0._4_4_ = quad_vertices->vertices[1].y;
    local_1d0._8_4_ = quad_vertices->vertices[1].z;
  }
  if ((CVector3f *)(local_1d0 + 0xc) != quad_vertices->vertices + 2) {
    local_1d0._12_4_ = quad_vertices->vertices[2].x;
    local_1d0._16_4_ = quad_vertices->vertices[2].y;
    local_1d0._20_4_ = quad_vertices->vertices[2].z;
  }
  local_1d0._36_4_ = quad_uv_u->x;
  local_1a8._0_4_ = quad_uv_u->y;
  local_1a8._4_4_ = quad_uv_u->z;
  local_19c = (byte  [4])quad_uv_v->x;
  local_198._0_4_ = quad_uv_v->y;
  local_198._4_4_ = quad_uv_v->z;
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
            (g_CFireEffectPtr,(STriangleVertices *)&stack0xfffffe24,(CVector3f *)(local_1d0 + 0x24),
             (CVector3f *)local_19c,&this_ptr->glass_texture,this_ptr->opacity);
  if ((CVector3f *)(local_1d0 + 4) != quad_vertices->vertices + 2) {
    local_1d0._4_4_ = quad_vertices->vertices[2].x;
    local_1d0._8_4_ = quad_vertices->vertices[2].y;
    local_1d0._12_4_ = quad_vertices->vertices[2].z;
  }
  if ((CVector3f *)(local_1d0 + 0x10) != quad_vertices->vertices + 3) {
    local_1d0._16_4_ = quad_vertices->vertices[3].x;
    local_1d0._20_4_ = quad_vertices->vertices[3].y;
    local_1d0._24_4_ = quad_vertices->vertices[3].z;
  }
  local_1a8._4_4_ = quad_uv_u->z;
  local_1a0 = (byte  [4])quad_uv_u->w;
  local_198._4_4_ = quad_uv_v->z;
  local_190.x = quad_uv_v->w;
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
            (g_CFireEffectPtr,(STriangleVertices *)&stack0xfffffe28,(CVector3f *)local_1a8,
             (CVector3f *)local_198,&this_ptr->glass_texture,this_ptr->opacity);
  return;
}
