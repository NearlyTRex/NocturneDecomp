// Name: core_icepick.cpp_FUN_004f93a0
// Address: 004f93a0
// Address Range: [[004f93a0, 004f948d]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f93a0()
// Cross-references:
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f8153 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004f937c = 004f93d4
//   undefined4 DAT_02db89a4
//   undefined4 DAT_02db89a8
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   core_icepick.cpp_FUN_004f9490
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

/* Signature: undefined1 actors_hero_icepick.cpp_FUN_004f93a0(undefined4 param_1, undefined4
   param_2) */

void core_icepick_cpp_FUN_004f93a0(void)

{
  int iVar1;
  uint uVar2;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    switch(iVar1) {
    case 100:
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8) + 1;
      *(int *)(in_stack_00000004[2].cloth_data + 0x54f8) = iVar1;
      if (4 < iVar1) {
        in_stack_00000004[2].cloth_data[0x54f8] = '\0';
        in_stack_00000004[2].cloth_data[0x54f9] = '\0';
        in_stack_00000004[2].cloth_data[0x54fa] = '\0';
        in_stack_00000004[2].cloth_data[0x54fb] = '\0';
      }
      break;
    case 0x65:
      core_icepick_cpp_FUN_004f9490();
      break;
    case 0x66:
      core_icepick_cpp_FUN_004f9490();
      break;
    case 0x67:
      uVar2 = crt_stdlib_c_rand_FUN_005feb5c();
      if ((uVar2 & 3) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                  (&(in_stack_00000004->model).motion_controller);
      }
      break;
    case 0x68:
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x5518) != 0) {
        in_stack_00000004[2].cloth_data[0x5518] = '\0';
        in_stack_00000004[2].cloth_data[0x5519] = '\0';
        in_stack_00000004[2].cloth_data[0x551a] = '\0';
        in_stack_00000004[2].cloth_data[0x551b] = '\0';
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_0042cdb0(in_stack_00000004);
      }
      break;
    case 0x69:
      (*(in_stack_00000004->base_actor).vtable[1].renderTargetPoints)
                (&in_stack_00000004->base_actor);
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
  } while (0.0 < in_stack_00000008);
  return;
}


// Assembly code:
// 004f93a0: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f93a0
// 004f93a1: PUSH ESI
// 004f93a2: PUSH EDI
// 004f93a3: PUSH EBP
// 004f93a4: MOV EBP,ESP
// 004f93a6: AND ESP,0xfffffff8
// 004f93a9: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f93ac: LEA ESI,[EBX + 0x158]
// 004f93b2: LEA EAX,[EBP + 0x18]
//   Label: LAB_004f93b2
//   XREF to: Stack[0x8] (DATA)
// 004f93b5: PUSH EAX
// 004f93b6: PUSH ESI
// 004f93b7: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004f93bc: MOV EDX,EAX
// 004f93be: SUB EAX,0x64
// 004f93c1: ADD ESP,0x8
// 004f93c4: CMP EAX,0x5
// 004f93c7: JA 0x004f947f
//   XREF to: 004f947f (CONDITIONAL_JUMP)
// 004f93cd: JMP dword ptr [EAX*0x4 + 0x4f937c]
//   Label: switchD
//   XREF to: 004f93d4 (COMPUTED_JUMP)
//   XREF to: 004f9403 (COMPUTED_JUMP)
//   XREF to: 004f9415 (COMPUTED_JUMP)
//   XREF to: 004f9427 (COMPUTED_JUMP)
//   XREF to: 004f943f (COMPUTED_JUMP)
//   XREF to: 004f9466 (COMPUTED_JUMP)
//   XREF to: 004f937c (DATA)
// 004f93d4: MOV EAX,dword ptr [EBX + 0x1fbd8]
//   Label: caseD_64
// 004f93da: INC EAX
// 004f93db: MOV dword ptr [EBX + 0x1fbd8],EAX
// 004f93e1: CMP EAX,0x4
// 004f93e4: JLE 0x004f93f0
//   XREF to: 004f93f0 (CONDITIONAL_JUMP)
// 004f93e6: MOV dword ptr [EBX + 0x1fbd8],0x0
// 004f93f0: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f93f0
//   XREF to: Stack[0x8] (READ)
// 004f93f3: FLDZ
// 004f93f5: FCOMPP
// 004f93f7: FNSTSW AX
// 004f93f9: SAHF
// 004f93fa: JC 0x004f93b2
//   XREF to: 004f93b2 (CONDITIONAL_JUMP)
// 004f93fc: MOV ESP,EBP
// 004f93fe: POP EBP
// 004f93ff: POP EDI
// 004f9400: POP ESI
// 004f9401: POP EBX
// 004f9402: RET
// 004f9403: MOV EDI,dword ptr [0x02db89a4]
//   Label: caseD_65
//   XREF to: 02db89a4 (READ)
// 004f9409: PUSH EDI
// 004f940a: PUSH EBX
// 004f940b: CALL core_icepick.cpp_FUN_004f9490
//   XREF to: 004f9490 (UNCONDITIONAL_CALL)
// 004f9410: ADD ESP,0x8
// 004f9413: JMP 0x004f93f0
//   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)
// 004f9415: MOV ECX,dword ptr [0x02db89a8]
//   Label: caseD_66
//   XREF to: 02db89a8 (READ)
// 004f941b: PUSH ECX
// 004f941c: PUSH EBX
// 004f941d: CALL core_icepick.cpp_FUN_004f9490
//   XREF to: 004f9490 (UNCONDITIONAL_CALL)
// 004f9422: ADD ESP,0x8
// 004f9425: JMP 0x004f93f0
//   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)
// 004f9427: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: caseD_67
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004f942c: TEST AL,0x3
// 004f942e: JNZ 0x004f93f0
//   XREF to: 004f93f0 (CONDITIONAL_JUMP)
// 004f9430: PUSH 0x1
// 004f9432: PUSH 0x15
// 004f9434: PUSH ESI
// 004f9435: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 004f943a: ADD ESP,0xc
// 004f943d: JMP 0x004f93f0
//   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)
// 004f943f: MOV EDX,dword ptr [EBX + 0x1fbf8]
//   Label: caseD_68
// 004f9445: TEST EDX,EDX
// 004f9447: JZ 0x004f93f0
//   XREF to: 004f93f0 (CONDITIONAL_JUMP)
// 004f9449: PUSH 0x3e4ccccd
// 004f944e: PUSH EDX
// 004f944f: PUSH 0x1
// 004f9451: PUSH EBX
// 004f9452: MOV dword ptr [EBX + 0x1fbf8],0x0
// 004f945c: CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_0042cdb0
//   XREF to: 0042cdb0 (UNCONDITIONAL_CALL)
// 004f9461: ADD ESP,0x10
// 004f9464: JMP 0x004f93f0
//   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)
// 004f9466: PUSH 0x0
//   Label: caseD_69
// 004f9468: PUSH 0x1
// 004f946a: MOV EAX,dword ptr [EBX + 0x154]
// 004f9470: PUSH EBX
// 004f9471: CALL dword ptr [EAX + 0x13c]
// 004f9477: ADD ESP,0xc
// 004f947a: JMP 0x004f93f0
//   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)
// 004f947f: PUSH EDX
//   Label: default
// 004f9480: PUSH EBX
// 004f9481: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f9486: ADD ESP,0x8
// 004f9489: JMP 0x004f93f0
//   XREF to: 004f93f0 (UNCONDITIONAL_JUMP)
