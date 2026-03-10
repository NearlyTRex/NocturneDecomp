// Name: core_mobster.cpp_setEulerAngles_FUN_00526b00
// Address: 00526b00
// Address Range: [[00526b00, 00526b18]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_mobster_cpp_setEulerAngles_FUN_00526b00(CVector3f *out,float x,float z,float y)

#include "nocturne.h"

CVector3f * __cdecl core_mobster_cpp_setEulerAngles_FUN_00526b00(CVector3f *out,float x,float z,float y)

{
  out->x = x;
  out->z = z;
  out->y = y;
  return out;
}
