// Name: core_setutil.cpp_CDemonLight_setPosition_FUN_005851a0
// Address: 005851a0
// Address Range: [[005851a0, 005851c0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_CDemonLight_setPosition_FUN_005851a0(CDemonLight *this_ptr,CVector3i *position)

#include "nocturne.h"

void __cdecl core_setutil_cpp_CDemonLight_setPosition_FUN_005851a0(CDemonLight *this_ptr,CVector3i *position)

{
  CVector3i *pCVar1;
  
  pCVar1 = &(this_ptr->base).base.position;
  if (pCVar1 == position) {
    return;
  }
  pCVar1->x = position->x;
  (this_ptr->base).base.position.y = position->y;
  (this_ptr->base).base.position.z = position->z;
  return;
}
