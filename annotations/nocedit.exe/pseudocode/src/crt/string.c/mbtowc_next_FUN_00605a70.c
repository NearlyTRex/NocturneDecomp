// Name: crt_string.c_mbtowc_next_FUN_00605a70
// Address: 00605a70
// Address Range: [[00605a70, 00605a9d]]
// Convention: __watcallStack
// Signature: char * crt_string.c_mbtowc_next_FUN_00605a70(char * str)
// Cross-references:
//   crt_file.c_makepath_FUN_005febfc (005febfc) at 005fed88 [UNCONDITIONAL_CALL]
//   crt_file.c_splitpath_FUN_00610460 (00610460) at 006104a6 [UNCONDITIONAL_CALL]
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607fb2 [UNCONDITIONAL_CALL]
//   crt_string.c_char_in_set_FUN_0060e340 (0060e340) at 0060e386 [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnbytes_FUN_00605ec0 (00605ec0) at 00605f0d [UNCONDITIONAL_CALL]
//   crt_string.c_mbstrnicmp_FUN_00608e50 (00608e50) at 00608e91 [UNCONDITIONAL_CALL]
//   crt_string.c_splitpath_FUN_005ff178 (005ff178) at 005ff1d1 [UNCONDITIONAL_CALL]
//   crt_string.c_strpbrk_FUN_0060c190 (0060c190) at 0060c1c4 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fa90 (0060fa90) at 0060faa6 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fac0 (0060fac0) at 0060fb26 [UNCONDITIONAL_CALL]
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e623 [UNCONDITIONAL_CALL]
// Globals:
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable

#include "nocturne.h"

char * __watcallStack crt_string_c_mbtowc_next_FUN_00605a70(char *str)

{
  if (((g_MultibyteLocaleActive != 0) && ((g_LeadByteTable[(byte)*str] & 1U) != 0)) &&
     (str[1] != '\0')) {
    return str + 2;
  }
  return str + 1;
}


// Assembly code:
// 00605a70: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: Stack[0x4] (READ)
// 00605a74: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 00605a7b: JZ 0x00605a9c
//   XREF to: 00605a9c (CONDITIONAL_JUMP)
// 00605a7d: XOR EDX,EDX
// 00605a7f: MOV DL,byte ptr [EAX]
// 00605a81: MOV DL,byte ptr [EDX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 00605a87: AND DL,0x1
// 00605a8a: AND EDX,0xff
// 00605a90: JZ 0x00605a9c
//   XREF to: 00605a9c (CONDITIONAL_JUMP)
// 00605a92: CMP byte ptr [EAX + 0x1],0x0
// 00605a96: JZ 0x00605a9c
//   XREF to: 00605a9c (CONDITIONAL_JUMP)
// 00605a98: ADD EAX,0x2
// 00605a9b: RET
// 00605a9c: INC EAX
//   Label: LAB_00605a9c
// 00605a9d: RET
