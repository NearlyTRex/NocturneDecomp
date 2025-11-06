// Name: core_haystack.cpp_CHaystack_FUN_004f1b70
// Address: 004f1b70
// Address Range: [[004f1b70, 004f1c8e]]
// Convention: __cdecl
// Signature: void core_haystack.cpp_CHaystack_FUN_004f1b70(CHaystack * this_ptr)
// Globals:
//   undefined4 DAT_0065f3e8
//   CGame* g_CGamePtr = 02d81a9c
//   CGore* g_CGorePtr = 02d83364
//   undefined4 DAT_02d81c6c
//   undefined4 DAT_02d81cc8
//   CGore g_CGoreInstance
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042c3c0
//   core_gore.cpp_CGore_FUN_004ee030
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_FUN_004f1b70(CHaystack *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  float fVar1;
  SMotion *pSVar2;
  int in_stack_00000008;
  int desired_state_index;
  
  if (((this_ptr->base_hero).field1_0xbe24 & 0x7fffffffU) != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->field53_0x1d0 != 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  if (g_CGamePtr->allow_damage_flag == 0) {
    *(undefined4 *)(in_stack_00000008 + 4) = 0;
  }
  (this_ptr->base_hero).field1_0xbe24 = DAT_0065f3e8;
  fVar1 = (this_ptr->base_hero).base_character.hit_points - *(float *)(in_stack_00000008 + 4);
  this_ptr_00 = &(this_ptr->base_hero).base_character.model;
  (this_ptr->base_hero).base_character.hit_points = fVar1;
  if (fVar1 <= 0.0) {
    (this_ptr->base_hero).base_character.hit_points = 0.0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr_00->motion_controller);
    if (pSVar2->state_index != 9) {
      pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&this_ptr_00->motion_controller);
      if (pSVar2->state_index != 8) {
        (this_ptr->base_hero).base_character.grabbed_by = (CDemonActor *)0x0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&this_ptr_00->motion_controller,8,1);
        core_gore_cpp_CGore_FUN_004ee030(g_CGorePtr,(CDemonActor *)this_ptr);
        core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
        return;
      }
    }
  }
  else if (0.0 < *(float *)(in_stack_00000008 + 4)) {
    if (*(int *)this_ptr->field1_0x1fbd4 == 0) {
      desired_state_index = 4;
    }
    else {
      desired_state_index = 0xb;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
              (&this_ptr_00->motion_controller,desired_state_index,1);
  }
  core_charactr_cpp_CCharacter_FUN_0042c3c0((CCharacter *)this_ptr);
  return;
}


