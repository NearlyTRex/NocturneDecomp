// Name: core_trigger.cpp_CTrigger_FUN_005e00d0
// Address: 005e00d0
// Address Range: [[005e00d0, 005e0623]]
// Convention: __cdecl
// Signature: int core_trigger.cpp_CTrigger_FUN_005e00d0(CTrigger * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_trigger_cpp_CTrigger_FUN_005e00d0(CTrigger *this_ptr)

{
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  int extraout_ECX;
  uint extraout_EDX;
  CDemonRenderer *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SRenderVertex *pSVar4;
  int iVar5;
  SRenderVertex *pSVar6;
  int *piVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int iStack0000001c;
  int in_stack_00000028;
  float in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  float in_stack_0000003c;
  float fVar12;
  float in_stack_ffffff7c;
  byte auStack_80 [8];
  SMRGLHeaderPrimitive SStack_78;
  CBoundingBox3D CStack_60;
  int iStack_48;
  float fStack_38;
  float fStack_30;
  CVector3i CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffff64);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    if (iVar1 != 0) {
      switch(*(uint *)(this_ptr->field1_0x158 + 0x1c)) {
      default:
        iVar1 = 0xff;
        iVar3 = 0;
        break;
      case 1:
        iVar1 = 0;
        iVar3 = 0xff;
        break;
      case 2:
        iVar1 = 0xff;
        iVar3 = 0xff;
        break;
      case 3:
        iVar3 = 0xff;
        iVar1 = 0;
        break;
      case 4:
        iVar1 = 0xff;
        iVar3 = 0;
        break;
      case 5:
        iVar3 = 0xff;
        iVar1 = iVar3;
        break;
      case 6:
        iVar3 = 0;
        iVar1 = 0x80;
        break;
      case 7:
        iVar3 = 0;
        iVar1 = 0;
        break;
      case 8:
        iVar3 = 0x100;
        iVar1 = 0;
      }
      if (this_ptr == *(CTrigger **)(g_CDemonMissionPtr->field2_0xc + 0x1c)) {
        iVar5 = 0x80;
      }
      else {
        iVar5 = 0x40;
      }
      if (*(int *)(this_ptr->field1_0x158 + 0x18) == 1) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
        crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,this_ptr));
        (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&CStack_60);
        CStack_28.x = 0;
        CStack_28.z = 0;
        CStack_28.y = iStack_48;
        fVar9 = (float10)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.5) *
                (float10)256f;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,iStack_48));
        pCVar2 = (CDemonRenderer *)((ulonglong)dVar11 >> 0x20);
        iStack0000001c = (int)ROUND(fVar9);
        *(int *)(extraout_ECX + 0x20) = iStack0000001c;
        pCVar2->vertex_buffer_ptr->color = iVar1 << 8;
        pCVar2->vertex_buffer_ptr->fog = (float)(iVar3 << 8);
        pCVar2->vertex_buffer_ptr->w_recip = (float)(iVar5 << 8);
        pCVar2->vertex_buffer_ptr->u = 1.1754944e-38;
        pCVar2->vertex_buffer_ptr->v = 1.1754944e-38;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar2,&DAT_0068434c);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&stack0xfffffff8);
        pCVar2 = g_CDemonRendererPtr;
        fStack_18 = fStack_30;
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr + 1;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
        }
        CStack_28.x = (int)ROUND(fStack_1c * _DAT_00664a00);
        CStack_28.y = (int)ROUND(fStack_30 * _DAT_00664a00);
        CStack_28.z = (int)ROUND(fStack_14 * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar2->vertex_buffer_ptr[1].projected_vertex,&CStack_28);
        fVar12 = 0.0;
        if (-1 < (int)auStack_80._0_4_) {
          in_stack_00000030 = 0x60;
          in_stack_00000034 = 0x90;
          do {
            pCVar2 = g_CDemonRendererPtr;
            in_stack_00000038 = auStack_80._0_4_;
            fVar10 = ((float10)(int)fVar12 * (float10)2 * (float10)3.1415926535000001) /
                     (float10)(int)auStack_80._0_4_;
            fVar9 = (float10)fsin(fVar10);
            fcos(fVar10);
            fStack_14 = fStack_38;
            fStack_18 = (float)(fVar9 * (float10)in_stack_ffffff7c);
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + in_stack_00000030);
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       in_stack_00000030),(CVector3i *)&stack0xfffffff4);
            iVar1 = in_stack_00000030;
            pCVar2 = g_CDemonRendererPtr;
            fStack_18 = fStack_30;
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + in_stack_00000030);
            for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            in_stack_00000008 = (int)ROUND(fStack_1c * _DAT_00664a00);
            in_stack_0000000c = (int)ROUND(fStack_30 * _DAT_00664a00);
            in_stack_00000010 = (int)ROUND(fStack_14 * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar2->vertex_buffer_ptr->projected_vertex).transformed_x +
                       in_stack_00000030),(CVector3i *)&stack0x00000008);
            in_stack_00000034 = iVar1 + 0x60;
            in_stack_00000030 = in_stack_00000030 + 0x60;
            fVar12 = (float)((int)fVar12 + 1);
          } while ((int)fVar12 <= (int)auStack_80._0_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0)
        ;
        iVar1 = 0;
        if (0 < (int)auStack_80._4_4_) {
          do {
            iVar3 = iVar1 * 2;
            SStack_78.base.count = 4;
            in_stack_0000002c = (float)(iVar3 + 3);
            in_stack_0000003c = (float)(iVar3 + 2);
            CStack_60.min.x = (float)(iVar3 + 4);
            CStack_60.min.y = (float)(iVar3 + 5);
            CStack_60.min.z = in_stack_0000002c;
            CStack_60.max.x = in_stack_0000003c;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_78,0x367);
            auStack_80._4_4_ = 3;
            SStack_78.surface_normal.D = in_stack_00000034;
            CStack_60.min.x = 0.0;
            SStack_78.surface_normal.C = iVar3 + 4;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_80,0x367);
            SStack_78.surface_normal.D = in_stack_00000028;
            CStack_60.min.y = 1.4013e-45;
            CStack_60.min.x = (float)(iVar3 + 5);
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(auStack_80 + 4),0x367);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)auStack_80._4_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1)
        ;
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
        return in_stack_00000038;
      }
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base_actor);
      return (int)this_ptr;
    }
  }
  return 0;
}
