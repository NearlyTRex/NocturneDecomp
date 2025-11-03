// Name: core_scat.cpp_FUN_00557d20
// Address: 00557d20
// Address Range: [[00557d20, 00557dad]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557d20()
// Cross-references:
//   core_scat.cpp_FUN_005571f0 (005571f0) at 00557272 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CEnemyClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00557d20(undefined4 param_1, undefined4 param_2)
    */

void core_scat_cpp_FUN_00557d20(void)

{
  int iVar1;
  CDemonActor *this_ptr;
  BADSPACEBASE *in_ESP;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_ffffffbc;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    if (iVar1 == 100) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (in_stack_00000004->grabbed_by,g_CEnemyClassInfo.name_hash);
      if (this_ptr != (CDemonActor *)0x0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffb8);
        (*this_ptr->vtable[1].playAmbientSoundWithVolume)
                  (this_ptr,&stack0xffffffbc,in_stack_ffffffbc);
      }
    }
    else {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  } while (0.0 < in_stack_00000008);
  return;
}


// Assembly code:
// 00557d20: PUSH EBX
//   Label: core_scat.cpp_FUN_00557d20
// 00557d21: PUSH ESI
// 00557d22: PUSH EDI
// 00557d23: PUSH EBP
// 00557d24: MOV EBP,ESP
// 00557d26: SUB ESP,0x3c
// 00557d29: AND ESP,0xfffffff8
// 00557d2c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00557d2f: LEA EDI,[ESI + 0x158]
// 00557d35: LEA EAX,[EBP + 0x18]
//   Label: LAB_00557d35
//   XREF to: Stack[0x8] (DATA)
// 00557d38: PUSH EAX
// 00557d39: PUSH EDI
// 00557d3a: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00557d3f: ADD ESP,0x8
// 00557d42: CMP EAX,0x64
// 00557d45: JZ 0x00557d64
//   XREF to: 00557d64 (CONDITIONAL_JUMP)
// 00557d47: PUSH EAX
// 00557d48: PUSH ESI
// 00557d49: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 00557d4e: ADD ESP,0x8
//   Label: LAB_00557d4e
// 00557d51: FLD float ptr [EBP + 0x18]
//   Label: LAB_00557d51
//   XREF to: Stack[0x8] (READ)
// 00557d54: FLDZ
// 00557d56: FCOMPP
// 00557d58: FNSTSW AX
// 00557d5a: SAHF
// 00557d5b: JC 0x00557d35
//   XREF to: 00557d35 (CONDITIONAL_JUMP)
// 00557d5d: MOV ESP,EBP
// 00557d5f: POP EBP
// 00557d60: POP EDI
// 00557d61: POP ESI
// 00557d62: POP EBX
// 00557d63: RET
// 00557d64: MOV EDX,dword ptr [0x02cf2bf0]
//   Label: LAB_00557d64
//   XREF to: 02cf2bf0 (READ)
// 00557d6a: PUSH EDX
// 00557d6b: MOV ECX,dword ptr [ESI + 0x2598]
// 00557d71: PUSH ECX
// 00557d72: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00557d77: MOV EBX,EAX
// 00557d79: ADD ESP,0x8
// 00557d7c: TEST EAX,EAX
// 00557d7e: JZ 0x00557d51
//   XREF to: 00557d51 (CONDITIONAL_JUMP)
// 00557d80: MOV EAX,ESP
// 00557d82: PUSH EAX
// 00557d83: CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
//   XREF to: 00427db0 (UNCONDITIONAL_CALL)
// 00557d88: MOV EAX,0x40a00000
// 00557d8d: ADD ESP,0x4
// 00557d90: MOV EDX,ESP
// 00557d92: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00557d96: PUSH EDX
// 00557d97: MOV dword ptr [ESP + 0x38],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00557d9b: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 00557d9f: PUSH EBX
// 00557da0: MOV EAX,dword ptr [EBX + 0x154]
// 00557da6: CALL dword ptr [EAX + 0x11c]
// 00557dac: JMP 0x00557d4e
//   XREF to: 00557d4e (UNCONDITIONAL_JUMP)