// Assembly code:
// 004f1b70: PUSH EBX
//   Label: core_haystack.cpp_CHaystack_FUN_004f1b70
// 004f1b71: PUSH ESI
// 004f1b72: PUSH EDI
// 004f1b73: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f1b77: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f1b7b: TEST dword ptr [EBX + 0xbe24],0x7fffffff
// 004f1b85: JNZ 0x004f1c0c
//   XREF to: 004f1c0c (CONDITIONAL_JUMP)
// 004f1b8b: MOV EAX,[0x0067b654]
//   Label: LAB_004f1b8b
//   XREF to: 0067b654 (READ)
// 004f1b90: CMP dword ptr [EAX + 0x1d0],0x0
//   XREF to: 02d81c6c (READ)
// 004f1b97: JZ 0x004f1ba0
//   XREF to: 004f1ba0 (CONDITIONAL_JUMP)
// 004f1b99: MOV dword ptr [EDI + 0x4],0x0
// 004f1ba0: MOV EAX,[0x0067b654]
//   Label: LAB_004f1ba0
//   XREF to: 0067b654 (READ)
// 004f1ba5: MOV ESI,dword ptr [EAX + 0x22c]
//   XREF to: 02d81cc8 (READ)
// 004f1bab: TEST ESI,ESI
// 004f1bad: JZ 0x004f1c18
//   XREF to: 004f1c18 (CONDITIONAL_JUMP)
// 004f1baf: MOV EAX,[0x0065f3e8]
//   Label: LAB_004f1baf
//   XREF to: 0065f3e8 (READ)
// 004f1bb4: MOV dword ptr [EBX + 0xbe24],EAX
// 004f1bba: FLD float ptr [EDI + 0x4]
// 004f1bbd: FSUBR float ptr [EBX + 0x243c]
// 004f1bc3: LEA ESI,[EBX + 0x158]
// 004f1bc9: FST float ptr [EBX + 0x243c]
// 004f1bcf: FLDZ
// 004f1bd1: FCOMPP
// 004f1bd3: FNSTSW AX
// 004f1bd5: SAHF
// 004f1bd6: JNC 0x004f1c1d
//   XREF to: 004f1c1d (CONDITIONAL_JUMP)
// 004f1bd8: FLD float ptr [EDI + 0x4]
// 004f1bdb: FLDZ
// 004f1bdd: FCOMPP
// 004f1bdf: FNSTSW AX
// 004f1be1: SAHF
// 004f1be2: JNC 0x004f1bfe
//   XREF to: 004f1bfe (CONDITIONAL_JUMP)
// 004f1be4: CMP dword ptr [EBX + 0x1fbd4],0x0
// 004f1beb: JNZ 0x004f1c86
//   XREF to: 004f1c86 (CONDITIONAL_JUMP)
// 004f1bf1: PUSH 0x1
// 004f1bf3: PUSH 0x4
// 004f1bf5: PUSH ESI
//   Label: LAB_004f1bf5
// 004f1bf6: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f1bfb: ADD ESP,0xc
// 004f1bfe: PUSH EDI
//   Label: LAB_004f1bfe
// 004f1bff: PUSH EBX
// 004f1c00: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004f1c05: ADD ESP,0x8
// 004f1c08: POP EDI
// 004f1c09: POP ESI
// 004f1c0a: POP EBX
// 004f1c0b: RET
// 004f1c0c: MOV dword ptr [EDI + 0x4],0x0
//   Label: LAB_004f1c0c
// 004f1c13: JMP 0x004f1b8b
//   XREF to: 004f1b8b (UNCONDITIONAL_JUMP)
// 004f1c18: MOV dword ptr [EDI + 0x4],ESI
//   Label: LAB_004f1c18
// 004f1c1b: JMP 0x004f1baf
//   XREF to: 004f1baf (UNCONDITIONAL_JUMP)
// 004f1c1d: PUSH ESI
//   Label: LAB_004f1c1d
// 004f1c1e: MOV dword ptr [EBX + 0x243c],0x0
// 004f1c28: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f1c2d: MOV EAX,dword ptr [EAX + 0x24]
// 004f1c30: ADD ESP,0x4
// 004f1c33: CMP EAX,0x9
// 004f1c36: JZ 0x004f1bfe
//   XREF to: 004f1bfe (CONDITIONAL_JUMP)
// 004f1c38: PUSH ESI
// 004f1c39: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 004f1c3e: MOV EAX,dword ptr [EAX + 0x24]
// 004f1c41: ADD ESP,0x4
// 004f1c44: CMP EAX,0x8
// 004f1c47: JZ 0x004f1bfe
//   XREF to: 004f1bfe (CONDITIONAL_JUMP)
// 004f1c49: PUSH 0x1
// 004f1c4b: PUSH 0x8
// 004f1c4d: PUSH ESI
// 004f1c4e: MOV dword ptr [EBX + 0x2598],0x0
// 004f1c58: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f1c5d: ADD ESP,0xc
// 004f1c60: PUSH 0x0
// 004f1c62: PUSH 0x42480000
// 004f1c67: PUSH 0x32
// 004f1c69: PUSH EBX
// 004f1c6a: MOV EAX,[0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 004f1c6f: PUSH EAX
//   XREF to: 02d83364 (DATA)
// 004f1c70: CALL core_gore.cpp_CGore_FUN_004ee030
//   XREF to: 004ee030 (UNCONDITIONAL_CALL)
// 004f1c75: ADD ESP,0x14
// 004f1c78: PUSH EDI
// 004f1c79: PUSH EBX
// 004f1c7a: CALL core_charactr.cpp_CCharacter_FUN_0042c3c0
//   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)
// 004f1c7f: ADD ESP,0x8
// 004f1c82: POP EDI
// 004f1c83: POP ESI
// 004f1c84: POP EBX
// 004f1c85: RET
// 004f1c86: PUSH 0x1
//   Label: LAB_004f1c86
// 004f1c88: PUSH 0xb
// 004f1c8a: JMP 0x004f1bf5
//   XREF to: 004f1bf5 (UNCONDITIONAL_JUMP)
