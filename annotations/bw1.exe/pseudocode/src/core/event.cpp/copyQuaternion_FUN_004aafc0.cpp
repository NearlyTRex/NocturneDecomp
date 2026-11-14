// Name: core_event.cpp_copyQuaternion_FUN_004aafc0
// Address: 004aafc0
// Address Range: [[004aafc0, 004aafde]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_event_cpp_copyQuaternion_FUN_004aafc0(CQuaternion4f *dest,CQuaternion4f *src)

#include "nocturne.h"

CQuaternion4f * __cdecl core_event_cpp_copyQuaternion_FUN_004aafc0(CQuaternion4f *dest,CQuaternion4f *src)

{
  dest->w = src->w;
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return dest;
}
