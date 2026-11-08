// Name: FUN_00493150
// Address: 00493150
// Address Range: [[00493150, 004931a8]]
// Convention: unknown
// Signature: void FUN_00493150(undefined4 param_1)

#include "nocturne.h"

void FUN_00493150(uint param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)FUN_00498210(0x01C3EB54);
  while( true ) {
    cVar1 = *pcVar2;
    if (cVar1 == '\0') break;
    if (((&DAT_00626114)[(byte)(cVar1 + 1)] & 8) != 0) {
      if (cVar1 == '\t') {
        cVar1 = ' ';
      }
      FUN_00492f70(param_1,cVar1,1);
    }
    pcVar2 = pcVar2 + 1;
  }
  FUN_00492f50(param_1);
  return;
}
