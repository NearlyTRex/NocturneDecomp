// Name: core_fire.cpp_CRainDrop_render_FUN_004a1040
// Address: 004a1040
// Address Range: [[004a1040, 004a13e1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_004a1040(CRainDrop *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004a1040(CRainDrop *this_ptr)

{
  SRenderVertex *vertex_ptr;
  int iVar1;
  byte bVar2;
  double dVar3;
  int aiStackY_1020 [983];
  CVector3i *rotation;
  int iStack_a8;
  CVector3i CStack_80;
  CVector3i CStack_74;
  CVector3i CStack_68;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  CVector3i CStack_50;
  CVector3i CStack_44;
  byte auStack_38 [12];
  int iStack_2c;
  int iStack_28;
  CVector3i CStack_20;
  int iStack_14;
  int iStack_10;
  
  bVar2 = 0;
  vertex_ptr = DAT_005f2afc->vertex_buffer_ptr;
  CStack_68.x = (int)ROUND((this_ptr->base).position.x * _DAT_005df8e4);
  CStack_68.y = (int)ROUND((this_ptr->base).position.y * _DAT_005df8e4);
  CStack_68.z = (int)ROUND((this_ptr->base).position.z * _DAT_005df8e4);
  engine_special_cpp_transformPoint_FUN_0056356c(&vertex_ptr->projected_vertex,&CStack_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046e6b0(DAT_005f2afc,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
            (DAT_005f2afc,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_0046d230(DAT_005f2afc,&CStack_20);
  rotation = (CVector3i *)0x0;
  auStack_38._0_4_ = CStack_20.x;
  *(uint *)(auStack_38 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4);
  *(uint *)(auStack_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0
            (DAT_005f2afc,(CVector3i *)auStack_38,rotation);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_50.x = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_50.y = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_50.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&CStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_80.x = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_80.y = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_80.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&CStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_74.x = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_74.y = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_74.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&CStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_44.x = (int)ROUND(_DAT_005df8e4 * -0.125);
  CStack_44.y = (int)ROUND(_DAT_005df8e4 * 0.125);
  CStack_44.z = (int)ROUND(_DAT_005df8e4 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_005632a3
            (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&CStack_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
            (DAT_005f2afc,(SMRGLTextureBasic *)&DAT_005fdbdc);
  (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,this_ptr,0);
  iStack_14 = 0xffff - _DAT_01c6e24c;
  _DAT_0060b05c = 0xd00000;
  DAT_0060b02c = 0x800000;
  _DAT_0060b030 = 0xdc0000;
  _DAT_0060b060 = 0xdc0000;
  _DAT_0060b08c = 0x800000;
  _DAT_0060b0bc = 0x800000;
  DAT_0060b090 = 0x900000;
  iStack_10 = iStack_14;
  dVar3 = round
                    ((double)((float)iStack_14 *
                             (this_ptr->base).lifetime_remaining * (float)_DAT_005c0978));
  DAT_0060b040 = (int)ROUND(dVar3);
  _DAT_0060b0c0 = 0x900000;
  auStack_38._8_4_ = (uint)ROUND((this_ptr->base).position.x * _DAT_005df8e4);
  iStack_2c = (int)ROUND((this_ptr->base).position.y * _DAT_005df8e4);
  iStack_28 = (int)ROUND((this_ptr->base).position.z * _DAT_005df8e4);
  DAT_0060b070 = DAT_0060b040;
  _DAT_0060b0a0 = DAT_0060b040;
  _DAT_0060b0d0 = DAT_0060b040;
  CStack_20.z = DAT_0060b040;
  core_set_cpp_CDemonSet_computeLighting_FUN_00538400
            (g_CDemonSetPtr,(CVector3i *)(auStack_38 + 8),(CVector3i *)&DAT_01c73664,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,1);
  iStack_a8 = 4;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046c510
            (DAT_005f2afc,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046d4b0(DAT_005f2afc,0);
  engine_drender_cpp_pop_FUN_0046d080();
  return;
}
