// Name: FUN_00454530
// Address: 00454530
// Address Range: [[00454530, 00454576]]
// Convention: unknown
// Signature: undefined4 FUN_00454530(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00454530(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    return *(uint *)(param_1 + 0x178);
  }
  _DAT_01cc4800 = "..\\core\\dmodel.cpp";
  _DAT_01cc4804 = 0x52d;
  FUN_004c8440("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",param_1 + 0x78);
  return *(uint *)(param_1 + 0x178);
}
