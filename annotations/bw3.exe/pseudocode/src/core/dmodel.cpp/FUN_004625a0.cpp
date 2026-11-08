// Name: FUN_004625a0
// Address: 004625a0
// Address Range: [[004625a0, 004625e6]]
// Convention: unknown
// Signature: undefined4 FUN_004625a0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004625a0(int param_1)

{
  if (*(int *)(param_1 + 0x178) != 0) {
    return *(uint *)(param_1 + 0x178);
  }
  _DAT_01d71de0 = "..\\core\\dmodel.cpp";
  _DAT_01d71de4 = 0x52d;
  FUN_004e4330("Tried to do something with model %s, but modelPtr not set.  (CKeyFramedModelInstance::preCache not called.",param_1 + 0x78);
  return *(uint *)(param_1 + 0x178);
}
