// Name: core_boneguy.cpp_FUN_0041cc40
// Address: 0041cc40
// Address Range: [[0041cc40, 0041ccd1] [0041ccf1, 0041d170]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041cc40()

#include "nocturne.h"

/* Signature: byte actors_enemy_boneguy.cpp_FUN_0041cc40(uint param_1, uint
   param_2) */

uint core_boneguy_cpp_FUN_0041cc40(void)

{
  CDemonActor *pCVar1;
  uint uVar2;
  float fVar3;
  CCharacter *pCVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CBoundingBox3D *pCVar7;
  int iVar8;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  uint auStack_d0 [10];
  CBoundingBox3D CStack_a8;
  CBoundingBox3D CStack_90;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f aCStack_54 [2];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_2c;
  int iStack_28;
  int local_20;
  int iStack_1c;
  float fStack_14;
  
  fVar3 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fVar3;
  if (0.0 < fVar3) {
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) =
         *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) + 1;
    fStack_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fStack_14;
  }
  if (in_stack_00000004->carry_hands[1].carry_actor == (CDemonActor *)0x0) {
    if (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) <= 0.0) {
      iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
      if (iVar8 != 0) {
        iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))();
        if (iVar8 != 0) {
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",in_stack_00000004,
                     *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
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
        iVar8 = -1;
        if (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) < 0.0) {
          iVar6 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event + 0x2c
                                                ) + 0x154) + 0x7c))();
          if (iVar6 == 3) {
            pCVar1 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x2c);
            (*pCVar1->vtable->getBoundingBox)(pCVar1,&CStack_90);
            local_2c = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            CStack_6c.z = CStack_90.min.z + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar1,aCStack_54,&CStack_6c);
            uStack_74 = 0;
            uStack_70 = 0;
            uStack_78 = 0x3fc00000;
            iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
          }
        }
        if (-1 < iVar8) {
          if (iVar8 < 1) {
            return 1;
          }
          engine_console_cpp_CConsole_printf_FUN_00441890
                    (g_CConsolePtr,"%s beginning to pickup %s\n",in_stack_00000004,
                     *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
          core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                    (&(in_stack_00000004->model).motion_controller,7,1);
          return 1;
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s can't pick up %s, giving up!!!!\n",in_stack_00000004,
                   *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
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
        return 0;
      }
      iVar8 = 0;
      iStack_28 = 0;
      iStack_1c = 0;
      for (local_20 = 0; local_20 < (int)g_CDemonSetPtr->actor_list_ptr; local_20 = local_20 + 1) {
        pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_1c);
        pCVar5 = (*pCVar1->vtable->getCarrier)(pCVar1);
        if (pCVar5 == (CDemonActor *)0x0) {
          iVar6 = (*pCVar1->vtable->canPickup)(pCVar1,&in_stack_00000004->base_actor);
          if (iVar6 == 3) {
            pCVar7 = (*pCVar1->vtable->getBoundingBox)(pCVar1,&CStack_a8);
            fStack_60 = (pCVar7->max).x - (pCVar7->min).x;
            fStack_5c = (pCVar7->max).y - (pCVar7->min).y;
            fStack_58 = (pCVar7->max).z - (pCVar7->min).z;
            if ((((fStack_60 < 1.0) && (fStack_5c < 1.0)) && ((float)2 < fStack_58))
               && ((double)fStack_58 < 6)) {
              iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,"CBodyPart");
              if (iVar6 == 0) {
                fStack_3c = (pCVar1->location).position.x -
                            (in_stack_00000004->base_actor).location.position.x;
                fStack_38 = (pCVar1->location).position.y -
                            (in_stack_00000004->base_actor).location.position.y;
                fStack_38 = fStack_38 * fStack_38;
                fStack_34 = (pCVar1->location).position.z -
                            (in_stack_00000004->base_actor).location.position.z;
                fStack_38 = fStack_38 * fStack_38;
                fVar3 = SQRT(fStack_34 * fStack_34 + fStack_3c * fStack_3c + fStack_38 * fStack_38);
                if (((float)5 <= fVar3) && ((int)fVar3 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_d0 + iVar8) = pCVar1;
                  iStack_28 = iStack_28 + 1;
                  iVar8 = iVar8 + 4;
                  if (0x27 < iVar8) break;
                }
              }
            }
          }
        }
        iStack_1c = iStack_1c + 4;
      }
      if (0 < iStack_28) {
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,iStack_28 + -1);
        uVar2 = auStack_d0[iVar8];
        pCVar4 = in_stack_00000004 + 1;
        (pCVar4->base_actor).create_event[0x28] = '\0';
        (pCVar4->base_actor).create_event[0x29] = '\0';
        (pCVar4->base_actor).create_event[0x2a] = ' ';
        (pCVar4->base_actor).create_event[0x2b] = -0x3e;
        iVar8 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20);
        *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = uVar2;
        *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) = iVar8 + 1;
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%s is going to try to pick up %s\n",in_stack_00000004,
                   *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x2c));
        return 1;
      }
    }
    else {
      in_stack_00000008 =
           *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) - in_stack_00000008;
      *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = in_stack_00000008;
      if (in_stack_00000008 < 0.0) {
        in_stack_00000004 = in_stack_00000004 + 1;
        (in_stack_00000004->base_actor).create_event[0x28] = '\0';
        (in_stack_00000004->base_actor).create_event[0x29] = '\0';
        (in_stack_00000004->base_actor).create_event[0x2a] = '\0';
        (in_stack_00000004->base_actor).create_event[0x2b] = '\0';
      }
    }
  }
  return 0;
}
