// Name: core_skeleton.cpp_SVert_dtor_FUN_005a1f90
// Address: 005a1f90
// Address Range: [[005a1f90, 005a1fa5]]
// Convention: __cdecl
// Signature: SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_005a1f90(SVert *this_ptr)

#include "nocturne.h"

SVert * __cdecl core_skeleton_cpp_SVert_dtor_FUN_005a1f90(SVert *this_ptr)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_freeVectors_FUN_0043e460(&this_ptr->position);
  return (SVert *)&pCVar1[-2].z;
}
