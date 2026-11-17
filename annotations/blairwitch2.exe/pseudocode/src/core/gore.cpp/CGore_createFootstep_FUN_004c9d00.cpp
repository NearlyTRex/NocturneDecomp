// Name: core_gore.cpp_CGore_createFootstep_FUN_004c9d00
// Address: 004c9d00
// Address Range: [[004c9d00, 004c9d76]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004c9d00(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004c9d00(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

{
  int iVar1;
  CFootstep *this_ptr_00;
  
  iVar1 = g_INT_01cde344 + 1;
  this_ptr_00 = g_CFootstep_ARRAY_01cde34c + g_INT_01cde344;
  g_INT_01cde344 = iVar1;
  if (999 < iVar1) {
    g_INT_01cde344 = 0;
  }
  if (g_INT_01cde348 < 1000) {
    g_INT_01cde348 = g_INT_01cde348 + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004c8e80
            (this_ptr_00,position,orientation,(uint)(surface_type == 0xb),alpha,blood_type);
  return;
}
