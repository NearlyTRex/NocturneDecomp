// Name: core_conveyor.cpp_CConveyor_setup_FUN_00441d60
// Address: 00441d60
// MANUAL RECONSTRUCTION
// Address Range: [[00441d60, 00441dec] [00604858, 0060487e] [0060e508, 0060e529]]
// Convention: __cdecl
// Signature: void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00441d60(CConveyor *this_ptr)

#include "nocturne.h"

void __cdecl core_conveyor_cpp_CConveyor_setup_FUN_00441d60(CConveyor *this_ptr)

{
  CQuaternion4f local_1c;
  CVector3f *pCVar3;
  CLocation *pCVar1;
  CVector3f *pCVar2;
  
  pCVar2 = &(this_ptr->base).end_pos;
  pCVar1 = &(this_ptr->base).base.location;
  if ((CLocation *)pCVar2 != pCVar1) {
    *pCVar2 = pCVar1->position;
  }
  pCVar3 = &(this_ptr->base).start_pos;
  if (pCVar3 != pCVar2) {
    *pCVar3 = *pCVar2;
  }
  core_xform_cpp_eulerToQuaternion_FUN_005f7b20(&(this_ptr->base).base.orient.vec,&local_1c);
  (this_ptr->base).end_orient = local_1c;
  (this_ptr->base).orig_orient = (this_ptr->base).end_orient;
  core_platfrm_cpp_CPlatform_setup_FUN_0054ca20(&this_ptr->base);
  (this_ptr->base).base.is_transparent = 1;
  return;
}
