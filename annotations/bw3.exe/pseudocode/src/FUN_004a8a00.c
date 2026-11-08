// Name: FUN_004a8a00
// Address: 004a8a00
// Address Range: [[004a8a00, 004a8b83]]
// Convention: unknown
// Signature: void FUN_004a8a00(int param_1)

#include "nocturne.h"

void FUN_004a8a00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte auStack_124 [256];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  FUN_0040d6f0(0x1d19c88,0x16c,0x16c,0xffff);
  iStack_20 = param_1 + 0x18;
  iVar3 = 0;
  iStack_14 = param_1 + 0xdc;
  iStack_1c = 0;
  iStack_24 = param_1 + 0x7c;
  iStack_18 = param_1;
  do {
    if (*(char *)(iStack_18 + 0x18) != '\0') {
      pcVar5 = (char *)(iStack_24 + iVar3 * 0x20);
      pcVar4 = (char *)(iVar3 * 0x20 + iStack_20);
      iVar2 = FUN_005a3260(pcVar4,pcVar5);
      if (iVar2 != 0) {
        FUN_005a28c0(auStack_124,0x5c0de3,pcVar4);
        FUN_0040d460(iStack_14,auStack_124,0x23,0x2f);
        do {
          cVar1 = *pcVar4;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
      }
      *(int *)(param_1 + 0x78) = iStack_1c + 0x17c;
      FUN_0040d6f0(iStack_14,iStack_1c + 0x17c,0x17c,0xffff);
      if (iVar3 == 2) {
        FUN_0048c150(0x01C6E360,"FinishedTwanaPuzzle");
        FUN_005a28f0(iStack_20,0,0x60);
      }
    }
    iVar3 = iVar3 + 1;
    iStack_18 = iStack_18 + 0x20;
    iStack_14 = iStack_14 + 0x14;
    iStack_1c = iStack_1c + 0x23;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 0x23;
    if (2 < iVar3) {
      return;
    }
  } while( true );
}
