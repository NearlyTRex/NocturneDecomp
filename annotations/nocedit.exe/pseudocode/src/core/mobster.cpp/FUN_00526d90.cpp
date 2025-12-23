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
  uint uVar3;
  float fVar4;
  float fVar5;
  CCharacter *pCVar6;
  CDemonActor *pCVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  int iVar9;
  int iVar10;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fStack_b0;
  uint auStack_a8 [10];
  CBoundingBox3D CStack_80;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f aCStack_44 [2];
  uint uStack_28;
  int local_24;
  CLocation *local_20;
  int local_1c;
  float local_14;
  
  if (*(int *)(in_stack_00000004[1].base_actor.actor_name + 0xc) == 0) {
    fVar4 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) - in_stack_00000008;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fVar4;
    if (0.0 < fVar4) {
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
        iVar10 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
        pCVar1 = &(in_stack_00000004->base_actor).location;
        if (iVar10 == 0) {
          iVar9 = 0;
          iVar10 = 0;
          local_24 = 0;
          local_20 = pCVar1;
          for (local_1c = 0; local_1c < (int)g_CDemonSetPtr->actor_list_ptr; local_1c = local_1c + 1
              ) {
            pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar10);
            pCVar7 = (*pCVar2->vtable->getCarrier)(pCVar2);
            if ((pCVar7 == (CDemonActor *)0x0) &&
               (iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CTommyGun"),
               iVar8 != 0)) {
              fStack_5c = (pCVar2->location).position.x - (local_20->position).x;
              fStack_58 = (pCVar2->location).position.y - (local_20->position).y;
              fStack_58 = fStack_58 * fStack_58;
              fStack_54 = (pCVar2->location).position.z - (local_20->position).z;
              fStack_58 = fStack_58 * fStack_58;
              fVar4 = SQRT(fStack_54 * fStack_54 + fStack_5c * fStack_5c + fStack_58 * fStack_58);
              if (((float)5 <= fVar4) && ((int)fVar4 < 0x41700001)) {
                *(CDemonActor **)((int)auStack_a8 + iVar9) = pCVar2;
                local_24 = local_24 + 1;
                iVar9 = iVar9 + 4;
                if (0x27 < iVar9) break;
              }
            }
            iVar10 = iVar10 + 4;
          }
          if (0 < local_24) {
            iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
            uVar3 = auStack_a8[iVar10];
            pCVar6 = in_stack_00000004 + 1;
            (pCVar6->base_actor).create_event[0x28] = '\0';
            (pCVar6->base_actor).create_event[0x29] = '\0';
            (pCVar6->base_actor).create_event[0x2a] = ' ';
            (pCVar6->base_actor).create_event[0x2b] = -0x3e;
            iVar10 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
            *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = uVar3;
            *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) = iVar10 + 1;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,1,1);
            return 1;
          }
        }
        else {
          iVar10 = (**(code **)(*(int *)(iVar10 + 0x154) + 0x8c))();
          if (iVar10 != 0) {
            pCVar6 = in_stack_00000004 + 1;
            (pCVar6->base_actor).create_event[0x2c] = '\0';
            (pCVar6->base_actor).create_event[0x2d] = '\0';
            (pCVar6->base_actor).create_event[0x2e] = '\0';
            (pCVar6->base_actor).create_event[0x2f] = '\0';
            pCVar6 = in_stack_00000004 + 1;
            (pCVar6->base_actor).create_event[0x28] = '\0';
            (pCVar6->base_actor).create_event[0x29] = '\0';
            (pCVar6->base_actor).create_event[0x2a] = '\0';
            (pCVar6->base_actor).create_event[0x2b] = '\0';
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,1,1);
            return 0;
          }
          iVar10 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
          fVar4 = (pCVar1->position).x - *(float *)(iVar10 + 0x20);
          fVar5 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar10 + 0x28);
          fStack_b0 = (float)5 -
                      SQRT(fVar5 * fVar5 + fVar4 * fVar4) * (float)0.33333333333333298;
          if (fStack_b0 < 1.0) {
            fStack_b0 = 1.0;
          }
          fVar4 = in_stack_00000008 * fStack_b0 +
                  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28);
          iVar10 = -1;
          *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = fVar4;
          if ((fVar4 < 0.0) &&
             (iVar9 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event +
                                                    0x2c) + 0x154) + 0x7c))(), iVar9 == 3)) {
            pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x2c);
            (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_80);
            uStack_28 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_44[0].z = CStack_80.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,aCStack_44);
            uStack_68 = 0x3fc00000;
            uStack_64 = 0;
            uStack_60 = 0;
            iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          }
          if (-1 < iVar10) {
            if (iVar10 < 1) {
              return 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      (&(in_stack_00000004->model).motion_controller,7,1);
            return 1;
          }
          pCVar6 = in_stack_00000004 + 1;
          (pCVar6->base_actor).create_event[0x2c] = '\0';
          (pCVar6->base_actor).create_event[0x2d] = '\0';
          (pCVar6->base_actor).create_event[0x2e] = '\0';
          (pCVar6->base_actor).create_event[0x2f] = '\0';
          pCVar6 = in_stack_00000004 + 1;
          (pCVar6->base_actor).create_event[0x28] = '\0';
          (pCVar6->base_actor).create_event[0x29] = '\0';
          (pCVar6->base_actor).create_event[0x2a] = -0x60;
          (pCVar6->base_actor).create_event[0x2b] = 'A';
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,1,1);
        }
      }
    }
  }
  return 0;
}
