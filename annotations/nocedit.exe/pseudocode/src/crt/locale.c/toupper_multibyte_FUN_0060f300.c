// Name: crt_locale.c_toupper_multibyte_FUN_0060f300
// Address: 0060f300
// Address Range: [[0060f300, 0060f37a]]
// Convention: __watcallStack
// Signature: wchar_t crt_locale.c_toupper_multibyte_FUN_0060f300(char * mb_char, char * output_buffer)
// Cross-references:
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0 (0060e5d0) at 0060e5f2 [UNCONDITIONAL_CALL]
// Globals:
//   CharUpperBuffA* PTR_CharUpperBuffA_0061148c = 00211a56
//   uint g_CodePage = 0x1
//   int g_MultibyteLocaleActive
//   char[256] g_LeadByteTable
// Function calls:
//   CharUpperBuffA
//   crt_locale.c_fullwidth_toupper_FUN_0060ffb0
//   crt_locale.c_mblen_FUN_00605a40
//   crt_locale.c_wchar_to_bytes_FUN_00605a20
//   crt_string.c_mbtowc_peek_FUN_006059e0

#include "nocturne.h"

wchar_t __watcallStack
crt_locale_c_toupper_multibyte_FUN_0060f300(char *mb_char,char *output_buffer)

{
  wchar_t wVar1;
  int iVar2;
  byte unaff_BL;
  BADSPACEBASE *in_ESP;
  wchar_t in_stack_0000000c;
  
  crt_locale_c_wchar_to_bytes_FUN_00605a20((wchar_t)mb_char,&stack0xfffffff4);
  iVar2 = crt_locale_c_mblen_FUN_00605a40(&stack0xfffffff8);
  (&stack0xfffffffc)[iVar2] = 0;
  if (((g_CodePage == 0x3a4) && (g_MultibyteLocaleActive != 0)) &&
     ((g_LeadByteTable[unaff_BL] & 1U) != 0)) {
    wVar1 = crt_locale_c_fullwidth_toupper_FUN_0060ffb0(in_stack_0000000c);
  }
  else {
    (*PTR_CharUpperBuffA_0061148c)(&stack0xfffffffc,1);
    wVar1 = crt_string_c_mbtowc_peek_FUN_006059e0((char *)&output_buffer);
  }
  return wVar1;
}


// Assembly code:
// 0060f300: PUSH EBX
//   Label: crt_locale.c_toupper_multibyte_FUN_0060f300
// 0060f301: PUSH ESI
// 0060f302: SUB ESP,0x4
// 0060f305: MOV EAX,ESP
// 0060f307: PUSH EAX
// 0060f308: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060f30c: PUSH EDX
// 0060f30d: CALL crt_locale.c_wchar_to_bytes_FUN_00605a20
//   XREF to: 00605a20 (UNCONDITIONAL_CALL)
// 0060f312: ADD ESP,0x8
// 0060f315: MOV EAX,ESP
// 0060f317: PUSH EAX
// 0060f318: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 0060f31d: ADD ESP,0x4
// 0060f320: XOR DL,DL
// 0060f322: MOV EBX,dword ptr [0x00685570]
//   XREF to: 00685570 (READ)
// 0060f328: MOV byte ptr [ESP + EAX*0x1],DL
// 0060f32b: CMP EBX,0x3a4
// 0060f331: JNZ 0x0060f35c
//   XREF to: 0060f35c (CONDITIONAL_JUMP)
// 0060f333: CMP dword ptr [0x03f9c020],0x0
//   XREF to: 03f9c020 (READ)
// 0060f33a: JZ 0x0060f35c
//   XREF to: 0060f35c (CONDITIONAL_JUMP)
// 0060f33c: XOR EAX,EAX
// 0060f33e: MOV AL,byte ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0060f341: MOV AL,byte ptr [EAX + 0x3f9c031]
//   XREF to: 03f9c031 (DATA)
// 0060f347: AND AL,0x1
// 0060f349: AND EAX,0xff
// 0060f34e: JZ 0x0060f35c
//   XREF to: 0060f35c (CONDITIONAL_JUMP)
// 0060f350: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060f354: PUSH ESI
// 0060f355: CALL crt_locale.c_fullwidth_toupper_FUN_0060ffb0
//   XREF to: 0060ffb0 (UNCONDITIONAL_CALL)
// 0060f35a: JMP 0x0060f372
//   XREF to: 0060f372 (UNCONDITIONAL_JUMP)
// 0060f35c: PUSH 0x1
//   Label: LAB_0060f35c
// 0060f35e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 0060f362: PUSH EAX
// 0060f363: CALL dword ptr CS:[0x61148c]
//   XREF to: EXTERNAL:0000002f (COMPUTED_CALL)
//   XREF to: 0061148c (READ)
// 0060f36a: MOV EAX,ESP
// 0060f36c: PUSH EAX
// 0060f36d: CALL crt_string.c_mbtowc_peek_FUN_006059e0
//   XREF to: 006059e0 (UNCONDITIONAL_CALL)
// 0060f372: ADD ESP,0x4
//   Label: LAB_0060f372
// 0060f375: ADD ESP,0x4
// 0060f378: POP ESI
// 0060f379: POP EBX
// 0060f37a: RET
