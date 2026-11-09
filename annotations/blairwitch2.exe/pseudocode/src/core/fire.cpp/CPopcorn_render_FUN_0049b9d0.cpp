// Name: core_fire.cpp_CPopcorn_render_FUN_0049b9d0
// Address: 0049b9d0
// Address Range: [[0049b9d0, 0049bd37]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CPopcorn_render_FUN_0049b9d0(CPopcorn *this_ptr)

{
  SProjectedVertex *output;
  int iVar1;
  byte bVar2;
  uint auStackY_1060 [1002];
  CVector3i *rotation;
  SMRGLHeaderPrimitive aSStack_a0 [4];
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint auStack_74 [2];
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  uint auStack_5c [2];
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar2 = 0;
  output = *(SProjectedVertex **)DAT_0060b280;
  iStack_48 = (int)ROUND(*(float *)this_ptr * _DAT_005f64e4);
  iStack_44 = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005f64e4);
  iStack_40 = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005f64e4);
  engine_special_cpp_FUN_0055d9ec(output,(CVector3i *)&iStack_48);
  iVar1 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0046cad0
                    (DAT_0060b280,(SRenderVertex *)output);
  if (iVar1 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)this_ptr);
  engine_matrix_c_FUN_0046b650(DAT_0060b280);
  rotation = (CVector3i *)0x0;
  uStack_60 = uStack_78;
  auStack_5c[(uint)bVar2 * -2] = auStack_74[(uint)bVar2 * -2];
  auStack_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       auStack_74[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0046b300
            (DAT_0060b280,(CVector3i *)&uStack_60,rotation);
  uStack_30 = 0xbe000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  iStack_18 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_14 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_10 = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_18);
  uStack_30 = 0x3e000000;
  uStack_2c = 0xbe000000;
  uStack_28 = 0;
  iStack_3c = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_38 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_34 = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_3c);
  uStack_30 = 0x3e000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  iStack_6c = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_68 = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_64 = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_6c);
  uStack_30 = 0xbe000000;
  uStack_2c = 0x3e000000;
  uStack_28 = 0;
  iStack_54 = (int)ROUND(_DAT_005f64e4 * -0.125);
  iStack_50 = (int)ROUND(_DAT_005f64e4 * 0.125);
  iStack_4c = (int)ROUND(_DAT_005f64e4 * 0.0);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_54);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0061585c);
  (**(code **)(*(int *)(DAT_007bda74 + 0x3c) + 4))(DAT_007bda74,this_ptr,0);
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0xf80000;
  _DAT_0062205c = 0xf80000;
  _DAT_00622060 = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0x80000;
  _DAT_006220bc = 0x80000;
  DAT_00622040 = 0xffff - _DAT_01c38aec;
  _DAT_006220c0 = 0x80000;
  iStack_24 = (int)ROUND(*(float *)this_ptr * _DAT_005f64e4);
  iStack_20 = (int)ROUND(*(float *)&this_ptr->field_0x4 * _DAT_005f64e4);
  iStack_1c = (int)ROUND(*(float *)&this_ptr->field_0x8 * _DAT_005f64e4);
  DAT_00622070 = DAT_00622040;
  _DAT_006220a0 = DAT_00622040;
  _DAT_006220d0 = DAT_00622040;
  core_set_cpp_CDemonSet_computeLighting_FUN_005317c0
            (g_CDemonSetPtr,(CVector3i *)&iStack_24,(CVector3i *)&DAT_01c3dec4,0,4);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_7c = 3;
  uStack_9c = 4;
  uStack_84 = 1;
  uStack_80 = 2;
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(DAT_0060b280,aSStack_a0);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
