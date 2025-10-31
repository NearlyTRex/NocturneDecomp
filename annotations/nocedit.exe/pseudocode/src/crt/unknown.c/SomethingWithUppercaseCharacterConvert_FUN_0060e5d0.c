// Name: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
// Address: 0060e5d0
// Address Range: [[0060e5d0, 0060e636]]
// Convention: unknown
// Signature: undefined crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0()
// Cross-references:
//   crt_string.c_compare_mb_chars_ci_FUN_0060c790 (0060c790) at 0060c7e3 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_locale.c_mblen_FUN_00605a40
//   crt_locale.c_toupper_multibyte_FUN_0060f300
//   crt_locale.c_wchar_to_bytes_FUN_00605a20
//   crt_mbstring.c_copyMbChar_FUN_0060e590
//   crt_string.c_mbstring_termination_check_FUN_0060b630
//   crt_string.c_mbtowc_next_FUN_00605a70
//   crt_string.c_mbtowc_peek_FUN_006059e0

#include "nocturne.h"

/* Signature: undefined1 unk_SomethingWithUppercaseCharacterConvert(undefined4 param_1) */

char * crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
                 (undefined4 param_1,undefined4 param_2,char *unaff_EBX,undefined4 param_4,
                 char *param_5,char *param_6)

{
  char *pcVar1;
  wchar_t wVar2;
  int iVar3;
  undefined2 extraout_var;
  char *str;
  BADSPACEBASE *in_ESP;
  
  pcVar1 = param_5;
  str = param_5;
  while( true ) {
    iVar3 = crt_string_c_mbstring_termination_check_FUN_0060b630(str);
    if (iVar3 != 0) break;
    wVar2 = crt_string_c_mbtowc_peek_FUN_006059e0(str);
    wVar2 = crt_locale_c_toupper_multibyte_FUN_0060f300
                      ((char *)CONCAT22(extraout_var,wVar2),unaff_EBX);
    crt_locale_c_wchar_to_bytes_FUN_00605a20(wVar2,&stack0x00000000);
    iVar3 = crt_locale_c_mblen_FUN_00605a40(&stack0x00000004);
    param_5 = &stack0x00000008;
    *(undefined1 *)((int)&stack0x00000008 + iVar3) = 0;
    unaff_EBX = (char *)0x60e61f;
    crt_mbstring_c_copyMbChar_FUN_0060e590(str,&stack0x00000008);
    param_5 = (char *)0x60e628;
    param_6 = str;
    str = crt_string_c_mbtowc_next_FUN_00605a70(str);
  }
  return pcVar1;
}


// Assembly code:
// 0060e5d0: PUSH EBX
//   Label: crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
// 0060e5d1: PUSH ESI
// 0060e5d2: SUB ESP,0x4
// 0060e5d5: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060e5d9: MOV EBX,ESI
// 0060e5db: PUSH EBX
//   Label: LAB_0060e5db
// 0060e5dc: CALL crt_string.c_mbstring_termination_check_FUN_0060b630
//   XREF to: 0060b630 (UNCONDITIONAL_CALL)
// 0060e5e1: ADD ESP,0x4
// 0060e5e4: TEST EAX,EAX
// 0060e5e6: JNZ 0x0060e62f
//   XREF to: 0060e62f (CONDITIONAL_JUMP)
// 0060e5e8: PUSH EBX
// 0060e5e9: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 0060e5ee: ADD ESP,0x4
// 0060e5f1: PUSH EAX
// 0060e5f2: CALL crt_locale.c_toupper_multibyte_FUN_0060f300
//   XREF to: 0060f300 (UNCONDITIONAL_CALL)
// 0060e5f7: ADD ESP,0x4
// 0060e5fa: MOV EDX,ESP
// 0060e5fc: PUSH EDX
// 0060e5fd: PUSH EAX
// 0060e5fe: CALL crt_locale.c_wchar_to_bytes_FUN_00605a20
//   XREF to: 00605a20 (UNCONDITIONAL_CALL)
// 0060e603: ADD ESP,0x8
// 0060e606: MOV EAX,ESP
// 0060e608: PUSH EAX
// 0060e609: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 0060e60e: ADD ESP,0x4
// 0060e611: XOR DL,DL
// 0060e613: MOV byte ptr [ESP + EAX*0x1],DL
// 0060e616: MOV EAX,ESP
// 0060e618: PUSH EAX
// 0060e619: PUSH EBX
// 0060e61a: CALL crt_mbstring.c_copyMbChar_FUN_0060e590
//   XREF to: 0060e590 (UNCONDITIONAL_CALL)
// 0060e61f: ADD ESP,0x8
// 0060e622: PUSH EBX
// 0060e623: CALL crt_string.c_mbtowc_next_FUN_00605a70
//   XREF to: 00605a70 (UNCONDITIONAL_CALL)
// 0060e628: MOV EBX,EAX
// 0060e62a: ADD ESP,0x4
// 0060e62d: JMP 0x0060e5db
//   XREF to: 0060e5db (UNCONDITIONAL_JUMP)
// 0060e62f: MOV EAX,ESI
//   Label: LAB_0060e62f
// 0060e631: ADD ESP,0x4
// 0060e634: POP ESI
// 0060e635: POP EBX
// 0060e636: RET
