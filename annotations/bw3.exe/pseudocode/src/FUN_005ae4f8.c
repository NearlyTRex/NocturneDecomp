// Name: FUN_005ae4f8
// Address: 005ae4f8
// Address Range: [[005ae4f8, 005ae55a]]
// Convention: unknown
// Signature: void FUN_005ae4f8(void)

#include "nocturne.h"

void FUN_005ae4f8(void)

{
  byte in_AL;
  char *pcVar1;
  byte in_DL;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_0060848c;
    pcVar3 = &DAT_006084b6;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && (bVar2 <= (byte)pcVar1[1])) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_006084b6);
    if (pcVar3 == &DAT_006084b6) break;
    if ((byte)pcVar3[1] <= in_DL) {
      FUN_005ae490(pcVar3 + 2);
    }
    *pcVar3 = '\x02';
  }
  return;
}
