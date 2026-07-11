// Name: FUN_0056efb8
// Address: 0056efb8
// Address Range: [[0056efb8, 0056f01a]]
// Convention: unknown
// Signature: void FUN_0056efb8(void)

#include "nocturne.h"

void FUN_0056efb8(void)

{
  byte in_AL;
  char *pcVar1;
  byte in_DL;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_005c26ce;
    pcVar3 = &DAT_005c26f8;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && (bVar2 <= (byte)pcVar1[1])) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_005c26f8);
    if (pcVar3 == &DAT_005c26f8) break;
    if ((byte)pcVar3[1] <= in_DL) {
      FUN_0056ef50(pcVar3 + 2);
    }
    *pcVar3 = '\x02';
  }
  return;
}
