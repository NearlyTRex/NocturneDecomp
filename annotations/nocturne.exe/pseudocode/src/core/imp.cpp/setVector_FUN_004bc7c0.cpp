// Name: core_imp.cpp_setVector_FUN_004bc7c0
// Address: 004bc7c0
// Address Range: [[004bc7c0, 004bc7d8]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_imp_cpp_setVector_FUN_004bc7c0(CVector3f *out,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_imp_cpp_setVector_FUN_004bc7c0(CVector3f *out,float x,float y,float z)

{
  out->x = x;
  out->z = y;
  out->y = z;
  return out;
}
