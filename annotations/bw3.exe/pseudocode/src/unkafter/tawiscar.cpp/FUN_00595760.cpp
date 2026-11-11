// Name: unkafter_tawiscar.cpp_FUN_00595760
// Address: 00595760
// Address Range: [[00595760, 00595d1f]]
// Convention: unknown
// Signature: void unkafter_tawiscar_cpp_FUN_00595760(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_tawiscar_cpp_FUN_00595760(int param_1,float *param_2)

{
  CDemonRenderer *this_ptr;
  byte bVar1;
  float afStackY_1104 [1006];
  SMRGLHeaderPrimitive SStack_144;
  uint local_12c;
  uint local_128;
  uint local_124;
  uint local_120;
  float local_11c;
  float local_118 [2];
  CVector3i local_110;
  float local_104;
  float local_100 [4];
  float local_f0;
  CVector3i local_ec;
  float local_e0;
  float local_dc [4];
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3i local_98;
  float local_8c;
  float local_88 [4];
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
  float local_40 [4];
  float local_30;
  CVector3i local_2c;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar1 = 0;
  local_14 = 0x3E4CCCCD;
  local_50 = *param_2 + 0x3E4CCCCD;
  local_1c = 0x3E4CCCCD;
  local_48 = param_2[2];
  local_4c = param_2[1] + 0x3E4CCCCD;
  local_dc[2] = local_50 * *(float *)(param_1 + 0x27b8);
  local_dc[3] = local_4c * *(float *)(param_1 + 0x27b8);
  local_cc = local_48 * *(float *)(param_1 + 0x27b8);
  if (local_100 + 2 != &local_c8) {
    local_100[2] = local_dc[2];
    local_100[3] = local_dc[3];
    local_f0 = local_cc;
  }
  local_110.x = (int)ROUND(local_100[2] * _DAT_005e7500);
  local_110.y = (int)ROUND(local_100[3] * _DAT_005e7500);
  local_110.z = (int)ROUND(local_f0 * _DAT_005e7500);
  local_c8 = local_dc[2];
  local_c4 = local_dc[3];
  local_c0 = local_cc;
  local_40[2] = local_50;
  local_40[3] = local_4c;
  local_30 = local_48;
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_110);
  local_18 = 0x3E4CCCCD;
  local_11c = -0x3E4CCCCD + *param_2;
  local_118[1] = param_2[2];
  local_118[0] = param_2[1] + 0x3E4CCCCD;
  local_104 = -0x3E4CCCCD + *param_2;
  local_100[(uint)bVar1 * -2] = local_118[(uint)bVar1 * -2];
  local_100[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_118[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  local_8c = local_104 * *(float *)(param_1 + 0x27b8);
  local_88[0] = local_100[0] * *(float *)(param_1 + 0x27b8);
  local_88[1] = local_100[1] * *(float *)(param_1 + 0x27b8);
  local_a4 = local_8c;
  local_b8[(uint)bVar1 * -2 + 6] = local_88[(uint)bVar1 * -2];
  local_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (local_100 + 2 != local_b8 + 5) {
    local_100[2] = local_a4;
    local_100[3] = local_a0;
    local_f0 = local_9c;
  }
  local_2c.x = (int)ROUND(local_100[2] * _DAT_005e7500);
  local_2c.y = (int)ROUND(local_100[3] * _DAT_005e7500);
  local_2c.z = (int)ROUND(local_f0 * _DAT_005e7500);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_2c);
  local_a8 = param_2[2];
  local_b8[2] = -0x3E4CCCCD + *param_2;
  local_b8[3] = param_2[1] + -0x3E4CCCCD;
  local_88[2] = -0x3E4CCCCD + *param_2;
  local_88[(uint)bVar1 * -2 + 3] = local_b8[(uint)bVar1 * -2 + 3];
  local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       local_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  local_68 = local_88[2] * *(float *)(param_1 + 0x27b8);
  local_64 = local_88[3] * *(float *)(param_1 + 0x27b8);
  local_60 = local_78 * *(float *)(param_1 + 0x27b8);
  local_5c = local_68;
  local_88[(uint)bVar1 * -2 + 0xc] = local_88[(uint)bVar1 * -2 + 9];
  local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd] =
       local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 10];
  if (local_100 + 2 != local_88 + 0xb) {
    local_100[2] = local_5c;
    local_100[3] = local_58;
    local_f0 = local_54;
  }
  local_ec.x = (int)ROUND(local_100[2] * _DAT_005e7500);
  local_ec.y = (int)ROUND(local_100[3] * _DAT_005e7500);
  local_ec.z = (int)ROUND(local_f0 * _DAT_005e7500);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_ec);
  local_dc[1] = param_2[2];
  local_e0 = 0x3E4CCCCD + *param_2;
  local_dc[0] = param_2[1] + -0x3E4CCCCD;
  local_bc = 0x3E4CCCCD + *param_2;
  local_b8[(uint)bVar1 * -2] = local_dc[(uint)bVar1 * -2];
  local_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_dc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  local_74 = local_bc * *(float *)(param_1 + 0x27b8);
  local_70 = local_b8[0] * *(float *)(param_1 + 0x27b8);
  local_6c = local_b8[1] * *(float *)(param_1 + 0x27b8);
  local_44 = local_74;
  local_40[(uint)bVar1 * -2] = local_88[(uint)bVar1 * -2 + 6];
  local_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  if (local_100 + 2 != &local_44) {
    local_100[2] = local_44;
    local_100[3] = local_40[0];
    local_f0 = local_40[1];
  }
  local_98.x = (int)ROUND(local_100[2] * _DAT_005e7500);
  local_98.y = (int)ROUND(local_100[3] * _DAT_005e7500);
  local_98.z = (int)ROUND(local_f0 * _DAT_005e7500);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_98);
  this_ptr = DAT_005f2afc;
  DAT_005f2afc->vertex_buffer_ptr->r = 0xffff;
  this_ptr->vertex_buffer_ptr->g = 0;
  this_ptr->vertex_buffer_ptr->b = 0;
  this_ptr->vertex_buffer_ptr[1].r = 0xffff;
  this_ptr->vertex_buffer_ptr[1].g = 0;
  this_ptr->vertex_buffer_ptr[1].b = 0;
  this_ptr->vertex_buffer_ptr[2].r = 0xffff;
  this_ptr->vertex_buffer_ptr[2].g = 0;
  this_ptr->vertex_buffer_ptr[2].b = 0;
  this_ptr->vertex_buffer_ptr[3].r = 0xffff;
  this_ptr->vertex_buffer_ptr[3].g = 0;
  this_ptr->vertex_buffer_ptr[3].b = 0;
  this_ptr->vertex_buffer_ptr->a = 0x4000;
  this_ptr->vertex_buffer_ptr[1].a = 0x4000;
  this_ptr->vertex_buffer_ptr[2].a = 0x4000;
  this_ptr->vertex_buffer_ptr[3].a = 0x4000;
  this_ptr->vertex_buffer_ptr->u = 0x80000;
  this_ptr->vertex_buffer_ptr->v = 0xf80000;
  this_ptr->vertex_buffer_ptr[1].u = 0xf80000;
  this_ptr->vertex_buffer_ptr[1].v = 0xf80000;
  this_ptr->vertex_buffer_ptr[2].u = 0xf80000;
  this_ptr->vertex_buffer_ptr[2].v = 0x80000;
  this_ptr->vertex_buffer_ptr[3].u = 0x80000;
  this_ptr->vertex_buffer_ptr[3].v = 0x80000;
  SStack_144.base.count = 4;
  SStack_144.surface_normal.D.i = 0;
  SStack_144.surface_normal.C.i = 0;
  SStack_144.surface_normal.B.i = 0;
  SStack_144.surface_normal.A.i = 0;
  local_12c = 0;
  local_120 = 3;
  local_128 = 1;
  local_124 = 2;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (this_ptr,(SMRGLTextureBasic *)&DAT_00607390);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&SStack_144);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
