// Name: FUN_00569eb0
// Address: 00569eb0
// Address Range: [[00569eb0, 00569f2b]]
// Convention: unknown
// Signature: undefined4 FUN_00569eb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00569eb0(int param_1)

{
  if (*(int *)(param_1 + 0x23a0) == 0) {
    if (*(char *)(param_1 + 0x2350) != '\0') {
      _DAT_01d1d400 = "..\\core\\skeleton.cpp";
      _DAT_01d1d404 = 0xdf2;
      FUN_005030e0("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",param_1 + 0x2350);
      return *(uint *)(param_1 + 0x23a0);
    }
    _DAT_01d1d400 = "..\\core\\skeleton.cpp";
    _DAT_01d1d404 = 0xdf0;
    FUN_005030e0("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return *(uint *)(param_1 + 0x23a0);
}
