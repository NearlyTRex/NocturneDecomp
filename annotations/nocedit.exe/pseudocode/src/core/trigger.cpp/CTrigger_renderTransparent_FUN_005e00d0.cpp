// Name: core_trigger.cpp_CTrigger_renderTransparent_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0(CTrigger *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0(CTrigger *this_ptr)

{
  CDemonRenderer *pCVar1;
  float fVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int iVar5;
  int iVar4;
  int blue;
  int iVar6;
  SRenderVertex *pSVar7;
  SRenderVertex *pSVar5;
  int alpha;
  SRenderVertex *pSVar6;
  int *piVar8;
  int *piVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar12;
  float10 fVar10;
  float10 fVar11;
  int iStack_d8;
  int iStack_d0;
  SMRGLHeaderPrimitive SStack_cc;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  CBoundingBox3D local_a4;
  CBoundingBox3D CStack_8c;
  CVector3i CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3i CStack_5c;
  CVector3i CStack_50;
  CVector3i aCStack_44 [2];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  float fVar1;
  CDemonRenderer *pCVar2;
  
  bVar8 = 0;
  if ((g_CDemonMissionPtr->is_in_editor == 0) ||
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 != 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a4);
  iVar5 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  if (iVar5 == 0) {
    return 0;
  }
  switch(this_ptr->hero_triggers_me) {
  default:
    iVar6 = 0xff;
    blue = 0;
    goto LAB_005e0160;
  case 1:
    iVar4 = 0xff;
    iVar6 = 0;
    blue = 0xff;
    break;
  case 2:
    iVar4 = 0xff;
    iVar6 = 0xff;
    blue = 0xff;
    break;
  case 3:
    blue = 0xff;
    iVar6 = 0;
LAB_005e0160:
    iVar4 = 0;
    break;
  case 4:
    iVar4 = 0xff;
    blue = 0;
    iVar6 = iVar4;
    break;
  case 5:
    blue = 0xff;
    iVar4 = 0;
    iVar6 = blue;
    break;
  case 6:
    iVar4 = 0xff;
    blue = 0;
    iVar6 = 0x80;
    break;
  case 7:
    iVar4 = 0xff;
    blue = 0;
    iVar6 = 0;
    break;
  case 8:
    blue = 0x100;
    iVar4 = 0x80;
    iVar6 = 0;
  }
  if (this_ptr == (CTrigger *)g_CDemonMissionPtr->selected_actor) {
    alpha = 0x80;
  }
  else {
    alpha = 0x40;
  }
  if (this_ptr->shape != 1) {
    core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
              (&this_ptr->base,iVar4,iVar6,blue,alpha);
    return iVar5;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  iStack_d0 = (int)ROUND(ROUND((this_ptr->trigger_size).x * (float)0.10000000000000001 +
                               (float)12));
  if (0x28 < iStack_d0) {
    iStack_d0 = 0x28;
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_8c);
  fVar2 = CStack_8c.min.y;
  pCVar2 = g_CDemonRendererPtr2;
  fVar1 = (this_ptr->trigger_size).x * (float)0.5;
  g_CDemonRendererPtr2->vertex_buffer_ptr->r = (int)ROUND(ROUND(fVar1 * 256.0f));
  pCVar2->vertex_buffer_ptr->g = iVar6 << 8;
  pCVar2->vertex_buffer_ptr->b = blue << 8;
  pCVar2->vertex_buffer_ptr->a = alpha << 8;
  pCVar2->vertex_buffer_ptr->u = 0x800000;
  pCVar2->vertex_buffer_ptr->v = 0x800000;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar2,&SMRGLTextureBasic_0068434c);
  CStack_50.x = (int)ROUND(256.0f * 0.0);
  CStack_50.y = (int)ROUND(fVar2 * 256.0f);
  CStack_50.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_50);
  pCVar1 = g_CDemonRendererPtr2;
  pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    pSVar6 = (SRenderVertex *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
    (pSVar6->projected_vertex).transformed_x = (pSVar7->projected_vertex).transformed_x;
    pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar6 = pSVar6;
  }
  CStack_74.x = (int)ROUND(256.0f * 0.0);
  CStack_74.y = (int)ROUND(CStack_8c.max.y * 256.0f);
  CStack_74.z = (int)ROUND(256.0f * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar1->vertex_buffer_ptr[1].projected_vertex,&CStack_74);
  iStack_d8 = 0;
  if (-1 < iStack_d0) {
    iStack_20 = 0x60;
    iStack_1c = 0x90;
    do {
      pCVar1 = g_CDemonRendererPtr2;
      fVar11 = ((float10)iStack_d8 * (float10)2 * (float10)3.1415926535000001) /
               (float10)iStack_d0;
      fVar9 = (float10)fsin(fVar11);
      fVar12 = (float10)fcos(fVar11);
      fVar10 = (float10)fVar1;
      pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      piVar8 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                             transformed_x + iStack_20);
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar8 = (pSVar7->projected_vertex).transformed_x;
        pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar8 * -2 + 1) * 4);
        piVar8 = piVar8 + (uint)bVar8 * -2 + 1;
      }
      CStack_5c.x = (int)ROUND((float)(fVar9 * fVar10) * 256.0f);
      CStack_5c.y = (int)ROUND(CStack_8c.min.y * 256.0f);
      CStack_5c.z = (int)ROUND((float)(fVar12 * fVar10) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_20),
                 &CStack_5c);
      pCVar1 = g_CDemonRendererPtr2;
      pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      piVar7 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                             transformed_x + iStack_1c);
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
        pSVar5 = (SRenderVertex *)((int)pSVar5 + (uint)bVar8 * -8 + 4);
        *piVar7 = (pSVar5->projected_vertex).transformed_x;
        pSVar5 = pSVar5;
        piVar7 = piVar7;
      }
      aCStack_44[0].x = (int)ROUND((float)(fVar9 * fVar10) * 256.0f);
      aCStack_44[0].y = (int)ROUND(CStack_8c.max.y * 256.0f);
      aCStack_44[0].z = (int)ROUND((float)(fVar12 * fVar10) * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_1c),
                 aCStack_44);
      iStack_1c = iStack_1c + 0x60;
      iStack_20 = iStack_20 + 0x60;
      iStack_d8 = iStack_d8 + 1;
    } while (iStack_d8 <= iStack_d0);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  iVar6 = 0;
  if (0 < iStack_d0) {
    do {
      SStack_cc.base.count = 4;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_cc,0x367);
      SStack_cc.base.count = 3;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_cc,0x367);
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_cc,0x367);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iStack_d0);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iVar5;
}
