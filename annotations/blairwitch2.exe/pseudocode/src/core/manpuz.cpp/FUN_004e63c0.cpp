// Name: core_manpuz.cpp_FUN_004e63c0
// Address: 004e63c0
// Address Range: [[004e63c0, 004e6813]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)

{
  int iVar1;
  int *extraout_EDX;
  CDemonRenderer *this_ptr_00;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  SMRGLPrimitivePoly aSStack_a8 [4];
  uint uStack_a4;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pfVar2 = (float *)(&this_ptr->field_0xbfc + gem_index * 0xb8);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)(pfVar2 + 0xc),(CVector3f *)(pfVar2 + 9));
  fVar3 = (float10)_DAT_005dc525;
  fVar4 = (float10)pfVar2[2] * fVar3;
  fVar5 = (float10)pfVar2[1] * fVar3;
  fVar3 = (float10)*pfVar2 * fVar3;
  round();
  round();
  iVar1 = (int)ROUND(fVar4);
  iStack_24 = iVar1;
  iStack_14 = (int)ROUND(fVar5);
  round();
  iStack_14 = (int)ROUND(fVar3);
  core_set_cpp_FUN_005344c0(g_CDemonSetPtr,iStack_14,(int)ROUND(fVar5),iVar1);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x430,0.0,-1);
  core_set_cpp_FUN_005344c0(g_CDemonSetPtr,0x10000,0x10000,0x10000);
  iVar1 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar1 == 0) &&
     ((((float)_DAT_005dc52d < pfVar2[3] || ((float)_DAT_005dc52d < pfVar2[4])) ||
      ((float)_DAT_005dc52d < pfVar2[5])))) {
    fStack_30 = -1.4;
    fStack_28 = -1.4;
    fStack_2c = 0.2;
    iStack_48 = (int)ROUND(_DAT_005f98a0 * -1.4);
    iStack_44 = (int)ROUND(_DAT_005f98a0 * 0.2);
    iStack_40 = (int)ROUND(_DAT_005f98a0 * -1.4);
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&iStack_48);
    fStack_30 = -fStack_30;
    iStack_60 = (int)ROUND(fStack_30 * _DAT_005f98a0);
    iStack_5c = (int)ROUND(fStack_2c * _DAT_005f98a0);
    iStack_58 = (int)ROUND(fStack_28 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&iStack_60);
    fStack_28 = -fStack_28;
    iStack_54 = (int)ROUND(fStack_30 * _DAT_005f98a0);
    iStack_50 = (int)ROUND(fStack_2c * _DAT_005f98a0);
    iStack_4c = (int)ROUND(fStack_28 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&iStack_54);
    fStack_30 = -fStack_30;
    iStack_3c = (int)ROUND(fStack_30 * _DAT_005f98a0);
    iStack_38 = (int)ROUND(fStack_2c * _DAT_005f98a0);
    iStack_34 = (int)ROUND(fStack_28 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&iStack_3c);
    uStack_a4 = 4;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    uStack_84 = 1;
    uStack_7c = 0;
    uStack_78 = 2;
    uStack_68 = 0;
    uStack_80 = 0x1000000;
    uStack_74 = 0x1000000;
    uStack_70 = 0x1000000;
    uStack_64 = 0x1000000;
    uStack_6c = 3;
    fVar3 = (float10)_DAT_005dc525;
    fVar4 = (float10)pfVar2[3] * fVar3;
    fVar5 = (float10)pfVar2[4] * fVar3;
    fVar3 = (float10)pfVar2[5] * fVar3;
    iVar1 = *(int *)DAT_0060b280;
    round();
    iStack_20 = (int)ROUND(fVar4);
    *(int *)(iVar1 + 0x20) = iStack_20;
    round();
    iStack_1c = (int)ROUND(fVar5);
    *(int *)(*extraout_EDX + 0x24) = iStack_1c;
    round();
    iStack_18 = (int)ROUND(fVar3);
    *(int *)(*(int *)this_ptr_00 + 0x28) = iStack_18;
    *(uint *)(*(int *)this_ptr_00 + 0x2c) = 0xffff;
    *(int *)(*(int *)this_ptr_00 + 0x50) = iStack_20;
    *(int *)(*(int *)this_ptr_00 + 0x54) = iStack_1c;
    *(int *)(*(int *)this_ptr_00 + 0x58) = iStack_18;
    *(uint *)(*(int *)this_ptr_00 + 0x5c) = 0xffff;
    *(int *)(*(int *)this_ptr_00 + 0x80) = iStack_20;
    *(int *)(*(int *)this_ptr_00 + 0x84) = iStack_1c;
    *(int *)(*(int *)this_ptr_00 + 0x88) = iStack_18;
    *(uint *)(*(int *)this_ptr_00 + 0x8c) = 0xffff;
    *(int *)(*(int *)this_ptr_00 + 0xb0) = iStack_20;
    *(int *)(*(int *)this_ptr_00 + 0xb4) = iStack_1c;
    *(int *)(*(int *)this_ptr_00 + 0xb8) = iStack_18;
    *(uint *)(*(int *)this_ptr_00 + 0xbc) = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (this_ptr_00,(SMRGLTextureBasic *)&this_ptr->field_0x161c);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(DAT_0060b280,aSStack_a8);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
