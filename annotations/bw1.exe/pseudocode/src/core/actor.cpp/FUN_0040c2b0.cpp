// Name: FUN_0040c2b0
// Address: 0040c2b0
// Address Range: [[0040c2b0, 0040c34d]]
// Convention: unknown
// Signature: int FUN_0040c2b0(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0040c2b0(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c240(param_1);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0xa92;
    FUN_005030e0("Can't create actor of unknown class type: %s",param_1);
  }
  if (*(int *)(iVar1 + 0x2c) == 0) {
    _DAT_01d1d400 = "..\\core\\actor.cpp";
    _DAT_01d1d404 = 0xa98;
    FUN_005030e0("Can't create instance of abstract type %s",param_1);
  }
  iVar1 = (**(code **)(iVar1 + 0x2c))();
  if (iVar1 != 0) {
    return iVar1;
  }
  _DAT_01d1d400 = "..\\core\\actor.cpp";
  _DAT_01d1d404 = 0xaa1;
  FUN_005030e0("Not enough memory to create %s",param_1);
  return 0;
}
