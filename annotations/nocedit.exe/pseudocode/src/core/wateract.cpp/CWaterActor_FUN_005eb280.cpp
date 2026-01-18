// Name: core_wateract.cpp_CWaterActor_FUN_005eb280
// Address: 005eb280
// Address Range: [[005eb280, 005eb4a5]]
// Convention: __cdecl
// Signature: int core_wateract.cpp_CWaterActor_FUN_005eb280(CWaterActor * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_wateract_cpp_CWaterActor_FUN_005eb280(CWaterActor *this_ptr)

{
  SRenderVertex *pSVar1;
  longlong lVar2;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  int *piVar4;
  char *pcVar5;
  SMRGLPrimitiveQuad *primitive_array;
  int iVar6;
  int iVar7;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar3 == 0) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffdc);
    iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar3 != 0) {
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                (g_CDemonRendererPtr2,this_ptr->opacity);
      engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
      iVar6 = 0;
      engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                (g_CDemonRendererPtr2,&DAT_006846f0 + *(int *)(this_ptr->field21_0x298 + 0x2af90));
      if (0 < *(int *)this_ptr->field21_0x298) {
        piVar4 = &DAT_03f90a88;
        pcVar5 = this_ptr->field21_0x298 + 4;
        do {
          *piVar4 = (int)ROUND(*(float *)pcVar5 * _DAT_00665310);
          piVar4[1] = (int)ROUND(*(float *)(pcVar5 + 4) * _DAT_00665310);
          piVar4[2] = (int)ROUND(*(float *)(pcVar5 + 8) * _DAT_00665310);
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 0x20;
          piVar4 = piVar4 + 3;
        } while (iVar6 < *(int *)this_ptr->field21_0x298);
      }
      iVar6 = 0;
      core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
                (g_CDemonSetPtr,*(int *)this_ptr->field21_0x298,&DAT_03f90a88);
      if (0 < *(int *)this_ptr->field21_0x298) {
        iVar7 = 0;
        do {
          core_set_cpp_CDemonSet_FUN_0056e3e0(g_CDemonSetPtr);
          pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
          lVar2 = (longlong)(this_ptr->col_r << 8) * (longlong)*(int *)((int)&pSVar1->light + iVar7)
          ;
          *(uint *)((int)&pSVar1->light + iVar7) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(this_ptr->col_g << 8) * (longlong)*(int *)((int)&pSVar1->color + iVar7)
          ;
          *(uint *)((int)&pSVar1->color + iVar7) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          lVar2 = (longlong)(this_ptr->col_b << 8) * (longlong)*(int *)((int)&pSVar1->fog + iVar7);
          *(uint *)((int)&pSVar1->fog + iVar7) =
               (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x30;
        } while (iVar6 < *(int *)this_ptr->field21_0x298);
      }
      primitive_array = (SMRGLPrimitiveQuad *)(this_ptr->field21_0x298 + 0x7d10);
      if ((int)this_ptr->opacity < 0xfde9) {
        iVar6 = 0;
        if (0 < *(int *)(this_ptr->field21_0x298 + 0x2af9c)) {
          do {
            iVar6 = iVar6 + 1;
            engine_drender_cpp_CDemonRenderer_renderWireframeVariant_FUN_0048aeb0
                      (g_CDemonRendererPtr2,&primitive_array->base,0x267);
            primitive_array = primitive_array + 1;
          } while (iVar6 < *(int *)(this_ptr->field21_0x298 + 0x2af9c));
        }
      }
      else {
        core_set_cpp_CDemonSet_renderPrimitiveBatch_FUN_00570770
                  (g_CDemonSetPtr,primitive_array,*(int *)(this_ptr->field21_0x298 + 0x2af9c),-1);
      }
      engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return iVar3;
  }
  return 0;
}
