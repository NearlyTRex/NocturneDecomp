// Name: FUN_00481840
// Address: 00481840
// Address Range: [[00481840, 00481881]]
// Convention: unknown
// Signature: int FUN_00481840(int *param_1)

#include "nocturne.h"

int FUN_00481840(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *param_1) {
    piVar3 = param_1 + 1;
    do {
      iVar1 = FUN_0047dc30(0x01C03A10,piVar3);
      if (iVar1 != 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x19;
    } while (iVar2 < *param_1);
  }
  return -1;
}
