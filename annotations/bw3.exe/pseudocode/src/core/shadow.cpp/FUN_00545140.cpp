// Name: core_shadow.cpp_FUN_00545140
// Address: 00545140
// Address Range: [[00545140, 005456ff]]
// Convention: unknown
// Signature: void core_shadow_cpp_FUN_00545140(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadow_cpp_FUN_00545140(int param_1,float *param_2)

{
  CDemonRenderer *this_ptr;
  byte bVar1;
  float afStackY_1104 [1006];
  SMRGLHeaderPrimitive SStack_144;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  float fStack_11c;
  float afStack_118 [2];
  CVector3i CStack_110;
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  CVector3i CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [4];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3i CStack_98;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  CVector3i CStack_2c;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar1 = 0;
  fStack_14 = _DAT_005e3d64;
  fStack_50 = *param_2 + _DAT_005e3d64;
  fStack_1c = _DAT_005e3d68;
  fStack_48 = param_2[2];
  fStack_4c = param_2[1] + _DAT_005e3d68;
  afStack_dc[2] = fStack_50 * *(float *)(param_1 + 0x27b8);
  afStack_dc[3] = fStack_4c * *(float *)(param_1 + 0x27b8);
  fStack_cc = fStack_48 * *(float *)(param_1 + 0x27b8);
  if (afStack_100 + 2 != &fStack_c8) {
    afStack_100[2] = afStack_dc[2];
    afStack_100[3] = afStack_dc[3];
    fStack_f0 = fStack_cc;
  }
  CStack_110.x = (int)ROUND(afStack_100[2] * _DAT_005e3d30);
  CStack_110.y = (int)ROUND(afStack_100[3] * _DAT_005e3d30);
  CStack_110.z = (int)ROUND(fStack_f0 * _DAT_005e3d30);
  fStack_c8 = afStack_dc[2];
  fStack_c4 = afStack_dc[3];
  fStack_c0 = fStack_cc;
  afStack_40[2] = fStack_50;
  afStack_40[3] = fStack_4c;
  fStack_30 = fStack_48;
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_110);
  fStack_18 = _DAT_005e3d68;
  fStack_11c = -_DAT_005e3d64 + *param_2;
  afStack_118[1] = param_2[2];
  afStack_118[0] = param_2[1] + _DAT_005e3d68;
  fStack_104 = -_DAT_005e3d64 + *param_2;
  afStack_100[(uint)bVar1 * -2] = afStack_118[(uint)bVar1 * -2];
  afStack_100[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_118[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  fStack_8c = fStack_104 * *(float *)(param_1 + 0x27b8);
  afStack_88[0] = afStack_100[0] * *(float *)(param_1 + 0x27b8);
  afStack_88[1] = afStack_100[1] * *(float *)(param_1 + 0x27b8);
  fStack_a4 = fStack_8c;
  afStack_b8[(uint)bVar1 * -2 + 6] = afStack_88[(uint)bVar1 * -2];
  afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7] =
       afStack_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (afStack_100 + 2 != afStack_b8 + 5) {
    afStack_100[2] = fStack_a4;
    afStack_100[3] = fStack_a0;
    fStack_f0 = fStack_9c;
  }
  CStack_2c.x = (int)ROUND(afStack_100[2] * _DAT_005e3d30);
  CStack_2c.y = (int)ROUND(afStack_100[3] * _DAT_005e3d30);
  CStack_2c.z = (int)ROUND(fStack_f0 * _DAT_005e3d30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_2c);
  fStack_a8 = param_2[2];
  afStack_b8[2] = -_DAT_005e3d64 + *param_2;
  afStack_b8[3] = param_2[1] + -_DAT_005e3d68;
  afStack_88[2] = -_DAT_005e3d64 + *param_2;
  afStack_88[(uint)bVar1 * -2 + 3] = afStack_b8[(uint)bVar1 * -2 + 3];
  afStack_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
       afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
  fStack_68 = afStack_88[2] * *(float *)(param_1 + 0x27b8);
  fStack_64 = afStack_88[3] * *(float *)(param_1 + 0x27b8);
  fStack_60 = fStack_78 * *(float *)(param_1 + 0x27b8);
  fStack_5c = fStack_68;
  afStack_88[(uint)bVar1 * -2 + 0xc] = afStack_88[(uint)bVar1 * -2 + 9];
  afStack_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 0xd] =
       afStack_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 10];
  if (afStack_100 + 2 != afStack_88 + 0xb) {
    afStack_100[2] = fStack_5c;
    afStack_100[3] = fStack_58;
    fStack_f0 = fStack_54;
  }
  CStack_ec.x = (int)ROUND(afStack_100[2] * _DAT_005e3d30);
  CStack_ec.y = (int)ROUND(afStack_100[3] * _DAT_005e3d30);
  CStack_ec.z = (int)ROUND(fStack_f0 * _DAT_005e3d30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_ec);
  afStack_dc[1] = param_2[2];
  fStack_e0 = _DAT_005e3d64 + *param_2;
  afStack_dc[0] = param_2[1] + -_DAT_005e3d68;
  fStack_bc = _DAT_005e3d64 + *param_2;
  afStack_b8[(uint)bVar1 * -2] = afStack_dc[(uint)bVar1 * -2];
  afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_dc[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  fStack_74 = fStack_bc * *(float *)(param_1 + 0x27b8);
  fStack_70 = afStack_b8[0] * *(float *)(param_1 + 0x27b8);
  fStack_6c = afStack_b8[1] * *(float *)(param_1 + 0x27b8);
  fStack_44 = fStack_74;
  afStack_40[(uint)bVar1 * -2] = afStack_88[(uint)bVar1 * -2 + 6];
  afStack_40[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_88[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
  if (afStack_100 + 2 != &fStack_44) {
    afStack_100[2] = fStack_44;
    afStack_100[3] = afStack_40[0];
    fStack_f0 = afStack_40[1];
  }
  CStack_98.x = (int)ROUND(afStack_100[2] * _DAT_005e3d30);
  CStack_98.y = (int)ROUND(afStack_100[3] * _DAT_005e3d30);
  CStack_98.z = (int)ROUND(fStack_f0 * _DAT_005e3d30);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_98);
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
  uStack_12c = 0;
  uStack_120 = 3;
  uStack_128 = 1;
  uStack_124 = 2;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (this_ptr,(SMRGLTextureBasic *)0x6040b8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&SStack_144);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  return;
}
