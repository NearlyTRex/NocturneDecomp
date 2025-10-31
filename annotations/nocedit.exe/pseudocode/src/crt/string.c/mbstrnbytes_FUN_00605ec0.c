// Name: crt_string.c_mbstrnbytes_FUN_00605ec0
// Address: 00605ec0
// Address Range: [[00605ec0, 00605f1f]]
// Convention: __watcallStack
// Signature: int crt_string.c_mbstrnbytes_FUN_00605ec0(char * str, int char_count)
// Cross-references:
//   crt_file.c_extract_path_component_FUN_00610400 (00610400) at 00610441 [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrncpy_FUN_00605e90 (00605e90) at 00605ea0 [UNCONDITIONAL_CALL]
//   crt_string.c_strncpy_safe_FUN_005ff130 (005ff130) at 005ff169 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   crt_locale.c_mblen_FUN_00605a40
//   crt_string.c_mbstring_termination_check_FUN_0060b630
//   crt_string.c_mbtowc_next_FUN_00605a70

#include "nocturne.h"

int __watcallStack crt_string_c_mbstrnbytes_FUN_00605ec0(char *str,int char_count)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; (iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str), iVar1 == 0 &&
         (char_count != 0)); char_count = char_count + -1) {
    if ((g_MultibyteLocaleActive == 0) || ((g_LeadByteTable[(byte)*str] & 1U) == 0)) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (((byte *)str)[1] == 0) {
        return iVar2;
      }
      iVar1 = crt_locale_c_mblen_FUN_00605a40(str);
      iVar2 = iVar2 + iVar1;
    }
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  return iVar2;
}


// Assembly code:
// 00605ec0: PUSH EBX
//   Label: crt_string.c_mbstrnbytes_FUN_00605ec0
// 00605ec1: PUSH ESI
// 00605ec2: PUSH EDI
// 00605ec3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00605ec7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00605ecb: XOR ESI,ESI
// 00605ecd: PUSH EBX
//   Label: LAB_00605ecd
// 00605ece: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 00605ed3: ADD ESP,0x4
// 00605ed6: TEST EAX,EAX
// 00605ed8: JNZ 0x00605f1a
//   XREF to: 00605f1a (CONDITIONAL_JUMP)
// 00605eda: TEST EDI,EDI
// 00605edc: JBE 0x00605f1a
//   XREF to: 00605f1a (CONDITIONAL_JUMP)
// 00605ede: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 00605ee5: JZ 0x00605f0b
//   XREF to: 00605f0b (CONDITIONAL_JUMP)
// 00605ee7: MOV AL,byte ptr [EBX]
// 00605ee9: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00605eef: AND AL,0x1
// 00605ef1: AND EAX,0xff
// 00605ef6: JZ 0x00605f0b
//   XREF to: 00605f0b (CONDITIONAL_JUMP)
// 00605ef8: CMP byte ptr [EBX + 0x1],0x0
// 00605efc: JZ 0x00605f1a
//   XREF to: 00605f1a (CONDITIONAL_JUMP)
// 00605efe: PUSH EBX
// 00605eff: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 00605f04: ADD ESP,0x4
// 00605f07: ADD ESI,EAX
// 00605f09: JMP 0x00605f0c
//   XREF to: 00605f0c (UNCONDITIONAL_JUMP)
// 00605f0b: INC ESI
//   Label: LAB_00605f0b
// 00605f0c: PUSH EBX
//   Label: LAB_00605f0c
// 00605f0d: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 00605f12: DEC EDI
// 00605f13: MOV EBX,EAX
// 00605f15: ADD ESP,0x4
// 00605f18: JMP 0x00605ecd
//   XREF to: 00605ecd (UNCONDITIONAL_JUMP)
// 00605f1a: MOV EAX,ESI
//   Label: LAB_00605f1a
// 00605f1c: POP EDI
// 00605f1d: POP ESI
// 00605f1e: POP EBX
// 00605f1f: RET
