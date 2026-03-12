// Name: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
// Address: 005d1230
// Address Range: [[005d1230, 005d12c3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

{
  CPoly_vtable *pCVar2;
  int iVar3;
  int iVar2;
  CVector3d *pCVar5;
  CVector3d *pCVar3;
  CVector2d *pCVar6;
  CVector2d *pCVar4;
  byte bVar5;
  CVector3d local_74;
  CVector3d CStack_5c;
  CVector2d local_44;
  CVector2d CStack_2c;
  CPoly_vtable *local_14;
  CPoly_vtable *pCVar1;
  
  bVar5 = 0;
  pCVar2 = this_ptr->vtable;
  (*other->vtable->getCentroid)(other,&local_74);
  pCVar5 = &local_74;
  pCVar6 = &local_44;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)&pCVar6->x = *(uint *)pCVar5;
    pCVar5 = (CVector3d *)((int)pCVar5 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar6 = (CVector2d *)((int)pCVar6 + (uint)bVar5 * -8 + 4);
  }
  iVar3 = (*pCVar2->containsPoint2D)(this_ptr,&local_44);
  if (iVar3 == 0) {
    pCVar2 = other->vtable;
    (*this_ptr->vtable->getCentroid)(this_ptr,&CStack_5c);
    pCVar3 = &CStack_5c;
    pCVar4 = &CStack_2c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar4 = (CVector2d *)((int)pCVar4 + (uint)bVar5 * -8 + 4);
      pCVar3 = (CVector3d *)((int)pCVar3 + (uint)bVar5 * -8 + 4);
      *(uint *)&pCVar4->x = *(uint *)&pCVar3->x;
      pCVar3 = pCVar3;
      pCVar4 = pCVar4;
    }
    iVar3 = (*pCVar2->containsPoint2D)(other,&CStack_2c);
    if (iVar3 == 0) {
      return 0;
    }
  }
  return 1;
}
