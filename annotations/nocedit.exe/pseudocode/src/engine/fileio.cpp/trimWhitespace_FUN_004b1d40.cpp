// Name: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
// Address: 004b1d40
// Address Range: [[004b1d40, 004b1da4]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_trimWhitespace_FUN_004b1d40(char * string)
// Globals:
//   char[256] g_CharacterClassificationTable
// Function calls:
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void __cdecl engine_fileio_cpp_trimWhitespace_FUN_004b1d40(char *string)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  SIZE_T n;
  
  uVar3 = 0xffffffff;
  pcVar2 = string;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  n = ~uVar3 - 1;
  if (0 < (int)n) {
    pcVar2 = string + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar2[-1] + 1)] & 2U) == 0) break;
      n = n - 1;
      pcVar2 = pcVar2 + -1;
    } while (0 < (int)n);
  }
  string[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(*string + 1)] & 2U) != 0) {
    crt_string_c_memmove_FUN_005fe5e0(string,string + 1,n);
    n = n - 1;
  }
  return;
}


// Assembly code:
// 004b1d40: PUSH EBX
//   Label: engine_fileio.cpp_trimWhitespace_FUN_004b1d40
// 004b1d41: PUSH ESI
// 004b1d42: PUSH EDI
// 004b1d43: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004b1d47: MOV EDI,ESI
// 004b1d49: SUB ECX,ECX
// 004b1d4b: DEC ECX
// 004b1d4c: XOR EAX,EAX
// 004b1d4e: SCASB.REPNE ES:EDI
// 004b1d50: NOT ECX
// 004b1d52: DEC ECX
// 004b1d53: MOV EBX,ECX
// 004b1d55: TEST ECX,ECX
// 004b1d57: JLE 0x004b1d70
//   XREF to: 004b1d70 (CONDITIONAL_JUMP)
// 004b1d59: LEA EAX,[ECX + ESI*0x1]
// 004b1d5c: MOV DL,byte ptr [EAX + -0x1]
//   Label: LAB_004b1d5c
// 004b1d5f: INC DL
// 004b1d61: AND EDX,0xff
// 004b1d67: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004b1d6e: JNZ 0x004b1d8f
//   XREF to: 004b1d8f (CONDITIONAL_JUMP)
// 004b1d70: LEA EAX,[ESI + EBX*0x1]
//   Label: LAB_004b1d70
// 004b1d73: LEA EDI,[ESI + 0x1]
// 004b1d76: MOV byte ptr [EAX],0x0
// 004b1d79: MOV AL,byte ptr [ESI]
//   Label: LAB_004b1d79
// 004b1d7b: INC AL
// 004b1d7d: AND EAX,0xff
// 004b1d82: TEST byte ptr [EAX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 004b1d89: JNZ 0x004b1d97
//   XREF to: 004b1d97 (CONDITIONAL_JUMP)
// 004b1d8b: POP EDI
// 004b1d8c: POP ESI
// 004b1d8d: POP EBX
// 004b1d8e: RET
// 004b1d8f: DEC EBX
//   Label: LAB_004b1d8f
// 004b1d90: DEC EAX
// 004b1d91: TEST EBX,EBX
// 004b1d93: JG 0x004b1d5c
//   XREF to: 004b1d5c (CONDITIONAL_JUMP)
// 004b1d95: JMP 0x004b1d70
//   XREF to: 004b1d70 (UNCONDITIONAL_JUMP)
// 004b1d97: PUSH EBX
//   Label: LAB_004b1d97
// 004b1d98: PUSH EDI
// 004b1d99: PUSH ESI
// 004b1d9a: DEC EBX
// 004b1d9b: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b1da0: ADD ESP,0xc
// 004b1da3: JMP 0x004b1d79
//   XREF to: 004b1d79 (UNCONDITIONAL_JUMP)
