// Name: core_fldnotes.cpp_FUN_004bb1c0
// Address: 004bb1c0
// Address Range: [[004bb1c0, 004bb263]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004bb1c0(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004bb1c0(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0xf] != 0) {
    iVar2 = 0;
    if (0 < (int)param_1[0xe]) {
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        core_fldnotes_cpp_FUN_004bb080(param_1[0xf] + iVar1);
        iVar1 = iVar1 + 0x144;
      } while (iVar2 < (int)param_1[0xe]);
    }
    FUN_005c09f0(param_1[0xf]);
    param_1[0xf] = 0;
  }
  param_1[4] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 0x12) = 0;
  param_1[0xe] = 0;
  param_1[7] = *param_1;
  param_1[8] = param_1[1];
  param_1[9] = param_1[2];
  param_1[10] = param_1[3];
  param_1[5] = param_1[7];
  param_1[6] = param_1[8];
  param_1[0xb] = _DAT_0152d254;
  param_1[0x10] = param_1[7];
  param_1[0x11] = param_1[10];
  return;
}
