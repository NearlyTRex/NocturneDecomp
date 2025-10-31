// Name: crt_string.c_char_in_set_FUN_0060e340
// Address: 0060e340
// Address Range: [[0060e340, 0060e3ae]]
// Convention: __cdecl
// Signature: char * crt_string.c_char_in_set_FUN_0060e340(char * charset, wchar_t wc)
// Cross-references:
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060eea0 [UNCONDITIONAL_CALL]
//   crt_string.c_strpbrk_FUN_0060c190 (0060c190) at 0060c1b2 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_locale.c_mblen_FUN_00605a40
//   crt_locale.c_wchar_to_bytes_FUN_00605a20
//   crt_string.c_mbcmp_FUN_0060e640
//   crt_string.c_mbstring_termination_check_FUN_0060b630
//   crt_string.c_mbtowc_next_FUN_00605a70

#include "nocturne.h"

char * __cdecl crt_string_c_char_in_set_FUN_0060e340(char *charset,wchar_t wc)

{
  int iVar1;
  char *str;
  BADSPACEBASE *in_ESP;
  undefined2 in_stack_0000000a;
  int in_stack_0000001c;
  
  str = charset;
  crt_locale_c_wchar_to_bytes_FUN_00605a20(wc,&stack0xfffffff8);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(&stack0xfffffffc);
  (&stack0x00000000)[iVar1] = 0;
  while( true ) {
    iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar1 != 0) break;
    iVar1 = crt_string_c_mbcmp_FUN_0060e640(str,(char *)&charset);
    if (iVar1 == 0) break;
    charset = str;
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  charset = str;
  iVar1 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
  if ((iVar1 != 0) && (in_stack_0000001c != 0)) {
    str = (char *)0x0;
  }
  return str;
}


// Assembly code:
// 0060e340: PUSH EBX
//   Label: crt_string.c_char_in_set_FUN_0060e340
// 0060e341: SUB ESP,0x4
// 0060e344: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0060e348: MOV EAX,ESP
// 0060e34a: PUSH EAX
// 0060e34b: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060e34f: PUSH EDX
// 0060e350: CALL crt_locale.c_wchar_to_bytes_FUN_00605a20
//   XREF to: 00605a20 (UNCONDITIONAL_CALL)
// 0060e355: ADD ESP,0x8
// 0060e358: MOV EAX,ESP
// 0060e35a: PUSH EAX
// 0060e35b: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 0060e360: ADD ESP,0x4
// 0060e363: XOR DL,DL
// 0060e365: MOV byte ptr [ESP + EAX*0x1],DL
// 0060e368: PUSH EBX
//   Label: LAB_0060e368
// 0060e369: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 0060e36e: ADD ESP,0x4
// 0060e371: TEST EAX,EAX
// 0060e373: JNZ 0x0060e392
//   XREF to: 0060e392 (CONDITIONAL_JUMP)
// 0060e375: MOV EAX,ESP
// 0060e377: PUSH EAX
// 0060e378: PUSH EBX
// 0060e379: CALL crt_string.c_mbcmp_FUN_0060e640
//   XREF to: 0060e640 (UNCONDITIONAL_CALL)
// 0060e37e: ADD ESP,0x8
// 0060e381: TEST EAX,EAX
// 0060e383: JZ 0x0060e392
//   XREF to: 0060e392 (CONDITIONAL_JUMP)
// 0060e385: PUSH EBX
// 0060e386: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 0060e38b: MOV EBX,EAX
// 0060e38d: ADD ESP,0x4
// 0060e390: JMP 0x0060e368
//   XREF to: 0060e368 (UNCONDITIONAL_JUMP)
// 0060e392: PUSH EBX
//   Label: LAB_0060e392
// 0060e393: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 0060e398: ADD ESP,0x4
// 0060e39b: TEST EAX,EAX
// 0060e39d: JZ 0x0060e3a8
//   XREF to: 0060e3a8 (CONDITIONAL_JUMP)
// 0060e39f: CMP dword ptr [ESP + 0x10],0x0
//   XREF to: Stack[0x8] (READ)
// 0060e3a4: JZ 0x0060e3a8
//   XREF to: 0060e3a8 (CONDITIONAL_JUMP)
// 0060e3a6: XOR EBX,EBX
// 0060e3a8: MOV EAX,EBX
//   Label: LAB_0060e3a8
// 0060e3aa: ADD ESP,0x4
// 0060e3ad: POP EBX
// 0060e3ae: RET
