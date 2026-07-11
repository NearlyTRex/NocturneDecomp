// Name: FUN_0056ef60
// Address: 0056ef60
// Address Range: [[0056ef60, 0056efb5]]
// Convention: unknown
// Signature: void FUN_0056ef60(void)

#include "nocturne.h"

void FUN_0056ef60(void)

{
  byte in_AL;
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  
  while( true ) {
    pcVar1 = &DAT_005c2302;
    pcVar3 = &DAT_005c26ce;
    bVar2 = in_AL;
    do {
      if ((*pcVar1 != '\x02') && ((byte)pcVar1[1] <= bVar2)) {
        bVar2 = pcVar1[1];
        pcVar3 = pcVar1;
      }
      pcVar1 = pcVar1 + 6;
    } while (pcVar1 < &DAT_005c26ce);
    if (pcVar3 == &DAT_005c26ce) break;
    FUN_0056ef50(pcVar3 + 2);
    *pcVar3 = '\x02';
  }
  return;
}
