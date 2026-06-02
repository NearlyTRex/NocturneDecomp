// Name: core_glass.cpp_CGlass_createShatterParticles_FUN_004ea1c0
// Address: 004ea1c0
// MANUAL RECONSTRUCTION
// Address Range: [[004ea1c0, 004eaee2]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v,int subdivision_level)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0(CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v,int subdivision_level)

{
  int iVar1;
  SQuadVertices local_1e4;
  CVector4i local_1b4;
  CVector4i local_1a4;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  __arrinit(&local_1e4,4,&g_CVectorTypeInfo);
  local_14 = (uint)(subdivision_level < 4);
  if (((subdivision_level < 3) ||
      (iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5), iVar1 == 0)) && (local_14 != 0)) {
    local_1e4.vertices[0] = quad_vertices->vertices[0];
    local_80 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_170 = local_80 / 2.0f;
    local_7c = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_78 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_16c = local_7c * 0.5f;
    local_168 = local_78 * 0.5f;
    if (local_1e4.vertices + 1 != (CVector3f *)&local_170) {
      local_1e4.vertices[1].x = local_170;
      local_1e4.vertices[1].y = local_16c;
      local_1e4.vertices[1].z = local_168;
    }
    local_128 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_124 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_120 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_110 = local_128 + quad_vertices->vertices[2].x;
    local_10c = local_124 + quad_vertices->vertices[2].y;
    local_108 = local_120 + quad_vertices->vertices[2].z;
    local_ec = local_110 + quad_vertices->vertices[3].x;
    local_98 = local_ec / 4.0f;
    local_e8 = local_10c + quad_vertices->vertices[3].y;
    local_e4 = local_108 + quad_vertices->vertices[3].z;
    local_94 = local_e8 * 0.25f;
    local_90 = local_e4 * 0.25f;
    if (local_1e4.vertices + 2 != (CVector3f *)&local_98) {
      local_1e4.vertices[2].x = local_98;
      local_1e4.vertices[2].y = local_94;
      local_1e4.vertices[2].z = local_90;
    }
    local_50 = quad_vertices->vertices[0].x + quad_vertices->vertices[3].x;
    local_5c = local_50 / 2.0f;
    local_4c = quad_vertices->vertices[0].y + quad_vertices->vertices[3].y;
    local_48 = quad_vertices->vertices[0].z + quad_vertices->vertices[3].z;
    local_58 = local_4c * 0.5f;
    local_54 = local_48 * 0.5f;
    if (local_1e4.vertices + 3 != (CVector3f *)&local_5c) {
      local_1e4.vertices[3].x = local_5c;
      local_1e4.vertices[3].y = local_58;
      local_1e4.vertices[3].z = local_54;
    }
    local_1b4.x = quad_uv_u->x;
    local_1b4.y = (local_1b4.x + quad_uv_u->y) / 2;
    local_1b4.z = (quad_uv_u->w + quad_uv_u->x + quad_uv_u->y + quad_uv_u->z) / 4;
    local_1b4.w = (quad_uv_u->x + quad_uv_u->w) / 2;
    local_1a4.x = quad_uv_v->x;
    local_1a4.y = (local_1a4.x + quad_uv_v->y) / 2;
    local_1a4.z = (quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z) / 4;
    local_1a4.w = (quad_uv_v->x + quad_uv_v->w) / 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,&local_1e4,&local_1b4,&local_1a4,subdivision_level + 1);
    local_44 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_14c = local_44 / 2.0f;
    local_40 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_3c = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_148 = local_40 * 0.5f;
    local_144 = local_3c * 0.5f;
    if (&local_1e4 != (SQuadVertices *)&local_14c) {
      local_1e4.vertices[0].x = local_14c;
      local_1e4.vertices[0].y = local_148;
      local_1e4.vertices[0].z = local_144;
    }
    local_1e4.vertices[1] = quad_vertices->vertices[1];
    local_20 = quad_vertices->vertices[1].x + quad_vertices->vertices[2].x;
    local_104 = local_20 / 2.0f;
    local_1c = quad_vertices->vertices[1].y + quad_vertices->vertices[2].y;
    local_18 = quad_vertices->vertices[1].z + quad_vertices->vertices[2].z;
    local_100 = local_1c * 0.5f;
    local_fc = local_18 * 0.5f;
    if (local_1e4.vertices + 2 != (CVector3f *)&local_104) {
      local_1e4.vertices[2].x = local_104;
      local_1e4.vertices[2].y = local_100;
      local_1e4.vertices[2].z = local_fc;
    }
    local_c8 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_c4 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_c0 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_e0 = local_c8 + quad_vertices->vertices[2].x;
    local_dc = local_c4 + quad_vertices->vertices[2].y;
    local_d8 = local_c0 + quad_vertices->vertices[2].z;
    local_2c = local_e0 + quad_vertices->vertices[3].x;
    local_17c = local_2c / 4.0f;
    local_28 = local_dc + quad_vertices->vertices[3].y;
    local_24 = local_d8 + quad_vertices->vertices[3].z;
    local_178 = local_28 * 0.25f;
    local_174 = local_24 * 0.25f;
    if (local_1e4.vertices + 3 != (CVector3f *)&local_17c) {
      local_1e4.vertices[3].x = local_17c;
      local_1e4.vertices[3].y = local_178;
      local_1e4.vertices[3].z = local_174;
    }
    local_1b4.x = (quad_uv_u->x + quad_uv_u->y) / 2;
    local_1b4.y = quad_uv_u->y;
    local_1b4.z = (local_1b4.y + quad_uv_u->z) / 2;
    local_1b4.w = (quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w) / 4;
    local_1a4.x = (quad_uv_v->x + quad_uv_v->y) / 2;
    local_1a4.y = quad_uv_v->y;
    local_1a4.z = (local_1a4.y + quad_uv_v->z) / 2;
    local_1a4.w = (quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z) / 4;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,&local_1e4,&local_1b4,&local_1a4,subdivision_level + 1);
    local_188 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_184 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_180 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_a4 = local_188 + quad_vertices->vertices[2].x;
    local_a0 = local_184 + quad_vertices->vertices[2].y;
    local_9c = local_180 + quad_vertices->vertices[2].z;
    local_38 = local_a4 + quad_vertices->vertices[3].x;
    local_f8 = local_38 / 4.0f;
    local_34 = local_a0 + quad_vertices->vertices[3].y;
    local_30 = local_9c + quad_vertices->vertices[3].z;
    local_f4 = local_34 * 0.25f;
    local_f0 = local_30 * 0.25f;
    if (&local_1e4 != (SQuadVertices *)&local_f8) {
      local_1e4.vertices[0].x = local_f8;
      local_1e4.vertices[0].y = local_f4;
      local_1e4.vertices[0].z = local_f0;
    }
    local_164 = quad_vertices->vertices[1].x + quad_vertices->vertices[2].x;
    local_74 = local_164 / 2.0f;
    local_160 = quad_vertices->vertices[1].y + quad_vertices->vertices[2].y;
    local_15c = quad_vertices->vertices[1].z + quad_vertices->vertices[2].z;
    local_70 = local_160 * 0.5f;
    local_6c = local_15c * 0.5f;
    if (local_1e4.vertices + 1 != (CVector3f *)&local_74) {
      local_1e4.vertices[1].x = local_74;
      local_1e4.vertices[1].y = local_70;
      local_1e4.vertices[1].z = local_6c;
    }
    local_1e4.vertices[2] = quad_vertices->vertices[2];
    local_158 = quad_vertices->vertices[2].x + quad_vertices->vertices[3].x;
    local_194 = local_158 / 2.0f;
    local_154 = quad_vertices->vertices[2].y + quad_vertices->vertices[3].y;
    local_150 = quad_vertices->vertices[2].z + quad_vertices->vertices[3].z;
    local_190 = local_154 * 0.5f;
    local_18c = local_150 * 0.5f;
    if (local_1e4.vertices + 3 != (CVector3f *)&local_194) {
      local_1e4.vertices[3].x = local_194;
      local_1e4.vertices[3].y = local_190;
      local_1e4.vertices[3].z = local_18c;
    }
    local_1b4.x = (quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w) / 4;
    local_1b4.y = (quad_uv_u->y + quad_uv_u->z) / 2;
    local_1b4.z = quad_uv_u->z;
    local_1b4.w = (local_1b4.z + quad_uv_u->w) / 2;
    local_1a4.x = (quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z) / 4;
    local_1a4.y = (quad_uv_v->y + quad_uv_v->z) / 2;
    local_1a4.z = quad_uv_v->z;
    local_1a4.w = (local_1a4.z + quad_uv_v->w) / 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,&local_1e4,&local_1b4,&local_1a4,subdivision_level + 1);
    local_11c = quad_vertices->vertices[0].x + quad_vertices->vertices[3].x;
    local_134 = local_11c / 2.0f;
    local_118 = quad_vertices->vertices[0].y + quad_vertices->vertices[3].y;
    local_114 = quad_vertices->vertices[0].z + quad_vertices->vertices[3].z;
    local_130 = local_118 * 0.5f;
    local_12c = local_114 * 0.5f;
    if (&local_1e4 != (SQuadVertices *)&local_134) {
      local_1e4.vertices[0].x = local_134;
      local_1e4.vertices[0].y = local_130;
      local_1e4.vertices[0].z = local_12c;
    }
    local_68 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_64 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_60 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_d4 = local_68 + quad_vertices->vertices[2].x;
    local_d0 = local_64 + quad_vertices->vertices[2].y;
    local_cc = local_60 + quad_vertices->vertices[2].z;
    local_bc = local_d4 + quad_vertices->vertices[3].x;
    local_8c = local_bc / 4.0f;
    local_b8 = local_d0 + quad_vertices->vertices[3].y;
    local_b4 = local_cc + quad_vertices->vertices[3].z;
    local_88 = local_b8 * 0.25f;
    local_84 = local_b4 * 0.25f;
    if (local_1e4.vertices + 1 != (CVector3f *)&local_8c) {
      local_1e4.vertices[1].x = local_8c;
      local_1e4.vertices[1].y = local_88;
      local_1e4.vertices[1].z = local_84;
    }
    local_b0 = quad_vertices->vertices[2].x + quad_vertices->vertices[3].x;
    local_140 = local_b0 / 2.0f;
    local_ac = quad_vertices->vertices[2].y + quad_vertices->vertices[3].y;
    local_a8 = quad_vertices->vertices[2].z + quad_vertices->vertices[3].z;
    local_13c = local_ac * 0.5f;
    local_138 = local_a8 * 0.5f;
    if (local_1e4.vertices + 2 != (CVector3f *)&local_140) {
      local_1e4.vertices[2].x = local_140;
      local_1e4.vertices[2].y = local_13c;
      local_1e4.vertices[2].z = local_138;
    }
    local_1e4.vertices[3] = quad_vertices->vertices[3];
    local_1b4.x = (quad_uv_u->x + quad_uv_u->w) / 2;
    local_1b4.y = (quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w) / 4;
    local_1b4.z = (quad_uv_u->z + quad_uv_u->w) / 2;
    local_1b4.w = quad_uv_u->w;
    local_1a4.x = (quad_uv_v->x + quad_uv_v->w) / 2;
    local_1a4.y = (quad_uv_v->z + quad_uv_v->x + quad_uv_v->y + quad_uv_v->w) / 4;
    local_1a4.z = (quad_uv_v->z + quad_uv_v->w) / 2;
    local_1a4.w = quad_uv_v->w;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004ea1c0
              (this_ptr,&local_1e4,&local_1b4,&local_1a4,subdivision_level + 1);
    return;
  }
  local_1e4.vertices[0] = quad_vertices->vertices[0];
  local_1e4.vertices[1] = quad_vertices->vertices[1];
  local_1e4.vertices[2] = quad_vertices->vertices[2];
  local_1b4.x = quad_uv_u->x;
  local_1b4.y = quad_uv_u->y;
  local_1b4.z = quad_uv_u->z;
  local_1a4.x = quad_uv_v->x;
  local_1a4.y = quad_uv_v->y;
  local_1a4.z = quad_uv_v->z;
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
            (g_CFireEffectPtr,(STriangleVertices *)&local_1e4,(CVector3i *)&local_1b4,
             (CVector3i *)&local_1a4,&this_ptr->glass_texture,this_ptr->opacity);
  local_1e4.vertices[1] = quad_vertices->vertices[2];
  local_1e4.vertices[2] = quad_vertices->vertices[3];
  local_1b4.y = quad_uv_u->z;
  local_1b4.z = quad_uv_u->w;
  local_1a4.y = quad_uv_v->z;
  local_1a4.z = quad_uv_v->w;
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_004c7d00
            (g_CFireEffectPtr,(STriangleVertices *)&local_1e4,(CVector3i *)&local_1b4,
             (CVector3i *)&local_1a4,&this_ptr->glass_texture,this_ptr->opacity);
  return;
}
