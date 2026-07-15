// Name: crt_time.c__store_number_rev_FUN_1000f360
// Address: 1000f360
// Address Range: [[1000f360, 1000f3bd]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__store_number_rev_FUN_1000f360(int value,char **buf,size_t *count)

#include "nocturne.h"

void __cdecl _store_number_rev(int value,char **buf,size_t *count)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = *count;
  pcVar2 = *buf;
  do {
    pcVar4 = pcVar2;
    if (uVar3 < 2) break;
    pcVar4 = pcVar2 + 1;
    *pcVar2 = (char)(value % 10) + '0';
    value = value / 10;
    uVar3 = *count - 1;
    *count = uVar3;
    pcVar2 = pcVar4;
  } while (0 < value);
  pcVar2 = *buf;
  *buf = pcVar4;
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar4 = *pcVar2;
    pcVar4 = pcVar4 + -1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (pcVar2 < pcVar4);
  return;
}
