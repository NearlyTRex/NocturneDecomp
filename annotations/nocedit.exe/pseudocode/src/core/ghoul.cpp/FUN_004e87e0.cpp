// Name: core_ghoul.cpp_FUN_004e87e0
// Address: 004e87e0
// Address Range: [[004e87e0, 004e896d] [004e89a9, 004e8ba1]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_FUN_004e87e0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e87e0(uint param_1, uint param_2)
    */

void __cdecl core_ghoul_cpp_FUN_004e87e0(void)

{
  CLocation *pCVar1;
  CDeformableModelInstance *this_ptr;
  float *pfVar2;
  char *pcVar3;
  CDemonActor_vtable *pCVar4;
  CCharacter *pCVar5;
  CEnemy *pCVar6;
  SMotion *pSVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  CMotionList *this_ptr_00;
  int iVar11;
  double dVar12;
  CEnemy *in_stack_00000004;
  SDamageInfo *in_stack_00000008;
  float spawn_radius;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[1].base.base.orient_matrix.m[2].y);
  if ((in_stack_00000004[1].base.base.validation_magic != 0) &&
     (pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->base).model.motion_controller),
     pSVar7->state_index == 0)) {
    in_stack_00000004[1].base.base.unk1 = 0x41f00000;
    in_stack_00000004[1].base.base.validation_magic = 0;
    pcVar3 = in_stack_00000004[1].base.base.create_event;
    in_stack_00000004[1].base.base.was_created = 1;
    pCVar1 = &(in_stack_00000004->base).base.location;
    in_stack_00000004[1].base.base.create_prob = 1.0;
    if ((CLocation *)pcVar3 != pCVar1) {
      *(float *)pcVar3 = (pCVar1->position).x;
      *(float *)(in_stack_00000004[1].base.base.create_event + 4) =
           (in_stack_00000004->base).base.location.position.y;
      *(float *)(in_stack_00000004[1].base.base.create_event + 8) =
           (in_stack_00000004->base).base.location.position.z;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"go berzerk\n");
  }
  if (in_stack_00000008->damage_type == 0x6c) {
    in_stack_00000004[1].base.base.health = 0x40800000;
  }
  core_ghoul_cpp_FUN_004e8520();
  if ((*(int *)(in_stack_00000004->unk2 + 4) != 0) &&
     (pCVar6 = (CEnemy *)
               (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x108))(),
     pCVar6 == in_stack_00000004)) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004->unk2 + 4) + 0x154) + 0x104))();
  }
  fVar10 = in_stack_00000004[1].base.base.orient_matrix.m[2].x;
  (in_stack_00000004->base).hit_points =
       (in_stack_00000004->base).hit_points - in_stack_00000008->damage_amount;
  if ((in_stack_00000004->base).model.part_visibility_flags[(int)fVar10] == 0) {
    (in_stack_00000004->base).hit_points = 0.0;
  }
  this_ptr = &(in_stack_00000004->base).model;
  if ((in_stack_00000004->base).hit_points <= 0.0) {
    iVar11 = in_stack_00000004->unk3;
    (in_stack_00000004->base).hit_points = 0.0;
    if (iVar11 != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(&in_stack_00000004->base);
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
      return;
    }
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    if ((pSVar7->state_index != 10) && (pSVar7->state_index != 9)) {
      if ((in_stack_00000004->base).model.part_visibility_flags
          [(int)in_stack_00000004[1].base.base.orient_matrix.m[2].x] == 0) {
        in_stack_00000004[1].base.base.location.position.y = 0.0;
      }
      else {
        pfVar2 = &in_stack_00000004[1].base.base.location.position.y;
        *pfVar2 = (float)((int)*pfVar2 + -1);
      }
      iVar11 = 6;
      if (*(int *)((in_stack_00000004->base).cloth_data + 0x35c) < 1) {
        iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar8 != 0) {
          iVar11 = 7;
        }
      }
      else {
        iVar8 = 0;
        pCVar6 = in_stack_00000004;
        if (0 < *(int *)((in_stack_00000004->base).cloth_data + 0x35c)) {
          do {
            if (*(float *)((pCVar6->base).cloth_data + 0x360) ==
                in_stack_00000004[1].base.base.orient_matrix.m[1].z) {
              iVar11 = 8;
              break;
            }
            iVar8 = iVar8 + 1;
            pCVar6 = (CEnemy *)&(pCVar6->base).base.orient.heading;
          } while (iVar8 < *(int *)((in_stack_00000004->base).cloth_data + 0x35c));
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,iVar11,1);
      iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                         (in_stack_00000004[1].base.base.runtime_state);
      if (iVar11 == 0) {
        iVar11 = (*((in_stack_00000004->base).base.vtable._ub)->playSound)
                           ((CDemonActor *)in_stack_00000004,"ghoul-die-!-?.wav @1.6");
        in_stack_00000004[1].base.base.runtime_state = iVar11;
      }
      fVar9 = core_actor_cpp_getRandomFloat_FUN_0040cc10(4.0,10.0);
      fVar10 = (float)65536;
      pCVar5 = &in_stack_00000004[1].base;
      (pCVar5->base).actor_name[0x14] = '\0';
      (pCVar5->base).actor_name[0x15] = '\0';
      (pCVar5->base).actor_name[0x16] = '\n';
      (pCVar5->base).actor_name[0x17] = '\0';
      pCVar4 = (in_stack_00000004->base).base.vtable._ub;
      spawn_radius = 7.00649e-44;
      iVar11 = 0x4e8999;
      dVar12 = round((double)(fVar9 * fVar10));
      *(int *)(in_stack_00000004[1].base.base.actor_name + 0x10) = (int)ROUND(dVar12);
      (*pCVar4->spawnFlies)((CDemonActor *)in_stack_00000004,iVar11,spawn_radius);
    }
  }
  else {
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&this_ptr->motion_controller);
    iVar11 = pSVar7->state_index;
    if (((iVar11 == 0) || (iVar11 == 0xb || (iVar11 == 0xc || iVar11 == 2))) ||
       (iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.25), iVar11 != 0)) {
      iVar8 = 1;
      iVar11 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->base).model.motion_controller,(iVar11 == 0) + 3,iVar8);
    }
    else {
      iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,2);
      sprintf(&stack0xffffff88,"guul flinch%d",iVar11);
      this_ptr_00 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                              (&(in_stack_00000004->base).model.motion_controller);
      fVar10 = (float)core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr_00);
      pCVar5 = &in_stack_00000004[1].base;
      (pCVar5->base).actor_name[0x1c] = '\0';
      (pCVar5->base).actor_name[0x1d] = '\0';
      (pCVar5->base).actor_name[0x1e] = -0x80;
      (pCVar5->base).actor_name[0x1f] = '?';
      in_stack_00000004[1].base.base.location.position.x = fVar10;
    }
    iVar11 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                       ((uint)in_stack_00000004[1].base.base.orient_matrix.m[2].z);
    if (iVar11 == 0) {
      fVar10 = (float)(*((in_stack_00000004->base).base.vtable._ub)->playSound)
                                ((CDemonActor *)in_stack_00000004,"ghoul-mad-!-?.wav");
      in_stack_00000004[1].base.base.orient_matrix.m[2].z = fVar10;
      core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(in_stack_00000004,in_stack_00000008);
  return;
}
