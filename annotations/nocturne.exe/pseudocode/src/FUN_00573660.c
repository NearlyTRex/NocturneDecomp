// Name: FUN_00573660
// Address: 00573660
// Address Range: [[00573660, 00573712]]
// Convention: unknown
// Signature: int FUN_00573660(char *param_1,int param_2)

#include "nocturne.h"

int FUN_00573660(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  int iVar5;
  bool bVar6;
  
  (*(code *)PTR_FUN_005c1ac0)(*(uint *)(param_2 + 0x10));
  if (*(int *)(*(int *)(param_2 + 8) + 8) == 0) {
    FUN_00568ed0(param_2);
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
    if (cVar1 == '\0') goto LAB_005736cd;
    pcVar4 = pcVar4 + 1;
    iVar2 = FUN_00566cc0(cVar1,param_2);
  } while (iVar2 != -1);
  iVar5 = -1;
LAB_005736cd:
  if (bVar6) {
    bVar3 = *(byte *)(param_2 + 0xd) & 0xf9;
    *(byte *)(param_2 + 0xd) = bVar3;
    *(byte *)(param_2 + 0xd) = bVar3 | 4;
    if (iVar5 == 0) {
      iVar5 = FUN_00568890(param_2);
    }
  }
  if (iVar5 == 0) {
    iVar5 = (int)pcVar4 - (int)param_1;
  }
  (*(code *)PTR_FUN_005c1ac4)(*(uint *)(param_2 + 0x10));
  return iVar5;
}
