// Name: engine_drender.cpp_CDemonRenderer_setFaceCount_FUN_00461070
// Address: 00461070
// Address Range: [[00461070, 00461080]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(int param_1,uint param_2)

{
  DAT_006b0278 = param_2;
  *(uint *)(param_1 + 4) = param_2;
  return;
}
