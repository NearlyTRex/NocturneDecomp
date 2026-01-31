// Name: core_zombie.cpp_CZombie_FUN_005fc4f0
// Address: 005fc4f0
// Address Range: [[005fc4f0, 005fc706]]
// Convention: __cdecl
// Signature: void __cdecl core_zombie_cpp_CZombie_FUN_005fc4f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_FUN_005fc4f0(CZombie* param_1, uint
   param_2) */

void __cdecl core_zombie_cpp_CZombie_FUN_005fc4f0(void)

{
  CDeformableModelInstance *this_ptr;
  CPlatform *pCVar1;
  SMotion *pSVar2;
  CMotionList *this_ptr_00;
  int iVar3;
  float fVar4;
  int iVar5;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  char *sound_name;
  
  core_zombie_cpp_CZombie_FUN_005fc220();
  (*(((in_stack_00000004->base).base.vtable._uc)->_uc).cfunc9)();
  pCVar1 = in_stack_00000004[1].base.base.standing_platform;
  (in_stack_00000004->base).hit_points =
       (int)((float)(in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount);
  if ((in_stack_00000004->base).model.part_visibility_flags[(int)pCVar1] == 0) {
    (in_stack_00000004->base).hit_points = 0;
  }
  fVar4 = (float)(in_stack_00000004->base).hit_points;
  this_ptr = &(in_stack_00000004->base).model;
  in_stack_00000004->unk2[0] = -0x66;
  in_stack_00000004->unk2[1] = -0x67;
  in_stack_00000004->unk2[2] = -0x67;
  in_stack_00000004->unk2[3] = '?';
  if (0.0 < fVar4) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00(&this_ptr->motion_controller,4,1)
    ;
    if (in_stack_00000004[1].base.base.unk3.x <= 0.0) {
      fVar4 = in_stack_00000004[1].base.base.unk3.z;
      in_stack_00000004[1].base.base.unk3.x = 2.0;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660((uint)fVar4);
      if (iVar5 == 0) {
        if (*(int *)(in_stack_00000004[1].base.base.create_event + 0x1c) != 0) {
          fVar4 = (float)(*((in_stack_00000004->base).base.vtable._ub)->playSound)
                                   ((CDemonActor *)in_stack_00000004,"f-zombie-hit?.wav");
          in_stack_00000004[1].base.base.unk3.z = fVar4;
          core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
          return;
        }
        fVar4 = (float)(*((in_stack_00000004->base).base.vtable._ub)->playSound)
                                 ((CDemonActor *)in_stack_00000004,"zom-s0?.wav");
        in_stack_00000004[1].base.base.unk3.z = fVar4;
        core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
        return;
      }
    }
  }
  else {
    (in_stack_00000004->base).hit_points = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar2->state_index != 8) && (pSVar2->state_index != 7)) {
      core_zombie_cpp_CZombie_FUN_005fbde0();
      iVar5 = 6;
      if (((in_stack_00000004->base).model.part_visibility_flags
           [(int)in_stack_00000004[1].base.base.standing_platform] == 0) &&
         (((in_stack_00000004->base).model.part_visibility_flags
           [*(int *)(in_stack_00000004[1].base.base.create_event + 0x54)] != 0 ||
          ((in_stack_00000004->base).model.part_visibility_flags
           [*(int *)(in_stack_00000004[1].base.base.create_event + 0x4c)] != 0)))) {
        this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                                (&(in_stack_00000004->base).model.motion_controller);
        iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
        if (-1 < iVar3) {
          iVar5 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,iVar5,1);
      sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[1].base.base.unk3.z);
      if (*(int *)(in_stack_00000004[1].base.base.create_event + 0x1c) == 0) {
        sound_name = "zom-d0?.wav";
      }
      else {
        sound_name = "f-zombie-die?.wav";
      }
      (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                ((CDemonActor *)in_stack_00000004,sound_name);
      (*((in_stack_00000004->base).base.vtable._ub)->spawnFlies)
                ((CDemonActor *)in_stack_00000004,0x32,25.0);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
