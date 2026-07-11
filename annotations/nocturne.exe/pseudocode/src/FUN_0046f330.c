// Name: FUN_0046f330
// Address: 0046f330
// Address Range: [[0046f330, 0046f388]]
// Convention: unknown
// Signature: void FUN_0046f330(undefined4 param_1)

#include "nocturne.h"

void FUN_0046f330(uint param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00472c90(0x01BCD074);
  while( true ) {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if (((&DAT_005c168c)[(byte)(cVar1 + 1)] & 8) != 0) {
      if (cVar1 == '\t') {
        cVar1 = ' ';
      }
      FUN_0046f150(param_1,cVar1,1);
    }
    pcVar2 = pcVar2 + 1;
  }
  FUN_0046f130(param_1);
  return;
}
