// Name: crt_string.c_compare_mb_chars_ci_FUN_0060c790
// Address: 0060c790
// Address Range: [[0060c790, 0060c80b]]
// Convention: __cdecl
// Signature: int crt_string.c_compare_mb_chars_ci_FUN_0060c790(char * str1, char * str2)
// Cross-references:
//   crt_string.c_mbstrnicmp_FUN_00608e50 (00608e50) at 00608e82 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_locale.c_mblen_FUN_00605a40
//   crt_mbstring.c_copyMbChar_FUN_0060e590
//   crt_string.c_mbcmp_FUN_0060e640
//   crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0

#include "nocturne.h"

int __cdecl crt_string_c_compare_mb_chars_ci_FUN_0060c790(char *str1,char *str2)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_00000010;
  char *in_stack_00000014;
  
  crt_mbstring_c_copyMbChar_FUN_0060e590(&stack0xfffffff4,str1);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(str2);
  (&stack0xfffffffc)[iVar1] = 0;
  crt_mbstring_c_copyMbChar_FUN_0060e590(&stack0xfffffff8,in_stack_00000010);
  iVar1 = crt_locale_c_mblen_FUN_00605a40(in_stack_00000014);
  (&stack0x00000000)[iVar1] = 0;
  crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0();
  crt_unknown_c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0();
  iVar1 = crt_string_c_mbcmp_FUN_0060e640(&stack0x0000000c,(char *)&str2);
  return iVar1;
}


// Assembly code:
// 0060c790: PUSH EBX
//   Label: crt_string.c_compare_mb_chars_ci_FUN_0060c790
// 0060c791: PUSH ESI
// 0060c792: SUB ESP,0x8
// 0060c795: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060c799: PUSH EDX
// 0060c79a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc] (DATA)
// 0060c79e: PUSH EAX
// 0060c79f: CALL crt_mbstring.c_copyMbChar_FUN_0060e590
//   XREF to: 0060e590 (UNCONDITIONAL_CALL)
// 0060c7a4: ADD ESP,0x8
// 0060c7a7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060c7ab: PUSH EBX
// 0060c7ac: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 0060c7b1: ADD ESP,0x4
// 0060c7b4: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060c7b8: XOR DL,DL
// 0060c7ba: PUSH ECX
// 0060c7bb: MOV byte ptr [ESP + EAX*0x1 + 0x8],DL
// 0060c7bf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 0060c7c3: PUSH EAX
// 0060c7c4: CALL crt_mbstring.c_copyMbChar_FUN_0060e590
//   XREF to: 0060e590 (UNCONDITIONAL_CALL)
// 0060c7c9: ADD ESP,0x8
// 0060c7cc: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060c7d0: PUSH ESI
// 0060c7d1: CALL crt_locale.c_mblen_FUN_00605a40
//   XREF to: 00605a40 (UNCONDITIONAL_CALL)
// 0060c7d6: ADD ESP,0x4
// 0060c7d9: XOR DH,DH
// 0060c7db: MOV byte ptr [ESP + EAX*0x1],DH
// 0060c7de: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xc] (DATA)
// 0060c7e2: PUSH EAX
// 0060c7e3: CALL crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
//   XREF to: 0060e5d0 (UNCONDITIONAL_CALL)
// 0060c7e8: ADD ESP,0x4
// 0060c7eb: MOV EAX,ESP
// 0060c7ed: PUSH EAX
// 0060c7ee: CALL crt_unknown.c_SomethingWithUppercaseCharacterConvert_FUN_0060e5d0
//   XREF to: 0060e5d0 (UNCONDITIONAL_CALL)
// 0060c7f3: ADD ESP,0x4
// 0060c7f6: MOV EAX,ESP
// 0060c7f8: PUSH EAX
// 0060c7f9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xc] (DATA)
// 0060c7fd: PUSH EAX
// 0060c7fe: CALL crt_string.c_mbcmp_FUN_0060e640
//   XREF to: 0060e640 (UNCONDITIONAL_CALL)
// 0060c803: ADD ESP,0x8
// 0060c806: ADD ESP,0x8
// 0060c809: POP ESI
// 0060c80a: POP EBX
// 0060c80b: RET
