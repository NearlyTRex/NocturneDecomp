// Name: core_bugs.cpp_convertVector_FUN_00422050
// Address: 00422050
// Address Range: [[00422050, 0042207c]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00422050(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00422050(CVector3f *dest,CVector3i *src)

{
  dest->x = (float)src->x * _DAT_005f3e18;
  dest->y = (float)src->y * _DAT_005f3e18;
  dest->z = (float)src->z * _DAT_005f3e18;
  return src;
}
