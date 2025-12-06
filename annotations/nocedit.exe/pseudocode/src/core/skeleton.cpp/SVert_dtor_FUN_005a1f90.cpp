// Name: core_skeleton.cpp_SVert_dtor_FUN_005a1f90
// Address: 005a1f90
// Address Range: [[005a1f90, 005a1fa5]]
// Convention: __cdecl
// Signature: SVert * core_skeleton.cpp_SVert_dtor_FUN_005a1f90(SVert * this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_005a1f90(SVert *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)&this_ptr->position);
  return (SVert *)(iVar1 + -0x10);
}
