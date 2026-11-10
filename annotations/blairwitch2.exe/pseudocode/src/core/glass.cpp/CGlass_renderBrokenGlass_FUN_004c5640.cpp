// Name: core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640
// Address: 004c5640
// Address Range: [[004c5640, 004c583a]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass *this_ptr)

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
  core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)0x0);
  puVar3 = local_30;
  puVar6 = local_48;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  iVar2 = core_box_cpp_FUN_0041a840(local_48);
  if (iVar2 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
    return;
  }
  iVar2 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar2 == 0) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->field_0x4d0);
  }
  else {
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)&this_ptr->field_0x4d0);
    engine_drender_cpp_CDemonRenderer_setShadowPass_FUN_0046b940(DAT_0060b280,1);
  }
  iVar2 = 0;
  if (0 < this_ptr->broken_vertex_count) {
    pCVar7 = this_ptr->broken_vertices;
    iVar4 = 0;
    do {
      CStack_18.x = (int)ROUND(pCVar7->x * _DAT_005f7a60);
      CStack_18.y = (int)ROUND(pCVar7->y * _DAT_005f7a60);
      CStack_18.z = (int)ROUND(pCVar7->z * _DAT_005f7a60);
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(DAT_0060b280->vertex_buffer_ptr + iVar4),&CStack_18);
      pCVar1 = DAT_0060b280;
      *(uint *)(DAT_0060b280->vertex_buffer_ptr + iVar4 + 0x20) = 0xffff;
      *(uint *)(pCVar1->vertex_buffer_ptr + iVar4 + 0x24) = 0xffff;
      *(uint *)(pCVar1->vertex_buffer_ptr + iVar4 + 0x28) = 0xffff;
      iVar2 = iVar2 + 1;
      pCVar7 = pCVar7 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar2 < this_ptr->broken_vertex_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,this_ptr->opacity);
  iVar2 = 0;
  if (0 < this_ptr->broken_polygon_count) {
    poly = (SMRGLPrimitivePoly *)&this_ptr->field_0x808;
    pCVar5 = this_ptr;
    do {
      *(uint *)&pCVar5->field_0x810 = 0;
      *(uint *)&pCVar5->field_0x814 = 0;
      pCVar1 = DAT_0060b280;
      *(uint *)&pCVar5->field_0x818 = 0;
      *(uint *)&pCVar5->field_0x81c = 0;
      engine_drender_cpp_CDemonRenderer_renderSolidTexturedPoly_FUN_0046a3a0(pCVar1,poly);
      pCVar5 = (CGlass *)((pCVar5->base).orient_matrix.m + 1);
      iVar2 = iVar2 + 1;
      poly = poly + 0x48;
    } while (iVar2 < this_ptr->broken_polygon_count);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(&this_ptr->base);
  return;
}
