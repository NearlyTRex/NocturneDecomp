// Name: FUN_004e7470
// Address: 004e7470
// Address Range: [[004e7470, 004e7552]]
// Convention: unknown
// Signature: void FUN_004e7470(int param_1)

#include "nocturne.h"

void FUN_004e7470(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040c330(param_1);
  if (1 < 0x00000003) {
    FUN_0040b4b0(param_1 + 0x728,"pGemPos");
    FUN_0040b550(param_1 + 0x734,"pGemOrient");
    FUN_0040b4b0(param_1 + 0x740,"pEmitterPos");
  }
  if (2 < 0x00000003) {
    iVar2 = param_1 + 0x7a0;
    iVar1 = 0;
    iVar4 = param_1 + 0x79c;
    iVar3 = param_1 + 0x798;
    do {
      FUN_0040b960(iVar1 * 100 + param_1 + 0x74c,"exists");
      FUN_0040b960(iVar3,&DAT_005dc6cc);
      FUN_0040b960(iVar4,&DAT_005dc6ce);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 100;
      iVar4 = iVar4 + 100;
      FUN_0040b960(iVar2,&DAT_005dc6d0);
      iVar2 = iVar2 + 100;
    } while (iVar1 < 0xc);
  }
  return;
}
