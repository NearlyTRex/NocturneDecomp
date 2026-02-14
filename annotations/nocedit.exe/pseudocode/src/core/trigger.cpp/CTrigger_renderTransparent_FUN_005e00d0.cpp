// Name: core_trigger.cpp_CTrigger_renderTransparent_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0(CTrigger *this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_renderTransparent_FUN_005e00d0(CTrigger *this_ptr)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int iVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int *piVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  float fVar13;
  SMRGLHeaderPrimitive SStack_d4;
  int iStack_bc;
  float fStack_b8;
  int iStack_b4;
  float fStack_b0;
  byte local_a4 [24];
  float fStack_8c;
  float fStack_84;
  CVector3i CStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3i CStack_64;
  CVector3i CStack_58;
  CVector3i aCStack_4c [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float fStack_20;
  
  bVar9 = 0;
  if ((g_CDemonMissionPtr->is_in_editor != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
    this_ptr_00 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                            (&this_ptr->base,(CBoundingBox3D *)local_a4);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    iStack_24 = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
    if (iVar3 != 0) {
      switch(this_ptr->hero_triggers_me) {
      default:
        iVar3 = 0xff;
        iVar4 = 0;
        break;
      case 1:
        iVar3 = 0;
        iVar4 = 0xff;
        break;
      case 2:
        iVar3 = 0xff;
        iVar4 = 0xff;
        break;
      case 3:
        iVar4 = 0xff;
        iVar3 = 0;
        break;
      case 4:
        iVar3 = 0xff;
        iVar4 = 0;
        break;
      case 5:
        iVar4 = 0xff;
        iVar3 = iVar4;
        break;
      case 6:
        iVar4 = 0;
        iVar3 = 0x80;
        break;
      case 7:
        iVar4 = 0;
        iVar3 = 0;
        break;
      case 8:
        iVar4 = 0x100;
        iVar3 = 0;
      }
      if (this_ptr == (CTrigger *)g_CDemonMissionPtr->selected_actor) {
        iVar6 = 0x80;
      }
      else {
        iVar6 = 0x40;
      }
      if (this_ptr->shape == 1) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base);
        fVar13 = 8.633136e-39;
        dVar12 = round
                           ((double)((this_ptr->trigger_size).x * (float)0.10000000000000001 +
                                    (float)12));
        SStack_d4.base.type = (int)ROUND(dVar12);
        if (0x28 < SStack_d4.base.type) {
          SStack_d4.base.type = 0x28;
        }
        (*((this_ptr->base).vtable._ub)->getBoundingBox)
                  (&this_ptr->base,(CBoundingBox3D *)(local_a4 + 0x14));
        pCVar2 = g_CDemonRendererPtr2;
        fVar1 = (this_ptr->trigger_size).x * (float)0.5;
        fStack_6c = 0.0;
        CStack_64.x = 0;
        fStack_68 = fStack_8c;
        pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        dVar12 = round((double)(fVar1 * 256.0f));
        iStack_30 = (int)ROUND(dVar12);
        pSVar5->light = iStack_30;
        pCVar2->vertex_buffer_ptr->color = iVar3 << 8;
        pCVar2->vertex_buffer_ptr->fog = iVar4 << 8;
        pCVar2->vertex_buffer_ptr->w_recip = (float)(iVar6 << 8);
        pCVar2->vertex_buffer_ptr->u = 0x800000;
        pCVar2->vertex_buffer_ptr->v = 0x800000;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                  (pCVar2,&SMRGLTextureBasic_0068434c);
        CStack_58.x = (int)ROUND(fStack_70 * 256.0f);
        CStack_58.y = (int)ROUND(fStack_6c * 256.0f);
        CStack_58.z = (int)ROUND(fStack_68 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_58);
        pCVar2 = g_CDemonRendererPtr2;
        fStack_6c = fStack_84;
        pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
        }
        CStack_7c.x = (int)ROUND(fStack_70 * 256.0f);
        CStack_7c.y = (int)ROUND(fStack_84 * 256.0f);
        CStack_7c.z = (int)ROUND(fStack_68 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_7c);
        iVar3 = 0;
        if (-1 < (int)fVar1) {
          iStack_28 = 0x60;
          iStack_24 = 0x90;
          do {
            pCVar2 = g_CDemonRendererPtr2;
            fVar11 = ((float10)iVar3 * (float10)2 * (float10)3.1415926535000001) /
                     (float10)(int)fVar1;
            fVar10 = (float10)fsin(fVar11);
            fVar11 = (float10)fcos(fVar11);
            fStack_6c = (float)local_a4._20_4_;
            fStack_70 = (float)(fVar10 * (float10)fVar13);
            fStack_68 = (float)(fVar11 * (float10)fVar13);
            pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
            piVar8 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_28);
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = (pSVar5->projected_vertex).transformed_x;
              pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            CStack_64.x = (int)ROUND(fStack_70 * 256.0f);
            CStack_64.y = (int)ROUND((float)local_a4._20_4_ * 256.0f);
            CStack_64.z = (int)ROUND(fStack_68 * 256.0f);
            fStack_20 = fVar1;
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_28),&CStack_64);
            iVar4 = iStack_24;
            pCVar2 = g_CDemonRendererPtr2;
            fStack_6c = fStack_84;
            pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
            piVar8 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_24);
            for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
              *piVar8 = (pSVar5->projected_vertex).transformed_x;
              pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            aCStack_4c[0].x = (int)ROUND(fStack_70 * 256.0f);
            aCStack_4c[0].y = (int)ROUND(fStack_84 * 256.0f);
            aCStack_4c[0].z = (int)ROUND(fStack_68 * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_24),aCStack_4c);
            iStack_24 = iVar4 + 0x60;
            iStack_28 = iStack_28 + 0x60;
            iVar3 = iVar3 + 1;
          } while (iVar3 <= (int)fVar1);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
                  (g_CDemonRendererPtr2,0);
        iVar3 = 0;
        if (0 < (int)fVar1) {
          do {
            iVar4 = iVar3 * 2;
            SStack_d4.base.count = 4;
            iStack_b4 = iVar4 + 3;
            fStack_b0 = (float)(iVar4 + 2);
            iStack_bc = iVar4 + 4;
            fStack_b8 = (float)(iVar4 + 5);
            iStack_30 = iStack_b4;
            fStack_20 = fStack_b0;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr2,&SStack_d4,0x367);
            SStack_d4.base.count = 3;
            fStack_b8 = fStack_20;
            iStack_b4 = 0;
            iStack_bc = iVar4 + 4;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr2,&SStack_d4,0x367);
            iStack_bc = iStack_30;
            iStack_b4 = 1;
            fStack_b8 = (float)(iVar4 + 5);
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr2,&SStack_d4,0x367);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)fVar1);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
                  (g_CDemonRendererPtr2,1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base);
        return iStack_2c;
      }
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base);
      return iStack_24;
    }
  }
  return 0;
}
