// Name: FUN_0056af50
// Address: 0056af50
// Address Range: [[0056af50, 0056af75]]
// Convention: unknown
// Signature: int FUN_0056af50(void)

#include "nocturne.h"

int FUN_0056af50(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005c1cf8;
  iVar2 = FUN_0056fb98();
  if ((iVar2 != -1) && (iVar1 == 0)) {
    FUN_0056fc30(iVar2);
  }
  return iVar2;
}
