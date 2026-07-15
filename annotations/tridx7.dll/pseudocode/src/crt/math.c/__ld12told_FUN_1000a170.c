// Name: crt_math.c___ld12told_FUN_1000a170
// Address: 1000a170
// Address Range: [[1000a170, 1000a1f0]]
// Convention: __cdecl
// Signature: INTRNCVT_STATUS __cdecl crt_math_c___ld12told_FUN_1000a170(_LDBL12 *ifp,_LDOUBLE *ld)

#include "nocturne.h"

INTRNCVT_STATUS __cdecl __ld12told(_LDBL12 *ifp,_LDOUBLE *ld)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  uint uStack_c;
  uint uStack_8;
  int iStack_4;
  
  uVar1 = *(ushort *)(ifp->ld12 + 10);
  uStack_c = *(uint *)(ifp->ld12 + 6);
  uStack_8 = *(uint *)(ifp->ld12 + 2);
  uVar3 = uVar1 & 0x7fff;
  iStack_4 = (uint)*(ushort *)ifp->ld12 << 0x10;
  iVar2 = _RoundMan((int)&uStack_c,0x40);
  if (iVar2 != 0) {
    uStack_c = 0x80000000;
    uVar3 = uVar3 + 1;
  }
  *(ushort *)(ld->ld + 8) = uVar1 & 0x8000 | uVar3;
  *(uint *)(ld->ld + 4) = uStack_c;
  *(uint *)ld->ld = uStack_8;
  return (uint)(uVar3 == 0x7fff);
}
