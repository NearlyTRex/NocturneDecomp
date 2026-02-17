// Name: core_gore.cpp_CGore_createFootstep_FUN_004ee070
// Address: 004ee070
// Address Range: [[004ee070, 004ee0e6]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004ee070(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004ee070(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,int blood_type)

{
  int iVar1;
  CFootstep *this_ptr_00;
  
  iVar1 = g_FootstepIndex + 1;
  this_ptr_00 = g_Footsteps + g_FootstepIndex;
  g_FootstepIndex = iVar1;
  if (999 < iVar1) {
    g_FootstepIndex = 0;
  }
  if (g_FootstepCount < 1000) {
    g_FootstepCount = g_FootstepCount + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004ed240
            (this_ptr_00,position,orientation,(uint)(surface_type == 0xb),alpha,blood_type);
  return;
}
