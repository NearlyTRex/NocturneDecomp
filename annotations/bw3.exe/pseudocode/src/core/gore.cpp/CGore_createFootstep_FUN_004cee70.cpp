// Name: core_gore.cpp_CGore_createFootstep_FUN_004cee70
// Address: 004cee70
// Address Range: [[004cee70, 004ceeee]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004cee70(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_createFootstep_FUN_004cee70(CGore *this_ptr,CVector3f *position,UOrientationVector *orientation,int surface_type ,int alpha,EBloodType blood_type)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _DAT_01d4aec4 + 1;
  iVar1 = _DAT_01d4aec4 * 0x44;
  _DAT_01d4aec4 = iVar2;
  if (999 < iVar2) {
    _DAT_01d4aec4 = 0;
  }
  if (_DAT_01d4aec8 < 1000) {
    _DAT_01d4aec8 = _DAT_01d4aec8 + 1;
  }
  core_gore_cpp_CFootstep_init_FUN_004ce170
            ((CFootstep *)(iVar1 + 0x1d4aecc),position,orientation,(uint)(surface_type == 0xb),alpha
             ,blood_type);
  return;
}
