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
  uint auStack_c0 [8];
  byte auStack_a0 [20];
  float fStack_8c;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  CVector3f aCStack_70 [2];
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  uint uStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  int local_20;
  float local_18;
  
  fVar3 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = fVar3;
  if (0.0 < fVar3) {
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) =
         *(int *)(in_stack_00000004[1].base_actor.create_event + 0x20) + 1;
    local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x24) = local_18;
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
            (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)(auStack_a0 + 4));
            uStack_30 = 0x3f000000;
            core_bodypart_cpp_FUN_0041b540();
            core_bodypart_cpp_FUN_0041b4e0();
            aCStack_70[0].z = fStack_8c + (float)0.40000000000000002;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar1,&CStack_58,aCStack_70);
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_7c = 0x3fc00000;
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
      local_2c = 0.0;
      local_24 = 0.0;
      local_20 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_24) break;
        pCVar1 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
        pCVar5 = (*((pCVar1->vtable)._ub)->getCarrier)(pCVar1);
        if (pCVar5 == (CDemonActor *)0x0) {
          iVar6 = (*((pCVar1->vtable)._ub)->canPickup)(pCVar1,&in_stack_00000004->base_actor);
          if (iVar6 == 3) {
            pCVar7 = (*((pCVar1->vtable)._ub)->getBoundingBox)(pCVar1,(CBoundingBox3D *)auStack_a0);
            CStack_58.z = (pCVar7->max).x - (pCVar7->min).x;
            fStack_4c = (pCVar7->max).y - (pCVar7->min).y;
            fStack_48 = (pCVar7->max).z - (pCVar7->min).z;
            if ((((CStack_58.z < 1.0) && (fStack_4c < 1.0)) && ((float)2 < fStack_48))
               && ((double)fStack_48 < 6)) {
              iVar6 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar1,"CBodyPart");
              if (iVar6 == 0) {
                local_2c = (pCVar1->location).position.x -
                           (in_stack_00000004->base_actor).location.position.x;
                fStack_28 = (pCVar1->location).position.y -
                            (in_stack_00000004->base_actor).location.position.y;
                fStack_28 = fStack_28 * fStack_28;
                local_24 = (pCVar1->location).position.z -
                           (in_stack_00000004->base_actor).location.position.z;
                fStack_28 = fStack_28 * fStack_28;
                fVar3 = SQRT(local_24 * local_24 + local_2c * local_2c + fStack_28 * fStack_28);
                if (((float)5 <= fVar3) && ((int)fVar3 < 0x41700001)) {
                  *(CDemonActor **)((int)auStack_c0 + iVar8) = pCVar1;
                  local_18 = (float)((int)local_18 + 1);
                  iVar8 = iVar8 + 4;
                  if (0x27 < iVar8) break;
                }
              }
            }
          }
        }
        local_24 = (float)((int)local_24 + 1);
        local_20 = local_20 + 4;
      }
      if (0 < (int)local_2c) {
        iVar8 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,(int)local_2c + -1);
        uVar2 = auStack_c0[iVar8 + -5];
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
