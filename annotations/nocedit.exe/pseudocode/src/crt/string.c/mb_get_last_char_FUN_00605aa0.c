// Name: crt_string.c_mb_get_last_char_FUN_00605aa0
// Address: 00605aa0
// Address Range: [[00605aa0, 00605b22]]
// Convention: __cdecl
// Signature: char * crt_string.c_mb_get_last_char_FUN_00605aa0(char * start, char * end)
// Cross-references:
//   crt_file.c_makepath_FUN_005febfc (005febfc) at 005fece3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

char * __cdecl crt_string_c_mb_get_last_char_FUN_00605aa0(char *start,char *end)

{
  byte *pbVar1;
  char *pcVar2;
  
  if (start < end) {
    pbVar1 = (byte *)(end + -1);
    if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[*pbVar1] & 1U) != 0)) {
      return end + -2;
    }
    while (pbVar1 = pbVar1 + -1, start <= pbVar1) {
      if ((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[*pbVar1] & 1U) == 0)) break;
    }
    pcVar2 = end + (-1 - ((int)end - (int)pbVar1) % 2);
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}


// Assembly code:
// 00605aa0: PUSH EBX
//   Label: crt_string.c_mb_get_last_char_FUN_00605aa0
// 00605aa1: PUSH ESI
// 00605aa2: PUSH EDI
// 00605aa3: MOV ESI,dword ptr [0x03f9c020]
//   XREF to: 03f9c020 (READ)
// 00605aa9: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00605aad: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00605ab1: CMP EBX,EDI
// 00605ab3: JC 0x00605ab9
//   XREF to: 00605ab9 (CONDITIONAL_JUMP)
// 00605ab5: XOR EDX,EDX
// 00605ab7: JMP 0x00605b17
//   XREF to: 00605b17 (UNCONDITIONAL_JUMP)
// 00605ab9: LEA EAX,[EDI + -0x1]
//   Label: LAB_00605ab9
// 00605abc: TEST ESI,ESI
// 00605abe: JZ 0x00605ae4
//   XREF to: 00605ae4 (CONDITIONAL_JUMP)
// 00605ac0: XOR EDX,EDX
// 00605ac2: MOV DL,byte ptr [EAX]
// 00605ac4: MOV DL,byte ptr [EDX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00605aca: AND DL,0x1
// 00605acd: AND EDX,0xff
// 00605ad3: JZ 0x00605ae4
//   XREF to: 00605ae4 (CONDITIONAL_JUMP)
// 00605ad5: LEA EDX,[EAX + -0x1]
// 00605ad8: MOV EAX,EDX
// 00605ada: MOV dword ptr [0x03f9c020],ESI
//   XREF to: 03f9c020 (WRITE)
// 00605ae0: POP EDI
// 00605ae1: POP ESI
// 00605ae2: POP EBX
// 00605ae3: RET
// 00605ae4: DEC EAX
//   Label: LAB_00605ae4
// 00605ae5: CMP EBX,EAX
// 00605ae7: JA 0x00605b02
//   XREF to: 00605b02 (CONDITIONAL_JUMP)
// 00605ae9: TEST ESI,ESI
// 00605aeb: JZ 0x00605b02
//   XREF to: 00605b02 (CONDITIONAL_JUMP)
// 00605aed: XOR EDX,EDX
// 00605aef: MOV DL,byte ptr [EAX]
// 00605af1: MOV DL,byte ptr [EDX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00605af7: AND DL,0x1
// 00605afa: AND EDX,0xff
// 00605b00: JNZ 0x00605ae4
//   XREF to: 00605ae4 (CONDITIONAL_JUMP)
// 00605b02: MOV EDX,EDI
//   Label: LAB_00605b02
// 00605b04: SUB EDX,EAX
// 00605b06: MOV EBX,0x2
// 00605b0b: MOV EAX,EDX
// 00605b0d: SAR EDX,0x1f
// 00605b10: IDIV EBX
// 00605b12: DEC EDI
// 00605b13: SUB EDI,EDX
// 00605b15: MOV EDX,EDI
// 00605b17: MOV EAX,EDX
//   Label: LAB_00605b17
// 00605b19: MOV dword ptr [0x03f9c020],ESI
//   XREF to: 03f9c020 (WRITE)
// 00605b1f: POP EDI
// 00605b20: POP ESI
// 00605b21: POP EBX
// 00605b22: RET
