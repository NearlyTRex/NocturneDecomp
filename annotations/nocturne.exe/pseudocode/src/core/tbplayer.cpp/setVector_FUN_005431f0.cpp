// Name: core_tbplayer.cpp_setVector_FUN_005431f0
// Address: 005431f0
// Address Range: [[005431f0, 00543208]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005431f0(CVector3f *out,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_tbplayer_cpp_setVector_FUN_005431f0(CVector3f *out,float x,float y,float z)

{
  out->x = x;
  out->z = y;
  out->y = z;
  return out;
}
