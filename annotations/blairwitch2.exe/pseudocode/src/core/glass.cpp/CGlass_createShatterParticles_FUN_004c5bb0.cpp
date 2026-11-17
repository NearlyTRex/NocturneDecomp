// Name: core_glass.cpp_CGlass_createShatterParticles_FUN_004c5bb0
// Address: 004c5bb0
// Address Range: [[004c5bb0, 004c6d39]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_createShatterParticles_FUN_004c5bb0(CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v,int subdivision_level)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_createShatterParticles_FUN_004c5bb0(CGlass *this_ptr,SQuadVertices *quad_vertices,CVector4i *quad_uv_u,CVector4i *quad_uv_v,int subdivision_level)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_12f8 [992];
  SQuadVertices local_360;
  CVector4i local_330;
  CVector4i local_320;
  float local_310;
  float local_30c [4];
  float local_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
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
  float local_14;
  
  bVar3 = 0;
  __arrinit(&local_360,4,&g_CVectorTypeInfo);
  if (((subdivision_level < 3) ||
      (iVar1 = core_actor_cpp_randomChance_FUN_0040d060(0.5), iVar1 == 0)) &&
     (subdivision_level < 4)) {
    if (&local_360 != quad_vertices) {
      local_360.vertices[0].x = quad_vertices->vertices[0].x;
      local_360.vertices[0].y = quad_vertices->vertices[0].y;
      local_360.vertices[0].z = quad_vertices->vertices[0].z;
    }
    local_154 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_150 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_14c = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_118 = local_154;
    local_30c[(uint)bVar3 * -2 + 0x7e] = local_30c[(uint)bVar3 * -2 + 0x6f];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x7f] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x70];
    local_1e4 = local_118 * 0.5f;
    local_1e0 = local_114 * 0.5f;
    local_1dc = local_110 * 0.5f;
    local_19c = local_118 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x5d] = local_30c[(uint)bVar3 * -2 + 0x4b];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5e] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x4c];
    if (local_360.vertices + 1 != (CVector3f *)(local_30c + 0x5c)) {
      local_360.vertices[1].x = local_19c;
      local_360.vertices[1].y = local_198;
      local_360.vertices[1].z = local_194;
    }
    local_160 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_15c = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_158 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_28 = local_160;
    local_30c[(uint)bVar3 * -2 + 0xba] = local_30c[(uint)bVar3 * -2 + 0x6c];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xbb] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x6d];
    local_58 = local_28 + quad_vertices->vertices[2].x;
    local_54 = local_24 + quad_vertices->vertices[2].y;
    local_50 = local_20 + quad_vertices->vertices[2].z;
    local_28c = local_58;
    local_30c[(uint)bVar3 * -2 + 0x21] = local_30c[(uint)bVar3 * -2 + 0xae];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x22] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xaf];
    local_2f8 = local_28c + quad_vertices->vertices[3].x;
    local_2f4 = local_288 + quad_vertices->vertices[3].y;
    local_2f0 = local_284 + quad_vertices->vertices[3].z;
    local_40 = local_2f8;
    local_30c[(uint)bVar3 * -2 + 0xb4] = local_30c[(uint)bVar3 * -2 + 6];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xb5] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
    local_1c0 = local_40 * 0.25f;
    local_1bc = local_3c * 0.25f;
    local_1b8 = local_38 * 0.25f;
    local_16c = local_40 * 0.25f;
    local_30c[(uint)bVar3 * -2 + 0x69] = local_30c[(uint)bVar3 * -2 + 0x54];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x6a] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x55];
    if (local_360.vertices + 2 != (CVector3f *)(local_30c + 0x68)) {
      local_360.vertices[2].x = local_16c;
      local_360.vertices[2].y = local_168;
      local_360.vertices[2].z = local_164;
    }
    local_1cc = quad_vertices->vertices[0].x + quad_vertices->vertices[3].x;
    local_1c8 = quad_vertices->vertices[0].y + quad_vertices->vertices[3].y;
    local_1c4 = quad_vertices->vertices[0].z + quad_vertices->vertices[3].z;
    local_298 = local_1cc;
    local_30c[(uint)bVar3 * -2 + 0x1e] = local_30c[(uint)bVar3 * -2 + 0x51];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1f] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x52];
    local_a0 = local_298 * 0.5f;
    local_9c = local_294 * 0.5f;
    local_98 = local_290 * 0.5f;
    local_130 = local_298 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x78] = local_30c[(uint)bVar3 * -2 + 0x9c];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x79] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x9d];
    if (local_360.vertices + 3 != (CVector3f *)(local_30c + 0x77)) {
      local_360.vertices[3].x = local_130;
      local_360.vertices[3].y = local_12c;
      local_360.vertices[3].z = local_128;
    }
    local_330.x = quad_uv_u->x;
    local_330.y = (quad_uv_u->x + quad_uv_u->y) / 2;
    iVar1 = quad_uv_u->w + quad_uv_u->x + quad_uv_u->y + quad_uv_u->z;
    iVar2 = iVar1 >> 0x1f;
    local_330.z = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_330.w = (quad_uv_u->x + quad_uv_u->w) / 2;
    local_320.x = quad_uv_v->x;
    local_320.y = (local_320.x + quad_uv_v->y) / 2;
    iVar1 = quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z;
    iVar2 = iVar1 >> 0x1f;
    local_320.z = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_320.w = (quad_uv_v->x + quad_uv_v->w) / 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004c5bb0
              (this_ptr,&local_360,&local_330,&local_320,subdivision_level + 1);
    local_7c = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_78 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_74 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_c4 = local_7c;
    local_30c[(uint)bVar3 * -2 + 0x93] = local_30c[(uint)bVar3 * -2 + 0xa5];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x94] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xa6];
    local_2ec = local_c4 * 0.5f;
    local_2e8 = local_c0 * 0.5f;
    local_2e4 = local_bc * 0.5f;
    local_208 = local_c4 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x42] = local_30c[(uint)bVar3 * -2 + 9];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x43] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
    if (&local_360 != (SQuadVertices *)(local_30c + 0x41)) {
      local_360.vertices[0].x = local_208;
      local_360.vertices[0].y = local_204;
      local_360.vertices[0].z = local_200;
    }
    if (local_360.vertices + 1 != quad_vertices->vertices + 1) {
      local_360.vertices[1].x = quad_vertices->vertices[1].x;
      local_360.vertices[1].y = quad_vertices->vertices[1].y;
      local_360.vertices[1].z = quad_vertices->vertices[1].z;
    }
    local_2bc = quad_vertices->vertices[1].x + quad_vertices->vertices[2].x;
    local_2b8 = quad_vertices->vertices[1].y + quad_vertices->vertices[2].y;
    local_2b4 = quad_vertices->vertices[1].z + quad_vertices->vertices[2].z;
    local_1a8 = local_2bc;
    local_30c[(uint)bVar3 * -2 + 0x5a] = local_30c[(uint)bVar3 * -2 + 0x15];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5b] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x16];
    local_268 = local_1a8 * 0.5f;
    local_264 = local_1a4 * 0.5f;
    local_260 = local_1a0 * 0.5f;
    local_f4 = local_1a8 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x87] = local_30c[(uint)bVar3 * -2 + 0x2a];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x88] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x2b];
    if (local_360.vertices + 2 != (CVector3f *)(local_30c + 0x86)) {
      local_360.vertices[2].x = local_f4;
      local_360.vertices[2].y = local_f0;
      local_360.vertices[2].z = local_ec;
    }
    local_94 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_90 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_8c = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_250 = local_94;
    local_30c[(uint)bVar3 * -2 + 0x30] = local_30c[(uint)bVar3 * -2 + 0x9f];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x31] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xa0];
    local_2c8 = local_250 + quad_vertices->vertices[2].x;
    local_2c4 = local_24c + quad_vertices->vertices[2].y;
    local_2c0 = local_248 + quad_vertices->vertices[2].z;
    local_244 = local_2c8;
    local_30c[(uint)bVar3 * -2 + 0x33] = local_30c[(uint)bVar3 * -2 + 0x12];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x34] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x13];
    local_238 = local_244 + quad_vertices->vertices[3].x;
    local_234 = local_240 + quad_vertices->vertices[3].y;
    local_230 = local_23c + quad_vertices->vertices[3].z;
    local_2d4 = local_238;
    local_30c[(uint)bVar3 * -2 + 0xf] = local_30c[(uint)bVar3 * -2 + 0x36];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x10] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x37];
    local_184 = local_2d4 * 0.25f;
    local_180 = local_2d0 * 0.25f;
    local_17c = local_2cc * 0.25f;
    local_2a4 = local_2d4 * 0.25f;
    local_30c[(uint)bVar3 * -2 + 0x1b] = local_30c[(uint)bVar3 * -2 + 99];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x1c] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 100];
    if (local_360.vertices + 3 != (CVector3f *)(local_30c + 0x1a)) {
      local_360.vertices[3].x = local_2a4;
      local_360.vertices[3].y = local_2a0;
      local_360.vertices[3].z = local_29c;
    }
    local_330.x = (quad_uv_u->x + quad_uv_u->y) / 2;
    local_330.y = quad_uv_u->y;
    local_330.z = (quad_uv_u->y + quad_uv_u->z) / 2;
    iVar1 = quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w;
    iVar2 = iVar1 >> 0x1f;
    local_330.w = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_320.x = (quad_uv_v->x + quad_uv_v->y) / 2;
    local_320.y = quad_uv_v->y;
    local_320.z = (local_320.y + quad_uv_v->z) / 2;
    iVar1 = quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z;
    iVar2 = iVar1 >> 0x1f;
    local_320.w = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004c5bb0
              (this_ptr,&local_360,&local_330,&local_320,subdivision_level + 1);
    local_b8 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_b4 = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_b0 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_178 = local_b8;
    local_30c[(uint)bVar3 * -2 + 0x66] = local_30c[(uint)bVar3 * -2 + 0x96];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x67] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x97];
    local_274 = local_178 + quad_vertices->vertices[2].x;
    local_270 = local_174 + quad_vertices->vertices[2].y;
    local_26c = local_170 + quad_vertices->vertices[2].z;
    local_ac = local_274;
    local_30c[(uint)bVar3 * -2 + 0x99] = local_30c[(uint)bVar3 * -2 + 0x27];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x9a] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x28];
    local_88 = local_ac + quad_vertices->vertices[3].x;
    local_84 = local_a8 + quad_vertices->vertices[3].y;
    local_80 = local_a4 + quad_vertices->vertices[3].z;
    local_e8 = local_88;
    local_30c[(uint)bVar3 * -2 + 0x8a] = local_30c[(uint)bVar3 * -2 + 0xa2];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x8b] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xa3];
    local_214 = local_e8 * 0.25f;
    local_210 = local_e4 * 0.25f;
    local_20c = local_e0 * 0.25f;
    local_10c = local_e8 * 0.25f;
    local_30c[(uint)bVar3 * -2 + 0x81] = local_30c[(uint)bVar3 * -2 + 0x3f];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x82] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x40];
    if (&local_360 != (SQuadVertices *)(local_30c + 0x80)) {
      local_360.vertices[0].x = local_10c;
      local_360.vertices[0].y = local_108;
      local_360.vertices[0].z = local_104;
    }
    local_d0 = quad_vertices->vertices[1].x + quad_vertices->vertices[2].x;
    local_cc = quad_vertices->vertices[1].y + quad_vertices->vertices[2].y;
    local_c8 = quad_vertices->vertices[1].z + quad_vertices->vertices[2].z;
    local_1f0 = local_d0;
    local_30c[(uint)bVar3 * -2 + 0x48] = local_30c[(uint)bVar3 * -2 + 0x90];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x49] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x91];
    local_2e0 = local_1f0 * 0.5f;
    local_2dc = local_1ec * 0.5f;
    local_2d8 = local_1e8 * 0.5f;
    local_25c = local_1f0 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x2d] = local_30c[(uint)bVar3 * -2 + 0xc];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x2e] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xd];
    if (local_360.vertices + 1 != (CVector3f *)(local_30c + 0x2c)) {
      local_360.vertices[1].x = local_25c;
      local_360.vertices[1].y = local_258;
      local_360.vertices[1].z = local_254;
    }
    if (local_360.vertices + 2 != quad_vertices->vertices + 2) {
      local_360.vertices[2].x = quad_vertices->vertices[2].x;
      local_360.vertices[2].y = quad_vertices->vertices[2].y;
      local_360.vertices[2].z = quad_vertices->vertices[2].z;
    }
    local_1c = quad_vertices->vertices[2].x + quad_vertices->vertices[3].x;
    local_18 = quad_vertices->vertices[2].y + quad_vertices->vertices[3].y;
    local_14 = quad_vertices->vertices[2].z + quad_vertices->vertices[3].z;
    local_22c = local_1c;
    local_30c[(uint)bVar3 * -2 + 0x39] = local_30c[(uint)bVar3 * -2 + 0xbd];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3a] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xbe];
    local_64 = local_22c * 0.5f;
    local_60 = local_228 * 0.5f;
    local_5c = local_224 * 0.5f;
    local_220 = local_22c * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x3c] = local_30c[(uint)bVar3 * -2 + 0xab];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x3d] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xac];
    if (local_360.vertices + 3 != (CVector3f *)(local_30c + 0x3b)) {
      local_360.vertices[3].x = local_220;
      local_360.vertices[3].y = local_21c;
      local_360.vertices[3].z = local_218;
    }
    iVar1 = quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w;
    iVar2 = iVar1 >> 0x1f;
    local_330.x = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_330.y = (quad_uv_u->y + quad_uv_u->z) / 2;
    local_330.z = quad_uv_u->z;
    local_330.w = (quad_uv_u->z + quad_uv_u->w) / 2;
    iVar1 = quad_uv_v->w + quad_uv_v->x + quad_uv_v->y + quad_uv_v->z;
    iVar2 = iVar1 >> 0x1f;
    local_320.x = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_320.y = (quad_uv_v->y + quad_uv_v->z) / 2;
    local_320.z = quad_uv_v->z;
    local_320.w = (local_320.z + quad_uv_v->w) / 2;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004c5bb0
              (this_ptr,&local_360,&local_330,&local_320,subdivision_level + 1);
    local_1fc = quad_vertices->vertices[0].x + quad_vertices->vertices[3].x;
    local_1f8 = quad_vertices->vertices[0].y + quad_vertices->vertices[3].y;
    local_1f4 = quad_vertices->vertices[0].z + quad_vertices->vertices[3].z;
    local_148 = local_1fc;
    local_30c[(uint)bVar3 * -2 + 0x72] = local_30c[(uint)bVar3 * -2 + 0x45];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x73] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x46];
    local_70 = local_148 * 0.5f;
    local_6c = local_144 * 0.5f;
    local_68 = local_140 * 0.5f;
    local_1d8 = local_148 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0x4e] = local_30c[(uint)bVar3 * -2 + 0xa8];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x4f] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xa9];
    if (&local_360 != (SQuadVertices *)(local_30c + 0x4d)) {
      local_360.vertices[0].x = local_1d8;
      local_360.vertices[0].y = local_1d4;
      local_360.vertices[0].z = local_1d0;
    }
    local_2b0 = quad_vertices->vertices[0].x + quad_vertices->vertices[1].x;
    local_2ac = quad_vertices->vertices[0].y + quad_vertices->vertices[1].y;
    local_2a8 = quad_vertices->vertices[0].z + quad_vertices->vertices[1].z;
    local_124 = local_2b0;
    local_30c[(uint)bVar3 * -2 + 0x7b] = local_30c[(uint)bVar3 * -2 + 0x18];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x7c] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x19];
    local_280 = local_124 + quad_vertices->vertices[2].x;
    local_27c = local_120 + quad_vertices->vertices[2].y;
    local_278 = local_11c + quad_vertices->vertices[2].z;
    local_dc = local_280;
    local_30c[(uint)bVar3 * -2 + 0x8d] = local_30c[(uint)bVar3 * -2 + 0x24];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x8e] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x25];
    local_30c[2] = local_dc + quad_vertices->vertices[3].x;
    local_30c[3] = local_d8 + quad_vertices->vertices[3].y;
    local_2fc = local_d4 + quad_vertices->vertices[3].z;
    local_13c = local_30c[2];
    local_30c[(uint)bVar3 * -2 + 0x75] = local_30c[(uint)bVar3 * -2 + 3];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x76] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
    local_100 = local_13c * 0.25f;
    local_fc = local_138 * 0.25f;
    local_f8 = local_134 * 0.25f;
    local_1b4 = local_13c * 0.25f;
    local_30c[(uint)bVar3 * -2 + 0x57] = local_30c[(uint)bVar3 * -2 + 0x84];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x58] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x85];
    if (local_360.vertices + 1 != (CVector3f *)(local_30c + 0x56)) {
      local_360.vertices[1].x = local_1b4;
      local_360.vertices[1].y = local_1b0;
      local_360.vertices[1].z = local_1ac;
    }
    local_310 = quad_vertices->vertices[2].x + quad_vertices->vertices[3].x;
    local_30c[0] = quad_vertices->vertices[2].y + quad_vertices->vertices[3].y;
    local_30c[1] = quad_vertices->vertices[2].z + quad_vertices->vertices[3].z;
    local_34 = local_310;
    local_30c[(uint)bVar3 * -2 + 0xb7] = local_30c[(uint)bVar3 * -2];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xb8] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    local_190 = local_34 * 0.5f;
    local_18c = local_30 * 0.5f;
    local_188 = local_2c * 0.5f;
    local_4c = local_34 * 0.5f;
    local_30c[(uint)bVar3 * -2 + 0xb1] = local_30c[(uint)bVar3 * -2 + 0x60];
    local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0xb2] =
         local_30c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x61];
    if (local_360.vertices + 2 != (CVector3f *)(local_30c + 0xb0)) {
      local_360.vertices[2].x = local_4c;
      local_360.vertices[2].y = local_48;
      local_360.vertices[2].z = local_44;
    }
    if (local_360.vertices + 3 != quad_vertices->vertices + 3) {
      local_360.vertices[3].x = quad_vertices->vertices[3].x;
      local_360.vertices[3].y = quad_vertices->vertices[3].y;
      local_360.vertices[3].z = quad_vertices->vertices[3].z;
    }
    local_330.x = (quad_uv_u->x + quad_uv_u->w) / 2;
    iVar1 = quad_uv_u->z + quad_uv_u->x + quad_uv_u->y + quad_uv_u->w;
    iVar2 = iVar1 >> 0x1f;
    local_330.y = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_330.z = (quad_uv_u->z + quad_uv_u->w) / 2;
    local_330.w = quad_uv_u->w;
    local_320.x = (quad_uv_v->x + quad_uv_v->w) / 2;
    iVar1 = quad_uv_v->z + quad_uv_v->x + quad_uv_v->y + quad_uv_v->w;
    iVar2 = iVar1 >> 0x1f;
    local_320.y = (int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2;
    local_320.z = (quad_uv_v->z + quad_uv_v->w) / 2;
    local_320.w = quad_uv_v->w;
    core_glass_cpp_CGlass_createShatterParticles_FUN_004c5bb0
              (this_ptr,&local_360,&local_330,&local_320,subdivision_level + 1);
    return;
  }
  if (&local_360 != quad_vertices) {
    local_360.vertices[0].x = quad_vertices->vertices[0].x;
    local_360.vertices[0].y = quad_vertices->vertices[0].y;
    local_360.vertices[0].z = quad_vertices->vertices[0].z;
  }
  if (local_360.vertices + 1 != quad_vertices->vertices + 1) {
    local_360.vertices[1].x = quad_vertices->vertices[1].x;
    local_360.vertices[1].y = quad_vertices->vertices[1].y;
    local_360.vertices[1].z = quad_vertices->vertices[1].z;
  }
  if (local_360.vertices + 2 != quad_vertices->vertices + 2) {
    local_360.vertices[2].x = quad_vertices->vertices[2].x;
    local_360.vertices[2].y = quad_vertices->vertices[2].y;
    local_360.vertices[2].z = quad_vertices->vertices[2].z;
  }
  local_330.x = quad_uv_u->x;
  local_330.y = quad_uv_u->y;
  local_330.z = quad_uv_u->z;
  local_320.x = quad_uv_v->x;
  local_320.y = quad_uv_v->y;
  local_320.z = quad_uv_v->z;
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450
            (g_CFireEffectPtr,(STriangleVertices *)&local_360,(CVector3i *)&local_330,
             (CVector3i *)&local_320,&this_ptr->glass_texture,this_ptr->opacity);
  if (local_360.vertices + 1 != quad_vertices->vertices + 2) {
    local_360.vertices[1].x = quad_vertices->vertices[2].x;
    local_360.vertices[1].y = quad_vertices->vertices[2].y;
    local_360.vertices[1].z = quad_vertices->vertices[2].z;
  }
  if (local_360.vertices + 2 != quad_vertices->vertices + 3) {
    local_360.vertices[2].x = quad_vertices->vertices[3].x;
    local_360.vertices[2].y = quad_vertices->vertices[3].y;
    local_360.vertices[2].z = quad_vertices->vertices[3].z;
  }
  local_330.y = quad_uv_u->z;
  local_330.z = quad_uv_u->w;
  local_320.y = quad_uv_v->z;
  local_320.z = quad_uv_v->w;
  core_fire_cpp_CFireEffect_createGlassParticle_FUN_0049d450
            (g_CFireEffectPtr,(STriangleVertices *)&local_360,(CVector3i *)&local_330,
             (CVector3i *)&local_320,&this_ptr->glass_texture,this_ptr->opacity);
  return;
}
