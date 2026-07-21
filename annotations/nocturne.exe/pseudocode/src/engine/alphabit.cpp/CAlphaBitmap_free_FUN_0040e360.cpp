// Name: engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
// Address: 0040e360
// Address Range: [[0040e360, 0040e3b3]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(int *param_1)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005638d0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005638d0(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_005638d0(param_1[2]);
  param_1[2] = 0;
  return;
}
