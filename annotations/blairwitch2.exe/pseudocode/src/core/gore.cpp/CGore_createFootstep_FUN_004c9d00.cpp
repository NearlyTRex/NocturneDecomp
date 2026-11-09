// Name: core_gore.cpp_CGore_createFootstep_FUN_004c9d00
// Address: 004c9d00
// Address Range: [[004c9d00, 004c9d76]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004c9d00(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004c9d00(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cde344 + 1;
  iVar1 = _DAT_01cde344 * 0x40;
  _DAT_01cde344 = iVar2;
  if (999 < iVar2) {
    _DAT_01cde344 = 0;
  }
  if (_DAT_01cde348 < 1000) {
    _DAT_01cde348 = _DAT_01cde348 + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004c8e80
            ((CFootstep *)(iVar1 + 0x1cde34c),position,orientation,(uint)(surface_type == 0xb),alpha
             ,blood_type);
  return;
}
