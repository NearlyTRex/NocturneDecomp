// Name: core_bugs.cpp_convertVector_FUN_00423c90
// Address: 00423c90
// Address Range: [[00423c90, 00423cbc]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00423c90(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00423c90(CVector3f *dest,CVector3i *src)

{
  dest->x = (float)src->x * _DAT_0059ae98;
  dest->y = (float)src->y * _DAT_0059ae98;
  dest->z = (float)src->z * _DAT_0059ae98;
  return src;
}
