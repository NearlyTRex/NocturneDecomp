// Name: core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_004f7700
// Address: 004f7700
// Address Range: [[004f7700, 004f77c5]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_004f7700(CPlatform *this_ptr)

{
  CDemonActor *this_ptr_00;
  CDemonActor_vtable *pCVar1;
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar2;
  int iVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f local_bc;
  CMatrix3x4f local_8c;
  uint local_5c [12];
  CVector3f local_2c;
  CVector3f local_20;
  SPlatformAttachment *local_14;
  
  bVar6 = 0;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
            (&local_8c,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
  local_14 = this_ptr->attach_actors;
  iVar3 = 0;
  do {
    if (this_ptr->attach_actors[0].actor != (CDemonActor *)0x0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_14[iVar3].matrix,&local_8c);
      puVar4 = local_5c;
      pCVar5 = &local_bc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pCVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      this_ptr_00 = this_ptr->attach_actors[0].actor;
      pCVar1 = (this_ptr_00->vtable)._ub;
      new_orientation = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&local_bc,&local_20);
      new_position = core_xform_cpp_getTranslation_FUN_0055bc00(&local_bc,&local_2c);
      (*pCVar1->setPositionAndOrientation)(this_ptr_00,new_position,new_orientation);
    }
    iVar3 = iVar3 + 1;
    this_ptr = (CPlatform *)((int)&(this_ptr->base).orient + 4);
  } while (iVar3 < 10);
  return;
}
