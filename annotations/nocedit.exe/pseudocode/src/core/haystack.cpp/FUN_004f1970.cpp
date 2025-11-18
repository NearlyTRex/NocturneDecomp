// Name: core_haystack.cpp_FUN_004f1970
// Address: 004f1970
// Address Range: [[004f1970, 004f1aa5]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f1970()
// Cross-references:
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f0edd [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004f1944 = 004f19a4
//   TerminatedCString s_box_swing_wav_0062e9b3
//   TerminatedCString s_box_punch_wav_0062e9c2
//   undefined4 DAT_02db8734
//   undefined4 DAT_02db8738
// Function calls:
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_charactr.cpp_CCharacter_FUN_0042ec40
//   core_haystack.cpp_FUN_004f1ab0
//   core_motion.cpp_CMotionController_advance_FUN_0052d610
//   sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290

#include "nocturne.h"

/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f1970(undefined4 param_1, undefined4
   param_2) */

void core_haystack_cpp_FUN_004f1970(void)

{
  int iVar1;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_0052d610
                      (&(in_stack_00000004->model).motion_controller);
    switch(iVar1) {
    case 0x65:
      core_haystack_cpp_FUN_004f1ab0();
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
      goto LAB_004f19bc;
    case 0x66:
      core_haystack_cpp_FUN_004f1ab0();
      iVar1 = *(int *)(in_stack_00000004[2].cloth_data + 0x54f8);
LAB_004f19bc:
      *(uint *)(in_stack_00000004[2].cloth_data + 0x54f8) = (uint)(iVar1 == 0);
      break;
    case 0x67:
    case 0x69:
    case 0x6b:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(in_stack_00000004->base_actor).location.position.x,
                         (double)(in_stack_00000004->base_actor).location.position.y,
                         (double)(in_stack_00000004->base_actor).location.position.z,40.0);
      if (iVar1 != 0) {
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"box-swing?.wav");
      }
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
      iVar1 = sound_sndmain_cpp_isWithinListenerRadius_FUN_005aa290
                        ((double)(in_stack_00000004->base_actor).location.position.x,
                         (double)(in_stack_00000004->base_actor).location.position.y,
                         (double)(in_stack_00000004->base_actor).location.position.z,40.0);
      if ((iVar1 != 0) && (iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.4), iVar1 != 0)) {
        (*((in_stack_00000004->base_actor).vtable)->playSound)
                  (&in_stack_00000004->base_actor,"box-punch?.wav");
      }
      break;
    default:
      core_charactr_cpp_CCharacter_FUN_0042ec40(in_stack_00000004);
    }
    if (in_stack_00000008 <= 0.0) {
      return;
    }
  } while( true );
}


