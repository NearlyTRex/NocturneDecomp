// Name: core_bugs.cpp_convertVector_FUN_00428080
// Address: 00428080
// Address Range: [[00428080, 004280ac]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00428080(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00428080(CVector3f *dest,CVector3i *src)

{
  *(float *)dest = (float)*(int *)src * _DAT_005fd218;
  *(float *)&dest->field_0x4 = (float)*(int *)(src + 4) * _DAT_005fd218;
  *(float *)&dest->field_0x8 = (float)*(int *)(src + 8) * _DAT_005fd218;
  return src;
}
