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
  CCharacter *pCVar4;
  SMotion *pSVar5;
  int iVar6;
  float fVar7;
  CMotionList *this_ptr;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  int iVar8;
  bool bVar9;
  float10 fVar10;
  double dVar11;
  CCharacter *in_stack_00000004;
  int in_stack_00000008;
  CCharacter *local_78;
  int iStack_74;
  float local_14;
  
  sound_sndmain_cpp_killSfx_FUN_005a9c40((uint)in_stack_00000004[1].base_actor.field12_0xe0.z);
  if ((in_stack_00000004[1].base_actor.field14_0xf8 != 0) &&
     (pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                         (&(in_stack_00000004->model).motion_controller), pSVar5->state_index == 0))
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
  iVar8 = *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18);
  if ((iVar8 != 0) &&
     (pCVar4 = (CCharacter *)(**(code **)(*(int *)(iVar8 + 0x154) + 0x108))(),
     pCVar4 == in_stack_00000004)) {
    (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + 0x154) +
                0x104))();
  }
  fVar7 = in_stack_00000004[1].base_actor.field12_0xe0.y;
  in_stack_00000004->hit_points = in_stack_00000004->hit_points - *(float *)(in_stack_00000008 + 4);
  if ((in_stack_00000004->model).part_visibility_flags[(int)fVar7] == 0) {
    in_stack_00000004->hit_points = 0.0;
  }
  if (in_stack_00000004->hit_points <= 0.0) {
    iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x10);
    in_stack_00000004->hit_points = 0.0;
    if (iVar8 != 0) {
      core_charactr_cpp_CCharacter_FUN_0042b8e0(in_stack_00000004);
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    if ((pSVar5->state_index != 10) && (pSVar5->state_index != 9)) {
      if ((in_stack_00000004->model).part_visibility_flags
          [(int)in_stack_00000004[1].base_actor.field12_0xe0.y] == 0) {
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).create_event[0x3c] = '\0';
        (pCVar4->base_actor).create_event[0x3d] = '\0';
        (pCVar4->base_actor).create_event[0x3e] = '\0';
        (pCVar4->base_actor).create_event[0x3f] = '\0';
      }
      else {
        pcVar2 = in_stack_00000004[1].base_actor.create_event + 0x3c;
        *(int *)pcVar2 = *(int *)pcVar2 + -1;
      }
      iVar8 = 6;
      if (*(int *)(in_stack_00000004->cloth_data + 0x35c) < 1) {
        iVar6 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
        if (iVar6 != 0) {
          iVar8 = 7;
        }
      }
      else {
        iVar6 = 0;
        pCVar4 = in_stack_00000004;
        if (0 < *(int *)(in_stack_00000004->cloth_data + 0x35c)) {
          do {
            bVar9 = *(float *)(pCVar4->cloth_data + 0x360) ==
                    in_stack_00000004[1].base_actor.field12_0xe0.x;
            if ((bVar9) || (bVar9)) {
              iVar8 = 8;
              break;
            }
            iVar6 = iVar6 + 1;
            pCVar4 = (CCharacter *)&(pCVar4->base_actor).orient.heading;
          } while (iVar6 < *(int *)(in_stack_00000004->cloth_data + 0x35c));
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,iVar8,1);
      iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                        ((uint)in_stack_00000004[1].base_actor.field13_0xec.y);
      if (iVar8 == 0) {
        fVar7 = (float)(*((in_stack_00000004->base_actor).vtable)->playSound)
                                 (&in_stack_00000004->base_actor,"ghoul-die-!-?.wav @1.6");
        in_stack_00000004[1].base_actor.field13_0xec.y = fVar7;
      }
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(4.0,10.0);
      fVar10 = (float10)local_14 * (float10)65536;
      pCVar4 = in_stack_00000004 + 1;
      (pCVar4->base_actor).create_event[0x2c] = '\0';
      (pCVar4->base_actor).create_event[0x2d] = '\0';
      (pCVar4->base_actor).create_event[0x2e] = '\n';
      (pCVar4->base_actor).create_event[0x2f] = '\0';
      dVar11 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,(in_stack_00000004->base_actor).vtable));
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x28) = (int)ROUND(fVar10);
      (**(code **)(SUB84 /* extract 2-byte value */(dVar11,0) + 0xa0))(SUB84 /* extract 2-byte value */(dVar11,0),(int)((ulonglong)dVar11 >> 0x20));
    }
  }
  else {
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                       (&(in_stack_00000004->model).motion_controller);
    iVar8 = pSVar5->state_index;
    if (((iVar8 == 0) || (iVar8 == 0xb || (iVar8 == 0xc || iVar8 == 2))) ||
       (iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.25), iVar8 != 0)) {
      iVar6 = 1;
      iVar8 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                (&(in_stack_00000004->model).motion_controller,(iVar8 == 0) + 3,iVar6);
    }
    else {
      iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(1,2);
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&local_78,"guul flinch%d",iVar8);
      this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                           (&(in_stack_00000004->model).motion_controller);
      iVar8 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
      pCVar4 = in_stack_00000004 + 1;
      (pCVar4->base_actor).create_event[0x34] = '\0';
      (pCVar4->base_actor).create_event[0x35] = '\0';
      (pCVar4->base_actor).create_event[0x36] = -0x80;
      (pCVar4->base_actor).create_event[0x37] = '?';
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x38) = iVar8;
    }
    iVar8 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                      ((uint)in_stack_00000004[1].base_actor.field13_0xec.x);
    if (iVar8 == 0) {
      fVar7 = (float)(*((in_stack_00000004->base_actor).vtable)->playSound)
                               (&in_stack_00000004->base_actor,"ghoul-mad-!-?.wav");
      in_stack_00000004[1].base_actor.field13_0xec.x = fVar7;
      iStack_74 = in_stack_00000008;
      local_78 = in_stack_00000004;
      core_enemy_cpp_FUN_004a9f10();
      return;
    }
  }
  core_enemy_cpp_FUN_004a9f10();
  return;
}
