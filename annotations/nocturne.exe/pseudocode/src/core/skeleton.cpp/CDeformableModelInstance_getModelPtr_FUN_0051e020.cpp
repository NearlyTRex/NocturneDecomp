// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
// Address: 0051e020
// Address Range: [[0051e020, 0051e09b]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(int param_1)

{
  if (*(int *)(param_1 + 0x22b0) == 0) {
    if (*(char *)(param_1 + 0x2260) != '\0') {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0xdd3;
      FUN_004c8440("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",param_1 + 0x2260);
      return *(uint *)(param_1 + 0x22b0);
    }
    _DAT_01cc4800 = "L=..\\core\\skeleton.cpp" + 2;
    _DAT_01cc4804 = 0xdd1;
    FUN_004c8440("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return *(uint *)(param_1 + 0x22b0);
}
