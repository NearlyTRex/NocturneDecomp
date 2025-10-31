// Name: core_script.cpp_FUN_00567080
// Address: 00567080
// Address Range: [[00567080, 0056719a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567080()
// Cross-references:
//   core_script.cpp_FUN_00567010 (00567010) at 00567059 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567630 (00567630) at 00567682 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_label_006441c0
//   TerminatedCString s_anon_006441c9
//   void* PTR_s_label_006441c0_00680e28 = 006441c0
//   void* PTR_s_anon_006441c9_00680e2c = 006441c9
//   char[256] g_CharacterClassificationTable
// Function calls:
//   core_event.cpp_FUN_004b0f90
//   core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   core_script.cpp_FUN_00564090
//   core_script.cpp_SCmdParse_parse_FUN_00561fd0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00567080(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00567080(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  char acStack_248 [300];
  char acStack_11c [256];
  undefined4 uStack_1c;
  
  bVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
    if (iVar2 == 3) {
      core_script_cpp_FUN_00564090();
      return;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x1e0);
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  pcVar4 = acStack_248;
  while (iVar3 = core_event_cpp_FUN_004b0f90(), iVar3 != 0) {
    cVar1 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  }
  *pcVar4 = '\0';
  while ((g_CharacterClassificationTable[(byte)(*in_stack_00000008 + 1)] & 2U) != 0) {
    in_stack_00000008 = in_stack_00000008 + 1;
  }
  if ((*in_stack_00000008 != '\0') || (acStack_248[0] == '\0')) {
    return;
  }
  pcVar4 = acStack_11c;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pcVar4 = *in_stack_0000000c;
    in_stack_0000000c = in_stack_0000000c + (uint)bVar6 * -2 + 1;
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
  }
  pcVar4 = acStack_248;
  pcVar5 = acStack_11c;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  uStack_1c = 1;
  core_script_cpp_CScript_ReallocSomething_FUN_00567510();
  return;
}


