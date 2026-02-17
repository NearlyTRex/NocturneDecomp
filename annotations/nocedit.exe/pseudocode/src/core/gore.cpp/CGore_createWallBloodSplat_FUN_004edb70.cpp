// Name: core_gore.cpp_CGore_createWallBloodSplat_FUN_004edb70
// Address: 004edb70
// Address Range: [[004edb70, 004edba3]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004edb70(CGore *this_ptr,CVector3f *position,CVector3f *normal,int blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004edb70(CGore *this_ptr,CVector3f *position,CVector3f *normal,int blood_type)

{
  CBloodSplat *this_ptr_00;
  
  if (blood_type == 2) {
    return;
  }
  this_ptr_00 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004edaf0(this_ptr);
  core_gore_cpp_CBloodSplat_initWallSplat_FUN_004ec390(this_ptr_00,position,normal,blood_type);
  return;
}
