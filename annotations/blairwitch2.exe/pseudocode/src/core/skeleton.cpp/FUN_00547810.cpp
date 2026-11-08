// Name: FUN_00547810
// Address: 00547810
// Address Range: [[00547810, 0054788b]]
// Convention: unknown
// Signature: undefined4 FUN_00547810(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00547810(int param_1)

{
  if (*(int *)(param_1 + 0x22b0) == 0) {
    if (*(char *)(param_1 + 0x2260) != '\0') {
      _DAT_01d046a0 = "..\\core\\skeleton.cpp";
      _DAT_01d046a4 = 0xde2;
      FUN_004e4500("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",param_1 + 0x2260);
      return *(uint *)(param_1 + 0x22b0);
    }
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0xde0;
    FUN_004e4500("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return *(uint *)(param_1 + 0x22b0);
}
