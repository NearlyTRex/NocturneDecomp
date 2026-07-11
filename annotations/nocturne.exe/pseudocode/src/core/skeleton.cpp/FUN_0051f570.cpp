// Name: FUN_0051f570
// Address: 0051f570
// Address Range: [[0051f570, 0051f647]]
// Convention: unknown
// Signature: int FUN_0051f570(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0051f570(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_0268cef0) {
    iVar3 = 0x268f964;
    do {
      iVar1 = FUN_00564520(iVar3,param_1);
      if (iVar1 == 0) {
        return iVar2 * 0x2ac0 + 0x268cef4;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2ac0;
    } while (iVar2 < _DAT_0268cef0);
  }
  if (0x3f < _DAT_0268cef0) {
    _DAT_01cc4800 = "m0_DA..\\core\\skeleton.cpp" + 5;
    _DAT_01cc4804 = 0x1057;
    FUN_004c8440("Can't load %s because deformable model manager is full.  (Size is %d)",param_1,0x40);
  }
  iVar2 = _DAT_0268cef0 * 0x2ac0 + 0x268cef4;
  _DAT_0268cef0 = _DAT_0268cef0 + 1;
  FUN_005191f0(iVar2,param_1);
  FUN_005180a0(iVar2);
  return iVar2;
}
