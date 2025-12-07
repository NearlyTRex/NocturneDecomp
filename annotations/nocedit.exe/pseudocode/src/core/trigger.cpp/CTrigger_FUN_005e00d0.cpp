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
  float fStack0000000c;
  int iStack00000020;
  int in_stack_00000024;
  float in_stack_00000028;
  float fVar12;
  float in_stack_ffffff6c;
  byte auStack_90 [8];
  SMRGLHeaderPrimitive SStack_88;
  int iStack_70;
  int iStack_6c;
  CBoundingBox3D CStack_68;
  float fStack_50;
  float fStack_48;
  float fStack_40;
  CVector3i CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3i CStack_1c;
  
  bVar8 = 0;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
     (iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar2 == 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffff64);
    iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
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
        crt_math_c_round_FUN_005fe6b0
                  ((double)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.10000000000000001 +
                           (float)12));
        (*((this_ptr->base_actor).vtable)->getBoundingBox)(&this_ptr->base_actor,&CStack_68);
        pCVar1 = g_CDemonRendererPtr;
        CStack_38.z = 0;
        fStack_28 = 0.0;
        fStack_2c = fStack_50;
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)(*(float *)(this_ptr->field1_0x158 + 8) * (float)0.5
                                    * 256f));
        fStack0000000c = (float)(int)ROUND(dVar11);
        pSVar4->light = fStack0000000c;
        pCVar1->vertex_buffer_ptr->color = iVar2 << 8;
        pCVar1->vertex_buffer_ptr->fog = (float)(iVar3 << 8);
        pCVar1->vertex_buffer_ptr->w_recip = (float)(iVar5 << 8);
        pCVar1->vertex_buffer_ptr->u = 1.1754944e-38;
        pCVar1->vertex_buffer_ptr->v = 1.1754944e-38;
        engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(pCVar1,&DAT_0068434c);
        CStack_1c.x = (int)ROUND((float)CStack_38.z * _DAT_00664a00);
        CStack_1c.y = (int)ROUND(fStack_2c * _DAT_00664a00);
        CStack_1c.z = (int)ROUND(fStack_28 * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&CStack_1c.y);
        pCVar1 = g_CDemonRendererPtr;
        fStack_28 = fStack_40;
        pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
        pSVar6 = g_CDemonRendererPtr->vertex_buffer_ptr + 1;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          (pSVar6->projected_vertex).transformed_x = (pSVar4->projected_vertex).transformed_x;
          pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
          pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar8 * -2 + 1) * 4);
        }
        CStack_38.x = (int)ROUND(fStack_2c * _DAT_00664a00);
        CStack_38.y = (int)ROUND(fStack_40 * _DAT_00664a00);
        CStack_38.z = (int)ROUND(fStack_24 * _DAT_00664a00);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[1].projected_vertex,&CStack_38);
        fVar12 = 0.0;
        if (-1 < (int)auStack_90._0_4_) {
          iStack00000020 = 0x60;
          do {
            pCVar1 = g_CDemonRendererPtr;
            in_stack_00000028 = (float)auStack_90._0_4_;
            fVar10 = ((float10)(int)fVar12 * (float10)2 * (float10)3.1415926535000001) /
                     (float10)(int)auStack_90._0_4_;
            fVar9 = (float10)fsin(fVar10);
            fVar10 = (float10)fcos(fVar10);
            fStack_24 = fStack_48;
            fStack_28 = (float)(fVar9 * (float10)in_stack_ffffff6c);
            fStack_20 = (float)(fVar10 * (float10)in_stack_ffffff6c);
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack00000020);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            CStack_1c.x = (int)ROUND(fStack_28 * _DAT_00664a00);
            CStack_1c.y = (int)ROUND(fStack_48 * _DAT_00664a00);
            CStack_1c.z = (int)ROUND(fStack_20 * _DAT_00664a00);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack00000020),&CStack_1c);
            pCVar1 = g_CDemonRendererPtr;
            fStack_28 = fStack_40;
            pSVar4 = g_CDemonRendererPtr->vertex_buffer_ptr;
            piVar7 = (int *)((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).
                                   transformed_x + iStack00000020);
            for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
              *piVar7 = (pSVar4->projected_vertex).transformed_x;
              pSVar4 = (SRenderVertex *)((int)pSVar4 + ((uint)bVar8 * -2 + 1) * 4);
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      ((SProjectedVertex *)
                       ((int)&(pCVar1->vertex_buffer_ptr->projected_vertex).transformed_x +
                       iStack00000020),(CVector3i *)&stack0xfffffff8);
            in_stack_00000024 = iStack00000020 + 0x60;
            iStack00000020 = iStack00000020 + 0x60;
            fVar12 = (float)((int)fVar12 + 1);
          } while ((int)fVar12 <= (int)auStack_90._0_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0)
        ;
        iVar2 = 0;
        if (0 < (int)auStack_90._4_4_) {
          do {
            iVar3 = iVar2 * 2;
            SStack_88.base.count = 4;
            CStack_68.min.x = (float)(iVar3 + 3);
            CStack_68.min.y = (float)(iVar3 + 2);
            iStack_70 = iVar3 + 4;
            iStack_6c = iVar3 + 5;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,&SStack_88,0x367);
            auStack_90._4_4_ = 4.2039e-45;
            SStack_88.surface_normal.D = in_stack_00000024;
            iStack_70 = 0;
            SStack_88.surface_normal.C = iVar3 + 4;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)auStack_90,0x367);
            iStack_6c = 1;
            iStack_70 = iVar3 + 5;
            engine_drender_cpp_CDemonRenderer_renderPerspective_FUN_0048ae10
                      (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)(auStack_90 + 4),0x367);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)auStack_90._4_4_);
        }
        engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1)
        ;
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
        return (int)in_stack_00000028;
      }
      core_actor_cpp_CDemonActor_FUN_0040dec0(&this_ptr->base_actor);
      return (int)this_ptr;
    }
  }
  return 0;
}
