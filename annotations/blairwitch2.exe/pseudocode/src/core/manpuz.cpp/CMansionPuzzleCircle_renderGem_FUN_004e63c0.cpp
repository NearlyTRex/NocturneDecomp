// Name: core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_004e63c0
// Address: 004e63c0
// Address Range: [[004e63c0, 004e6813]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_renderGem_FUN_004e63c0(CMansionPuzzleCircle *this_ptr,int gem_index)

{
  SRenderVertex *pSVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  SGem *pSVar5;
  double dVar6;
  double dVar7;
  UIntegerFloat fog_scale;
  CVector3i CStack_6c;
  CVector3i CStack_60;
  CVector3i CStack_54;
  CVector3i CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_20;
  int iStack_1c;
  
  pSVar5 = this_ptr->gems + gem_index;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
            (DAT_0060b280,&pSVar5->rotation,&pSVar5->position);
  fVar2 = (pSVar5->color).g * _DAT_005dc525;
  fVar3 = (pSVar5->color).r * _DAT_005dc525;
  dVar6 = round((double)((pSVar5->color).b * _DAT_005dc525));
  dVar7 = round((double)fVar2);
  iStack_2c = (int)ROUND(dVar6);
  fog_scale.f = 7.199151e-39;
  iStack_1c = (int)ROUND(dVar7);
  dVar6 = round((double)fVar3);
  iStack_20 = (int)ROUND(dVar6);
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0
            (g_CDemonSetPtr,iStack_20,(int)ROUND(dVar7),fog_scale.i);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_0044fcc0
            (&this_ptr->gem_model,0.0,-1);
  core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(g_CDemonSetPtr,0x10000,0x10000,0x10000);
  iVar4 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if ((iVar4 == 0) &&
     ((((float)_DAT_005dc52d < (pSVar5->hum_color).r ||
       ((float)_DAT_005dc52d < (pSVar5->hum_color).g)) ||
      ((float)_DAT_005dc52d < (pSVar5->hum_color).b)))) {
    fStack_3c = -1.4;
    fStack_34 = -1.4;
    fStack_38 = 0.2;
    CStack_54.x = (int)ROUND(_DAT_005f98a0 * -1.4);
    CStack_54.y = (int)ROUND(_DAT_005f98a0 * 0.2);
    CStack_54.z = (int)ROUND(_DAT_005f98a0 * -1.4);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&CStack_54);
    fStack_3c = -fStack_3c;
    CStack_6c.x = (int)ROUND(fStack_3c * _DAT_005f98a0);
    CStack_6c.y = (int)ROUND(fStack_38 * _DAT_005f98a0);
    CStack_6c.z = (int)ROUND(fStack_34 * _DAT_005f98a0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&CStack_6c);
    fStack_34 = -fStack_34;
    CStack_60.x = (int)ROUND(fStack_3c * _DAT_005f98a0);
    CStack_60.y = (int)ROUND(fStack_38 * _DAT_005f98a0);
    CStack_60.z = (int)ROUND(fStack_34 * _DAT_005f98a0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&CStack_60);
    fStack_3c = -fStack_3c;
    CStack_48.x = (int)ROUND(fStack_3c * _DAT_005f98a0);
    CStack_48.y = (int)ROUND(fStack_38 * _DAT_005f98a0);
    CStack_48.z = (int)ROUND(fStack_34 * _DAT_005f98a0);
    engine_special_cpp_transformAndProjectPoint_FUN_0055d723
              (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&CStack_48);
    this_ptr_00 = DAT_0060b280;
    fVar2 = (pSVar5->hum_color).g * _DAT_005dc525;
    fVar3 = (pSVar5->hum_color).b * _DAT_005dc525;
    pSVar1 = DAT_0060b280->vertex_buffer_ptr;
    dVar6 = round((double)((pSVar5->hum_color).r * _DAT_005dc525));
    iStack_30 = (int)ROUND(dVar6);
    pSVar1->r = iStack_30;
    dVar6 = round((double)fVar2);
    iStack_30 = (int)ROUND(dVar6);
    this_ptr_00->vertex_buffer_ptr->g = iStack_30;
    dVar6 = round((double)fVar3);
    iStack_30 = (int)ROUND(dVar6);
    this_ptr_00->vertex_buffer_ptr->b = iStack_30;
    this_ptr_00->vertex_buffer_ptr->a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[1].r = (int)fStack_38;
    this_ptr_00->vertex_buffer_ptr[1].g = (int)fStack_34;
    this_ptr_00->vertex_buffer_ptr[1].b = iStack_30;
    this_ptr_00->vertex_buffer_ptr[1].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[2].r = (int)fStack_38;
    this_ptr_00->vertex_buffer_ptr[2].g = (int)fStack_34;
    this_ptr_00->vertex_buffer_ptr[2].b = iStack_30;
    this_ptr_00->vertex_buffer_ptr[2].a = 0xffff;
    this_ptr_00->vertex_buffer_ptr[3].r = (int)fStack_38;
    this_ptr_00->vertex_buffer_ptr[3].g = (int)fStack_34;
    this_ptr_00->vertex_buffer_ptr[3].b = iStack_30;
    this_ptr_00->vertex_buffer_ptr[3].a = 0xffff;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (this_ptr_00,(SMRGLTextureBasic *)&this_ptr->light_texture);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
              (DAT_0060b280,(SMRGLPrimitivePoly *)&stack0xffffff40);
    engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0046b870(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
  }
  engine_drender_cpp_pop_FUN_0046b4a0();
  return;
}
