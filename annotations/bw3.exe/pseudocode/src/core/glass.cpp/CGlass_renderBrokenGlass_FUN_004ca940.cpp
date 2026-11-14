// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004ca940
// Address: 004ca940
// Address Range: [[004ca940, 004cab3a]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004ca940(CGlass *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  CGlass *pCVar5;
  uint *puVar6;
  CVector3f *pCVar7;
  SMRGLPrimitivePoly *poly;
  byte bVar8;
  uint local_48 [6];
  uint local_30 [6];
  CVector3i CStack_18;
  
  bVar8 = 0;
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004087f0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = local_30;
  puVar6 = local_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041daf0(local_48);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046d540(DAT_005f2afc);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,&this_ptr->broken_texture);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,&this_ptr->broken_texture);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046d520(DAT_005f2afc,1);
  }
  iVar2 = 0;
  if (0 < this_ptr->broken_vertex_count) {
    pCVar7 = this_ptr->broken_vertices;
    iVar4 = 0;
    do {
      CStack_18.x = (int)ROUND(pCVar7->x * _DAT_005e0bc0);
      CStack_18.y = (int)ROUND(pCVar7->y * _DAT_005e0bc0);
      CStack_18.z = (int)ROUND(pCVar7->z * _DAT_005e0bc0);
      engine_special_cpp_FUN_005632a3
                ((SProjectedVertex *)
                 ((int)&(DAT_005f2afc->vertex_buffer_ptr->projected_vertex).transformed_x + iVar4),
                 &CStack_18);
      pCVar1 = DAT_005f2afc;
      *(uint *)((int)&DAT_005f2afc->vertex_buffer_ptr->r + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->g + iVar4) = 0xffff;
      *(uint *)((int)&pCVar1->vertex_buffer_ptr->b + iVar4) = 0xffff;
      iVar2 = iVar2 + 1;
      pCVar7 = pCVar7 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < this_ptr->broken_vertex_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046d4c0(DAT_005f2afc,this_ptr->opacity);
  iVar2 = 0;
  if (0 < this_ptr->broken_polygon_count) {
    poly = (SMRGLPrimitivePoly *)this_ptr->broken_quads;
    pCVar5 = this_ptr;
    do {
      pCVar5->broken_quads[0].base.surface_normal.A.i = 0;
      pCVar5->broken_quads[0].base.surface_normal.B.i = 0;
      pCVar1 = DAT_005f2afc;
      pCVar5->broken_quads[0].base.surface_normal.C.i = 0;
      pCVar5->broken_quads[0].base.surface_normal.D.i = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046bf90(pCVar1,poly);
      pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      iVar2 = iVar2 + 1;
      poly = (SMRGLPrimitivePoly *)(poly->vertices + 4);
    } while (iVar2 < this_ptr->broken_polygon_count);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408830(&this_ptr->base);
  return;
}
