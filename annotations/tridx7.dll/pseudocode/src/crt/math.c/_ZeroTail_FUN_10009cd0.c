// Name: crt_math.c__ZeroTail_FUN_10009cd0
// Address: 10009cd0
// Address Range: [[10009cd0, 10009d33]]
// Convention: __cdecl
// Signature: int __cdecl crt_math_c__ZeroTail_FUN_10009cd0(int man,int bit)

#include "nocturne.h"

int __cdecl _ZeroTail(int man,int bit)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(bit + (bit >> 0x1f & 0x1fU)) >> 5;
  bVar1 = (byte)(bit >> 0x1f);
  if ((*(uint *)(man + iVar2 * 4) &
      ~(-1 << (0x1f - ((((byte)bit ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar2 = iVar2 + 1;
  if (iVar2 < 3) {
    piVar3 = (int *)(man + iVar2 * 4);
    do {
      if (*piVar3 != 0) {
        return 0;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}
