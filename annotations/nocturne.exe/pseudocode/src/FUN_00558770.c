// Name: FUN_00558770
// Address: 00558770
// Address Range: [[00558770, 005587d5]]
// Convention: unknown
// Signature: int FUN_00558770(int param_1,LPCSTR param_2)

#include "nocturne.h"

int FUN_00558770(int param_1,LPCSTR param_2)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  uint uVar4;
  LPCSTR pCVar5;
  byte bVar6;
  tagSIZE local_10;
  
  bVar6 = 0;
  iVar2 = FUN_005584d0(param_1,0xffffffff,0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = 0xffffffff;
  pCVar5 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar5;
    pCVar5 = pCVar5 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  BVar3 = GetTextExtentPoint32A(*(HDC *)(param_1 + 4),param_2,~uVar4 - 1,&local_10);
  if (BVar3 == 0) {
    local_10.cy = 0;
  }
  return local_10.cy + *(int *)(param_1 + 0x134) + *(int *)(param_1 + 0x138);
}
