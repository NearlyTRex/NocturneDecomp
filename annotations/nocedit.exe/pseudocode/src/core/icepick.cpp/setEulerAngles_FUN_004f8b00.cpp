// Name: core_icepick.cpp_setEulerAngles_FUN_004f8b00
// Address: 004f8b00
// Address Range: [[004f8b00, 004f8b18]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_icepick_cpp_setEulerAngles_FUN_004f8b00(CVector3f *out,float x,float z,float y)

#include "nocturne.h"

CVector3f * __cdecl core_icepick_cpp_setEulerAngles_FUN_004f8b00(CVector3f *out,float x,float z,float y)

{
  out->x = x;
  out->z = z;
  out->y = y;
  return out;
}
