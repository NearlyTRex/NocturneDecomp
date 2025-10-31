// Name: core_fileman.cpp_trimWhitespace_FUN_004bd9b0
// Address: 004bd9b0
// Address Range: [[004bd9b0, 004bda14]]
// Convention: __cdecl
// Signature: void core_fileman.cpp_trimWhitespace_FUN_004bd9b0(char * str)
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl core_fileman_cpp_trimWhitespace_FUN_004bd9b0(char *str)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  
  uVar3 = 0xffffffff;
  pcVar2 = str;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = str + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  str[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(str,str + 1,n);
    n = n - 1;
  }
  return;
}


// Assembly code:
// 004bd9b0: PUSH EBX
//   Label: core_fileman.cpp_trimWhitespace_FUN_004bd9b0
// 004bd9b1: PUSH ESI
// 004bd9b2: PUSH EDI
// 004bd9b3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004bd9b7: MOV EDI,ESI
// 004bd9b9: SUB ECX,ECX
// 004bd9bb: DEC ECX
// 004bd9bc: XOR EAX,EAX
// 004bd9be: SCASB.REPNE ES:EDI
// 004bd9c0: NOT ECX
// 004bd9c2: DEC ECX
// 004bd9c3: MOV EBX,ECX
// 004bd9c5: TEST ECX,ECX
// 004bd9c7: JLE 0x004bd9e0
//   XREF to: 004bd9e0 (CONDITIONAL_JUMP)
// 004bd9c9: LEA EAX,[ECX + ESI*0x1]
// 004bd9cc: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004bd9cc
// 004bd9cf: INC DL
// 004bd9d1: AND EDX,0xff
// 004bd9d7: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004bd9de: JNZ 0x004bd9ff
//   XREF to: 004bd9ff (CONDITIONAL_JUMP)
// 004bd9e0: LEA EAX,[ESI + EBX*0x1]
//   Label: LAB_004bd9e0
// 004bd9e3: LEA EDI,[ESI + 0x1]
// 004bd9e6: MOV byte ptr [EAX],0x0
// 004bd9e9: MOV AL,byte ptr [ESI]
//   Label: LAB_004bd9e9
// 004bd9eb: INC AL
// 004bd9ed: AND EAX,0xff
// 004bd9f2: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004bd9f9: JNZ 0x004bda07
//   XREF to: 004bda07 (CONDITIONAL_JUMP)
// 004bd9fb: POP EDI
// 004bd9fc: POP ESI
// 004bd9fd: POP EBX
// 004bd9fe: RET
// 004bd9ff: DEC EBX
//   Label: LAB_004bd9ff
// 004bda00: DEC EAX
// 004bda01: TEST EBX,EBX
// 004bda03: JG 0x004bd9cc
//   XREF to: 004bd9cc (CONDITIONAL_JUMP)
// 004bda05: JMP 0x004bd9e0
//   XREF to: 004bd9e0 (UNCONDITIONAL_JUMP)
// 004bda07: PUSH EBX
//   Label: LAB_004bda07
// 004bda08: PUSH EDI
// 004bda09: PUSH ESI
// 004bda0a: DEC EBX
// 004bda0b: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004bda10: ADD ESP,0xc
// 004bda13: JMP 0x004bd9e9
//   XREF to: 004bd9e9 (UNCONDITIONAL_JUMP)
