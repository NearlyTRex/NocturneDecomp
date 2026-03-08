// Name: core_trigger.cpp_CTrigger_renderTransparent_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0(CTrigger *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0(CTrigger *this_ptr)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int iVar4;
  int blue;
  SRenderVertex *pSVar5;
  int alpha;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  float10 fVar9;
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
  
  bVar8 = 0;
  if ((g_CDemonMissionPtr->is_in_editor == 0) ||
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 != 0)) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&local_a4);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  iStack_24 = iVar3;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  if (iVar3 == 0) {
    return 0;
  }
  switch(this_ptr->hero_triggers_me) {
  default:
    iVar3 = 0xff;
    blue = 0;
    goto LAB_005e0160;
  case 1:
    iVar4 = 0xff;
    iVar3 = 0;
    blue = 0xff;
    break;
  case 2:
    iVar4 = 0xff;
    iVar3 = 0xff;
    blue = 0xff;
    break;
  case 3:
    blue = 0xff;
    iVar3 = 0;
LAB_005e0160:
    iVar4 = 0;
    break;
  case 4:
    iVar4 = 0xff;
    blue = 0;
    iVar3 = iVar4;
    break;
  case 5:
    blue = 0xff;
    iVar4 = 0;
    iVar3 = blue;
    break;
  case 6:
    iVar4 = 0xff;
    blue = 0;
    iVar3 = 0x80;
    break;
  case 7:
    iVar4 = 0xff;
    blue = 0;
    iVar3 = 0;
    break;
  case 8:
    blue = 0x100;
    iVar4 = 0x80;
    iVar3 = 0;
  }
  if (this_ptr == (CTrigger *)g_CDemonMissionPtr->selected_actor) {
    alpha = 0x80;
  }
  else {
    alpha = 0x40;
  }
  if (this_ptr->shape != 1) {
    core_actor_cpp_CDemonActor_renderBoundingBoxSolid_FUN_0040dec0
              (&this_ptr->base,iVar4,iVar3,blue,alpha);
    return iStack_24;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
  iStack_d0 = (int)ROUND(ROUND((this_ptr->trigger_size).x * (float)0.10000000000000001 +
                               (float)12));
  if (0x28 < iStack_d0) {
    iStack_d0 = 0x28;
  }
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_8c);
  pCVar2 = g_CDemonRendererPtr2;
  fVar1 = (this_ptr->trigger_size).x * (float)0.5;
  fStack_68 = 0.0;
  fStack_60 = 0.0;
  fStack_64 = CStack_8c.min.y;
  iStack_28 = (int)ROUND(ROUND(fVar1 * 256.0f));
  g_CDemonRendererPtr2->vertex_buffer_ptr->r = iStack_28;
  pCVar2->vertex_buffer_ptr->g = iVar3 << 8;
  pCVar2->vertex_buffer_ptr->b = blue << 8;
  pCVar2->vertex_buffer_ptr->a = alpha << 8;
  pCVar2->vertex_buffer_ptr->u = 0x800000;
  pCVar2->vertex_buffer_ptr->v = 0x800000;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar2,&SMRGLTextureBasic_0068434c);
  CStack_50.x = (int)ROUND(fStack_68 * 256.0f);
  CStack_50.y = (int)ROUND(fStack_64 * 256.0f);
  CStack_50.z = (int)ROUND(fStack_60 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_50);
  pCVar2 = g_CDemonRendererPtr2;
  fStack_64 = CStack_8c.max.y;
  pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
  pSVar6 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    (pSVar6->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
    pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
  }
  CStack_74.x = (int)ROUND(fStack_68 * 256.0f);
  CStack_74.y = (int)ROUND(CStack_8c.max.y * 256.0f);
  CStack_74.z = (int)ROUND(fStack_60 * 256.0f);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_74);
  iStack_d8 = 0;
  if (-1 < iStack_d0) {
    iStack_20 = 0x60;
    iStack_1c = 0x90;
    do {
      pCVar2 = g_CDemonRendererPtr2;
      iStack_18 = iStack_d0;
      fVar11 = ((float10)iStack_d8 * (float10)2 * (float10)3.1415926535000001) /
               (float10)iStack_d0;
      fVar9 = (float10)fsin(fVar11);
      fVar11 = (float10)fcos(fVar11);
      fVar10 = (float10)fVar1;
      fStack_64 = CStack_8c.min.y;
      fStack_68 = (float)(fVar9 * fVar10);
      fStack_60 = (float)(fVar11 * fVar10);
      pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      piVar7 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                             transformed_x + iStack_20);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar7 = (pSVar5->projected_vertex).transformed_x;
        pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
        piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
      }
      CStack_5c.x = (int)ROUND(fStack_68 * 256.0f);
      CStack_5c.y = (int)ROUND(CStack_8c.min.y * 256.0f);
      CStack_5c.z = (int)ROUND(fStack_60 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_20),
                 &CStack_5c);
      iVar3 = iStack_1c;
      pCVar2 = g_CDemonRendererPtr2;
      fStack_64 = CStack_8c.max.y;
      pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
      piVar7 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                             transformed_x + iStack_1c);
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = (pSVar5->projected_vertex).transformed_x;
        pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar8 * -2 + 1) * 4);
        piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
      }
      aCStack_44[0].x = (int)ROUND(fStack_68 * 256.0f);
      aCStack_44[0].y = (int)ROUND(CStack_8c.max.y * 256.0f);
      aCStack_44[0].z = (int)ROUND(fStack_60 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)
                 ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x + iStack_1c),
                 aCStack_44);
      iStack_1c = iVar3 + 0x60;
      iStack_20 = iStack_20 + 0x60;
      iStack_d8 = iStack_d8 + 1;
    } while (iStack_d8 <= iStack_d0);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  iVar3 = 0;
  if (0 < iStack_d0) {
    do {
      iVar4 = iVar3 * 2;
      SStack_cc.base.count = 4;
      iStack_ac = iVar4 + 3;
      iStack_a8 = iVar4 + 2;
      iStack_b4 = iVar4 + 4;
      iStack_b0 = iVar4 + 5;
      iStack_28 = iStack_ac;
      iStack_18 = iStack_a8;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_cc,0x367);
      SStack_cc.base.count = 3;
      iStack_b0 = iStack_18;
      iStack_ac = 0;
      iStack_b4 = iVar4 + 4;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_cc,0x367);
      iStack_b4 = iStack_28;
      iStack_ac = 1;
      iStack_b0 = iVar4 + 5;
      engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                (g_CDemonRendererPtr2,&SStack_cc,0x367);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_d0);
  }
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
  return iStack_24;
}
