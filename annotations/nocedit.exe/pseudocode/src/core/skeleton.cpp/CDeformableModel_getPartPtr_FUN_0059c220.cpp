// Name: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
// Address: 0059c220
// Address Range: [[0059c220, 0059c23d]]
// Convention: __cdecl
// Signature: SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index)
// Cross-references:
//   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 (0041b280) at 0041b377 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a3f0 (0042a3f0) at 0042a408 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563f65 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005976f7 [UNCONDITIONAL_CALL]

#include "nocturne.h"

SPart * __cdecl
core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
          (CDeformableModel *this_ptr,int part_index)

{
  return this_ptr->parts + part_index;
}


// Assembly code:
// 0059c220: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
//   XREF to: Stack[0x8] (READ)
// 0059c224: LEA EAX,[EDX*0x4 + 0x0]
// 0059c22b: SUB EAX,EDX
// 0059c22d: MOV EDX,EAX
// 0059c22f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059c233: SHL EDX,0x5
// 0059c236: ADD EAX,0x7144
// 0059c23b: ADD EAX,EDX
// 0059c23d: RET
