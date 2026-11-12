// Name: core_gore.cpp_convertVecFloatToFixed_FUN_004cf16e
// Address: 004cf16e
// Address Range: [[004cf16e, 004cf19c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004cf16e(CVector3f *src,CVector3i *dst)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004cf16e(CVector3f *src,CVector3i *dst)

{
  dst->x = (int)ROUND(src->x * _DAT_005e0e1c);
  dst->y = (int)ROUND(src->y * _DAT_005e0e1c);
  dst->z = (int)ROUND(src->z * _DAT_005e0e1c);
  return src;
}
