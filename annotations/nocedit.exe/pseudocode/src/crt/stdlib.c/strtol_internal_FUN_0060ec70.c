// Name: crt_stdlib.c_strtol_internal_FUN_0060ec70
// Address: 0060ec70
// Address Range: [[0060ec70, 0060eddd]]
// Convention: __cdecl
// Signature: long crt_stdlib.c_strtol_internal_FUN_0060ec70(char * str, char * * endptr, int base, int is_signed)

#include "nocturne.h"

long __cdecl
crt_stdlib_c_strtol_internal_FUN_0060ec70(char *str,char **endptr,int base,int is_signed)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  void *pvVar7;
  
  pcVar4 = str;
  if (endptr != (char **)0x0) {
    *endptr = str;
  }
  while ((g_CharacterClassificationTable[(byte)(*pcVar4 + 1)] & 2U) != 0) {
    pcVar4 = pcVar4 + 1;
  }
  cVar1 = *pcVar4;
  if ((cVar1 == '+') || (cVar1 == '-')) {
    pcVar4 = pcVar4 + 1;
  }
  if (base == 0) {
    if ((*pcVar4 != '0') || ((pcVar4[1] != 'x' && (pcVar4[1] != 'X')))) {
      if (*pcVar4 == '0') {
        base = 8;
      }
      else {
        base = 10;
      }
      goto LAB_0060ed14;
    }
    base = 0x10;
  }
  else {
    if ((base < 2) || (0x24 < base)) {
      crt_errno_c_setErrno_FUN_00602790(0xd);
      return 0;
    }
    if (base != 0x10) goto LAB_0060ed14;
  }
  if ((*pcVar4 == '0') && ((pcVar4[1] == 'x' || (pcVar4[1] == 'X')))) {
    pcVar4 = pcVar4 + 2;
  }
LAB_0060ed14:
  bVar2 = false;
  pcVar5 = pcVar4;
  pvVar7 = (void *)0x0;
  while (iVar3 = crt_stdlib_c_charToDigit_FUN_0060ee18(*pcVar5), iVar3 < base) {
    if ((&PTR_crt_thread_c_exit_thread_FUN_0060fa58_00685598)[base] < pvVar7) {
      bVar2 = true;
    }
    pvVar6 = (void *)((int)pvVar7 * base + iVar3);
    if (pvVar6 < pvVar7) {
      bVar2 = true;
    }
    pcVar5 = pcVar5 + 1;
    pvVar7 = pvVar6;
  }
  if (pcVar5 == pcVar4) {
    pcVar5 = str;
  }
  if (endptr != (char **)0x0) {
    *endptr = pcVar5;
  }
  if ((((is_signed != 1) || (pvVar7 < (void *)0x80000000)) ||
      ((pvVar7 == (void *)0x80000000 && (cVar1 == '-')))) && (!bVar2)) {
    if (cVar1 == '-') {
      pvVar7 = (void *)-(int)pvVar7;
    }
    return (long)pvVar7;
  }
  crt_errno_c_setErrno_FUN_00602790(0xe);
  if (is_signed == 0) {
    return -1;
  }
  if (cVar1 == '-') {
    return -0x80000000;
  }
  return 0x7fffffff;
}
