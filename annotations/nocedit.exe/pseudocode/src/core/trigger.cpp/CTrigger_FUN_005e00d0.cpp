// Name: core_trigger.cpp_CTrigger_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_trigger_cpp_CTrigger_FUN_005e00d0(CTrigger *this_ptr)

{
  float fVar1;
  CDemonRenderer *pCVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int extraout_ECX;
  CDemonRenderer *this_ptr_01;
  int iVar4;
  SRenderVertex *pSVar5;
  int iVar6;
  SRenderVertex *pSVar7;
  int *piVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  int iStack_d4;
  int iStack_cc;
  SMRGLHeaderPrimitive SStack_c8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int local_a4;
  byte auStack_a0 [28];
  float fStack_84;
  float fStack_78;
  CVector3i CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3i CStack_58;
  CVector3i CStack_4c;
  CVector3i aCStack_40 [2];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar3 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)auStack_a0);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    iStack_20 = iVar3;
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
        crt_math_c_round_FUN_005fe6b0
                  ((double)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.10000000000000001 +
                           (float)12));
        (*((this_ptr->base_actor).vtable)->getBoundingBox)
                  (&this_ptr->base_actor,(CBoundingBox3D *)(auStack_a0 + 0x14));
        fVar1 = *(float *)(this_ptr->field1_0x158 + 8) * (float)0.5;
        fStack_64 = 0.0;
        fStack_5c = 0.0;
        fStack_60 = fStack_84;
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * 256f));
        iStack_28 = (int)ROUND(dVar13);
        *(int *)(extraout_ECX + 0x20) = iStack_28;
        this_ptr_01->vertex_buffer_ptr->color = iVar3 << 8;
        this_ptr_01->vertex_buffer_ptr->fog = (float)(iVar4 << 8);
        this_ptr_01->vertex_buffer_ptr->w_recip = (float)(iVar6 << 8);
        this_ptr_01->vertex_buffer_ptr->u = 1.1754944e-38;
        this_ptr_01->vertex_buffer_ptr->v = 1.1754944e-38;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_01,&DAT_0068434c);
        CStack_58.z = (int)ROUND(fStack_64 * _DAT_00664a00);
        CStack_4c.x = (int)ROUND(fStack_60 * _DAT_00664a00);
        CStack_4c.y = (int)ROUND(fStack_5c * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_4c);
        pCVar2 = g_CDemonRendererPtr;
        fStack_60 = fStack_78;
        pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar7 = g_CDemonRendererPtr->vertex_buffer_ptr + 1;
        for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
          (pSVar7->projected_vertex).transformed_x = (pSVar5->projected_vertex).transformed_x;
          pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
          pSVar7 = (SRenderVertex *)((int)pSVar7 + ((uint)bVar9 * -2 + 1) * 4);
        }
        CStack_70.x = (int)ROUND(fStack_64 * _DAT_00664a00);
        CStack_70.y = (int)ROUND(fStack_78 * _DAT_00664a00);
        CStack_70.z = (int)ROUND(fStack_5c * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_70);
        iStack_d4 = 0;
        if (-1 < iStack_cc) {
          iStack_1c = 0x60;
          iStack_18 = 0x90;
          do {
            pCVar2 = g_CDemonRendererPtr;
            iStack_14 = iStack_cc;
            fVar12 = ((float10)iStack_d4 * (float10)2 * (float10)3.1415926535000001) /
                     (float10)iStack_cc;
            fVar10 = (float10)fsin(fVar12);
            fVar12 = (float10)fcos(fVar12);
            fVar11 = (float10)fVar1;
            fStack_60 = fStack_84;
            fStack_64 = (float)(fVar10 * fVar11);
            fStack_5c = (float)(fVar12 * fVar11);
            pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar8 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_1c);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar8 = (pSVar5->projected_vertex).transformed_x;
              pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            CStack_58.x = (int)ROUND(fStack_64 * _DAT_00664a00);
            CStack_58.y = (int)ROUND(fStack_84 * _DAT_00664a00);
            CStack_58.z = (int)ROUND(fStack_5c * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_1c),&CStack_58);
            iVar3 = iStack_18;
            pCVar2 = g_CDemonRendererPtr;
            fStack_60 = fStack_78;
            pSVar5 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar8 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_18);
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar8 = (pSVar5->projected_vertex).transformed_x;
              pSVar5 = (SRenderVertex *)((int)pSVar5 + ((uint)bVar9 * -2 + 1) * 4);
              piVar8 = piVar8 + (uint)bVar9 * -2 + 1;
            }
            aCStack_40[0].x = (int)ROUND(fStack_64 * _DAT_00664a00);
            aCStack_40[0].y = (int)ROUND(fStack_78 * _DAT_00664a00);
            aCStack_40[0].z = (int)ROUND(fStack_5c * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_18),aCStack_40);
            iStack_18 = iVar3 + 0x60;
            iStack_1c = iStack_1c + 0x60;
            iStack_d4 = iStack_d4 + 1;
          } while (iStack_d4 <= iStack_cc);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0)
        ;
        iVar3 = 0;
        if (0 < iStack_cc) {
          do {
            iVar4 = iVar3 * 2;
            SStack_c8.base.count = 4;
            iStack_a8 = iVar4 + 3;
            local_a4 = iVar4 + 2;
            iStack_b0 = iVar4 + 4;
            iStack_ac = iVar4 + 5;
            iStack_24 = iStack_a8;
            iStack_14 = local_a4;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_c8,0x367);
            SStack_c8.base.count = 3;
            iStack_ac = iStack_14;
            iStack_a8 = 0;
            iStack_b0 = iVar4 + 4;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_c8,0x367);
            iStack_b0 = iStack_24;
            iStack_a8 = 1;
            iStack_ac = iVar4 + 5;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_c8,0x367);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iStack_cc);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1)
        ;
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
        return iStack_20;
      }
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base_actor);
      return iStack_20;
    }
  }
  return 0;
}
