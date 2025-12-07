// Name: core_ghoul.cpp_FUN_004e87e0
// Address: 004e87e0
// Address Range: [[004e87e0, 004e896d] [004e89a9, 004e8ba1]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e87e0()

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e87e0(uint param_1, uint param_2)
    */

void core_ghoul_cpp_FUN_004e87e0(void)

{
  CLocation *pCVar1;
  char *pcVar2;
  CVector3i *pCVar3;
  CDemonActor_vtable *pCVar4;
  CCharacter *pCVar5;
  SMotion *pSVar6;
  int iVar7;
  float fVar8;
  CMotionList *this_ptr;
  BADSPACEBASE *in_ESP;
  int iVar9;
  bool bVar10;
  double dVar11;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  float spawn_radius;
  CCharacter *local_78;
  int iStack_74;
  float local_14;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[1].base_actor.field12_0xe0.z);
  if ((in_stack_00000004[1].base_actor.field14_0xf8 != 0) &&
     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller), pSVar6->state_index == 0))
  {
    in_stack_00000004[1].base_actor.is_transparent = 0x41f00000;
    in_stack_00000004[1].base_actor.field14_0xf8 = 0;
    pCVar3 = &in_stack_00000004[1].base_actor.scale;
    in_stack_00000004[1].base_actor.field16_0x100 = 1;
    pCVar1 = &(in_stack_00000004->base_actor).location;
    in_stack_00000004[1].base_actor.field17_0x104 = 0x3f800000;
    if ((CLocation *)pCVar3 != pCVar1) {
      pCVar3->x = (int)(pCVar1->position).x;
      in_stack_00000004[1].base_actor.scale.y =
           (int)(in_stack_00000004->base_actor).location.position.y;
      in_stack_00000004[1].base_actor.scale.z =
           (int)(in_stack_00000004->base_actor).location.position.z;
    }
    engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"go berzerk\n");
  }
  if (*(int *)(in_stack_00000008 + 0x30) == 0x6c) {
    in_stack_00000004[1].base_actor.field13_0xec.z = 4.0;
  }
  core_ghoul_cpp_FUN_004e8520();
  iVar9 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
  if ((iVar9 != 0) &&
     (pCVar5 = (CCharacter *)(**(code **)(*(int *)(iVar9 + 0x154) + 0x108))(),
     pCVar5 == in_stack_00000004)) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154) +
                0x104))();
  }
  fVar8 = in_stack_00000004[1].base_actor.field12_0xe0.y;
  in_stack_00000004->hit_points = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  if ((in_stack_00000004->model).part_visibility_flags[(int)fVar8] == 0) {
    in_stack_00000004->hit_points = 0.0;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    iVar9 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x10);
    in_stack_00000004->hit_points = 0.0;
    if (iVar9 != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(in_stack_00000004);
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    if ((pSVar6->state_index != 10) && (pSVar6->state_index != 9)) {
      if ((in_stack_00000004->model).part_visibility_flags
          [(int)in_stack_00000004[1].base_actor.field12_0xe0.y] == 0) {
        pCVar5 = in_stack_00000004 + 1;
        (pCVar5->base_actor).create_event[0x3c] = '\0';
        (pCVar5->base_actor).create_event[0x3d] = '\0';
        (pCVar5->base_actor).create_event[0x3e] = '\0';
        (pCVar5->base_actor).create_event[0x3f] = '\0';
      }
      else {
        pcVar2 = in_stack_00000004[1].base_actor.create_event + 0x3c;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
      }
      iVar9 = 6;
      if (*(int *)(in_stack_00000004->cloth_data + 0x35c) < 1) {
        iVar7 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar7 != 0) {
          iVar9 = 7;
        }
      }
      else {
        iVar7 = 0;
        pCVar5 = in_stack_00000004;
        if (0 < *(int *)(in_stack_00000004->cloth_data + 0x35c)) {
          do {
            bVar10 = *(float *)(pCVar5->cloth_data + 0x360) ==
                     in_stack_00000004[1].base_actor.field12_0xe0.x;
            if ((bVar10) || (bVar10)) {
              iVar9 = 8;
              break;
            }
            iVar7 = iVar7 + 1;
            pCVar5 = (CCharacter *)&(pCVar5->base_actor).orient.heading;
          } while (iVar7 < *(int *)(in_stack_00000004->cloth_data + 0x35c));
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,iVar9,1);
      iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                        ((uint)in_stack_00000004[1].base_actor.field13_0xec.y);
      if (iVar9 == 0) {
        fVar8 = (float)(*((in_stack_00000004->base_actor).vtable)->playSound)
                                 (&in_stack_00000004->base_actor,"ghoul-die-!-?.wav @1.6");
        in_stack_00000004[1].base_actor.field13_0xec.y = fVar8;
      }
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(4.0,10.0);
      fVar8 = (float)65536;
      pCVar5 = in_stack_00000004 + 1;
      (pCVar5->base_actor).create_event[0x2c] = '\0';
      (pCVar5->base_actor).create_event[0x2d] = '\0';
      (pCVar5->base_actor).create_event[0x2e] = '\n';
      (pCVar5->base_actor).create_event[0x2f] = '\0';
      pCVar4 = (in_stack_00000004->base_actor).vtable;
      spawn_radius = 7.00649e-44;
      iVar9 = 0x4e8999;
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)(local_14 * fVar8));
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28) = (int)ROUND(dVar11);
      (*pCVar4->spawnFlies)(&in_stack_00000004->base_actor,iVar9,spawn_radius);
    }
  }
  else {
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    iVar9 = pSVar6->state_index;
    if (((iVar9 == 0) || (iVar9 == 0xb || (iVar9 == 0xc || iVar9 == 2))) ||
       (iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.25), iVar9 != 0)) {
      iVar7 = 1;
      iVar9 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,(iVar9 == 0) + 3,iVar7);
    }
    else {
      iVar9 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,2);
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&local_78,"guul flinch%d",iVar9);
      this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                           (&(in_stack_00000004->model).motion_controller);
      iVar9 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
      pCVar5 = in_stack_00000004 + 1;
      (pCVar5->base_actor).create_event[0x34] = '\0';
      (pCVar5->base_actor).create_event[0x35] = '\0';
      (pCVar5->base_actor).create_event[0x36] = -0x80;
      (pCVar5->base_actor).create_event[0x37] = '?';
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x38) = iVar9;
    }
    iVar9 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      ((uint)in_stack_00000004[1].base_actor.field13_0xec.x);
    if (iVar9 == 0) {
      fVar8 = (float)(*((in_stack_00000004->base_actor).vtable)->playSound)
                               (&in_stack_00000004->base_actor,"ghoul-mad-!-?.wav");
      in_stack_00000004[1].base_actor.field13_0xec.x = fVar8;
      iStack_74 = in_stack_00000008;
      local_78 = in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}
