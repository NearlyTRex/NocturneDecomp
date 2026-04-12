// Name: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
// Address: 005d1230
// Address Range: [[005d1230, 005d12c3] [03fc4976, 03fc49f1]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

{
  CPoly_vtable *pCVar2;
  int iVar3;
  int iVar2;
  CVector3d *pCVar3;
  CVector2d *pCVar4;
  byte bVar5;
  CVector3d local_74;
  CVector3d CStack_5c;
  CVector3d local_44;
  CVector3d CStack_2c;
  CPoly_vtable *local_14;
  CPoly_vtable *pCVar1;
  
  pCVar2 = this_ptr->vtable;
  (*other->vtable->getCentroid)(other,&local_74);
  iVar3 = (*pCVar2->containsPoint)(this_ptr,&local_44);
  if (iVar3 == 0) {
    pCVar2 = other->vtable;
    (*this_ptr->vtable->getCentroid)(this_ptr,&CStack_5c);
    iVar3 = (*pCVar2->containsPoint)(other,&CStack_2c);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}
