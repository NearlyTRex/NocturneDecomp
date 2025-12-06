// Name: crt_stdlib.c_strtol_internal_FUN_0060ec70
// Address: 0060ec70
// Address Range: [[0060ec70, 0060eddd]]
// Convention: __cdecl
// Signature: long crt_stdlib.c_strtol_internal_FUN_0060ec70(char * str, char * * endptr, int base, int is_signed)

#include "nocturne.h"

long __cdecl
crt_stdlib_c_strtol_internal_FUN_0060ec70(char *str,char **endptr,int base,int is_signed)

{
  int iVar1;
  char unaff_BP;
  void *pvVar2;
  void *pvVar3;
  char unaff_DI;
  int iVar4;
  int in_stack_00000014;
  int in_stack_00000018;
  char **ppcVar5;
  char local_14;
  
  if (endptr != (char **)0x0) {
    *endptr = str;
  }
  while ((g_CharacterClassificationTable[(byte)(*str + 1)] & 2U) != 0) {
    str = (char *)((int)str + 1);
  }
  local_14 = *str;
  if ((local_14 == '+') || (local_14 == '-')) {
    str = (char *)((int)str + 1);
  }
  if (base == 0) {
    if ((*str != '0') || ((*(char *)((int)str + 1) != 'x' && (*(char *)((int)str + 1) != 'X')))) {
      if (*str == '0') {
        iVar4 = 8;
      }
      else {
        iVar4 = 10;
      }
      goto LAB_0060ed14;
    }
    iVar4 = 0x10;
  }
  else {
    if ((base < 2) || (0x24 < base)) {
      crt_errno_c_setErrno_FUN_00602790(0xd);
      return 0;
    }
    iVar4 = base;
    if (base != 0x10) goto LAB_0060ed14;
  }
  if ((*str == '0') && ((*(char *)((int)str + 1) == 'x' || (*(char *)((int)str + 1) == 'X')))) {
    str = (char *)((int)str + 2);
  }
LAB_0060ed14:
  pvVar3 = (void *)0x0;
  ppcVar5 = (char **)str;
  while (iVar1 = crt_stdlib_c_charToDigit_FUN_0060ee18(*str), iVar1 < iVar4) {
    if ((&PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598)[iVar4] < pvVar3) {
      local_14 = '\x01';
    }
    pvVar2 = (void *)((int)pvVar3 * iVar4 + iVar1);
    if (pvVar2 < pvVar3) {
      local_14 = '\x01';
    }
    str = (char *)((int)str + 1);
    pvVar3 = pvVar2;
  }
  if ((char **)str == ppcVar5) {
    str = (char *)endptr;
  }
  if (base != 0) {
    *(char **)base = str;
  }
  if ((((in_stack_00000014 != 1) || (pvVar3 < (void *)0x80000000)) ||
      ((pvVar3 == (void *)0x80000000 && (unaff_BP == '-')))) && (local_14 == '\0')) {
    if (unaff_BP == '-') {
      pvVar3 = (void *)-(int)pvVar3;
    }
    return (long)pvVar3;
  }
  crt_errno_c_setErrno_FUN_00602790(0xe);
  if (in_stack_00000018 == 0) {
    return -1;
  }
  if (unaff_DI == '-') {
    return -0x80000000;
  }
  return 0x7fffffff;
}
