// Name: core_mobster.cpp_FUN_00526d90
// Address: 00526d90
// Address Range: [[00526d90, 00526e9b] [00526ebb, 005271b7]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00526d90()

#include "nocturne.h"

/* Signature: byte actors_enemy_mobster.cpp_FUN_00526d90(uint param_1, uint
   param_2) */

uint core_mobster_cpp_FUN_00526d90(void)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  float fVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fVar9;
  float afStack_a8 [8];
  CBoundingBox3D CStack_88;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f aCStack_44 [2];
  uint uStack_28;
  int local_24;
  CLocation *local_20;
  float *local_1c;
  int iStack_18;
  float local_14;
  
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) == 0) {
    fVar9 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) - in_stack_00000008;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fVar9;
    if (0.0 < fVar9) {
      *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) =
           *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) + 1;
      local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
      *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = local_14;
    }
    if (((in_stack_00000004->model).part_visibility_flags
         [*(int *)(in_stack_00000004->carry_hands[1].field0_0x0 + 4)] != 0) &&
       (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
      if (0.0 < *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28)) {
        in_stack_00000008 =
             *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) - in_stack_00000008;
        *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = in_stack_00000008;
        if (in_stack_00000008 < 0.0) {
          in_stack_00000004 = in_stack_00000004 + 1;
          (in_stack_00000004->base_actor).create_event[0x28] = '\0';
          (in_stack_00000004->base_actor).create_event[0x29] = '\0';
          (in_stack_00000004->base_actor).create_event[0x2a] = '\0';
          (in_stack_00000004->base_actor).create_event[0x2b] = '\0';
          return 0;
        }
      }
      else {
        iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
        pCVar1 = &(in_stack_00000004->base_actor).location;
        if (iVar8 == 0) {
          iVar7 = 0;
          iVar8 = 0;
          local_24 = 0;
          local_1c = (float *)0x0;
          local_20 = pCVar1;
          while ((int)local_1c < (int)g_CDemonSetPtr->actor_list_ptr) {
            pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar8);
            pCVar5 = (*pCVar2->vtable->getCarrier)(pCVar2);
            if ((pCVar5 == (CDemonActor *)0x0) &&
               (iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CTommyGun"),
               iVar6 != 0)) {
              fStack_58 = (pCVar2->location).position.x - *local_1c;
              fStack_54 = (pCVar2->location).position.y - local_1c[1];
              fStack_54 = fStack_54 * fStack_54;
              CStack_50.x = (pCVar2->location).position.z - local_1c[2];
              fStack_54 = fStack_54 * fStack_54;
              afStack_a8[0] =
                   SQRT(CStack_50.x * CStack_50.x + fStack_58 * fStack_58 + fStack_54 * fStack_54);
              if (((float)5 <= afStack_a8[0]) && ((int)afStack_a8[0] < 0x41700001)) {
                *(CDemonActor **)((int)afStack_a8 + iVar7 + 4) = pCVar2;
                local_20 = (CLocation *)((int)&(local_20->position).x + 1);
                iVar7 = iVar7 + 4;
                if (0x27 < iVar7) break;
              }
            }
            iStack_18 = iStack_18 + 1;
            iVar8 = iVar8 + 4;
          }
          if (0 < local_24) {
            iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
            fVar9 = afStack_a8[iVar8];
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base_actor).create_event[0x28] = '\0';
            (pCVar4->base_actor).create_event[0x29] = '\0';
            (pCVar4->base_actor).create_event[0x2a] = ' ';
            (pCVar4->base_actor).create_event[0x2b] = -0x3e;
            iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
            *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = fVar9;
            *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) = iVar8 + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,1,1);
            return 1;
          }
        }
        else {
          iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))();
          if (iVar8 != 0) {
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base_actor).create_event[0x2c] = '\0';
            (pCVar4->base_actor).create_event[0x2d] = '\0';
            (pCVar4->base_actor).create_event[0x2e] = '\0';
            (pCVar4->base_actor).create_event[0x2f] = '\0';
            pCVar4 = in_stack_00000004 + 1;
            (pCVar4->base_actor).create_event[0x28] = '\0';
            (pCVar4->base_actor).create_event[0x29] = '\0';
            (pCVar4->base_actor).create_event[0x2a] = '\0';
            (pCVar4->base_actor).create_event[0x2b] = '\0';
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,1,1);
            return 0;
          }
          iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
          fVar9 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
          fVar3 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar8 + 0x28);
          fVar9 = (float)5 -
                  SQRT(fVar3 * fVar3 + fVar9 * fVar9) * (float)0.33333333333333298;
          if (fVar9 < 1.0) {
            fVar9 = 1.0;
          }
          fVar9 = in_stack_00000008 * fVar9 +
                  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28);
          iVar8 = -1;
          *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = fVar9;
          if ((fVar9 < 0.0) &&
             (iVar7 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event +
                                                    0x2c) + 0x154) + 0x7c))(), iVar7 == 3)) {
            pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x2c);
            (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_88);
            uStack_28 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_44[0].z = CStack_88.max.y + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,aCStack_44);
            uStack_68 = 0x3fc00000;
            uStack_64 = 0;
            uStack_60 = 0;
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          }
          if (-1 < iVar8) {
            if (iVar8 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,7,1);
            return 1;
          }
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).create_event[0x2c] = '\0';
          (pCVar4->base_actor).create_event[0x2d] = '\0';
          (pCVar4->base_actor).create_event[0x2e] = '\0';
          (pCVar4->base_actor).create_event[0x2f] = '\0';
          pCVar4 = in_stack_00000004 + 1;
          (pCVar4->base_actor).create_event[0x28] = '\0';
          (pCVar4->base_actor).create_event[0x29] = '\0';
          (pCVar4->base_actor).create_event[0x2a] = -0x60;
          (pCVar4->base_actor).create_event[0x2b] = 'A';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,1,1);
        }
      }
    }
  }
  return 0;
}
