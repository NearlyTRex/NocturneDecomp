// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050a1f0
// Address: 0050a1f0
// Address Range: [[0050a1f0, 0050a281]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050a1f0(CMansionPuzzleCircle *this_ptr)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  int in_stack_00000008;
  int render_flags;
  
  iVar1 = in_stack_00000008 * 0x60;
  if ((*(int *)(g_CDemonMissionPtr->unk1 + 4) == 0) &&
     (*(float *)(this_ptr->unk3 + iVar1 + 0xd10) <= 0.0)) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,(CVector3i *)(this_ptr->unk3 + iVar1 + 0xd20),
             (CVector3i *)(this_ptr->unk3 + iVar1 + 0xd14));
  render_flags = -1;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0x2f8));
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(this_ptr->unk1 + 0x2f8),
             (float)(pCVar2->frame_count + -1) * *(float *)(this_ptr->unk3 + iVar1 + 0xd10),
             render_flags);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}
