// Name: core_fire.cpp_CRainDrop_render_FUN_004b46e0
// Address: 004b46e0
// Address Range: [[004b46e0, 004b4a81]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRainDrop_render_FUN_004b46e0(CRainDrop *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRainDrop_render_FUN_004b46e0(CRainDrop *this_ptr)

{
  SProjectedVertex *output;
  int iVar1;
  uint extraout_EDX;
  byte bVar2;
  float10 fVar3;
  int aiStackY_1020 [984];
  CVector3i *rotation;
  SMRGLHeaderPrimitive SStack_a8;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  CVector3i CStack_80;
  CVector3i CStack_74;
  CVector3i CStack_68;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  CVector3i CStack_50;
  CVector3i CStack_44;
  CVector3i CStack_38;
  CVector3i CStack_2c;
  int iStack_20;
  int aiStack_1c [4];
  
  bVar2 = 0;
  output = (SProjectedVertex *)DAT_00612560->vertex_buffer_ptr;
  CStack_68.x = (int)ROUND(*(float *)this_ptr * _DAT_005fff94);
  CStack_68.y = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005fff94);
  CStack_68.z = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005fff94);
  engine_special_cpp_FUN_0058043c(output,&CStack_68);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_00484fd0
                    (DAT_00612560,(SRenderVertex *)output);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
            (DAT_00612560,(CVector3f *)this_ptr);
  engine_matrix_c_FUN_00483b50(DAT_00612560);
  rotation = (CVector3i *)0x0;
  CStack_38.x = iStack_20;
  *(int *)((int)&CStack_38 + (uint)bVar2 * -8 + 4) = aiStack_1c[(uint)bVar2 * -2];
  *(int *)((int)&CStack_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       aiStack_1c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
            (DAT_00612560,&CStack_38,rotation);
  uStack_5c = 0xbe000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_50.x = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_50.y = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_50.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173((SProjectedVertex *)DAT_00612560->vertex_buffer_ptr,&CStack_50);
  uStack_5c = 0x3e000000;
  uStack_58 = 0xbe000000;
  uStack_54 = 0;
  CStack_80.x = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_80.y = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_80.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x30),&CStack_80);
  uStack_5c = 0x3e000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_74.x = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_74.y = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_74.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x60),&CStack_74);
  uStack_5c = 0xbe000000;
  uStack_58 = 0x3e000000;
  uStack_54 = 0;
  CStack_44.x = (int)ROUND(_DAT_005fff94 * -0.125);
  CStack_44.y = (int)ROUND(_DAT_005fff94 * 0.125);
  CStack_44.z = (int)ROUND(_DAT_005fff94 * 0.0);
  engine_special_cpp_FUN_00580173
            ((SProjectedVertex *)(DAT_00612560->vertex_buffer_ptr + 0x90),&CStack_44);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
            (DAT_00612560,(SMRGLTextureBasic *)&DAT_0061cb54);
  (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,this_ptr,0);
  aiStack_1c[2] = 0xffff - _DAT_01c51cac;
  fVar3 = (float10)aiStack_1c[2] * (float10)*(float *)&this_ptr->field_0x24 * (float10)_DAT_005df5ac
  ;
  _DAT_0062905c = 0xd00000;
  DAT_0062902c = 0x800000;
  _DAT_00629030 = 0xdc0000;
  _DAT_00629060 = 0xdc0000;
  _DAT_0062908c = 0x800000;
  _DAT_006290bc = 0x800000;
  DAT_00629090 = 0x900000;
  aiStack_1c[3] = aiStack_1c[2];
  round();
  DAT_00629040 = (int)ROUND(fVar3);
  CStack_2c.x = (int)ROUND(*(float *)this_ptr * _DAT_005fff94);
  CStack_2c.y = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005fff94);
  CStack_2c.z = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005fff94);
  DAT_00629070 = DAT_00629040;
  _DAT_006290a0 = DAT_00629040;
  _DAT_006290c0 = extraout_EDX;
  _DAT_006290d0 = DAT_00629040;
  aiStack_1c[2] = DAT_00629040;
  core_set_cpp_CDemonSet_computeLighting_FUN_00552a70
            (g_CDemonSetPtr,&CStack_2c,(CVector3i *)&DAT_01c57084,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
  SStack_a8.surface_normal.D.i = 0;
  SStack_a8.surface_normal.C.i = 0;
  SStack_a8.surface_normal.B.i = 0;
  SStack_a8.surface_normal.A.i = 0;
  uStack_90 = 0;
  uStack_84 = 3;
  SStack_a8.base.count = 4;
  uStack_8c = 1;
  uStack_88 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(DAT_00612560,&SStack_a8);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
  engine_matrix_c_pop_FUN_004839a0();
  return;
}
