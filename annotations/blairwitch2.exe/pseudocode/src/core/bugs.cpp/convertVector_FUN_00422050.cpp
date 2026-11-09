// Name: core_bugs.cpp_convertVector_FUN_00422050
// Address: 00422050
// Address Range: [[00422050, 0042207c]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00422050(CVector3f *dest,CVector3i *src)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3i * __cdecl core_bugs_cpp_convertVector_FUN_00422050(CVector3f *dest,CVector3i *src)

{
  *(float *)dest = (float)*(int *)src * _DAT_005f3e18;
  *(float *)&dest->field_0x4 = (float)*(int *)(src + 4) * _DAT_005f3e18;
  *(float *)&dest->field_0x8 = (float)*(int *)(src + 8) * _DAT_005f3e18;
  return src;
}
