// Name: FUN_005cb688
// Address: 005cb688
// Address Range: [[005cb688, 005cb6ea]]
// Convention: unknown
// Signature: void FUN_005cb688(void)

#include "nocturne.h"

void FUN_005cb688(void)

{
  byte in_AL;
  char *pcVar1;
  byte in_DL;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_00627142;
    pcVar3 = &DAT_0062716c;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && (bVar2 <= (byte)pcVar1[1])) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_0062716c);
    if (pcVar3 == &DAT_0062716c) break;
    if ((byte)pcVar3[1] <= in_DL) {
      FUN_005cb620(pcVar3 + 2);
    }
    *pcVar3 = '\x02';
  }
  return;
}
