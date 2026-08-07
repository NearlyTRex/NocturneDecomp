// Name: crt_stdlib.c_strtol_internal_FUN_00573720
// Address: 00573720
// Address Range: [[00573720, 0057388d]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdlib_c_strtol_internal_FUN_00573720(char *str,char **endptr,int base,int is_signed)

#include "nocturne.h"

long __cdecl strtol_internal(char *str,char **endptr,int base,int is_signed)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *puVar6;
  byte *puVar7;
  
  pcVar4 = str;
  if (endptr != (char **)0x0) {
    *endptr = str;
  }
  while ((g_CharacterClassificationTable[(byte)(*pcVar4 + 1)] & 2) != 0) {
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
      goto LAB_005737c4;
    }
    base = 0x10;
  }
  else {
    if ((base < 2) || (0x24 < base)) {
      setErrno(0xd);
      return 0;
    }
    if (base != 0x10) goto LAB_005737c4;
  }
  if ((*pcVar4 == '0') && ((pcVar4[1] == 'x' || (pcVar4[1] == 'X')))) {
    pcVar4 = pcVar4 + 2;
  }
LAB_005737c4:
  bVar2 = false;
  pcVar5 = pcVar4;
  puVar7 = (byte *)0x0;
  while (iVar3 = charToDigit(*pcVar5), iVar3 < base) {
    if ((&PTR_crt_unknown_c_FUN_00573fc8_005c216c)[base] < puVar7) {
      bVar2 = true;
    }
    puVar6 = (byte *)((int)puVar7 * base + iVar3);
    if (puVar6 < puVar7) {
      bVar2 = true;
    }
    pcVar5 = pcVar5 + 1;
    puVar7 = puVar6;
  }
  if (pcVar5 == pcVar4) {
    pcVar5 = str;
  }
  if (endptr != (char **)0x0) {
    *endptr = pcVar5;
  }
  if ((((is_signed != 1) || (puVar7 < (byte *)0x80000000)) ||
      ((puVar7 == (byte *)0x80000000 && (cVar1 == '-')))) && (!bVar2)) {
    if (cVar1 == '-') {
      puVar7 = (byte *)-(int)puVar7;
    }
    return (long)puVar7;
  }
  setErrno(0xe);
  if (is_signed == 0) {
    return -1;
  }
  if (cVar1 == '-') {
    return -0x80000000;
  }
  return 0x7fffffff;
}
