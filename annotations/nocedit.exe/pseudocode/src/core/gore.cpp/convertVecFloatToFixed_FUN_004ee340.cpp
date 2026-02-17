// Name: core_gore.cpp_convertVecFloatToFixed_FUN_004ee340
// Address: 004ee340
// Address Range: [[004ee340, 004ee36c]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004ee340(CVector3f *src,CVector3i *dst)

#include "nocturne.h"

CVector3f * __cdecl core_gore_cpp_convertVecFloatToFixed_FUN_004ee340(CVector3f *src,CVector3i *dst)

{
  dst->x = (int)ROUND(src->x * 65536.0f);
  dst->y = (int)ROUND(src->y * 65536.0f);
  dst->z = (int)ROUND(src->z * 65536.0f);
  return src;
}
