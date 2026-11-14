// Name: core_gabriela.cpp_FUN_004b0ef0
// Address: 004b0ef0
// Address Range: [[004b0ef0, 004b0f68]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004b0ef0(CDemonActor *param_1)

#include "nocturne.h"

void core_gabriela_cpp_FUN_004b0ef0(CDemonActor *param_1)

{
  CCharacter *this_ptr;
  int iVar1;
  CDemonActor *unaff_ESI;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,param_1);
  this_ptr = (CCharacter *)
             (&param_1[0xd8].particle_systems[1].owner)[*(int *)(param_1[0xd8].actor_name + 4)];
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).isGrabbable)(this_ptr,unaff_ESI);
  if ((iVar1 != 0) &&
     ((&param_1[0xd8].particle_systems[1].owner)[*(int *)(param_1[0xd8].actor_name + 4)][1].
      particle_systems[0].fade_timer == 1.4013e-45)) {
    param_1[0xdd].blood_effect_timer = 0x3f800000;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
  param_1[0xdd].platform_orientation_delta.z = 0.0;
  return;
}
