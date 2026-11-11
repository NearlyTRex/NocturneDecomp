// Name: core_fire.cpp_CPopcorn_render_FUN_004a0cd0
// Address: 004a0cd0
// Address Range: [[004a0cd0, 004a1037]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_004a0cd0(CPopcorn *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CPopcorn_render_FUN_004a0cd0(CPopcorn *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  int aiStackY_1060 [1002];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a0;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  int iStack_78;
  int aiStack_74 [2];
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  CVector3i CStack_24;
  CVector3i CStack_18;
  
  bVar2 = 0;
  vertex_ptr = DAT_005f2afc->vertex_buffer_ptr;
  CStack_48.x = (int)ROUND((this_ptr->base).position.x * _DAT_005df8e4);
  CStack_48.y = (int)ROUND((this_ptr->base).position.y * _DAT_005df8e4);
  CStack_48.z = (int)ROUND((this_ptr->base).position.z * _DAT_005df8e4);
  engine_special_cpp_FUN_0056356c(&vertex_ptr->projected_vertex,&CStack_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(DAT_005f2afc,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)this_ptr);
  engine_matrix_c_FUN_0046d230(DAT_005f2afc);
  rotation = (CVector3i *)0x0;
  CStack_60.x = iStack_78;
  *(int *)((int)&CStack_60 + (uint)bVar2 * -8 + 4) = aiStack_74[(uint)bVar2 * -2];
  *(int *)((int)&CStack_60 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,&CStack_60,rotation);
  uStack_30 = 0xbe000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  CStack_18.x = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_18.y = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_18.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_18);
  uStack_30 = 0x3e000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  CStack_3c.x = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_3c.y = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_3c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_3c);
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  CStack_6c.x = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_6c.y = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_6c.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_6c);
  uStack_30 = 0xbe000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  CStack_54.x = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_54.y = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_54.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_FUN_005632a3(&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fdbc4);
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,this_ptr,0);
  DAT_0060b02c = 0x80000;
  _DAT_0060b030 = 0xf80000;
  _DAT_0060b05c = 0xf80000;
  _DAT_0060b060 = 0xf80000;
  _DAT_0060b08c = 0xf80000;
  DAT_0060b090 = 0x80000;
  _DAT_0060b0bc = 0x80000;
  DAT_0060b040 = 0xffff - _DAT_01c6e24c;
  _DAT_0060b0c0 = 0x80000;
  CStack_24.x = (int)ROUND((this_ptr->base).position.x * _DAT_005df8e4);
  CStack_24.y = (int)ROUND((this_ptr->base).position.y * _DAT_005df8e4);
  CStack_24.z = (int)ROUND((this_ptr->base).position.z * _DAT_005df8e4);
  DAT_0060b070 = DAT_0060b040;
  _DAT_0060b0a0 = DAT_0060b040;
  _DAT_0060b0d0 = DAT_0060b040;
  core_set_cpp_CDemonSet_computeLighting_FUN_00538400
            (g_CDemonSetPtr,&CStack_24,(CVector3i *)&DAT_01c73664,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  SStack_a0.surface_normal.D.i = 0;
  SStack_a0.surface_normal.C.i = 0;
  SStack_a0.surface_normal.B.i = 0;
  SStack_a0.surface_normal.A.i = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  SStack_a0.base.count = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510(DAT_005f2afc,&SStack_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_matrix_c_pop_FUN_0046d080();
  return;
}
