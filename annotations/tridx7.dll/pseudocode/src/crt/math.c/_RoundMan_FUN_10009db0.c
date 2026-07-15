// Name: crt_math.c__RoundMan_FUN_10009db0
// Address: 10009db0
// Address Range: [[10009db0, 10009e5b]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__RoundMan_FUN_10009db0(int man,int bit)

#include "nocturne.h"

int __cdecl _RoundMan(int man,int bit)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int extraout_EAX;
  uint *puVar5;
  byte bVar6;
  int local_4;
  
  bVar6 = 0;
  local_4 = 0;
  iVar3 = (int)(bit + (bit >> 0x1f & 0x1fU)) >> 5;
  bVar2 = (byte)(bit >> 0x1f);
  bVar2 = 0x1f - ((((byte)bit ^ bVar2) - bVar2 & 0x1f ^ bVar2) - bVar2);
  puVar1 = (uint *)(man + iVar3 * 4);
  if ((*puVar1 & 1 << (bVar2 & 0x1f)) != 0) {
    iVar4 = _ZeroTail(man,bit + 1);
    if (iVar4 == 0) {
      _IncMan(man,bit + -1);
      local_4 = extraout_EAX;
    }
  }
  iVar3 = iVar3 + 1;
  *puVar1 = *puVar1 & -1 << (bVar2 & 0x1f);
  if (iVar3 < 3) {
    puVar5 = (uint *)(man + iVar3 * 4);
    for (iVar4 = 3 - iVar3; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return local_4;
}
