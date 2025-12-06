// Name: core_boxactor.cpp_FUN_00421ef0
// Address: 00421ef0
// Address Range: [[00421ef0, 00421fcd]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00421ef0()

#include "nocturne.h"

/* Signature: byte actors_other_boxactor.cpp_FUN_00421ef0(uint param_1) */

int core_boxactor_cpp_FUN_00421ef0(void)

{
  CKeyFramedModel *pCVar1;
  CBoundingBox3D *this_ptr;
  int iVar2;
  int in_stack_00000004;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar1->poly_count < 1) {
    return 0;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(in_stack_00000004 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(in_stack_00000004 + 0x30),(CVector3i *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  if (*(int *)(in_stack_00000004 + 0x5fc) != 0) {
    g_CDemonSetPtr->unk_lighting_param2 = 1;
  }
  if (iVar2 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),
               *(float *)(in_stack_00000004 + 0x310),-1);
  }
  if (*(int *)(in_stack_00000004 + 0x5fc) != 0) {
    g_CDemonSetPtr->unk_lighting_param2 = 0;
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar2;
}
