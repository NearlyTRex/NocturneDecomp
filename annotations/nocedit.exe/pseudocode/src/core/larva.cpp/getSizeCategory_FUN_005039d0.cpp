// Name: core_larva.cpp_getSizeCategory_FUN_005039d0
// Address: 005039d0
// Address Range: [[005039d0, 00503a12]]
// Convention: __cdecl
// Signature: char * __cdecl core_larva_cpp_getSizeCategory_FUN_005039d0(float scale)

#include "nocturne.h"

char * __cdecl core_larva_cpp_getSizeCategory_FUN_005039d0(float scale)

{
  if (scale < (float)0.29999999999999999) {
    return "sml";
  }
  if (scale < (float)0.69999999999999996) {
    return "med";
  }
  return "big";
}
