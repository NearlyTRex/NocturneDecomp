// Name: core_gore.cpp_convertVecFloatToFixed_FUN_004c9fce
// Address: 004c9fce
// Address Range: [[004c9fce, 004c9ffc]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004c9fce(CVector3f *src,CVector3i *dst)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004c9fce(CVector3f *src,CVector3i *dst)

{
  dst->x = (int)ROUND(src->x * _DAT_005f7bac);
  dst->y = (int)ROUND(src->y * _DAT_005f7bac);
  dst->z = (int)ROUND(src->z * _DAT_005f7bac);
  return src;
}
