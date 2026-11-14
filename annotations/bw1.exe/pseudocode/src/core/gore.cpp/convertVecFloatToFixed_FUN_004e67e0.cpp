// Name: core_gore.cpp_convertVecFloatToFixed_FUN_004e67e0
// Address: 004e67e0
// Address Range: [[004e67e0, 004e680c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004e67e0(CVector3f *src,CVector3i *dst)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004e67e0(CVector3f *src,CVector3i *dst)

{
  dst->x = (int)ROUND(src->x * _DAT_006016ac);
  dst->y = (int)ROUND(src->y * _DAT_006016ac);
  dst->z = (int)ROUND(src->z * _DAT_006016ac);
  return src;
}
