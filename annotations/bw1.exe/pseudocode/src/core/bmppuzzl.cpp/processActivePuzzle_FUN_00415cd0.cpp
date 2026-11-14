// Name: core_bmppuzzl.cpp_processActivePuzzle_FUN_00415cd0
// Address: 00415cd0
// Address Range: [[00415cd0, 00415d84]]
// Convention: __cdecl
// Signature: void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00415cd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bmppuzzl_cpp_processActivePuzzle_FUN_00415cd0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = DAT_007c3980;
  if (DAT_007c3978 != (int *)0x0) {
    iVar3 = 0;
    uVar2 = _DAT_01c43544;
    while ((DAT_007c3980 = uVar2, _DAT_01c43544 = DAT_007c3980, DAT_007c3978 != (int *)0x0 &&
           ((uVar2 = 1 << ((byte)iVar3 & 0x1f), (DAT_007c3980 & uVar2) == (uVar1 & uVar2) ||
            ((**(code **)(*DAT_007c3978 + 0x24))
                       (DAT_007c3978,_DAT_01c4353c,_DAT_01c43540,iVar3,(uVar2 & DAT_007c3980) != 0),
            uVar1 = DAT_007c3980, DAT_007c3978 != (int *)0x0))))) {
      DAT_007c3980 = uVar1;
      iVar3 = iVar3 + 1;
      uVar2 = _DAT_01c43544;
      uVar1 = DAT_007c3980;
      if (2 < iVar3) {
        (**(code **)(*DAT_007c3978 + 0x20))(DAT_007c3978,g_CGamePtr->delta_time_float);
        return;
      }
    }
  }
  DAT_007c3980 = uVar1;
  return;
}
