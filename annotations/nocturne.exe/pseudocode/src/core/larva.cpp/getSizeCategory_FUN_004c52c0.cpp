// Name: core_larva.cpp_getSizeCategory_FUN_004c52c0
// Address: 004c52c0
// Address Range: [[004c52c0, 004c5302]]
// Convention: __cdecl
// Signature: char * __cdecl core_larva_cpp_getSizeCategory_FUN_004c52c0(float scale)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl core_larva_cpp_getSizeCategory_FUN_004c52c0(float scale)

{
  if (scale < (float)_DAT_0058786c) {
    return "sml";
  }
  if (scale < (float)_DAT_00587874) {
    return "med";
  }
  return "big";
}
