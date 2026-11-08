// Name: FUN_005c3330
// Address: 005c3330
// Address Range: [[005c3330, 005c3385]]
// Convention: unknown
// Signature: void FUN_005c3330(void)

#include "nocturne.h"

void FUN_005c3330(void)

{
  byte in_AL;
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_0061f98a;
    pcVar3 = &DAT_0061fe22;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && ((byte)pcVar1[1] <= bVar2)) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_0061fe22);
    if (pcVar3 == &DAT_0061fe22) break;
    FUN_005c3320(pcVar3 + 2);
    *pcVar3 = '\x02';
  }
  return;
}
