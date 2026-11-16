// Name: core_prye.cpp_makeVector_FUN_00527200
// Address: 00527200
// Address Range: [[00527200, 00527228]]
// Convention: __stack3_esi
// Signature: CVector3f * __stack3_esi core_prye_cpp_makeVector_FUN_00527200(float x,float y,float z,CVector3f *out)

#include "nocturne.h"

CVector3f * __stack3_esi core_prye_cpp_makeVector_FUN_00527200(float x,float y,float z,CVector3f *out)

{
  out->x = x;
  out->y = z;
  out->z = y;
  return out;
}
