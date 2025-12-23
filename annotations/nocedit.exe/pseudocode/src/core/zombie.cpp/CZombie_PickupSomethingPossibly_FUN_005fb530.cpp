// Name: core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530
// Address: 005fb530
// Address Range: [[005fb530, 005fb5c7] [005fb5e1, 005fbcf2]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_enemy_zombie.cpp_CZombie_PickupSomethingPossibly(CZombie* param_1,
   uint param_2) */

uint core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530(void)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  CCharacter *pCVar7;
  CDemonActor *pCVar8;
  int iVar9;
  int iVar10;
  CBoundingBox3D *pCVar11;
  BADSPACEBASE *in_ESP;
  int iVar12;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fStack_168;
  uint auStack_160 [10];
  int aiStack_138 [10];
  CBoundingBox3D CStack_110;
  CBoundingBox3D CStack_f8;
  CBoundingBox3D CStack_e0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f aCStack_bc [2];
  CVector3f CStack_a4;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  CLocation *local_1c;
  int local_18;
  float local_14;
  
  if (in_stack_00000004[1].model.motion_controller.tween_type < 0) {
    return 0;
  }
  fVar5 = *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = fVar5;
  if (0.0 < fVar5) {
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) =
         *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) + 1;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x28) = local_14;
  }
  if (in_stack_00000004->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c)) {
    in_stack_00000008 =
         *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) - in_stack_00000008;
    *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) = in_stack_00000008;
    if (0.0 <= in_stack_00000008) {
      return 0;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base_actor).create_event[0x2c] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2d] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2e] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2f] = '\0';
    return 0;
  }
  iVar9 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
  pCVar1 = &(in_stack_00000004->base_actor).location;
  if (iVar9 == 0) {
    local_24 = 0;
    local_20 = 0;
    iVar9 = 0;
    local_1c = pCVar1;
    for (local_18 = 0; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
      pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
      pCVar8 = (*pCVar2->vtable->getCarrier)(pCVar2);
      iVar12 = iVar9;
      if ((pCVar8 == (CDemonActor *)0x0) &&
         (iVar10 = (*pCVar2->vtable->canPickup)(pCVar2,&in_stack_00000004->base_actor), iVar10 == 3)
         ) {
        pCVar11 = (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_110);
        fStack_5c = (pCVar11->max).x - (pCVar11->min).x;
        fStack_58 = (pCVar11->max).y - (pCVar11->min).y;
        fStack_54 = (pCVar11->max).z - (pCVar11->min).z;
        iStack_28 = core_zombie_cpp_CZombie_FUN_005f8e50();
        if (((iStack_28 != 0) && (iVar10 = core_zombie_cpp_CZombie_FUN_005fbda0(), iVar10 != 0)) &&
           ((iVar10 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBodyPart"),
            iVar10 == 0 ||
            ((pCVar2->field7_0x6c & 3U) ==
             (*(uint *)(in_stack_00000004[1].base_actor.create_event + 0x24) & 3))))) {
          afStack_98[3] = (pCVar2->location).position.x - (local_1c->position).x;
          fStack_88 = (pCVar2->location).position.y - (local_1c->position).y;
          fStack_88 = fStack_88 * fStack_88;
          fStack_84 = (pCVar2->location).position.z - (local_1c->position).z;
          fStack_88 = fStack_88 * fStack_88;
          fVar5 = SQRT(fStack_84 * fStack_84 + afStack_98[3] * afStack_98[3] + fStack_88 * fStack_88
                      );
          if (((float)_DAT_00658905 <= fVar5) &&
             (fVar5 <= *(float *)(in_stack_00000004[1].base_actor.create_event + 0x20) *
                       _DAT_00658915)) {
            *(int *)((int)aiStack_138 + iVar9) = iStack_28;
            iVar12 = iVar9 + 4;
            local_24 = local_24 + 1;
            *(CDemonActor **)((int)auStack_160 + iVar9) = pCVar2;
            if (0x27 < iVar12) break;
          }
        }
      }
      local_20 = local_20 + 4;
      iVar9 = iVar12;
    }
    if (local_24 < 1) {
      return 0;
    }
    iVar12 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
    *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x30) = auStack_160[iVar12];
    uVar4 = *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x30);
    iVar9 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
    iVar12 = aiStack_138[iVar12];
    pCVar7 = in_stack_00000004 + 1;
    (pCVar7->base_actor).create_event[0x2c] = '\0';
    (pCVar7->base_actor).create_event[0x2d] = '\0';
    (pCVar7->base_actor).create_event[0x2e] = ' ';
    (pCVar7->base_actor).create_event[0x2f] = -0x3e;
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x34) = iVar12;
    *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24) = iVar9 + 1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s is going to try to pick up %s\n",in_stack_00000004,uVar4);
    return 1;
  }
  iVar9 = (**(code **)(*(int *)(iVar9 + 0x154) + 0x8c))();
  if (iVar9 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,in_stack_00000004,
               *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x30));
    pCVar7 = in_stack_00000004 + 1;
    (pCVar7->base_actor).create_event[0x30] = '\0';
    (pCVar7->base_actor).create_event[0x31] = '\0';
    (pCVar7->base_actor).create_event[0x32] = '\0';
    (pCVar7->base_actor).create_event[0x33] = '\0';
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base_actor).create_event[0x2c] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2d] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2e] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2f] = '\0';
    core_zombie_cpp_CZombie_FUN_005fca10();
    return 0;
  }
  iVar9 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
  fVar5 = (pCVar1->position).x - *(float *)(iVar9 + 0x20);
  fVar6 = (in_stack_00000004->base_actor).location.position.z - *(float *)(iVar9 + 0x28);
  fStack_168 = (float)_DAT_00658905 - SQRT(fVar6 * fVar6 + fVar5 * fVar5) * (float)_DAT_006588fd;
  if (fStack_168 < 1.0) {
    fStack_168 = 1.0;
  }
  iVar12 = -1;
  *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) =
       in_stack_00000008 * fStack_168 +
       *(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c);
  iVar9 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if ((((-1 < iVar9) && (*(float *)(in_stack_00000004[1].base_actor.create_event + 0x2c) < 0.0)) &&
      (iVar10 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base_actor.create_event + 0x30)
                                     + 0x154) + 0x7c))(), iVar10 == 3)) &&
     (iVar10 = core_zombie_cpp_CZombie_FUN_005fbda0(), iVar10 != 0)) {
    uVar3 = *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x34);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
