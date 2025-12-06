// Name: crt_stdlib.c_i64toa_FUN_0060ad40
// Address: 0060ad40
// Address Range: [[0060ad40, 0060addc]]
// Convention: __cdecl
// Signature: char * crt_stdlib.c_i64toa_FUN_0060ad40(longlong * value, char * buffer, int base)

#include "nocturne.h"

char * __cdecl crt_stdlib_c_i64toa_FUN_0060ad40(longlong *value,char *buffer,int base)

{
  char cVar1;
  int extraout_ECX;
  int extraout_EDX;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar2;
  byte uVar3;
  undefined7 in_stack_ffffffad;
  ulonglong in_stack_ffffffb4;
  
  pcVar2 = &stack0xffffffad;
  uVar3 = 0;
  do {
    do {
      crt_math_c_UDivMod64_FUN_0060d3ed(CONCAT71 /* combine 2-byte values */(in_stack_ffffffad,uVar3),in_stack_ffffffb4);
      *pcVar2 = g_AlphaNumericCharacters1[extraout_ECX];
      pcVar2 = pcVar2 + 1;
    } while (extraout_EDX != 0);
  } while (buffer != (char *)0x0);
  do {
    cVar1 = pcVar2[-1];
    pcVar2 = pcVar2 + -1;
    *unaff_EBP = cVar1;
    unaff_EBP = unaff_EBP + 1;
  } while (cVar1 != '\0');
  return (char *)base;
}
