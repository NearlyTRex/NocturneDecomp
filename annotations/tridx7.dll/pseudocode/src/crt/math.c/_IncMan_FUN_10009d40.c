// Name: crt_math.c__IncMan_FUN_10009d40
// Address: 10009d40
// Address Range: [[10009d40, 10009da2]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__IncMan_FUN_10009d40(int man,int bit)

#include "nocturne.h"

void __cdecl _IncMan(int man,int bit)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar2 = (int)(bit + (bit >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(bit >> 0x1f);
  puVar4 = (uint *)(man + iVar2 * 4);
  uVar3 = _addl
                    (*puVar4,1 << (0x1f - ((((byte)bit ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) &
                                  0x1f),puVar4);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    puVar4 = (uint *)(man + iVar2 * 4);
    do {
      if (uVar3 == 0) {
        return;
      }
      uVar3 = _addl(*puVar4,1,puVar4);
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + -1;
    } while (-1 < iVar2);
  }
  return;
}
