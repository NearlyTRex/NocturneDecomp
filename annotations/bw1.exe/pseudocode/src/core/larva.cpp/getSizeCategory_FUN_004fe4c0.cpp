// Name: core_larva.cpp_getSizeCategory_FUN_004fe4c0
// Address: 004fe4c0
// Address Range: [[004fe4c0, 004fe502]]
// Convention: __cdecl
// Signature: char * __cdecl core_larva_cpp_getSizeCategory_FUN_004fe4c0(float scale)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_larva_cpp_getSizeCategory_FUN_004fe4c0(float scale)

{
  if (scale < (float)_DAT_005e6c9b) {
    return &DAT_005e6c8e;
  }
  if (scale < (float)_DAT_005e6ca3) {
    return &DAT_005e6c92;
  }
  return &DAT_005e6c96;
}
