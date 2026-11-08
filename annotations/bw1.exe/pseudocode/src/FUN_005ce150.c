// Name: FUN_005ce150
// Address: 005ce150
// Address Range: [[005ce150, 005ce202]]
// Convention: unknown
// Signature: int FUN_005ce150(char *param_1,int param_2)

#include "nocturne.h"

int FUN_005ce150(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  (*(code *)PTR_FUN_00626600)(*(uint *)(param_2 + 0x10));
  if (*(int *)(*(int *)(param_2 + 8) + 8) == 0) {
    FUN_005c64a0(param_2);
  }
  bVar6 = (*(byte *)(param_2 + 0xd) & 4) != 0;
  if (bVar6) {
    bVar3 = *(byte *)(param_2 + 0xd) & 0xf9;
    *(byte *)(param_2 + 0xd) = bVar3;
    *(byte *)(param_2 + 0xd) = bVar3 | 2;
  }
  iVar5 = 0;
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') goto LAB_005ce1bd;
    pcVar4 = pcVar4 + 1;
    iVar2 = FUN_005c2f00(cVar1,param_2);
  } while (iVar2 != -1);
  iVar5 = -1;
LAB_005ce1bd:
  if (bVar6) {
    bVar3 = *(byte *)(param_2 + 0xd) & 0xf9;
    *(byte *)(param_2 + 0xd) = bVar3;
    *(byte *)(param_2 + 0xd) = bVar3 | 4;
    if (iVar5 == 0) {
      iVar5 = FUN_005c6d50(param_2);
    }
  }
  if (iVar5 == 0) {
    iVar5 = (int)pcVar4 - (int)param_1;
  }
  (*(code *)PTR_FUN_00626604)(*(uint *)(param_2 + 0x10));
  return iVar5;
}
