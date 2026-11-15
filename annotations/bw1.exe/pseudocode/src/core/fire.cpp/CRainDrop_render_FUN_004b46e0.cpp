// Name: core_fire.cpp_CRainDrop_render_FUN_004b46e0
// Address: 004b46e0
// Address Range: [[004b46e0, 004b4a81]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_004b46e0(CRainDrop *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004b46e0(CRainDrop *this_ptr)

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
  vertex_ptr = DAT_00612560->vertex_buffer_ptr;
  CStack_68.x = (int)ROUND((this_ptr->base).position.x * _DAT_005fff94);
  CStack_68.y = (int)ROUND((this_ptr->base).position.y * _DAT_005fff94);
  CStack_68.z = (int)ROUND((this_ptr->base).position.z * _DAT_005fff94);
  engine_special_cpp_transformPoint_FUN_0058043c(&vertex_ptr->projected_vertex,&CStack_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0(DAT_00612560,vertex_ptr);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(DAT_00612560,&CStack_20);
  rotation = (CVector3i *)0x0;
  auStack_38._0_4_ = CStack_20.x;
  *(uint *)(auStack_38 + (uint)bVar2 * -8 + 4) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + 4);
  *(uint *)(auStack_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       *(uint *)((int)&CStack_20 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
            (DAT_00612560,(CVector3i *)auStack_38,rotation);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_50.x = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_50.y = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_50.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&CStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_80.x = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_80.y = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_80.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&CStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_74.x = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_74.y = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_74.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&CStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_44.x = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_44.y = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_44.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_transformAndProjectPoint_FUN_00580173
            (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&CStack_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061cb54);
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,this_ptr,0);
  iStack_14 = 0xffff - _DAT_01c51cac;
  _DAT_0062905c = 0xd00000;
  DAT_0062902c = 0x800000;
  _DAT_00629030 = 0xdc0000;
  _DAT_00629060 = 0xdc0000;
  _DAT_0062908c = 0x800000;
  _DAT_006290bc = 0x800000;
  DAT_00629090 = 0x900000;
  iStack_10 = iStack_14;
  dVar3 = round
                    ((double)((float)iStack_14 *
                             (this_ptr->base).lifetime_remaining * (float)_DAT_005df5ac));
  DAT_00629040 = (int)ROUND(dVar3);
  _DAT_006290c0 = 0x900000;
  auStack_38._8_4_ = (uint)ROUND((this_ptr->base).position.x * _DAT_005fff94);
  iStack_2c = (int)ROUND((this_ptr->base).position.y * _DAT_005fff94);
  iStack_28 = (int)ROUND((this_ptr->base).position.z * _DAT_005fff94);
  DAT_00629070 = DAT_00629040;
  _DAT_006290a0 = DAT_00629040;
  _DAT_006290d0 = DAT_00629040;
  CStack_20.z = DAT_00629040;
  core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
            (g_CDemonSetPtr,(CVector3i *)(auStack_38 + 8),(CVector3i *)&DAT_01c57084,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  iStack_a8 = 4;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
            (DAT_00612560,(SMRGLHeaderPrimitive *)&stack0xffffff54);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_drender_cpp_pop_FUN_004839a0();
  return;
}
