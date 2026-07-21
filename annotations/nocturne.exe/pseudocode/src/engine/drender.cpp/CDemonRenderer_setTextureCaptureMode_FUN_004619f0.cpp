// Name: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
// Address: 004619f0
// Address Range: [[004619f0, 00461a27]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(uint *)(param_1 + 0x1c) = 0;
    return;
  }
  _DAT_01b4d7b0 = 0xffffffff;
  _DAT_01b4d7ac = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x1c) = (param_2 != 0) + 1;
  return;
}
