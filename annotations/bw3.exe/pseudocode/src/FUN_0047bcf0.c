// Name: FUN_0047bcf0
// Address: 0047bcf0
// Address Range: [[0047bcf0, 0047bd48]]
// Convention: unknown
// Signature: void FUN_0047bcf0(undefined4 param_1)

#include "nocturne.h"

void FUN_0047bcf0(uint param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00480db0(0x01C5B0E4);
  while( true ) {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 8) != 0) {
      if (cVar1 == '\t') {
        cVar1 = ' ';
      }
      FUN_0047bb10(param_1,cVar1,1);
    }
    pcVar2 = pcVar2 + 1;
  }
  FUN_0047baf0(param_1);
  return;
}