LAB_005fb750:
        pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x30);
        (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_e0);
        uStack_2c = 0x3f000000;
        core_bodypart_cpp_FUN_0041b540();
        core_bodypart_cpp_FUN_0041b4e0();
        CStack_80.z = CStack_e0.min.z + (float)_DAT_0065890d;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_44,&CStack_80);
        if (&CStack_a4 != &CStack_44) {
          CStack_a4.x = CStack_44.x;
          CStack_a4.y = CStack_44.y;
          CStack_a4.z = CStack_44.z;
        }
      }
      else {
LAB_005fba18:
        iVar12 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x30);
        if (&CStack_a4 != (CVector3f *)(iVar12 + 0x20)) {
          CStack_a4.x = ((CVector3f *)(iVar12 + 0x20))->x;
          CStack_a4.y = *(float *)(iVar12 + 0x24);
          CStack_a4.z = *(float *)(iVar12 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 != 3) goto LAB_005fba18;
        goto LAB_005fb750;
      }
      pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base_actor.create_event + 0x30);
      (*pCVar2->vtable->getBoundingBox)(pCVar2,&CStack_f8);
      uStack_30 = 0x3f000000;
      core_bodypart_cpp_FUN_0041b540();
      core_bodypart_cpp_FUN_0041b4e0();
      aCStack_bc[0].z = CStack_f8.min.z + (float)_DAT_0065890d;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,aCStack_bc);
      if (&CStack_a4 != &CStack_50) {
        CStack_a4.x = CStack_50.x;
        CStack_a4.y = CStack_50.y;
        CStack_a4.z = CStack_50.z;
      }
    }
    fStack_c8 = g_ZeroVector.x;
    fStack_c4 = g_ZeroVector.y;
    fStack_c0 = g_ZeroVector.z;
    if (iVar9 == 0) {
      fStack_74 = -1.5;
      uStack_70 = 0;
      uStack_6c = uStack_70;
      if (&fStack_c8 != &fStack_74) {
        fStack_c8 = -1.5;
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
      }
    }
    if (iVar9 == 1) {
      afStack_98[1] = 0.0;
      afStack_98[2] = 0.0;
      afStack_98[0] = 1.5;
      if (&fStack_c8 != afStack_98) {
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
        fStack_c8 = 1.5;
      }
    }
    iVar12 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
  }
  if (iVar12 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",in_stack_00000004,
               *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x30));
    pCVar7 = in_stack_00000004 + 1;
    (pCVar7->base_actor).create_event[0x30] = '\0';
    (pCVar7->base_actor).create_event[0x31] = '\0';
    (pCVar7->base_actor).create_event[0x32] = '\0';
    (pCVar7->base_actor).create_event[0x33] = '\0';
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base_actor).create_event[0x2c] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2d] = '\0';
    (in_stack_00000004->base_actor).create_event[0x2e] = -0x60;
    (in_stack_00000004->base_actor).create_event[0x2f] = 'A';
    core_zombie_cpp_CZombie_FUN_005fca10();
    return 0;
  }
  if (iVar12 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s beginning to pickup %s\n",in_stack_00000004,
             *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x30));
  uVar3 = *(uint *)(in_stack_00000004[1].base_actor.create_event + 0x34);
  if (uVar3 < 2) {
    if (uVar3 != 1) {
LAB_005fbae6:
      g_CurrentFilename = "..\\core\\zombie.cpp";
      g_CurrentLineNumber = 0x5d0;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar3 < 3) {
      iVar9 = 0xc;
      goto LAB_005fba91;
    }
    if (uVar3 != 3) goto LAB_005fbae6;
  }
  iVar9 = 10;
LAB_005fba91:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->model).motion_controller,iVar9,1);
  return 1;
}
