// Name: core_gore.cpp_CGore_createFootstep_FUN_004cee70
// Address: 004cee70
// Address Range: [[004cee70, 004ceeee]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004cee70(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004cee70(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

{
  int iVar1;
  CFootstep *this_ptr_00;
  
  iVar1 = g_INT_01d4aec4 + 1;
  this_ptr_00 = g_CFootstep_ARRAY_01d4aecc + g_INT_01d4aec4;
  g_INT_01d4aec4 = iVar1;
  if (999 < iVar1) {
    g_INT_01d4aec4 = 0;
  }
  if (g_FootstepCount < 1000) {
    g_FootstepCount = g_FootstepCount + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004ce170
            (this_ptr_00,position,orientation,(uint)(surface_type == 0xb),alpha,blood_type);
  return;
}
