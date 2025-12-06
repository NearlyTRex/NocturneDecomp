// Name: core_charactr.cpp_CCharacter_FUN_0042a420
// Address: 0042a420
// Address Range: [[0042a420, 0042a50b]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042a420(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042a420(CCharacter *this_ptr)

{
  int iVar1;
  char *pcVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  CKeyFramedModelInstance *in_stack_ffffff74;
  uint local_5c;
  CVector3f CStack_58;
  float fStack_48;
  CMatrix3x4f *pCStack_38;
  CVector3i CStack_24;
  float local_18;
  CMatrix3x4f *local_14;
  
  bVar6 = 0;
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->cloth_data + 0x35c)) {
    local_14 = (this_ptr->model).bone_transform.bone_world_matrices;
    pcVar2 = this_ptr->cloth_data + 0x360;
    do {
      if ((this_ptr->model).part_visibility_flags[*(int *)pcVar2] != 0) {
        core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                  ((CMatrix3x4f *)(pcVar2 + 8),local_14 + *(int *)(pcVar2 + 4),
                   (CMatrix3x4f *)in_stack_ffffff74);
        puVar4 = (uint *)&stack0xffffff78;
        puVar5 = &local_5c;
        for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&CStack_58,(CMatrix3x3f *)&stack0xffffffd8);
        local_18 = fStack_48;
        local_14 = pCStack_38;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,&CStack_24,(CVector3i *)&local_18);
        in_stack_ffffff74 = &DAT_00823a98;
        core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                  (&DAT_00823a98,0.0,-1);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x38;
    } while (iVar3 < *(int *)(this_ptr->cloth_data + 0x35c));
  }
  return;
}
