// Name: core_trigger.cpp_CTrigger_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_trigger_cpp_CTrigger_FUN_005e00d0(CTrigger *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  int extraout_ECX;
  CDemonRenderer *this_ptr_01;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  SRenderVertex *pSVar4;
  int unaff_EDI;
  int iVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  float in_stack_ffffff38;
  byte auStack_c4 [8];
  SMRGLHeaderPrimitive SStack_bc;
  int local_a4;
  int iStack_a0;
  CBoundingBox3D CStack_9c;
  float fStack_84;
  byte auStack_80 [24];
  int iStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  byte auStack_50 [8];
  int iStack_48;
  CVector3i CStack_3c;
  int iStack_28;
  int iStack_1c;
  float fStack_18;
  int iStack_14;
  
  bVar8 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,&CStack_9c);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    iStack_1c = iVar2;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    if (iVar2 != 0) {
      switch(*(uint *)(this_ptr->field1_0x158 + 0x1c)) {
      default:
        iVar2 = 0xff;
        iVar3 = 0;
        break;
      case 1:
        iVar2 = 0;
        iVar3 = 0xff;
        break;
      case 2:
        iVar2 = 0xff;
        iVar3 = 0xff;
        break;
      case 3:
        iVar3 = 0xff;
        iVar2 = 0;
        break;
      case 4:
        iVar2 = 0xff;
        iVar3 = 0;
        break;
      case 5:
        iVar3 = 0xff;
        iVar2 = iVar3;
        break;
      case 6:
        iVar3 = 0;
        iVar2 = 0x80;
        break;
      case 7:
        iVar3 = 0;
        iVar2 = 0;
        break;
      case 8:
        iVar3 = 0x100;
        iVar2 = 0;
      }
      if (this_ptr == *(CTrigger **)(g_CDemonMissionPtr->field2_0xc + 0x1c)) {
        iVar5 = 0x80;
      }
      else {
        iVar5 = 0x40;
      }
      if (*(int *)(this_ptr->field1_0x158 + 0x18) == 1) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.10000000000000001
                                    + (float)12));
        auStack_c4._0_4_ = (uint)ROUND(dVar11);
        if (0x28 < (int)auStack_c4._0_4_) {
          auStack_c4._0_4_ = 0x28;
        }
        (*((this_ptr->base_actor).vtable)->getBoundingBox)
                  (&this_ptr->base_actor,(CBoundingBox3D *)auStack_80);
        fStack_64 = 0.0;
        fStack_5c = 0.0;
        fStack_60 = fStack_84;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.5
                                    * 256f));
        iStack_28 = (int)ROUND(dVar11);
        *(int *)(extraout_ECX + 0x20) = iStack_28;
        this_ptr_01->vertex_buffer_ptr->color = iVar2 << 8;
        this_ptr_01->vertex_buffer_ptr->fog = (float)(iVar3 << 8);
        this_ptr_01->vertex_buffer_ptr->w_recip = (float)(iVar5 << 8);
        this_ptr_01->vertex_buffer_ptr->u = 1.1754944e-38;
        this_ptr_01->vertex_buffer_ptr->v = 1.1754944e-38;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(this_ptr_01,&DAT_0068434c);
        auStack_50._0_4_ = (uint)ROUND(fStack_64 * _DAT_00664a00);
        auStack_50._4_4_ = (uint)ROUND(fStack_60 * _DAT_00664a00);
        iStack_48 = (int)ROUND(fStack_5c * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)(auStack_50 + 4));
        pCVar1 = g_CDemonRendererPtr;
        fStack_5c = (float)auStack_80._12_4_;
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr + 1;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
        }
        auStack_80._20_4_ = (uint)ROUND(fStack_60 * _DAT_00664a00);
        iStack_68 = (int)ROUND((float)auStack_80._12_4_ * _DAT_00664a00);
        fStack_64 = (float)(int)ROUND(fStack_58 * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[1].projected_vertex,(CVector3i *)(auStack_80 + 0x14));
        iVar2 = 0;
        if (-1 < (int)auStack_c4._0_4_) {
          iStack_14 = 0x60;
          do {
            unaff_EDI = auStack_c4._0_4_;
            pCVar1 = g_CDemonRendererPtr;
            fVar10 = ((float10)iVar2 * (float10)2 * (float10)3.1415926535000001) /
                     (float10)(int)auStack_c4._0_4_;
            fVar9 = (float10)fsin(fVar10);
            fVar10 = (float10)fcos(fVar10);
            fStack_58 = (float)auStack_80._4_4_;
            fStack_5c = (float)(fVar9 * (float10)in_stack_ffffff38);
            fStack_54 = (float)(fVar10 * (float10)in_stack_ffffff38);
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_14);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            auStack_50._0_4_ = (uint)ROUND(fStack_5c * _DAT_00664a00);
            auStack_50._4_4_ = (uint)ROUND((float)auStack_80._4_4_ * _DAT_00664a00);
            iStack_48 = (int)ROUND(fStack_54 * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_14),(CVector3i *)auStack_50);
            iVar3 = iStack_14;
            pCVar1 = g_CDemonRendererPtr;
            fStack_5c = (float)auStack_80._12_4_;
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack_14);
            for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            CStack_3c.x = (int)ROUND(fStack_60 * _DAT_00664a00);
            CStack_3c.y = (int)ROUND((float)auStack_80._12_4_ * _DAT_00664a00);
            CStack_3c.z = (int)ROUND(fStack_58 * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack_14),&CStack_3c);
            unaff_EBP = iVar3 + 0x60;
            iStack_14 = iStack_14 + 0x60;
            iVar2 = iVar2 + 1;
          } while (iVar2 <= (int)auStack_c4._0_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0)
        ;
        iVar2 = 0;
        if (0 < (int)auStack_c4._4_4_) {
          do {
            iVar3 = iVar2 * 2;
            SStack_bc.base.count = 4;
            CStack_9c.min.x = (float)(iVar3 + 3);
            CStack_9c.min.y = (float)(iVar3 + 2);
            local_a4 = iVar3 + 4;
            iStack_a0 = iVar3 + 5;
            fStack_18 = CStack_9c.min.x;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_bc,0x367);
            auStack_c4._4_4_ = 3;
            local_a4 = 0;
            SStack_bc.surface_normal.C = iVar3 + 4;
            SStack_bc.surface_normal.D = unaff_EBP;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_c4,0x367);
            SStack_bc.surface_normal.D = iStack_1c;
            iStack_a0 = 1;
            local_a4 = iVar3 + 5;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(auStack_c4 + 4),0x367);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)auStack_c4._4_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1)
        ;
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
        return unaff_EDI;
      }
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base_actor);
      return iStack_14;
    }
  }
  return 0;
}
