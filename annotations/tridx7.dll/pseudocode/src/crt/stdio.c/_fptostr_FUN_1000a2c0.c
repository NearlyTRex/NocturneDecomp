// Name: crt_stdio.c__fptostr_FUN_1000a2c0
// Address: 1000a2c0
// Address Range: [[1000a2c0, 1000a340]]
// Convention: __cdecl
// Signature: errno_t __cdecl crt_stdio_c__fptostr_FUN_1000a2c0(char *buf,size_t size_in_bytes,int digits,STRFLT pt_flt)

#include "nocturne.h"

errno_t __cdecl _fptostr(char *buf,size_t size_in_bytes,int digits,STRFLT pt_flt)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = buf + 1;
  pcVar5 = *(char **)(digits + 0xc);
  *buf = '0';
  sVar2 = size_in_bytes;
  pcVar6 = pcVar7;
  if (0 < (int)size_in_bytes) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        *pcVar6 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar1;
      }
      pcVar6 = pcVar6 + 1;
      size_in_bytes = size_in_bytes - 1;
      sVar2 = 0;
    } while (size_in_bytes != 0);
  }
  *pcVar6 = '\0';
  if ((-1 < (int)sVar2) && ('4' < *pcVar5)) {
    pcVar6 = pcVar6 + -1;
    cVar1 = *pcVar6;
    while (cVar1 == '9') {
      *pcVar6 = '0';
      pcVar6 = pcVar6 + -1;
      cVar1 = *pcVar6;
    }
    *pcVar6 = *pcVar6 + '\x01';
  }
  if (*buf == '1') {
    *(int *)(digits + 4) = *(int *)(digits + 4) + 1;
    return sVar2;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)buf = *(uint *)pcVar7;
    pcVar7 = pcVar7 + 4;
    buf = buf + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *buf = *pcVar7;
    pcVar7 = pcVar7 + 1;
    buf = buf + 1;
  }
  return uVar3;
}
