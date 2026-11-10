// Name: core_bugs.cpp_convertVector_FUN_00424230
// Address: 00424230
// Address Range: [[00424230, 0042425c]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00424230(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00424230(CVector3f *dest,CVector3i *src)

{
  dest->x = (float)src->x * _DAT_005dcbb8;
  dest->y = (float)src->y * _DAT_005dcbb8;
  dest->z = (float)src->z * _DAT_005dcbb8;
  return src;
}
