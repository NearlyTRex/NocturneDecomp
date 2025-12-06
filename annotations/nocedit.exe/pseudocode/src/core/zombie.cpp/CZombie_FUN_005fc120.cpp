// Name: core_zombie.cpp_CZombie_FUN_005fc120
// Address: 005fc120
// Address Range: [[005fc120, 005fc1fc]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_FUN_005fc120()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc120(CZombie* param_1, uint
   param_2) */

uint core_zombie_cpp_CZombie_FUN_005fc120(void)

{
  CDeformableModelInstance *this_ptr;
  float fVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float local_40;
  float fStack_3c;
  float fStack_38;
  byte local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  CVector3f local_1c;
  float local_10;
  
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  fVar1 = core_motion_cpp_CMotionController_getStateBlendWeight_FUN_0052dd20
                    ((CMotionController *)this_ptr,3);
  if (fVar1 <= 0.0) {
    return 0;
  }
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (this_ptr,(CVector3f *)(local_34 + 4),*(int *)(in_stack_00000004[0x8e].create_event + 8)
            );
  core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
            (this_ptr,(CVector3f *)&stack0xffffffbc,
             *(int *)(in_stack_00000004[0x8e].create_event + 0xc));
  local_10 = local_28 + local_40;
  local_1c.x = local_10 * _DAT_006589b5;
  local_1c.y = (local_24 + fStack_3c) * _DAT_006589b5;
  local_1c.z = (local_20 + fStack_38) * _DAT_006589b5;
  pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                     (in_stack_00000004,(CVector3f *)local_34,&local_1c);
  if (in_stack_00000008 != pCVar2) {
    in_stack_00000008->x = pCVar2->x;
    in_stack_00000008->y = pCVar2->y;
    in_stack_00000008->z = pCVar2->z;
  }
  return 1;
}
