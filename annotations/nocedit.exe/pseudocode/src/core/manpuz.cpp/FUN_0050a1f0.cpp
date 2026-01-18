// Name: core_manpuz.cpp_FUN_0050a1f0
// Address: 0050a1f0
// Address Range: [[0050a1f0, 0050a281]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a1f0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_0050a1f0(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_0050a1f0(void)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int render_flags;
  
  iVar2 = in_stack_00000004 + 0x1340 + in_stack_00000008 * 0x60;
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) && (*(float *)(iVar2 + 0x18) <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(iVar2 + 0x28),(CVector3i *)(iVar2 + 0x1c));
  render_flags = -1;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x450));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x450),
             (float)(pCVar1->frame_count + -1) * *(float *)(iVar2 + 0x18),render_flags);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
