// Name: core_bugs.cpp_convertVector_FUN_00428080
// Address: 00428080
// Address Range: [[00428080, 004280ac]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00428080(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00428080(CVector3f *dest,CVector3i *src)

{
  dest->x = (float)src->x * _DAT_005fd218;
  dest->y = (float)src->y * _DAT_005fd218;
  dest->z = (float)src->z * _DAT_005fd218;
  return src;
}
