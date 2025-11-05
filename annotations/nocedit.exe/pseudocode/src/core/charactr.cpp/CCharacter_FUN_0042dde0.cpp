// Name: core_charactr.cpp_CCharacter_FUN_0042dde0
// Address: 0042dde0
// Address Range: [[0042dde0, 0042de4c]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042dde0(CCharacter * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
//   core_actor.cpp_crc32ProcessInt_FUN_0040cf50
//   core_actor.cpp_crc32ProcessString_FUN_0040cf90
//   core_motion.cpp_CMotionController_FUN_0052dab0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042dde0(CCharacter *this_ptr)

{
  char *pcVar1;
  uint *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_calculateChecksum_FUN_00409ec0(&this_ptr->base_actor,in_stack_00000008)
  ;
  pcVar1 = (this_ptr->model).model_name;
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50(in_stack_00000008,(int)this_ptr->hit_points);
  if (*pcVar1 == '\0') {
    return;
  }
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(in_stack_00000008,pcVar1);
  pcVar1 = (char *)core_motion_cpp_CMotionController_FUN_0052dab0
                             (&(this_ptr->model).motion_controller);
  core_actor_cpp_crc32ProcessString_FUN_0040cf90(in_stack_00000008,pcVar1);
  core_actor_cpp_crc32ProcessInt_FUN_0040cf50
            (in_stack_00000008,(int)(this_ptr->model).motion_controller.current_frame_number);
  return;
}


// Assembly code:
// 0042dde0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042dde0
// 0042dde1: PUSH ESI
// 0042dde2: PUSH EDI
// 0042dde3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0042dde7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042ddeb: PUSH EBX
// 0042ddec: PUSH EDI
// 0042dded: CALL core_actor.cpp_CDemonActor_calculateChecksum_FUN_00409ec0
//   XREF to: 00409ec0 (UNCONDITIONAL_CALL)
// 0042ddf2: ADD ESP,0x8
// 0042ddf5: PUSH dword ptr [EDI + 0x243c]
// 0042ddfb: LEA ESI,[EDI + 0x158]
// 0042de01: PUSH EBX
// 0042de02: ADD EDI,0x23b8
// 0042de08: CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf50
//   XREF to: 0040cf50 (UNCONDITIONAL_CALL)
// 0042de0d: MOV AH,byte ptr [EDI]
// 0042de0f: ADD ESP,0x8
// 0042de12: TEST AH,AH
// 0042de14: JNZ 0x0042de1a
//   XREF to: 0042de1a (CONDITIONAL_JUMP)
// 0042de16: POP EDI
// 0042de17: POP ESI
// 0042de18: POP EBX
// 0042de19: RET
// 0042de1a: PUSH EDI
//   Label: LAB_0042de1a
// 0042de1b: PUSH EBX
// 0042de1c: CALL core_actor.cpp_crc32ProcessString_FUN_0040cf90
//   XREF to: 0040cf90 (UNCONDITIONAL_CALL)
// 0042de21: ADD ESP,0x8
// 0042de24: PUSH ESI
// 0042de25: CALL core_motion.cpp_CMotionController_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0042de2a: ADD ESP,0x4
// 0042de2d: PUSH EAX
// 0042de2e: PUSH EBX
// 0042de2f: CALL core_actor.cpp_crc32ProcessString_FUN_0040cf90
//   XREF to: 0040cf90 (UNCONDITIONAL_CALL)
// 0042de34: ADD ESP,0x8
// 0042de37: SUB ESP,0x4
// 0042de3a: MOV EAX,dword ptr [ESI + 0x8]
// 0042de3d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 0042de40: PUSH EBX
// 0042de41: CALL core_actor.cpp_crc32ProcessInt_FUN_0040cf50
//   XREF to: 0040cf50 (UNCONDITIONAL_CALL)
// 0042de46: ADD ESP,0x8
// 0042de49: POP EDI
// 0042de4a: POP ESI
// 0042de4b: POP EBX
// 0042de4c: RET
