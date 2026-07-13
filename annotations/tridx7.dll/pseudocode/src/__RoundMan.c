// Name: __RoundMan
// Address: 10009db0
// Address Range: [[10009db0, 10009e5b]]
// Convention: unknown
// Signature: undefined4 __RoundMan(int param_1,int param_2)

#include "nocturne.h"

/* Library Function - Single Match
uint __RoundMan(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  uint local_4;
  
  bVar6 = 0;
  local_4 = 0;
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(param_2 >> 0x1f);
  bVar2 = 0x1f - ((((byte)param_2 ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  puVar1 = (uint *)(param_1 + iVar3 * 4);
  if ((*puVar1 & 1 << (bVar2 & 0x1f)) != 0) {
    iVar4 = __ZeroTail(param_1,param_2 + 1);
    if (iVar4 == 0) {
      local_4 = __IncMan(param_1,param_2 + -1);
    }
  }
  iVar3 = iVar3 + 1;
  *puVar1 = *puVar1 & -1 << (bVar2 & 0x1f);
  if (iVar3 < 3) {
    puVar5 = (uint *)(param_1 + iVar3 * 4);
    for (iVar4 = 3 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return local_4;
}
