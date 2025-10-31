// Name: crt_mbstring.c_copyMbChar_FUN_0060e590
// Address: 0060e590
// Address Range: [[0060e590, 0060e5c8]]
// Convention: __cdecl
// Signature: void crt_mbstring.c_copyMbChar_FUN_0060e590(char * dest, char * src)
// Cross-references:
//   crt_string.c_compare_mb_chars_ci_FUN_0060c790 (0060c790) at 0060c7c4 [UNCONDITIONAL_CALL]
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e61a [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

void __cdecl crt_mbstring_c_copyMbChar_FUN_0060e590(char *dest,char *src)

{
  if ((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*src] & 1U) != 0)) {
    *dest = *src;
    dest[1] = src[1];
    return;
  }
  *dest = *src;
  return;
}


// Assembly code:
// 0060e590: PUSH EBX
//   Label: crt_mbstring.c_copyMbChar_FUN_0060e590
// 0060e591: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060e595: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060e599: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 0060e5a0: JZ 0x0060e5c3
//   XREF to: 0060e5c3 (CONDITIONAL_JUMP)
// 0060e5a2: XOR EDX,EDX
// 0060e5a4: MOV DL,byte ptr [EAX]
// 0060e5a6: MOV DL,byte ptr [EDX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 0060e5ac: AND DL,0x1
// 0060e5af: AND EDX,0xff
// 0060e5b5: JZ 0x0060e5c3
//   XREF to: 0060e5c3 (CONDITIONAL_JUMP)
// 0060e5b7: MOV DL,byte ptr [EAX]
// 0060e5b9: MOV byte ptr [EBX],DL
// 0060e5bb: MOV AL,byte ptr [EAX + 0x1]
// 0060e5be: MOV byte ptr [EBX + 0x1],AL
// 0060e5c1: POP EBX
// 0060e5c2: RET
// 0060e5c3: MOV AL,byte ptr [EAX]
//   Label: LAB_0060e5c3
// 0060e5c5: MOV byte ptr [EBX],AL
// 0060e5c7: POP EBX
// 0060e5c8: RET
