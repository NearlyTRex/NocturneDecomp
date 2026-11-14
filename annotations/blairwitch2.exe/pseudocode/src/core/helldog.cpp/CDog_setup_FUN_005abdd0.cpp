// Name: core_helldog.cpp_CDog_setup_FUN_005abdd0
// Address: 005abdd0
// Address Range: [[005abdd0, 005abe8c]]
// Convention: __cdecl
// Signature: void __cdecl core_helldog_cpp_CDog_setup_FUN_005abdd0(CDog *this_ptr)

#include "nocturne.h"

void __cdecl core_helldog_cpp_CDog_setup_FUN_005abdd0(CDog *this_ptr)

{
  CDemonActor *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  CVector3f *pCVar2;
  uint auStack_1c [3];
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    ((this_ptr->base).skeleton,"Dummy01",1);
  this_ptr_00 = this_ptr->food;
  this_ptr->mouth_bone = iVar1;
  if (this_ptr_00 != (CDemonActor *)0x0) {
    (*((this_ptr_00->vtable)._ub)->pickup)(this_ptr_00,(CDemonActor *)this_ptr);
  }
  iVar1 = _strcmp
                    ((this_ptr->base).base.base.model.model_name,"BDOG.DFM");
  if (iVar1 == 0) {
    this_ptr_01 = (this_ptr->base).skeleton;
    pCVar2 = &(this_ptr->base).base.base.eye_glow_color;
    (this_ptr->base).base.base.eye_glow_enabled = 1;
    iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 Head",1);
    (this_ptr->base).base.base.eye_glow_bone = iVar1;
    if (pCVar2 != (CVector3f *)auStack_1c) {
      pCVar2->x = 1.0;
      (this_ptr->base).base.base.eye_glow_color.y = 0.0;
      (this_ptr->base).base.base.eye_glow_color.z = 0.0;
      return;
    }
  }
  return;
}
