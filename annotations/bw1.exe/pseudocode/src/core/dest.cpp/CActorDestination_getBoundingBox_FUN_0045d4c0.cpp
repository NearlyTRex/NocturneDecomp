// Name: core_dest.cpp_CActorDestination_getBoundingBox_FUN_0045d4c0
// Address: 0045d4c0
// Address Range: [[0045d4c0, 0045d543]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_dest_cpp_CActorDestination_getBoundingBox_FUN_0045d4c0(CActorDestination *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_dest_cpp_CActorDestination_getBoundingBox_FUN_0045d4c0(CActorDestination *this_ptr,CBoundingBox3D *out_box)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  CBoundingBox3D *unaff_ESI;
  uint *puVar2;
  float *pfVar3;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  CBoundingBox3D *in_stack_ffffffac;
  uint auStack_3c [2];
  float afStack_34 [6];
  uint auStack_1c [4];
  
  bVar6 = 0;
  this_ptr_00 = this_ptr->dest_actor;
  if (this_ptr_00 == (CDemonActor *)0x0) {
    iVar1 = 6;
    puVar2 = (uint *)&stack0xffffffac;
    puVar4 = auStack_3c;
  }
  else {
    puVar4 = auStack_3c;
    (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_ffffffac);
    iVar1 = 6;
    puVar2 = auStack_1c;
  }
  for (; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  pfVar3 = afStack_34;
  pCVar5 = unaff_ESI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar5->min).x = *pfVar3;
    pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  return unaff_ESI;
}
