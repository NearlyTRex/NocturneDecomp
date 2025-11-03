// Name: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
// Address: 0059c2d0
// Address Range: [[0059c2d0, 0059c2eb]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0(CDeformableModel * this_ptr, int bone_index)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042a520 (0042a520) at 0042a6b0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00598316 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0
          (CDeformableModel *this_ptr,int bone_index)

{
  if (this_ptr->num_parts < 2) {
    return 0;
  }
  return this_ptr->bone_to_part_map[bone_index];
}


// Assembly code:
// 0059c2d0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
//   XREF to: Stack[0x4] (READ)
// 0059c2d4: CMP dword ptr [EDX + 0x7140],0x2
// 0059c2db: JGE 0x0059c2e0
//   XREF to: 0059c2e0 (CONDITIONAL_JUMP)
// 0059c2dd: XOR EAX,EAX
// 0059c2df: RET
// 0059c2e0: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0059c2e0
//   XREF to: Stack[0x8] (READ)
// 0059c2e4: MOV EAX,dword ptr [EDX + EAX*0x4 + 0x8c3c]
// 0059c2eb: RET
