// Name: crt_string.c_strpbrk_FUN_0060c190
// Address: 0060c190
// Address Range: [[0060c190, 0060c1d4]]
// Convention: __cdecl
// Signature: char * crt_string.c_strpbrk_FUN_0060c190(char * str, char * char_set)
// Cross-references:
//   crt_io.c_stat_FUN_00607e64 (00607e64) at 00607e8a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_char_in_set_FUN_0060e340
//   crt_string.c_mbstring_termination_check_FUN_0060b630
//   crt_string.c_mbtowc_next_FUN_00605a70
//   crt_string.c_mbtowc_peek_FUN_006059e0

#include "nocturne.h"

char * __cdecl crt_string_c_strpbrk_FUN_0060c190(char *str,char *char_set)

{
  wchar_t wc;
  int iVar1;
  char *pcVar2;
  
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar1 != 0) {
      return (char *)0x0;
    }
    wc = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    pcVar2 = crt_string_c_char_in_set_FUN_0060e340(char_set,wc);
    if (pcVar2 != (char *)0x0) break;
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  return str;
}


// Assembly code:
// 0060c190: PUSH EBX
//   Label: crt_string.c_strpbrk_FUN_0060c190
// 0060c191: PUSH ESI
// 0060c192: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060c196: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0060c19a: PUSH EBX
//   Label: LAB_0060c19a
// 0060c19b: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 0060c1a0: ADD ESP,0x4
// 0060c1a3: TEST EAX,EAX
// 0060c1a5: JNZ 0x0060c1d0
//   XREF to: 0060c1d0 (CONDITIONAL_JUMP)
// 0060c1a7: PUSH EBX
// 0060c1a8: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 0060c1ad: ADD ESP,0x4
// 0060c1b0: PUSH EAX
// 0060c1b1: PUSH ESI
// 0060c1b2: CALL crt_string.c_char_in_set_FUN_0060e340
//   XREF to: 0060e340 (UNCONDITIONAL_CALL)
// 0060c1b7: ADD ESP,0x8
// 0060c1ba: TEST EAX,EAX
// 0060c1bc: JZ 0x0060c1c3
//   XREF to: 0060c1c3 (CONDITIONAL_JUMP)
// 0060c1be: MOV EAX,EBX
// 0060c1c0: POP ESI
// 0060c1c1: POP EBX
// 0060c1c2: RET
// 0060c1c3: PUSH EBX
//   Label: LAB_0060c1c3
// 0060c1c4: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 0060c1c9: ADD ESP,0x4
// 0060c1cc: MOV EBX,EAX
// 0060c1ce: JMP 0x0060c19a
//   XREF to: 0060c19a (UNCONDITIONAL_JUMP)
// 0060c1d0: XOR EAX,EAX
//   Label: LAB_0060c1d0
// 0060c1d2: POP ESI
// 0060c1d3: POP EBX
// 0060c1d4: RET
