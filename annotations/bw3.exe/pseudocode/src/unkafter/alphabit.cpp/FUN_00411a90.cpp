// Name: unkafter_alphabit.cpp_FUN_00411a90
// Address: 00411a90
// Address Range: [[00411a90, 00411b44]]
// Convention: unknown
// Signature: void unkafter_alphabit_cpp_FUN_00411a90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_alphabit_cpp_FUN_00411a90(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_007dffbc;
  if (DAT_007dffb4 != (int *)0x0) {
    iVar3 = 0;
    uVar2 = _DAT_01c5fae4;
    while ((DAT_007dffbc = uVar2, _DAT_01c5fae4 = DAT_007dffbc, DAT_007dffb4 != (int *)0x0 &&
           ((uVar2 = 1 << ((byte)iVar3 & 0x1f), (DAT_007dffbc & uVar2) == (uVar1 & uVar2) ||
            ((**(code **)(*DAT_007dffb4 + 0x24))
                       (DAT_007dffb4,_DAT_01c5fadc,_DAT_01c5fae0,iVar3,(uVar2 & DAT_007dffbc) != 0),
            uVar1 = DAT_007dffbc, DAT_007dffb4 != (int *)0x0))))) {
      DAT_007dffbc = uVar1;
      iVar3 = iVar3 + 1;
      uVar2 = _DAT_01c5fae4;
      uVar1 = DAT_007dffbc;
      if (2 < iVar3) {
        (**(code **)(*DAT_007dffb4 + 0x20))(DAT_007dffb4,*(uint *)&g_CGamePtr->field_0x314);
        return;
      }
    }
  }
  DAT_007dffbc = uVar1;
  return;
}
