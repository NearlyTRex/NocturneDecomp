// Name: crt_locale.c__setlocale_catcopy_FUN_1000b480
// Address: 1000b480
// Address Range: [[1000b480, 1000b4e7]]
// Convention: __cdecl
// Signature: void __cdecl crt_locale_c__setlocale_catcopy_FUN_1000b480(char *dst,char *lc)

#include "nocturne.h"

void __cdecl _setlocale_catcopy(char *dst,char *lc)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar2 = 0xffffffff;
  pcVar4 = lc;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = dst;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pcVar5 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  if (lc[0x40] != '\0') {
    _lc_lctostr(dst,2,&DAT_10012768,lc + 0x40);
  }
  if (lc[0x80] != '\0') {
    _lc_lctostr(dst,2,&DAT_10012764,lc + 0x80);
  }
  return;
}
