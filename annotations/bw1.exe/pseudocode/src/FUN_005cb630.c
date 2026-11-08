// Name: FUN_005cb630
// Address: 005cb630
// Address Range: [[005cb630, 005cb685]]
// Convention: unknown
// Signature: void FUN_005cb630(void)

#include "nocturne.h"

void FUN_005cb630(void)

{
  byte in_AL;
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_00626d0a;
    pcVar3 = &DAT_00627142;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && ((byte)pcVar1[1] <= bVar2)) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_00627142);
    if (pcVar3 == &DAT_00627142) break;
    FUN_005cb620(pcVar3 + 2);
    *pcVar3 = '\x02';
  }
  return;
}
