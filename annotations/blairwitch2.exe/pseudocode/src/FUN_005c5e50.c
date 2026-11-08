// Name: FUN_005c5e50
// Address: 005c5e50
// Address Range: [[005c5e50, 005c5f02]]
// Convention: unknown
// Signature: int FUN_005c5e50(char *param_1,int param_2)

#include "nocturne.h"

int FUN_005c5e50(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  (*(code *)PTR_FUN_0061f2a8)(*(uint *)(param_2 + 0x10));
  if (*(int *)(*(int *)(param_2 + 8) + 8) == 0) {
    FUN_005be1d0(param_2);
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
    if (cVar1 == '\0') goto LAB_005c5ebd;
    pcVar4 = pcVar4 + 1;
    iVar2 = FUN_005bab40(cVar1,param_2);
  } while (iVar2 != -1);
  iVar5 = -1;
LAB_005c5ebd:
  if (bVar6) {
    bVar3 = *(byte *)(param_2 + 0xd) & 0xf9;
    *(byte *)(param_2 + 0xd) = bVar3;
    *(byte *)(param_2 + 0xd) = bVar3 | 4;
    if (iVar5 == 0) {
      iVar5 = FUN_005bea80(param_2);
    }
  }
  if (iVar5 == 0) {
    iVar5 = (int)pcVar4 - (int)param_1;
  }
  (*(code *)PTR_FUN_0061f2ac)(*(uint *)(param_2 + 0x10));
  return iVar5;
}
