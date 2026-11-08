// Name: FUN_0054ea40
// Address: 0054ea40
// Address Range: [[0054ea40, 0054eabb]]
// Convention: unknown
// Signature: undefined4 FUN_0054ea40(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054ea40(int param_1)

{
  if (*(int *)(param_1 + 0x23a0) == 0) {
    if (*(char *)(param_1 + 0x2350) != '\0') {
      _DAT_01d71de0 = "..\\core\\skeleton.cpp";
      _DAT_01d71de4 = 0xde9;
      FUN_004e4330("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",param_1 + 0x2350);
      return *(uint *)(param_1 + 0x23a0);
    }
    _DAT_01d71de0 = "..\\core\\skeleton.cpp";
    _DAT_01d71de4 = 0xde7;
    FUN_004e4330("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return *(uint *)(param_1 + 0x23a0);
}
