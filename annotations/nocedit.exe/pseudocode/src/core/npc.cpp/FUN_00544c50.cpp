// Name: core_npc.cpp_FUN_00544c50
// Address: 00544c50
// Address Range: [[00544c50, 00544d28]]
// Convention: unknown
// Signature: undefined core_npc.cpp_FUN_00544c50()
// Cross-references:
//   core_npc.cpp_CNPC_FUN_00544d30 (00544d30) at 00544de7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_d_0063e3ac
//   TerminatedCString s_s_d_0063e3b2
// Function calls:
//   core_actor.cpp_getRandomInt_FUN_0040cc70
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_npc.cpp_FUN_00544c50(undefined4 param_1, undefined4 param_2) */

undefined4 core_npc_cpp_FUN_00544c50(void)

{
  char cVar1;
  CMotionList *this_ptr;
  int iVar2;
  int max_value;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  CMotionController *in_stack_00000004;
  char *in_stack_00000008;
  CMotionController *in_stack_0000001c;
  int aiStack_c8 [46];
  
  max_value = 0;
  this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(in_stack_00000004);
  while( true ) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff2c,"%s_%d",in_stack_00000008,max_value + 1);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr);
    pcVar3 = &stack0xffffff2c;
    if (iVar2 < 0) break;
    max_value = max_value + 1;
  }
  if (max_value == 0) {
    do {
      cVar1 = *in_stack_00000008;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = in_stack_00000008[1];
      in_stack_00000008 = in_stack_00000008 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    core_actor_cpp_getRandomInt_FUN_0040cc70(1,max_value);
    crt_stdio_c_sprintf_FUN_005fdbd0((char *)aiStack_c8,"%s_%d");
  }
  aiStack_c8[0] = 0;
  aiStack_c8[0] = core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(this_ptr);
  if (-1 < aiStack_c8[0]) {
    aiStack_c8[1] = 1;
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(in_stack_0000001c);
    return 1;
  }
  return 0;
}


// Assembly code:
// 00544c50: PUSH EBX
//   Label: core_npc.cpp_FUN_00544c50
// 00544c51: PUSH ESI
// 00544c52: PUSH EDI
// 00544c53: PUSH EBP
// 00544c54: SUB ESP,0xc8
// 00544c5a: MOV ESI,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 00544c61: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 00544c68: PUSH EDX
// 00544c69: XOR EBX,EBX
// 00544c6b: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 00544c70: ADD ESP,0x4
// 00544c73: MOV EBP,EAX
// 00544c75: XOR EDI,EDI
// 00544c77: LEA EAX,[EBX + 0x1]
//   Label: LAB_00544c77
// 00544c7a: PUSH EAX
// 00544c7b: PUSH ESI
// 00544c7c: PUSH 0x63e3ac
//   XREF to: 0063e3ac (DATA)
// 00544c81: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xd8] (DATA)
// 00544c85: PUSH EAX
// 00544c86: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00544c8b: ADD ESP,0x10
// 00544c8e: PUSH EDI
// 00544c8f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd8] (DATA)
// 00544c93: PUSH EAX
// 00544c94: PUSH EBP
// 00544c95: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 00544c9a: ADD ESP,0xc
// 00544c9d: TEST EAX,EAX
// 00544c9f: JL 0x00544ca4
//   XREF to: 00544ca4 (CONDITIONAL_JUMP)
// 00544ca1: INC EBX
// 00544ca2: JMP 0x00544c77
//   XREF to: 00544c77 (UNCONDITIONAL_JUMP)
// 00544ca4: TEST EBX,EBX
//   Label: LAB_00544ca4
// 00544ca6: JZ 0x00544ce8
//   XREF to: 00544ce8 (CONDITIONAL_JUMP)
// 00544ca8: PUSH EBX
// 00544ca9: PUSH 0x1
// 00544cab: CALL core_actor.cpp_getRandomInt_FUN_0040cc70
//   XREF to: 0040cc70 (UNCONDITIONAL_CALL)
// 00544cb0: ADD ESP,0x8
// 00544cb3: PUSH EAX
// 00544cb4: PUSH ESI
// 00544cb5: PUSH 0x63e3b2
//   XREF to: 0063e3b2 (DATA)
// 00544cba: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0xd8] (DATA)
// 00544cbe: PUSH EAX
// 00544cbf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00544cc4: ADD ESP,0x10
// 00544cc7: PUSH 0x0
//   Label: LAB_00544cc7
// 00544cc9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd8] (DATA)
// 00544ccd: PUSH EAX
// 00544cce: PUSH EBP
// 00544ccf: CALL core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
//   XREF to: 0052d4f0 (UNCONDITIONAL_CALL)
// 00544cd4: ADD ESP,0xc
// 00544cd7: TEST EAX,EAX
// 00544cd9: JGE 0x00544d06
//   XREF to: 00544d06 (CONDITIONAL_JUMP)
// 00544cdb: XOR EAX,EAX
// 00544cdd: ADD ESP,0xc8
// 00544ce3: POP EBP
// 00544ce4: POP EDI
// 00544ce5: POP ESI
// 00544ce6: POP EBX
// 00544ce7: RET
// 00544ce8: MOV EDI,ESP
//   Label: LAB_00544ce8
// 00544cea: PUSH EDI
// 00544ceb: MOV AL,byte ptr [ESI]
//   Label: LAB_00544ceb
// 00544ced: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xd8] (DATA)
// 00544cef: CMP AL,0x0
// 00544cf1: JZ 0x00544d03
//   XREF to: 00544d03 (CONDITIONAL_JUMP)
// 00544cf3: MOV AL,byte ptr [ESI + 0x1]
// 00544cf6: ADD ESI,0x2
// 00544cf9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xd7] (WRITE)
// 00544cfc: ADD EDI,0x2
// 00544cff: CMP AL,0x0
// 00544d01: JNZ 0x00544ceb
//   XREF to: 00544ceb (CONDITIONAL_JUMP)
// 00544d03: POP EDI
//   Label: LAB_00544d03
// 00544d04: JMP 0x00544cc7
//   XREF to: 00544cc7 (UNCONDITIONAL_JUMP)
// 00544d06: PUSH 0x1
//   Label: LAB_00544d06
// 00544d08: PUSH EAX
// 00544d09: MOV ECX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[0x4] (READ)
// 00544d10: PUSH ECX
// 00544d11: CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
//   XREF to: 0052db00 (UNCONDITIONAL_CALL)
// 00544d16: MOV EAX,0x1
// 00544d1b: ADD ESP,0xc
// 00544d1e: ADD ESP,0xc8
// 00544d24: POP EBP
// 00544d25: POP EDI
// 00544d26: POP ESI
// 00544d27: POP EBX
// 00544d28: RET
