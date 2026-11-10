// Name: core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0057ee80
// Address: 0057ee80
// Address Range: [[0057ee80, 0057f43f]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_0057ee80(CWerewolf *this_ptr,CVector3f *eye_position)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_werewolf_cpp_CWerewolf_renderEyeGlow_FUN_0057ee80(CWerewolf *this_ptr,CVector3f *eye_position)

{
  CDemonRenderer *this_ptr_00;
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
  local_50 = eye_position->x + 0x3E4CCCCD;
  local_1c = 0x3E4CCCCD;
  local_48 = eye_position->z;
  local_4c = eye_position->y + 0x3E4CCCCD;
  local_dc[2] = local_50 * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_dc[3] = local_4c * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_cc = local_48 * *(float *)&(this_ptr->base).base.field_0x27b8;
  if (local_100 + 2 != &local_c8) {
    local_100[2] = local_dc[2];
    local_100[3] = local_dc[3];
    local_f0 = local_cc;
  }
  local_110.x = (int)ROUND(local_100[2] * _DAT_005e6380);
  local_110.y = (int)ROUND(local_100[3] * _DAT_005e6380);
  local_110.z = (int)ROUND(local_f0 * _DAT_005e6380);
  local_c8 = local_dc[2];
  local_c4 = local_dc[3];
  local_c0 = local_cc;
  local_40[2] = local_50;
  local_40[3] = local_4c;
  local_30 = local_48;
  engine_special_cpp_FUN_005632a3((SProjectedVertex *)DAT_005f2afc->vertex_buffer_ptr,&local_110);
  local_18 = 0x3E4CCCCD;
  local_11c = -0x3E4CCCCD + eye_position->x;
  local_118[1] = eye_position->z;
  local_118[0] = eye_position->y + 0x3E4CCCCD;
  local_104 = local_11c;
  local_100[(uint)bVar1 * -2] = local_118[(uint)bVar1 * -2];
  local_100[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_118[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  local_8c = local_104 * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_88[0] = local_100[0] * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_88[1] = local_100[1] * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_a4 = local_8c;
  local_b8[(uint)bVar1 * -2 + 6] = local_88[(uint)bVar1 * -2];
  local_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (local_100 + 2 != local_b8 + 5) {
    local_100[2] = local_a4;
    local_100[3] = local_a0;
    local_f0 = local_9c;
  }
  local_2c.x = (int)ROUND(local_100[2] * _DAT_005e6380);
  local_2c.y = (int)ROUND(local_100[3] * _DAT_005e6380);
  local_2c.z = (int)ROUND(local_f0 * _DAT_005e6380);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x30),&local_2c);
  local_a8 = eye_position->z;
  local_b8[2] = -0x3E4CCCCD + eye_position->x;
  local_b8[3] = eye_position->y + -0x3E4CCCCD;
  local_88[2] = local_b8[2];
  local_88[(uint)bVar1 * -2 + 3] = local_b8[(uint)bVar1 * -2 + 3];
  local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       local_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  local_68 = local_88[2] * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_64 = local_88[3] * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_60 = local_78 * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_5c = local_68;
  local_88[(uint)bVar1 * -2 + 0xc] = local_88[(uint)bVar1 * -2 + 9];
  local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd] =
       local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 10];
  if (local_100 + 2 != local_88 + 0xb) {
    local_100[2] = local_5c;
    local_100[3] = local_58;
    local_f0 = local_54;
  }
  local_ec.x = (int)ROUND(local_100[2] * _DAT_005e6380);
  local_ec.y = (int)ROUND(local_100[3] * _DAT_005e6380);
  local_ec.z = (int)ROUND(local_f0 * _DAT_005e6380);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x60),&local_ec);
  local_dc[1] = eye_position->z;
  local_e0 = 0x3E4CCCCD + eye_position->x;
  local_dc[0] = eye_position->y + -0x3E4CCCCD;
  local_bc = local_e0;
  local_b8[(uint)bVar1 * -2] = local_dc[(uint)bVar1 * -2];
  local_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_dc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  local_74 = local_bc * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_70 = local_b8[0] * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_6c = local_b8[1] * *(float *)&(this_ptr->base).base.field_0x27b8;
  local_44 = local_74;
  local_40[(uint)bVar1 * -2] = local_88[(uint)bVar1 * -2 + 6];
  local_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       local_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  if (local_100 + 2 != &local_44) {
    local_100[2] = local_44;
    local_100[3] = local_40[0];
    local_f0 = local_40[1];
  }
  local_98.x = (int)ROUND(local_100[2] * _DAT_005e6380);
  local_98.y = (int)ROUND(local_100[3] * _DAT_005e6380);
  local_98.z = (int)ROUND(local_f0 * _DAT_005e6380);
  engine_special_cpp_FUN_005632a3
            ((SProjectedVertex *)(DAT_005f2afc->vertex_buffer_ptr + 0x90),&local_98);
  this_ptr_00 = DAT_005f2afc;
  *(uint *)(DAT_005f2afc->vertex_buffer_ptr + 0x20) = 0xffff;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x24) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x28) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x50) = 0xffff;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x54) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x58) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x80) = 0xffff;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x84) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x88) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xb0) = 0xffff;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xb4) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xb8) = 0;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x2c) = 0x4000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x5c) = 0x4000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x8c) = 0x4000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xbc) = 0x4000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x18) = 0x80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x1c) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x48) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x4c) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x78) = 0xf80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x7c) = 0x80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xa8) = 0x80000;
  *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xac) = 0x80000;
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
            (this_ptr_00,(SMRGLTextureBasic *)&DAT_00607240);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&SStack_144);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
