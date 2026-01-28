// Name: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
// Address: 005d1230
// Address Range: [[005d1230, 005d12c3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

{
  int iVar1;
  uint *puVar2;
  int unaff_EDI;
  uint *puVar3;
  byte bVar4;
  CVector3d *in_stack_ffffff8c;
  uint uStack_6c;
  CVector3d *in_stack_ffffff9c;
  uint local_44 [2];
  CVector2d aCStack_3c [2];
  uint auStack_1c [2];
  CPoly_vtable *local_14;
  
  bVar4 = 0;
  local_14 = this_ptr->vtable;
  (*other->vtable->getCentroid)(other,in_stack_ffffff8c);
  puVar2 = &uStack_6c;
  puVar3 = local_44;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = (**(code **)(unaff_EDI + 100))(this_ptr,aCStack_3c);
  if (iVar1 == 0) {
    uStack_6c = 0x5d129a;
    (*this_ptr->vtable->getCentroid)(this_ptr,in_stack_ffffff9c);
    puVar2 = local_44;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = (*(code *)this_ptr->vtable)(other,(CVector2d *)&local_14);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
