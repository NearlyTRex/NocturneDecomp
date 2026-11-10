// Name: core_manpuz.cpp_FUN_004e63c0
// Address: 004e63c0
// Address Range: [[004e63c0, 004e6813]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int *extraout_EDX;
  CDemonRenderer *this_ptr_00;
  SGem *pSVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
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
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  pSVar3 = this_ptr->gems + gem_index;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,(CVector3f *)&pSVar3->field_0x30,(CVector3f *)&pSVar3->field_0x24);
  fVar4 = (float10)_DAT_005dc525;
  fVar5 = (float10)*(float *)&pSVar3->field_0x8 * fVar4;
  fVar6 = (float10)*(float *)&pSVar3->field_0x4 * fVar4;
  fVar4 = (float10)*(float *)pSVar3 * fVar4;
  round();
  round();
  iVar2 = (int)ROUND(fVar5);
  iStack_24 = iVar2;
  iStack_14 = (int)ROUND(fVar6);
  round();
  iStack_14 = (int)ROUND(fVar4);
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,iStack_14,(int)ROUND(fVar6),iVar2)
  ;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            (&this_ptr->gem_model,0.0,-1);
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,0x10000,0x10000,0x10000);
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar2 == 0) &&
     ((((float)_DAT_005dc52d < *(float *)&pSVar3->field_0xc ||
       ((float)_DAT_005dc52d < *(float *)&pSVar3->field_0x10)) ||
      ((float)_DAT_005dc52d < *(float *)&pSVar3->field_0x14)))) {
    fStack_30 = -1.4;
    fStack_28 = -1.4;
    fStack_2c = 0.2;
    CStack_48.x = (int)ROUND(_DAT_005f98a0 * -1.4);
    CStack_48.y = (int)ROUND(_DAT_005f98a0 * 0.2);
    CStack_48.z = (int)ROUND(_DAT_005f98a0 * -1.4);
    engine_special_cpp_FUN_0055d723((SProjectedVertex *)DAT_0060b280->vertex_buffer_ptr,&CStack_48);
    fStack_30 = -fStack_30;
    CStack_60.x = (int)ROUND(fStack_30 * _DAT_005f98a0);
    CStack_60.y = (int)ROUND(fStack_2c * _DAT_005f98a0);
    CStack_60.z = (int)ROUND(fStack_28 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x30),&CStack_60);
    fStack_28 = -fStack_28;
    CStack_54.x = (int)ROUND(fStack_30 * _DAT_005f98a0);
    CStack_54.y = (int)ROUND(fStack_2c * _DAT_005f98a0);
    CStack_54.z = (int)ROUND(fStack_28 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x60),&CStack_54);
    fStack_30 = -fStack_30;
    CStack_3c.x = (int)ROUND(fStack_30 * _DAT_005f98a0);
    CStack_3c.y = (int)ROUND(fStack_2c * _DAT_005f98a0);
    CStack_3c.z = (int)ROUND(fStack_28 * _DAT_005f98a0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + 0x90),&CStack_3c);
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
    fVar4 = (float10)_DAT_005dc525;
    fVar5 = (float10)*(float *)&pSVar3->field_0xc * fVar4;
    fVar6 = (float10)*(float *)&pSVar3->field_0x10 * fVar4;
    fVar4 = (float10)*(float *)&pSVar3->field_0x14 * fVar4;
    pSVar1 = DAT_0060b280->vertex_buffer_ptr;
    round();
    iStack_20 = (int)ROUND(fVar5);
    *(int *)(pSVar1 + 0x20) = iStack_20;
    round();
    iStack_1c = (int)ROUND(fVar6);
    *(int *)(*extraout_EDX + 0x24) = iStack_1c;
    round();
    iStack_18 = (int)ROUND(fVar4);
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x28) = iStack_18;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x2c) = 0xffff;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x50) = iStack_20;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x54) = iStack_1c;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x58) = iStack_18;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x5c) = 0xffff;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x80) = iStack_20;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x84) = iStack_1c;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0x88) = iStack_18;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0x8c) = 0xffff;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb0) = iStack_20;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb4) = iStack_1c;
    *(int *)(this_ptr_00->vertex_buffer_ptr + 0xb8) = iStack_18;
    *(uint *)(this_ptr_00->vertex_buffer_ptr + 0xbc) = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (this_ptr_00,(SMRGLTextureBasic *)&this_ptr->light_texture);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(DAT_0060b280,aSStack_a8);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  engine_matrix_c_pop_FUN_0046b4a0();
  return;
}
