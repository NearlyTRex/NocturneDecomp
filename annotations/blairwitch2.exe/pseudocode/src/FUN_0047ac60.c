// Name: FUN_0047ac60
// Address: 0047ac60
// Address Range: [[0047ac60, 0047acb8]]
// Convention: unknown
// Signature: void FUN_0047ac60(undefined4 param_1)

#include "nocturne.h"

void FUN_0047ac60(uint param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_0047fbb0(0x01C25594);
  while( true ) {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if (((&DAT_0061ed94)[(byte)(cVar1 + 1)] & 8) != 0) {
      if (cVar1 == '\t') {
        cVar1 = ' ';
      }
      FUN_0047aa80(param_1,cVar1,1);
    }
    pcVar2 = pcVar2 + 1;
  }
  FUN_0047aa60(param_1);
  return;
}
