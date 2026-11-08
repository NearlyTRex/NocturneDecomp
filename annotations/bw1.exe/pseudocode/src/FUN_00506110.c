// Name: FUN_00506110
// Address: 00506110
// Address Range: [[00506110, 005061f2]]
// Convention: unknown
// Signature: void FUN_00506110(int param_1)

#include "nocturne.h"

void FUN_00506110(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0040c040(param_1);
  if (1 < 0x00000003) {
    FUN_0040b1c0(param_1 + 0x5cc,"pGemPos");
    FUN_0040b260(param_1 + 0x5d8,"pGemOrient");
    FUN_0040b1c0(param_1 + 0x5e4,"pEmitterPos");
  }
  if (2 < 0x00000003) {
    iVar2 = param_1 + 0x644;
    iVar1 = 0;
    iVar4 = param_1 + 0x640;
    iVar3 = param_1 + 0x63c;
    do {
      FUN_0040b670(iVar1 * 100 + param_1 + 0x5f0,"exists");
      FUN_0040b670(iVar3,"r");
      FUN_0040b670(iVar4,"g");
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 100;
      iVar4 = iVar4 + 100;
      FUN_0040b670(iVar2,"b");
      iVar2 = iVar2 + 100;
    } while (iVar1 < 0xc);
  }
  return;
}
