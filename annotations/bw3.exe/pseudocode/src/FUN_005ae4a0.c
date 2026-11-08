// Name: FUN_005ae4a0
// Address: 005ae4a0
// Address Range: [[005ae4a0, 005ae4f5]]
// Convention: unknown
// Signature: void FUN_005ae4a0(void)

#include "nocturne.h"

void FUN_005ae4a0(void)

{
  byte in_AL;
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_006080ae;
    pcVar3 = &DAT_0060848c;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && ((byte)pcVar1[1] <= bVar2)) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_0060848c);
    if (pcVar3 == &DAT_0060848c) break;
    FUN_005ae490(pcVar3 + 2);
    *pcVar3 = '\x02';
  }
  return;
}
