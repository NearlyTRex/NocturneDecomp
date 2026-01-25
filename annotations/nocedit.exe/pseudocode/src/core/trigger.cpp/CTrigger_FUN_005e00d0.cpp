// Name: core_trigger.cpp_CTrigger_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_FUN_005e00d0(CTrigger *this_ptr)

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
  int iStack_d0;
  float fStack_cc;
  SMRGLHeaderPrimitive SStack_c4;
  float fStack_ac;
  float fStack_a8;
  CBoundingBox3D local_a4;
  CBoundingBox3D CStack_88;
  CVector3i CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i aCStack_3c [2];
  float fStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
     iVar3 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)
                            (&this_ptr->base_actor,&local_a4);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    iStack_1c = iVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    if (iVar3 != 0) {
      switch(*(uint *)(this_ptr->field1_0x158 + 0x1c)) {
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
      if (this_ptr == *(CTrigger **)(g_CDemonMissionPtr->field2_0xc + 0x1c)) {
        iVar6 = 0x80;
      }
      else {
        iVar6 = 0x40;
      }
      if (*(int *)(this_ptr->field1_0x158 + 0x18) == 1) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
        dVar12 = crt_math_c_round_FUN_005fe6b0
                           ((double)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.10000000000000001
                                    + (float)12));
        fStack_cc = (float)(int)ROUND(dVar12);
        if (0x28 < (int)fStack_cc) {
          fStack_cc = 5.60519e-44;
        }
        (*((this_ptr->base_actor).vtable._ub)->getBoundingBox)(&this_ptr->base_actor,&CStack_88);
        pCVar2 = g_CDemonRendererPtr2;
        fVar1 = *(float *)(this_ptr->field1_0x158 + 8) * (float)0.5;
        fStack_5c = 0.0;
        CStack_54.x = 0;
        fStack_58 = CStack_88.max.x;
        pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * 256.0f));
        fStack_20 = (float)(int)ROUND(dVar12);
        pSVar5->light = fStack_20;
        pCVar2->vertex_buffer_ptr->color = iVar3 << 8;
        pCVar2->vertex_buffer_ptr->fog = (float)(iVar4 << 8);
        pCVar2->vertex_buffer_ptr->w_recip = (float)(iVar6 << 8);
        pCVar2->vertex_buffer_ptr->u = 1.1754944e-38;
        pCVar2->vertex_buffer_ptr->v = 1.1754944e-38;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar2,&DAT_0068434c);
        CStack_48.x = (int)ROUND(fStack_60 * 256.0f);
        CStack_48.y = (int)ROUND(fStack_5c * 256.0f);
        CStack_48.z = (int)ROUND(fStack_58 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_48);
        pCVar2 = g_CDemonRendererPtr2;
        fStack_5c = CStack_88.max.z;
        pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
        pSVar7 = g_CDemonRendererPtr2->vertex_buffer_ptr + 1;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
        }
        CStack_6c.x = (int)ROUND(fStack_60 * 256.0f);
        CStack_6c.y = (int)ROUND(CStack_88.max.z * 256.0f);
        CStack_6c.z = (int)ROUND(fStack_58 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_6c);
        iStack_d0 = 0;
        if (-1 < (int)fVar1) {
          iStack_18 = 0x60;
          iStack_14 = 0x90;
          do {
            pCVar2 = g_CDemonRendererPtr2;
            fVar11 = ((float10)iStack_d0 * (float10)2 * (float10)3.1415926535000001) /
                     (float10)(int)fVar1;
            fVar10 = (float10)fsin(fVar11);
            fVar11 = (float10)fcos(fVar11);
            fStack_5c = CStack_88.min.z;
            fStack_60 = (float)(fVar10 * (float10)fStack_cc);
            fStack_58 = (float)(fVar11 * (float10)fStack_cc);
            pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
            piVar8 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_18);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar8 = (pSVar5->projected_vertex).transformed_x;
              pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            CStack_54.x = (int)ROUND(fStack_60 * 256.0f);
            CStack_54.y = (int)ROUND(CStack_88.min.z * 256.0f);
            CStack_54.z = (int)ROUND(fStack_58 * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_18),&CStack_54);
            iVar3 = iStack_14;
            pCVar2 = g_CDemonRendererPtr2;
            fStack_5c = CStack_88.max.z;
            pSVar5 = g_CDemonRendererPtr2->vertex_buffer_ptr;
            piVar8 = (int *)((int)&(g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_14);
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = (pSVar5->projected_vertex).transformed_x;
              pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            aCStack_3c[0].x = (int)ROUND(fStack_60 * 256.0f);
            aCStack_3c[0].y = (int)ROUND(CStack_88.max.z * 256.0f);
            aCStack_3c[0].z = (int)ROUND(fStack_58 * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_14),aCStack_3c);
            iStack_14 = iVar3 + 0x60;
            iStack_18 = iStack_18 + 0x60;
            iStack_d0 = iStack_d0 + 1;
          } while (iStack_d0 <= (int)fVar1);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
                  (g_CDemonRendererPtr2,0);
        iVar3 = 0;
        if (0 < (int)fVar1) {
          do {
            iVar4 = iVar3 * 2;
            SStack_c4.base.count = 4;
            local_a4.min.x = (float)(iVar4 + 3);
            fStack_ac = (float)(iVar4 + 4);
            fStack_a8 = (float)(iVar4 + 5);
            local_a4.min.y = (float)(iVar4 + 2);
            fStack_20 = local_a4.min.x;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr2,&SStack_c4,0x367);
            SStack_c4.base.count = 3;
            local_a4.min.x = 0.0;
            fStack_ac = (float)(iVar4 + 4);
            fStack_a8 = (float)(iVar4 + 2);
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr2,&SStack_c4,0x367);
            fStack_ac = fStack_20;
            local_a4.min.x = 1.4013e-45;
            fStack_a8 = (float)(iVar4 + 5);
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr2,&SStack_c4,0x367);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)fVar1);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0
                  (g_CDemonRendererPtr2,1);
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
        return iStack_1c;
      }
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base_actor);
      return iStack_1c;
    }
  }
  return 0;
}
