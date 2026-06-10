// Name: shape_superopt.cpp_CP2D_copy_FUN_005d8330
// Address: 005d8330
// MANUAL RECONSTRUCTION
// Address Range: [[005d8330, 005d834e]]
// Convention: __cdecl
// Signature: CP2D * __cdecl shape_superopt_cpp_CP2D_copy_FUN_005d8330(CP2D *dst,CP2D *src)

#include "nocturne.h"

CP2D * __cdecl shape_superopt_cpp_CP2D_copy_FUN_005d8330(CP2D *dst,CP2D *src)

{
  dst->impl = src->impl;
  return dst;
}
