// Name: core_platfrm.cpp_CPlatform_updateAttachedActors_FUN_0054e320
// Address: 0054e320
// MANUAL RECONSTRUCTION
// Address Range: [[0054e320, 0054e3e5] [03fc4074, 03fc40da]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_0054e320(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_updateAttachedActors_FUN_0054e320(CPlatform *this_ptr)

{
  CVector3f *new_orientation;
  CVector3f *new_position;
  int iVar3;
  CMatrix3x4f local_8c;
  CMatrix3x4f local_5c;
  CVector3f local_2c;
  CVector3f local_20;
  CDemonActor *this_ptr_00;
  CDemonActor_vtable *pCVar1;

  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_8c,&(this_ptr->base).location.position,&(this_ptr->base).orient.vec);
  iVar3 = 0;
  do {
    if (this_ptr->attach_actors[iVar3].actor != (CDemonActor *)0x0) {
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                (&this_ptr->attach_actors[iVar3].matrix,&local_8c,&local_5c);
      this_ptr_00 = this_ptr->attach_actors[iVar3].actor;
      pCVar1 = (this_ptr_00->vtable)._ub;
      new_orientation = core_xform_cpp_matrixToEulerAngles_FUN_005f5690(&local_5c,&local_20);
      new_position = core_xform_cpp_getTranslation_FUN_005f6110(&local_5c,&local_2c);
      (*pCVar1->setPositionAndOrientation)(this_ptr_00,new_position,new_orientation);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  return;
}
