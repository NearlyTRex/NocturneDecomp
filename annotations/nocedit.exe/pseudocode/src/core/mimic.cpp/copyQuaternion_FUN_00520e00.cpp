// Name: core_mimic.cpp_copyQuaternion_FUN_00520e00
// Address: 00520e00
// Address Range: [[00520e00, 00520e1e]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_mimic_cpp_copyQuaternion_FUN_00520e00(CQuaternion4f *dest,CQuaternion4f *src)

#include "nocturne.h"

CQuaternion4f * __cdecl core_mimic_cpp_copyQuaternion_FUN_00520e00(CQuaternion4f *dest,CQuaternion4f *src)

{
  dest->w = src->w;
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return dest;
}
