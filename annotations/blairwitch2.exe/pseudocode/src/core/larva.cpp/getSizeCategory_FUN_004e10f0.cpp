// Name: core_larva.cpp_getSizeCategory_FUN_004e10f0
// Address: 004e10f0
// Address Range: [[004e10f0, 004e1132]]
// Convention: __cdecl
// Signature: char * __cdecl core_larva_cpp_getSizeCategory_FUN_004e10f0(float scale)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_larva_cpp_getSizeCategory_FUN_004e10f0(float scale)

{
  if (scale < (float)_DAT_005dbe8e) {
    return &DAT_005dbe81;
  }
  if (scale < (float)_DAT_005dbe96) {
    return &DAT_005dbe85;
  }
  return &DAT_005dbe89;
}
