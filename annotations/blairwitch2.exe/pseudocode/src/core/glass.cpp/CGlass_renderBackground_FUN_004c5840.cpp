// Name: core_glass.cpp_CGlass_renderBackground_FUN_004c5840
// Address: 004c5840
// Address Range: [[004c5840, 004c59f8]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004c5840(CGlass *this_ptr,int layer_flag)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004c5840(CGlass *this_ptr,int layer_flag)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  CVector3f *pCVar2;
  CVector3i *pCVar3;
  CGlass *pCVar4;
  uint *puVar5;
  SMRGLPrimitivePoly *poly;
  uint *puVar6;
  byte bVar7;
  SMRGLTextureBasic *texture;
  uint auStack_3c [6];
  uint auStack_24 [6];
  
  bVar7 = 0;
  if (this_ptr->background_flag == 0) {
    if (((layer_flag != 0) && (this_ptr->shattered != 0)) && (this_ptr->mirror_flag != 0)) {
      core_glass_cpp_CGlass_renderBrokenGlass_FUN_004c5640(this_ptr);
      return;
    }
  }
  else if ((layer_flag != 0) || (this_ptr->pending_background_render != 0)) {
    this_ptr->pending_background_render = 0;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
    puVar5 = auStack_24;
    puVar6 = auStack_3c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
    }
    core_box_cpp_FUN_0041a840(auStack_3c);
    if (this_ptr->shattered == 0) {
      texture = (SMRGLTextureBasic *)&this_ptr->field_0x2c0;
    }
    else {
      texture = (SMRGLTextureBasic *)&this_ptr->field_0x4d0;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00(DAT_0060b280,texture);
    pCVar2 = this_ptr->broken_vertices;
    iVar1 = 0;
    pCVar3 = this_ptr->render_vertices;
    if (0 < this_ptr->broken_vertex_count) {
      do {
        pCVar3->x = (int)ROUND(pCVar2->x * _DAT_005f7a60);
        pCVar3->y = (int)ROUND(pCVar2->y * _DAT_005f7a60);
        pCVar3->z = (int)ROUND(pCVar2->z * _DAT_005f7a60);
        iVar1 = iVar1 + 1;
        pCVar2 = pCVar2 + 1;
        pCVar3 = pCVar3 + 1;
      } while (iVar1 < this_ptr->broken_vertex_count);
    }
    iVar1 = 0;
    core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
              (g_CDemonSetPtr,this_ptr->broken_vertex_count,this_ptr->render_vertices);
    if (0 < this_ptr->broken_polygon_count) {
      poly = (SMRGLPrimitivePoly *)&this_ptr->field_0x808;
      pCVar4 = this_ptr;
      do {
        *(uint *)&pCVar4->field_0x810 = 0;
        this_ptr_00 = DAT_0060b280;
        *(uint *)&pCVar4->field_0x814 = 0;
        iVar1 = iVar1 + 1;
        *(uint *)&pCVar4->field_0x818 = 0;
        *(uint *)&pCVar4->field_0x81c = 0;
        pCVar4 = (CGlass *)((pCVar4->base).orient_matrix.m + 1);
        engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(this_ptr_00,poly,0xc1);
        poly = poly + 0x48;
      } while (iVar1 < this_ptr->broken_polygon_count);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  }
  return;
}
