// Name: core_tbplayer.cpp_setVector_FUN_005da100
// Address: 005da100
// Address Range: [[005da100, 005da118]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005da100(CVector3f *out,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005da100(CVector3f *out,float x,float y,float z)

{
  out->x = x;
  out->z = y;
  out->y = z;
  return out;
}
