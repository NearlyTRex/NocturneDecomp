// Name: core_mobster.cpp_setEulerAngles_FUN_004dba50
// Address: 004dba50
// Address Range: [[004dba50, 004dba68]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_mobster_cpp_setEulerAngles_FUN_004dba50(CVector3f *out,float x,float z,float y)

#include "nocturne.h"

CVector3f * __cdecl core_mobster_cpp_setEulerAngles_FUN_004dba50(CVector3f *out,float x,float z,float y)

{
  out->x = x;
  out->z = z;
  out->y = y;
  return out;
}
