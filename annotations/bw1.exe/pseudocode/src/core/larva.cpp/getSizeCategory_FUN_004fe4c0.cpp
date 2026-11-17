// Name: core_larva.cpp_getSizeCategory_FUN_004fe4c0
// Address: 004fe4c0
// Address Range: [[004fe4c0, 004fe502]]
// Convention: __cdecl
// Signature: char * __cdecl core_larva_cpp_getSizeCategory_FUN_004fe4c0(float scale)

#include "nocturne.h"

char * __cdecl core_larva_cpp_getSizeCategory_FUN_004fe4c0(float scale)

{
  if (scale < (float)0.29999999999999999) {
    return "sml";
  }
  if (scale < (float)0.69999999999999996) {
    return "med";
  }
  return "big";
}
