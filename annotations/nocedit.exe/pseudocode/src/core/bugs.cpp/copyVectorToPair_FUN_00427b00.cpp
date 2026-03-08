// Name: core_bugs.cpp_copyVectorToPair_FUN_00427b00
// Address: 00427b00
// Address Range: [[00427b00, 00427b3c]]
// Convention: __cdecl
// Signature: CVector3i * __cdecl core_bugs_cpp_copyVectorToPair_FUN_00427b00(CVector3i *dest,CVector3i *src)

#include "nocturne.h"

CVector3i * __cdecl core_bugs_cpp_copyVectorToPair_FUN_00427b00(CVector3i *dest,CVector3i *src)

{
  if (dest == src) {
    if (dest + 1 == src) {
      return src;
    }
  }
  else {
    dest->x = src->x;
    dest->y = src->y;
    dest->z = src->z;
    if (dest + 1 == src) {
      return src;
    }
  }
  dest[1].x = src->x;
  dest[1].y = src->y;
  dest[1].z = src->z;
  return src;
}
