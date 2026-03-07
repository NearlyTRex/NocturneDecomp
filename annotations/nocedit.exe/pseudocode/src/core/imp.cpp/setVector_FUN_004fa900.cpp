// Name: core_imp.cpp_setVector_FUN_004fa900
// Address: 004fa900
// Address Range: [[004fa900, 004fa918]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_imp_cpp_setVector_FUN_004fa900(CVector3f *out,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_imp_cpp_setVector_FUN_004fa900(CVector3f *out,float x,float y,float z)

{
  out->x = x;
  out->z = y;
  out->y = z;
  return out;
}
