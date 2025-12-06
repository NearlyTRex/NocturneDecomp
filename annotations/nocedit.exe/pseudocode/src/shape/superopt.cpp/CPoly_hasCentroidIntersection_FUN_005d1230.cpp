// Name: shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230
// Address: 005d1230
// Address Range: [[005d1230, 005d12c3]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly * this_ptr, CPoly * other)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CPoly_hasCentroidIntersection_FUN_005d1230(CPoly *this_ptr,CPoly *other)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int unaff_retaddr;
  CPoly_vtable *pCStack00000014;
  int in_stack_00000028;
  CVector3d *in_stack_ffffff8c;
  uint auStack_60 [3];
  uint uStack_54;
  CVector3d *in_stack_ffffffb4;
  uint local_44;
  CVector2d CStack_30;
  uint auStack_20 [3];
  CPoly_vtable *local_14;
  
  bVar4 = 0;
  local_14 = this_ptr->vtable;
  (*other->vtable->getCentroid)(other,in_stack_ffffff8c);
  puVar2 = auStack_60;
  puVar3 = &local_44;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = (**(code **)(unaff_retaddr + 100))(this_ptr,&CStack_30);
  if (iVar1 == 0) {
    pCStack00000014 = other->vtable;
    uStack_54 = 0x5d129a;
    (*this_ptr->vtable->getCentroid)(this_ptr,in_stack_ffffffb4);
    puVar2 = auStack_20;
    puVar3 = (uint *)&stack0xfffffffc;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    local_44 = 0x5d12b5;
    iVar1 = (**(code **)(in_stack_00000028 + 100))(other,(CVector2d *)&stack0x00000010);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