// Assembly code:
// 004f1970: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f1970
// 004f1971: PUSH ESI
// 004f1972: PUSH EDI
// 004f1973: PUSH EBP
// 004f1974: MOV EBP,ESP
// 004f1976: AND ESP,0xfffffff8
// 004f1979: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f197c: LEA ESI,[EBX + 0x158]
// 004f1982: LEA EAX,[EBP + 0x18]
//   Label: LAB_004f1982
//   XREF to: Stack[0x8] (DATA)
// 004f1985: PUSH EAX
// 004f1986: PUSH ESI
// 004f1987: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 004f198c: MOV EDX,EAX
// 004f198e: SUB EAX,0x65
// 004f1991: ADD ESP,0x8
// 004f1994: CMP EAX,0x7
// 004f1997: JA 0x004f1a97
//   XREF to: 004f1a97 (CONDITIONAL_JUMP)
// 004f199d: JMP dword ptr [EAX*0x4 + 0x4f1944]
//   Label: switchD
//   XREF to: 004f19a4 (COMPUTED_JUMP)
//   XREF to: 004f19dd (COMPUTED_JUMP)
//   XREF to: 004f19f7 (COMPUTED_JUMP)
//   XREF to: 004f1a39 (COMPUTED_JUMP)
//   XREF to: 004f1944 (DATA)
// 004f19a4: MOV EDI,dword ptr [0x02db8734]
//   Label: caseD_65
//   XREF to: 02db8734 (READ)
// 004f19aa: PUSH EDI
// 004f19ab: PUSH EBX
// 004f19ac: CALL core_haystack.cpp_FUN_004f1ab0
//   XREF to: 004f1ab0 (UNCONDITIONAL_CALL)
// 004f19b1: MOV EDX,dword ptr [EBX + 0x1fbd8]
// 004f19b7: ADD ESP,0x8
// 004f19ba: TEST EDX,EDX
// 004f19bc: SETZ AL
//   Label: LAB_004f19bc
// 004f19bf: AND EAX,0xff
// 004f19c4: MOV dword ptr [EBX + 0x1fbd8],EAX
// 004f19ca: FLD float ptr [EBP + 0x18]
//   Label: LAB_004f19ca
//   XREF to: Stack[0x8] (READ)
// 004f19cd: FLDZ
// 004f19cf: FCOMPP
// 004f19d1: FNSTSW AX
// 004f19d3: SAHF
// 004f19d4: JC 0x004f1982
//   XREF to: 004f1982 (CONDITIONAL_JUMP)
// 004f19d6: MOV ESP,EBP
// 004f19d8: POP EBP
// 004f19d9: POP EDI
// 004f19da: POP ESI
// 004f19db: POP EBX
// 004f19dc: RET
// 004f19dd: MOV EDX,dword ptr [0x02db8738]
//   Label: caseD_66
//   XREF to: 02db8738 (READ)
// 004f19e3: PUSH EDX
// 004f19e4: PUSH EBX
// 004f19e5: CALL core_haystack.cpp_FUN_004f1ab0
//   XREF to: 004f1ab0 (UNCONDITIONAL_CALL)
// 004f19ea: MOV ECX,dword ptr [EBX + 0x1fbd8]
// 004f19f0: ADD ESP,0x8
// 004f19f3: TEST ECX,ECX
// 004f19f5: JMP 0x004f19bc
//   XREF to: 004f19bc (UNCONDITIONAL_JUMP)
// 004f19f7: PUSH 0x40440000
//   Label: caseD_6b
// 004f19fc: PUSH 0x0
// 004f19fe: SUB ESP,0x8
// 004f1a01: FLD float ptr [EBX + 0x28]
// 004f1a04: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004f1a07: SUB ESP,0x8
// 004f1a0a: FLD float ptr [EBX + 0x24]
// 004f1a0d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004f1a10: SUB ESP,0x8
// 004f1a13: FLD float ptr [EBX + 0x20]
// 004f1a16: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004f1a19: CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 004f1a1e: ADD ESP,0x20
// 004f1a21: TEST EAX,EAX
// 004f1a23: JZ 0x004f19ca
//   XREF to: 004f19ca (CONDITIONAL_JUMP)
// 004f1a25: PUSH 0x62e9b3
//   XREF to: 0062e9b3 (DATA)
// 004f1a2a: MOV EAX,dword ptr [EBX + 0x154]
// 004f1a30: PUSH EBX
// 004f1a31: CALL dword ptr [EAX + 0x24]
// 004f1a34: ADD ESP,0x8
// 004f1a37: JMP 0x004f19ca
//   XREF to: 004f19ca (UNCONDITIONAL_JUMP)
// 004f1a39: PUSH 0x40440000
//   Label: caseD_6c
// 004f1a3e: PUSH 0x0
// 004f1a40: SUB ESP,0x8
// 004f1a43: FLD float ptr [EBX + 0x28]
// 004f1a46: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004f1a49: SUB ESP,0x8
// 004f1a4c: FLD float ptr [EBX + 0x24]
// 004f1a4f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004f1a52: SUB ESP,0x8
// 004f1a55: FLD float ptr [EBX + 0x20]
// 004f1a58: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004f1a5b: CALL sound_sndmain.cpp_isWithinListenerRadius_FUN_005aa290
//   XREF to: 005aa290 (UNCONDITIONAL_CALL)
// 004f1a60: ADD ESP,0x20
// 004f1a63: TEST EAX,EAX
// 004f1a65: JZ 0x004f19ca
//   XREF to: 004f19ca (CONDITIONAL_JUMP)
// 004f1a6b: PUSH 0x3ecccccd
// 004f1a70: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004f1a75: ADD ESP,0x4
// 004f1a78: TEST EAX,EAX
// 004f1a7a: JZ 0x004f19ca
//   XREF to: 004f19ca (CONDITIONAL_JUMP)
// 004f1a80: PUSH 0x62e9c2
//   XREF to: 0062e9c2 (DATA)
// 004f1a85: MOV EAX,dword ptr [EBX + 0x154]
// 004f1a8b: PUSH EBX
// 004f1a8c: CALL dword ptr [EAX + 0x24]
// 004f1a8f: ADD ESP,0x8
// 004f1a92: JMP 0x004f19ca
//   XREF to: 004f19ca (UNCONDITIONAL_JUMP)
// 004f1a97: PUSH EDX
//   Label: default
// 004f1a98: PUSH EBX
// 004f1a99: CALL core_charactr.cpp_CCharacter_FUN_0042ec40
//   XREF to: 0042ec40 (UNCONDITIONAL_CALL)
// 004f1a9e: ADD ESP,0x8
// 004f1aa1: JMP 0x004f19ca
//   XREF to: 004f19ca (UNCONDITIONAL_JUMP)
