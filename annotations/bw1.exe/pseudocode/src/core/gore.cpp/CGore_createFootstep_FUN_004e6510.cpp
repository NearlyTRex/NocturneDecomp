// Name: core_gore.cpp_CGore_createFootstep_FUN_004e6510
// Address: 004e6510
// Address Range: [[004e6510, 004e6586]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004e6510(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004e6510(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01cf6efc + 1;
  iVar1 = _DAT_01cf6efc * 0x40;
  _DAT_01cf6efc = iVar2;
  if (999 < iVar2) {
    _DAT_01cf6efc = 0;
  }
  if (_DAT_01cf6f00 < 1000) {
    _DAT_01cf6f00 = _DAT_01cf6f00 + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004e56e0
            ((CFootstep *)(iVar1 + 0x1cf6f04),position,orientation,(uint)(surface_type == 0xb),alpha
             ,blood_type);
  return;
}
