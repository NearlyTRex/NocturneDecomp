// Name: crt_string.c_strstr_FUN_005fedd0
// Address: 005fedd0
// Address Range: [[005fedd0, 005fee9e]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strstr_FUN_005fedd0(char *haystack_str,char *needle_str)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x005fee62) overlaps instruction at (ram,0x005fee60)
    */

char * __cdecl strstr(char *haystack_str,char *needle_str)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  
  cVar1 = *needle_str;
  if (cVar1 != '\0') {
    if (needle_str[1] == '\0') {
      do {
        if (*haystack_str == cVar1) {
          return haystack_str;
        }
        if (*haystack_str == '\0') {
          return (char *)0x0;
        }
        cVar2 = haystack_str[1];
        if (cVar2 == cVar1) {
          return haystack_str + 1;
        }
        haystack_str = haystack_str + 2;
      } while (cVar2 != '\0');
      return (char *)0x0;
    }
    pcVar4 = (char *)0xffffffff;
    bVar12 = true;
    pcVar6 = haystack_str;
    do {
      pcVar8 = pcVar6;
      if (pcVar4 == (char *)0x0) break;
      pcVar4 = pcVar4 + -1;
      pcVar8 = pcVar6 + 1;
      bVar12 = *pcVar6 == '\0';
      pcVar6 = pcVar8;
    } while (!bVar12);
    if (!bVar12) {
      pcVar8 = pcVar4;
    }
    uVar5 = 0xffffffff;
    pcVar6 = needle_str;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    pcVar6 = (char *)(~uVar5 - 1);
    while( true ) {
      pcVar4 = pcVar8 + (-1 - (int)haystack_str);
      bVar12 = pcVar4 == pcVar6;
      if (pcVar4 < pcVar6) break;
      if (pcVar4 == (char *)0x0) {
LAB_005fee60_2:
        haystack_str = pcVar4;
      }
      else {
        do {
          pcVar9 = haystack_str;
          if (pcVar4 == (char *)0x0) break;
          pcVar4 = pcVar4 + -1;
          pcVar9 = haystack_str + 1;
          bVar12 = *needle_str == *haystack_str;
          haystack_str = pcVar9;
        } while (!bVar12);
        haystack_str = pcVar9;
        if (!bVar12) goto LAB_005fee60_2;
      }
      pbVar10 = (byte *)(haystack_str + -1);
      if (pbVar10 == (byte *)0x0) break;
      bVar12 = false;
      iVar3 = 0;
      bVar13 = true;
      pcVar4 = pcVar6;
      pbVar7 = pbVar10;
      pbVar11 = (byte *)needle_str;
      do {
        if (pcVar4 == (char *)0x0) break;
        pcVar4 = pcVar4 + -1;
        bVar12 = *pbVar7 < *pbVar11;
        bVar13 = *pbVar7 == *pbVar11;
        pbVar7 = pbVar7 + 1;
        pbVar11 = pbVar11 + 1;
      } while (bVar13);
      if (!bVar13) {
        iVar3 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      }
      if (iVar3 == 0) {
        return (char *)pbVar10;
      }
    }
    haystack_str = (char *)0x0;
  }
  return haystack_str;
}