// Assembly code:
// 00567080: PUSH EBX
//   Label: core_script.cpp_FUN_00567080
// 00567081: PUSH ESI
// 00567082: PUSH EBP
// 00567083: SUB ESP,0x2368
// 00567089: MOV ESI,dword ptr [ESP + 0x237c]
//   XREF to: Stack[0x8] (READ)
// 00567090: MOV EBP,dword ptr [ESP + 0x2380]
//   XREF to: Stack[0xc] (READ)
// 00567097: XOR EBX,EBX
// 00567099: MOV EDX,dword ptr [EBX + 0x680e28]
//   Label: LAB_00567099
//   XREF to: 006441c0 (PARAM)
//   XREF to: 006441c9 (PARAM)
//   XREF to: 00680e28 (READ)
//   XREF to: 00680e2c (READ)
// 0056709f: PUSH EDX
//   XREF to: 006441c0 (DATA)
//   XREF to: 006441c9 (DATA)
// 005670a0: PUSH ESI
// 005670a1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x2374] (DATA)
// 005670a5: PUSH EAX
// 005670a6: CALL core_script.cpp_SCmdParse_parse_FUN_00561fd0
//   XREF to: 00561fd0 (UNCONDITIONAL_CALL)
// 005670ab: ADD ESP,0xc
// 005670ae: CMP EAX,0x3
// 005670b1: JZ 0x005670d3
//   XREF to: 005670d3 (CONDITIONAL_JUMP)
// 005670b3: ADD EBX,0x4
// 005670b6: CMP EBX,0x1e0
// 005670bc: JL 0x00567099
//   XREF to: 00567099 (CONDITIONAL_JUMP)
// 005670be: MOV AL,byte ptr [ESI]
//   Label: LAB_005670be
// 005670c0: INC AL
// 005670c2: AND EAX,0xff
// 005670c7: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 005670ce: JZ 0x005670eb
//   XREF to: 005670eb (CONDITIONAL_JUMP)
// 005670d0: INC ESI
// 005670d1: JMP 0x005670be
//   XREF to: 005670be (UNCONDITIONAL_JUMP)
// 005670d3: PUSH EBP
//   Label: LAB_005670d3
// 005670d4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2374] (DATA)
// 005670d8: PUSH EAX
// 005670d9: CALL core_script.cpp_FUN_00564090
//   XREF to: 00564090 (UNCONDITIONAL_CALL)
//   XREF to: 006441c0 (PARAM)
// 005670de: ADD ESP,0x8
// 005670e1: ADD ESP,0x2368
//   Label: LAB_005670e1
// 005670e7: POP EBP
// 005670e8: POP ESI
// 005670e9: POP EBX
// 005670ea: RET
// 005670eb: LEA EBX,[ESP + 0x2128]
//   Label: LAB_005670eb
//   XREF to: Stack[-0x24c] (DATA)
// 005670f2: XOR EAX,EAX
//   Label: LAB_005670f2
// 005670f4: MOV AL,byte ptr [ESI]
// 005670f6: PUSH EAX
// 005670f7: CALL core_event.cpp_FUN_004b0f90
//   XREF to: 004b0f90 (UNCONDITIONAL_CALL)
// 005670fc: ADD ESP,0x4
// 005670ff: TEST EAX,EAX
// 00567101: JZ 0x0056710c
//   XREF to: 0056710c (CONDITIONAL_JUMP)
// 00567103: INC EBX
// 00567104: MOV AL,byte ptr [ESI]
// 00567106: INC ESI
// 00567107: MOV byte ptr [EBX + -0x1],AL
//   XREF to: Stack[-0x24c] (WRITE)
// 0056710a: JMP 0x005670f2
//   XREF to: 005670f2 (UNCONDITIONAL_JUMP)
// 0056710c: MOV byte ptr [EBX],0x0
//   Label: LAB_0056710c
//   XREF to: Stack[-0x24c] (DATA)
// 0056710f: MOV AL,byte ptr [ESI]
//   Label: LAB_0056710f
// 00567111: INC AL
// 00567113: AND EAX,0xff
// 00567118: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0056711f: JZ 0x00567124
//   XREF to: 00567124 (CONDITIONAL_JUMP)
// 00567121: INC ESI
// 00567122: JMP 0x0056710f
//   XREF to: 0056710f (UNCONDITIONAL_JUMP)
// 00567124: CMP byte ptr [ESI],0x0
//   Label: LAB_00567124
// 00567127: JNZ 0x005670e1
//   XREF to: 005670e1 (CONDITIONAL_JUMP)
// 00567129: CMP byte ptr [ESP + 0x2128],0x0
//   XREF to: Stack[-0x24c] (READ)
// 00567131: JZ 0x005670e1
//   XREF to: 005670e1 (CONDITIONAL_JUMP)
// 00567133: PUSH EDI
// 00567134: MOV ECX,0x45
// 00567139: LEA EDI,[ESP + 0x2258]
//   XREF to: Stack[-0x120] (DATA)
// 00567140: MOV ESI,EBP
// 00567142: MOVSD.REP ES:EDI,ESI
// 00567144: LEA ESI,[ESP + 0x212c]
//   XREF to: Stack[-0x24c] (DATA)
// 0056714b: LEA EDI,[ESP + 0x2258]
//   XREF to: Stack[-0x120] (DATA)
// 00567152: PUSH EDI
// 00567153: MOV AL,byte ptr [ESI]
//   Label: LAB_00567153
//   XREF to: Stack[-0x24c] (DATA)
// 00567155: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x120] (DATA)
// 00567157: CMP AL,0x0
// 00567159: JZ 0x0056716b
//   XREF to: 0056716b (CONDITIONAL_JUMP)
// 0056715b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x24b] (READ)
// 0056715e: ADD ESI,0x2
// 00567161: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x11f] (WRITE)
// 00567164: ADD EDI,0x2
// 00567167: CMP AL,0x0
// 00567169: JNZ 0x00567153
//   XREF to: 00567153 (CONDITIONAL_JUMP)
// 0056716b: POP EDI
//   Label: LAB_0056716b
// 0056716c: LEA EAX,[ESP + 0x2258]
//   XREF to: Stack[-0x120] (DATA)
// 00567173: PUSH EAX
// 00567174: MOV EBX,dword ptr [ESP + 0x2380]
//   XREF to: Stack[0x4] (READ)
// 0056717b: MOV ECX,0x1
// 00567180: PUSH EBX
// 00567181: MOV dword ptr [ESP + 0x2360],ECX
//   XREF to: Stack[-0x20] (WRITE)
// 00567188: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 0056718d: ADD ESP,0x8
// 00567190: POP EDI
// 00567191: ADD ESP,0x2368
// 00567197: POP EBP
// 00567198: POP ESI
// 00567199: POP EBX
// 0056719a: RET
