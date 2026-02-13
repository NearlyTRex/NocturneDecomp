// Name: core_script.cpp_makeVector_FUN_00567d00
// Address: 00567d00
// Address Range: [[00567d00, 00567d25]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_script_cpp_makeVector_FUN_00567d00(CVector3f *out,float x,float y,float z)

#include "nocturne.h"

CVector3f * __cdecl core_script_cpp_makeVector_FUN_00567d00(CVector3f *out,float x,float y,float z)

{
  core_actor_cpp_CVector_ctor_FUN_00410340(out);
  out->x = x;
  out->z = y;
  out->y = z;
  return out;
}
