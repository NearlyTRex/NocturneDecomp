// Name: __IncMan
// Address: 10009d40
// Address Range: [[10009d40, 10009da2]]
// Convention: unknown
// Signature: void __IncMan(int param_1,int param_2)

#include "nocturne.h"

/* Library Function - Single Match
void __IncMan(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar2 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(param_2 >> 0x1f);
  puVar4 = (uint *)(param_1 + iVar2 * 4);
  iVar3 = ___addl(*puVar4,1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                               0x1f),puVar4);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    puVar4 = (uint *)(param_1 + iVar2 * 4);
    do {
      if (iVar3 == 0) {
        return;
      }
      iVar3 = ___addl(*puVar4,1,puVar4);
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar2);
  }
  return;
}
