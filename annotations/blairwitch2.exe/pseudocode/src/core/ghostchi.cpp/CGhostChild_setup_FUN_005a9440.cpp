// Name: core_ghostchi.cpp_CGhostChild_setup_FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a94be]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_setup_FUN_005a9440(CGhostChild *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_ghostchi_cpp_CGhostChild_setup_FUN_005a9440(CGhostChild *this_ptr)

{
  CSimpleParticleSystem *this_ptr_00;
  CSkeleton *this_ptr_01;
  int iVar1;
  
  core_basicene_cpp_CBasicEnemy_setup_FUN_0059e6a0(&this_ptr->base);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    ((this_ptr->base).skeleton,"Bip01 Head",1);
  this_ptr_01 = (this_ptr->base).skeleton;
  this_ptr->head_bone = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_01,"Bip01 R Hand",1);
  this_ptr->hand_bone = iVar1;
  this_ptr_00 = (this_ptr->base).base.base.base.particle_systems + 4;
  (this_ptr->base).base.base.eye_glow_bone = this_ptr->head_bone;
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_setMaxParticles_FUN_005a8030(this_ptr_00,0x100);
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_attach_FUN_005a8050(this_ptr_00,this_ptr);
  unkaddr_005a7eb0_cpp_CSimpleParticleSystem_start_FUN_005a80d0(this_ptr_00,0);
  return;
}
