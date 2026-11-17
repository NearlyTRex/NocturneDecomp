// Name: core_gore.cpp_CGore_createFootstep_FUN_004b06b0
// Address: 004b06b0
// Address Range: [[004b06b0, 004b0726]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004b06b0(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004b06b0(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type)

{
  int iVar1;
  CFootstep *this_ptr_00;
  
  iVar1 = g_INT_01c9e53c + 1;
  this_ptr_00 = g_Footsteps + g_INT_01c9e53c;
  g_INT_01c9e53c = iVar1;
  if (999 < iVar1) {
    g_INT_01c9e53c = 0;
  }
  if (g_INT_01c9e540 < 1000) {
    g_INT_01c9e540 = g_INT_01c9e540 + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004af8a0
            (this_ptr_00,position,orientation,(uint)(surface_type == 0xb),alpha,blood_type);
  return;
}
