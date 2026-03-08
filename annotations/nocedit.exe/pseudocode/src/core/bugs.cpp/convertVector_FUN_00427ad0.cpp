// Name: core_bugs.cpp_convertVector_FUN_00427ad0
// Address: 00427ad0
// Address Range: [[00427ad0, 00427afc]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00427ad0(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00427ad0(CVector3f *dest,CVector3i *src)

{
  dest->x = (float)src->x * 0.00390625f;
  dest->y = (float)src->y * 0.00390625f;
  dest->z = (float)src->z * 0.00390625f;
  return src;
}
