// Name: core_script.cpp_FUN_00567010
// Address: 00567010
// Address Range: [[00567010, 00567076]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00567010()
// Cross-references:
//   core_msnedit.cpp_FUN_0053ea30 (0053ea30) at 0053eb24 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00564090 (00564090) at 005641b3 [UNCONDITIONAL_CALL]
// Function calls:
//   core_script.cpp_FUN_00567080

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_FUN_00567010(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_script_cpp_FUN_00567010(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000008;
  char local_200 [500];
  
  cVar1 = *in_stack_00000008;
  while (pcVar3 = in_stack_00000008, cVar1 != '\0') {
    pcVar2 = local_200;
    cVar1 = *pcVar3;
    while ((cVar1 != ';' && (*pcVar3 != '\0'))) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar2 = cVar1;
      cVar1 = *pcVar3;
      pcVar2 = pcVar2 + 1;
    }
    *pcVar2 = '\0';
    core_script_cpp_FUN_00567080();
    if (*pcVar3 == ';') {
      pcVar3 = pcVar3 + 1;
    }
    cVar1 = *pcVar3;
  }
  return;
}


// Assembly code:
// 00567010: PUSH EBX
//   Label: core_script.cpp_FUN_00567010
// 00567011: PUSH ESI
// 00567012: PUSH EDI
// 00567013: SUB ESP,0x1f4
// 00567019: MOV EBX,dword ptr [ESP + 0x208]
//   XREF to: Stack[0x8] (READ)
// 00567020: MOV ESI,dword ptr [ESP + 0x204]
//   XREF to: Stack[0x4] (READ)
// 00567027: MOV AH,byte ptr [EBX]
// 00567029: MOV EDI,dword ptr [ESP + 0x20c]
//   XREF to: Stack[0xc] (READ)
// 00567030: TEST AH,AH
// 00567032: JZ 0x0056706d
//   XREF to: 0056706d (CONDITIONAL_JUMP)
// 00567034: MOV DH,byte ptr [EBX]
//   Label: LAB_00567034
// 00567036: MOV EAX,ESP
// 00567038: CMP DH,0x3b
// 0056703b: JZ 0x0056704f
//   XREF to: 0056704f (CONDITIONAL_JUMP)
// 0056703d: CMP byte ptr [EBX],0x0
//   Label: LAB_0056703d
// 00567040: JZ 0x0056704f
//   XREF to: 0056704f (CONDITIONAL_JUMP)
// 00567042: MOV DL,byte ptr [EBX]
// 00567044: INC EBX
// 00567045: MOV byte ptr [EAX],DL
//   XREF to: Stack[-0x200] (DATA)
// 00567047: MOV CL,byte ptr [EBX]
// 00567049: INC EAX
// 0056704a: CMP CL,0x3b
// 0056704d: JNZ 0x0056703d
//   XREF to: 0056703d (CONDITIONAL_JUMP)
// 0056704f: PUSH EDI
//   Label: LAB_0056704f
// 00567050: MOV byte ptr [EAX],0x0
//   XREF to: Stack[-0x1ff] (DATA)
// 00567053: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x200] (DATA)
// 00567057: PUSH EAX
// 00567058: PUSH ESI
// 00567059: CALL core_script.cpp_FUN_00567080
//   XREF to: 00567080 (UNCONDITIONAL_CALL)
// 0056705e: MOV AL,byte ptr [EBX]
// 00567060: ADD ESP,0xc
// 00567063: CMP AL,0x3b
// 00567065: JNZ 0x00567068
//   XREF to: 00567068 (CONDITIONAL_JUMP)
// 00567067: INC EBX
// 00567068: CMP byte ptr [EBX],0x0
//   Label: LAB_00567068
// 0056706b: JNZ 0x00567034
//   XREF to: 00567034 (CONDITIONAL_JUMP)
// 0056706d: ADD ESP,0x1f4
//   Label: LAB_0056706d
// 00567073: POP EDI
// 00567074: POP ESI
// 00567075: POP EBX
// 00567076: RET
