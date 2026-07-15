// Name: crt_locale.c__lc_strtolc_FUN_1000b380
// Address: 1000b380
// Address Range: [[1000b380, 1000b474]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c__lc_strtolc_FUN_1000b380(char *lc,char *locale)

#include "nocturne.h"

int __cdecl _lc_strtolc(char *lc,char *locale)

{
  char cVar1;
  size_t count;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  pcVar2 = lc;
  for (iVar3 = 0x21; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  if (*locale == '\0') {
    return 0;
  }
  if ((*locale != '.') || (locale[1] == '\0')) {
    iVar3 = 0;
    do {
      count = strcspn(locale,"_.,");
      if (count == 0) {
        return -1;
      }
      cVar1 = locale[count];
      if (((iVar3 != 0) || (0x3f < (int)count)) || (pcVar2 = lc, cVar1 == '.')) {
        if (((iVar3 == 1) && ((int)count < 0x40)) && (cVar1 != '_')) {
          pcVar2 = lc + 0x40;
        }
        else {
          if ((iVar3 != 2) || ((cVar1 != '\0' && (cVar1 != ',')))) {
            return -1;
          }
          pcVar2 = lc + 0x80;
        }
      }
      _strncpy(pcVar2,locale,count);
      if ((cVar1 == ',') || (cVar1 == '\0')) {
        return 0;
      }
      locale = locale + count + 1;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  uVar4 = 0xffffffff;
  pcVar2 = locale + 1;
  do {
    pcVar6 = pcVar2;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar2 = pcVar6 + -uVar4;
  pcVar6 = lc + 0x80;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar6 = *(uint *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return 0;
}
