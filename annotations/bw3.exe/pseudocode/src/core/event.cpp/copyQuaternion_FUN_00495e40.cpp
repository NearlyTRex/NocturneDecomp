// Name: core_event.cpp_copyQuaternion_FUN_00495e40
// Address: 00495e40
// Address Range: [[00495e40, 00495e5e]]
// Convention: __cdecl
// Signature: CQuaternion4f * __cdecl core_event_cpp_copyQuaternion_FUN_00495e40(CQuaternion4f *dest,CQuaternion4f *src)

#include "nocturne.h"

CQuaternion4f * __cdecl core_event_cpp_copyQuaternion_FUN_00495e40(CQuaternion4f *dest,CQuaternion4f *src)

{
  dest->w = src->w;
  dest->x = src->x;
  dest->y = src->y;
  dest->z = src->z;
  return dest;
}
