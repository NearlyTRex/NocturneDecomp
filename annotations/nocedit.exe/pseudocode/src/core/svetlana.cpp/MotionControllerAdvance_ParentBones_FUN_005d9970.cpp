// Name: core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970
// Address: 005d9970
// Address Range: [[005d9970, 005d9a07]]
// Convention: unknown
// Signature: undefined core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970()
// Cross-references:
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8c66 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f6cbd4
//   undefined4 DAT_03f6cbd8
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10

#include "nocturne.h"

/* Signature: undefined1 actors_hero_svetlana.cpp_MotionControllerAdvance_ParentBones(undefined4
   param_1, undefined4 param_2) */

void core_svetlana_cpp_MotionControllerAdvance_ParentBones_FUN_005d9970(void)

{
  int iVar1;
  uint uVar2;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    uVar2 = core_motion_cpp_CMotionController_advance_FUN_0052d610();
    if (uVar2 < 100) {
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
    else {
      if (uVar2 < 0x65) {
        core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10();
        iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
      }
      else {
        if (uVar2 != 0x65) {
          core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
          goto LAB_005d99be;
        }
        core_svetlana_cpp_AttackWithParentBone_FUN_005d9a10();
        iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
      }
      *(uint *)(in_stack_00000004[2].cloth_data + 0x54f8) = (uint)(iVar1 == 0);
    }
LAB_005d99be:
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}


// Assembly code:
// 005d9970: PUSH EBX
//   Label: core_svetlana.cpp_MotionControllerAdvance_ParentBones_FUN_005d9970
// 005d9971: PUSH ESI
// 005d9972: PUSH EDI
// 005d9973: PUSH EBP
// 005d9974: MOV EBP,ESP
// 005d9976: AND ESP,0xfffffff8
// 005d9979: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005d997c: LEA ESI,[EBX + 0x158]
// 005d9982: LEA EAX,[EBP + 0x18]
//   Label: LAB_005d9982
//   XREF to: Stack[0x8] (DATA)
// 005d9985: PUSH EAX
// 005d9986: PUSH ESI
// 005d9987: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 005d998c: ADD ESP,0x8
// 005d998f: MOV EDX,EAX
// 005d9991: CMP EAX,0x64
// 005d9994: JC 0x005d99eb
//   XREF to: 005d99eb (CONDITIONAL_JUMP)
// 005d9996: JA 0x005d99f7
//   XREF to: 005d99f7 (CONDITIONAL_JUMP)
// 005d9998: MOV EDI,dword ptr [0x03f6cbd4]
//   XREF to: 03f6cbd4 (READ)
// 005d999e: PUSH EDI
// 005d999f: PUSH EBX
// 005d99a0: CALL core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
//   XREF to: 005d9a10 (UNCONDITIONAL_CALL)
// 005d99a5: MOV EDX,dword ptr [EBX + 0x1fbd8]
// 005d99ab: ADD ESP,0x8
// 005d99ae: TEST EDX,EDX
// 005d99b0: SETZ AL
//   Label: LAB_005d99b0
// 005d99b3: AND EAX,0xff
// 005d99b8: MOV dword ptr [EBX + 0x1fbd8],EAX
// 005d99be: FLD float ptr [EBP + 0x18]
//   Label: LAB_005d99be
//   XREF to: Stack[0x8] (READ)
// 005d99c1: FLDZ
// 005d99c3: FCOMPP
// 005d99c5: FNSTSW AX
// 005d99c7: SAHF
// 005d99c8: JC 0x005d9982
//   XREF to: 005d9982 (CONDITIONAL_JUMP)
// 005d99ca: MOV ESP,EBP
// 005d99cc: POP EBP
// 005d99cd: POP EDI
// 005d99ce: POP ESI
// 005d99cf: POP EBX
// 005d99d0: RET
// 005d99d1: MOV EDX,dword ptr [0x03f6cbd8]
//   Label: LAB_005d99d1
//   XREF to: 03f6cbd8 (READ)
// 005d99d7: PUSH EDX
// 005d99d8: PUSH EBX
// 005d99d9: CALL core_svetlana.cpp_AttackWithParentBone_FUN_005d9a10
//   XREF to: 005d9a10 (UNCONDITIONAL_CALL)
// 005d99de: MOV ECX,dword ptr [EBX + 0x1fbd8]
// 005d99e4: ADD ESP,0x8
// 005d99e7: TEST ECX,ECX
// 005d99e9: JMP 0x005d99b0
//   XREF to: 005d99b0 (UNCONDITIONAL_JUMP)
// 005d99eb: PUSH EDX
//   Label: LAB_005d99eb
// 005d99ec: PUSH EBX
// 005d99ed: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005d99f2: ADD ESP,0x8
// 005d99f5: JMP 0x005d99be
//   XREF to: 005d99be (UNCONDITIONAL_JUMP)
// 005d99f7: CMP EAX,0x65
//   Label: LAB_005d99f7
// 005d99fa: JZ 0x005d99d1
//   XREF to: 005d99d1 (CONDITIONAL_JUMP)
// 005d99fc: PUSH EDX
// 005d99fd: PUSH EBX
// 005d99fe: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 005d9a03: ADD ESP,0x8
// 005d9a06: JMP 0x005d99be
//   XREF to: 005d99be (UNCONDITIONAL_JUMP)
