// Name: crt_stdio.c__cropzeros_FUN_10006f60
// Address: 10006f60
// Address Range: [[10006f60, 10006fb8]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c__cropzeros_FUN_10006f60(char *buf)

#include "nocturne.h"

void __cdecl _cropzeros(char *buf)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *buf;
  while ((cVar1 != '\0' && (*buf != DAT_10017694))) {
    buf = buf + 1;
    cVar1 = *buf;
  }
  pcVar2 = buf + 1;
  if (*buf != '\0') {
    cVar1 = *pcVar2;
    while (((cVar1 != '\0' && (*pcVar2 != 'e')) && (*pcVar2 != 'E'))) {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    pcVar3 = pcVar2 + -1;
    cVar1 = *pcVar3;
    while (cVar1 == '0') {
      pcVar3 = pcVar3 + -1;
      cVar1 = *pcVar3;
    }
    if (*pcVar3 == DAT_10017694) {
      pcVar3 = pcVar3 + -1;
    }
    do {
      cVar1 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
    } while (cVar1 != '\0');
  }
  return;
}
