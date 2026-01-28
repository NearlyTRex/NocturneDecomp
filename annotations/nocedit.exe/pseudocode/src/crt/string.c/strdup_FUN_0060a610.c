// Name: crt_string.c_strdup_FUN_0060a610
// Address: 0060a610
// Address Range: [[0060a610, 0060a65a]]
// Convention: __cdecl
// Signature: char * __cdecl crt_string_c_strdup_FUN_0060a610(char *str)

#include "nocturne.h"

char * __cdecl crt_string_c_strdup_FUN_0060a610(char *str)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar3 = 0xffffffff;
  pcVar2 = str;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = crt_memory_c_malloc_FUN_00601bb0(uVar3);
  if (pcVar2 != (char *)0x0) {
    pcVar5 = pcVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(uint *)pcVar5 = *(uint *)str;
      str = str + (uint)bVar6 * -8 + 4;
      pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *str;
      str = str + (uint)bVar6 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return pcVar2;
}
