// Name: core_setutil.cpp_CDemonLight_setPosition_FUN_005851a0
// Address: 005851a0
// Address Range: [[005851a0, 005851c0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_CDemonLight_setPosition_FUN_005851a0(CDemonLight *this_ptr,CVector3i *position)

#include "nocturne.h"

void __cdecl core_setutil_cpp_CDemonLight_setPosition_FUN_005851a0(CDemonLight *this_ptr,CVector3i *position)

{
  UVector3 *pUVar1;
  
  pUVar1 = &(this_ptr->base).base.position;
  if ((CVector3i *)pUVar1 == position) {
    return;
  }
  (pUVar1->f).x = (float)position->x;
  (this_ptr->base).base.position.f.y = (float)position->y;
  (this_ptr->base).base.position.f.z = (float)position->z;
  return;
}
