// Name: core_charactr.cpp_CCharacter_FUN_0042b8e0
// Address: 0042b8e0
// Address Range: [[0042b8e0, 0042b92d]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b8e0(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c55d [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e8a3a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_glass_1_wav_2_0_00617144
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a14b0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b8e0(CCharacter *this_ptr)

{
  COrientation *pCStack00000008;
  undefined4 uStack0000000c;
  
  (*((this_ptr->base_actor).vtable)->playSound)(&this_ptr->base_actor,"glass-1.wav@2.0");
  if ((this_ptr->model).model_name[0] == '\0') {
    (this_ptr->base_actor).was_created = 2;
    return;
  }
  uStack0000000c = 0;
  pCStack00000008 = &(this_ptr->base_actor).orient;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a14b0(&this_ptr->model);
  (this_ptr->base_actor).was_created = 2;
  return;
}


// Assembly code:
// 0042b8e0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b8e0
// 0042b8e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042b8e5: PUSH 0x617144
//   XREF to: 00617144 (DATA)
// 0042b8ea: MOV EAX,dword ptr [EBX + 0x154]
// 0042b8f0: PUSH EBX
// 0042b8f1: CALL dword ptr [EAX + 0x24]
// 0042b8f4: LEA EDX,[EBX + 0x158]
// 0042b8fa: LEA EAX,[EBX + 0x23b8]
// 0042b900: MOV CL,byte ptr [EAX]
// 0042b902: ADD ESP,0x8
// 0042b905: TEST CL,CL
// 0042b907: JNZ 0x0042b912
//   XREF to: 0042b912 (CONDITIONAL_JUMP)
// 0042b909: MOV dword ptr [EBX + 0x70],0x2
// 0042b910: POP EBX
// 0042b911: RET
// 0042b912: PUSH 0x0
//   Label: LAB_0042b912
// 0042b914: LEA EAX,[EBX + 0x30]
// 0042b917: PUSH EAX
// 0042b918: LEA EAX,[EBX + 0x20]
// 0042b91b: PUSH EAX
// 0042b91c: PUSH EDX
// 0042b91d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a14b0
//   XREF to: 005a14b0 (UNCONDITIONAL_CALL)
// 0042b922: ADD ESP,0x10
// 0042b925: MOV dword ptr [EBX + 0x70],0x2
// 0042b92c: POP EBX
// 0042b92d: RET
