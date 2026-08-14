// Name: core_script.cpp_makeVector_FUN_00505880
// Address: 00505880
// Address Range: [[00505880, 005058a5]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_script_cpp_makeVector_FUN_00505880(CVector3f *out,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_script_cpp_makeVector_FUN_00505880(CVector3f *out,float x,float y,float z)

{
  core_actor_cpp_CVector3f_ctor_FUN_0040e160(out);
  out->x = x;
  out->z = y;
  out->y = z;
  return out;
}
