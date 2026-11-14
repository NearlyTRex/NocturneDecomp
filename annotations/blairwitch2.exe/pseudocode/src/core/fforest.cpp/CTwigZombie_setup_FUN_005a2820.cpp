// Name: core_fforest.cpp_CTwigZombie_setup_FUN_005a2820
// Address: 005a2820
// Address Range: [[005a2820, 005a2895]]
// Convention: __cdecl
// Signature: void __cdecl core_fforest_cpp_CTwigZombie_setup_FUN_005a2820(CTwigZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_fforest_cpp_CTwigZombie_setup_FUN_005a2820(CTwigZombie *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          (&(this_ptr->base).base.base.model);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_00,"Bip01 L Finger0",1);
  this_ptr->finger_bone = iVar1;
  this_ptr->finger_parent_bone = this_ptr_00->bone_list[iVar1].parent_index;
  iVar1 = _strcmp
                    ((this_ptr->base).base.base.model.model_name,"SM_TWIG.DFM");
  if (iVar1 != 0) {
    return;
  }
  (this_ptr->base).walk_motion = 6;
  return;
}
