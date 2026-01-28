// Name: core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530
// Address: 005fb530
// Address Range: [[005fb530, 005fb5c7] [005fb5e1, 005fbcf2]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_zombie.cpp_CZombie_PickupSomethingPossibly(CZombie* param_1,
   uint param_2) */

uint core_zombie_cpp_CZombie_PickupSomethingPossibly_FUN_005fb530(void)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  CCharacter *pCVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int iVar9;
  CBoundingBox3D *pCVar10;
  float *unaff_ESI;
  int iVar11;
  CCharacter *in_stack_00000004;
  float in_stack_00000008;
  float fVar12;
  uint auStack_14c [10];
  float afStack_124 [8];
  byte auStack_104 [20];
  float fStack_f0;
  CBoundingBox3D CStack_e8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  CVector3f CStack_bc;
  uint uStack_ac;
  uint uStack_a8;
  CVector3f CStack_a4;
  float afStack_98 [6];
  CVector3f CStack_80;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  uint uStack_30;
  uint uStack_2c;
  int local_24;
  int local_20;
  CLocation *local_1c;
  int local_18;
  float local_14;
  
  if (in_stack_00000004[1].model.motion_controller.tween_type < 0) {
    return 0;
  }
  fVar12 = *(float *)(in_stack_00000004[1].base.create_event + 0x28) - in_stack_00000008;
  *(float *)(in_stack_00000004[1].base.create_event + 0x28) = fVar12;
  if (0.0 < fVar12) {
    *(int *)(in_stack_00000004[1].base.create_event + 0x24) =
         *(int *)(in_stack_00000004[1].base.create_event + 0x24) + 1;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(in_stack_00000004[1].base.create_event + 0x28) = local_14;
  }
  if (in_stack_00000004->carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (in_stack_00000004->carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < *(float *)(in_stack_00000004[1].base.create_event + 0x2c)) {
    in_stack_00000008 =
         *(float *)(in_stack_00000004[1].base.create_event + 0x2c) - in_stack_00000008;
    *(float *)(in_stack_00000004[1].base.create_event + 0x2c) = in_stack_00000008;
    if (0.0 <= in_stack_00000008) {
      return 0;
    }
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base).create_event[0x2c] = '\0';
    (in_stack_00000004->base).create_event[0x2d] = '\0';
    (in_stack_00000004->base).create_event[0x2e] = '\0';
    (in_stack_00000004->base).create_event[0x2f] = '\0';
    return 0;
  }
  iVar8 = *(int *)(in_stack_00000004[1].base.create_event + 0x30);
  pCVar1 = &(in_stack_00000004->base).location;
  if (iVar8 == 0) {
    local_24 = 0;
    local_20 = 0;
    iVar8 = 0;
    local_1c = pCVar1;
    for (local_18 = 0; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
      pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
      pCVar7 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
      iVar11 = iVar8;
      if ((pCVar7 == (CDemonActor *)0x0) &&
         (iVar9 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,&in_stack_00000004->base), iVar9 == 3)
         ) {
        pCVar10 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)auStack_104);
        CStack_50.z = (pCVar10->max).x - (pCVar10->min).x;
        CStack_44.x = (pCVar10->max).y - (pCVar10->min).y;
        CStack_44.y = (pCVar10->max).z - (pCVar10->min).z;
        local_14 = (float)core_zombie_cpp_CZombie_FUN_005f8e50();
        if (((local_14 != 0.0) && (iVar9 = core_zombie_cpp_CZombie_FUN_005fbda0(), iVar9 != 0)) &&
           ((iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBodyPart"), iVar9 == 0
            || ((pCVar2->unk1 & 3U) ==
                (*(uint *)(in_stack_00000004[1].base.create_event + 0x24) & 3))))) {
          CStack_80.z = (pCVar2->location).position.x - *unaff_ESI;
          fStack_74 = (pCVar2->location).position.y - unaff_ESI[1];
          fStack_74 = fStack_74 * fStack_74;
          fStack_70 = (pCVar2->location).position.z - unaff_ESI[2];
          fStack_74 = fStack_74 * fStack_74;
          fVar12 = SQRT(fStack_70 * fStack_70 + CStack_80.z * CStack_80.z + fStack_74 * fStack_74);
          if (((float)5 <= fVar12) &&
             (fVar12 <= *(float *)(in_stack_00000004[1].base.create_event + 0x20) * 15.0f))
          {
            *(float *)((int)afStack_124 + iVar8) = local_14;
            iVar11 = iVar8 + 4;
            *(CDemonActor **)((int)auStack_14c + iVar8) = pCVar2;
            if (0x27 < iVar11) break;
          }
        }
      }
      local_20 = local_20 + 4;
      iVar8 = iVar11;
    }
    if (local_24 < 1) {
      return 0;
    }
    iVar11 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
    *(uint *)(in_stack_00000004[1].base.create_event + 0x30) = auStack_14c[iVar11 + -5];
    uVar4 = *(uint *)(in_stack_00000004[1].base.create_event + 0x30);
    iVar8 = *(int *)(in_stack_00000004[1].base.create_event + 0x24);
    fVar12 = afStack_124[iVar11 + -5];
    pCVar6 = in_stack_00000004 + 1;
    (pCVar6->base).create_event[0x2c] = '\0';
    (pCVar6->base).create_event[0x2d] = '\0';
    (pCVar6->base).create_event[0x2e] = ' ';
    (pCVar6->base).create_event[0x2f] = -0x3e;
    *(float *)(in_stack_00000004[1].base.create_event + 0x34) = fVar12;
    *(int *)(in_stack_00000004[1].base.create_event + 0x24) = iVar8 + 1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s is going to try to pick up %s\n",in_stack_00000004,uVar4);
    return 1;
  }
  iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))();
  if (iVar8 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",in_stack_00000004,
               *(uint *)(in_stack_00000004[1].base.create_event + 0x30));
    pCVar6 = in_stack_00000004 + 1;
    (pCVar6->base).create_event[0x30] = '\0';
    (pCVar6->base).create_event[0x31] = '\0';
    (pCVar6->base).create_event[0x32] = '\0';
    (pCVar6->base).create_event[0x33] = '\0';
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base).create_event[0x2c] = '\0';
    (in_stack_00000004->base).create_event[0x2d] = '\0';
    (in_stack_00000004->base).create_event[0x2e] = '\0';
    (in_stack_00000004->base).create_event[0x2f] = '\0';
    core_zombie_cpp_CZombie_FUN_005fca10();
    return 0;
  }
  iVar8 = *(int *)(in_stack_00000004[1].base.create_event + 0x30);
  fVar12 = (pCVar1->position).x - *(float *)(iVar8 + 0x20);
  fVar5 = (in_stack_00000004->base).location.position.z - *(float *)(iVar8 + 0x28);
  fVar12 = (float)5 - SQRT(fVar5 * fVar5 + fVar12 * fVar12) * (float)0.33333333333333298;
  if (fVar12 < 1.0) {
    fVar12 = 1.0;
  }
  iVar11 = -1;
  *(float *)(in_stack_00000004[1].base.create_event + 0x2c) =
       in_stack_00000008 * fVar12 + *(float *)(in_stack_00000004[1].base.create_event + 0x2c);
  iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00();
  if ((((-1 < iVar8) && (*(float *)(in_stack_00000004[1].base.create_event + 0x2c) < 0.0)) &&
      (iVar9 = (**(code **)(*(int *)(*(int *)(in_stack_00000004[1].base.create_event + 0x30) + 0x154
                                    ) + 0x7c))(), iVar9 == 3)) &&
     (iVar9 = core_zombie_cpp_CZombie_FUN_005fbda0(), iVar9 != 0)) {
    uVar3 = *(uint *)(in_stack_00000004[1].base.create_event + 0x34);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
LAB_005fb750:
        pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base.create_event + 0x30);
        (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_e8);
        uStack_2c = 0x3f000000;
        core_bodypart_cpp_FUN_0041b540();
        core_bodypart_cpp_FUN_0041b4e0();
        CStack_80.z = CStack_e8.max.y + (float)0.40000000000000002;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_44,&CStack_80);
        if (&CStack_a4 != &CStack_44) {
          CStack_a4.x = CStack_44.x;
          CStack_a4.y = CStack_44.y;
          CStack_a4.z = CStack_44.z;
        }
      }
      else {
LAB_005fba18:
        iVar11 = *(int *)(in_stack_00000004[1].base.create_event + 0x30);
        if (&uStack_ac != (uint *)(iVar11 + 0x20)) {
          uStack_ac = *(uint *)(iVar11 + 0x20);
          uStack_a8 = *(uint *)(iVar11 + 0x24);
          CStack_a4.z = *(float *)(iVar11 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 != 3) goto LAB_005fba18;
        goto LAB_005fb750;
      }
      pCVar2 = *(CDemonActor **)(in_stack_00000004[1].base.create_event + 0x30);
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)(auStack_104 + 4));
      uStack_30 = 0x3f000000;
      core_bodypart_cpp_FUN_0041b540();
      core_bodypart_cpp_FUN_0041b4e0();
      CStack_bc.z = fStack_f0 + (float)0.40000000000000002;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,&CStack_bc);
      if (&CStack_a4 != &CStack_50) {
        CStack_a4.x = CStack_50.x;
        CStack_a4.y = CStack_50.y;
        CStack_a4.z = CStack_50.z;
      }
    }
    fStack_c8 = g_ZeroVector.x;
    fStack_c4 = g_ZeroVector.y;
    fStack_c0 = g_ZeroVector.z;
    if (iVar8 == 0) {
      fStack_74 = -1.5;
      fStack_70 = 0.0;
      fStack_6c = fStack_70;
      if (&fStack_c8 != &fStack_74) {
        fStack_c8 = -1.5;
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
      }
    }
    if (iVar8 == 1) {
      afStack_98[1] = 0.0;
      afStack_98[2] = 0.0;
      afStack_98[0] = 1.5;
      if (&fStack_c8 != afStack_98) {
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
        fStack_c8 = 1.5;
      }
    }
    iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(in_stack_00000004);
  }
  if (iVar11 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",in_stack_00000004,
               *(uint *)(in_stack_00000004[1].base.create_event + 0x30));
    pCVar6 = in_stack_00000004 + 1;
    (pCVar6->base).create_event[0x30] = '\0';
    (pCVar6->base).create_event[0x31] = '\0';
    (pCVar6->base).create_event[0x32] = '\0';
    (pCVar6->base).create_event[0x33] = '\0';
    in_stack_00000004 = in_stack_00000004 + 1;
    (in_stack_00000004->base).create_event[0x2c] = '\0';
    (in_stack_00000004->base).create_event[0x2d] = '\0';
    (in_stack_00000004->base).create_event[0x2e] = -0x60;
    (in_stack_00000004->base).create_event[0x2f] = 'A';
    core_zombie_cpp_CZombie_FUN_005fca10();
    return 0;
  }
  if (iVar11 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s beginning to pickup %s\n",in_stack_00000004,
             *(uint *)(in_stack_00000004[1].base.create_event + 0x30));
  uVar3 = *(uint *)(in_stack_00000004[1].base.create_event + 0x34);
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
      iVar8 = 0xc;
      goto LAB_005fba91;
    }
    if (uVar3 != 3) goto LAB_005fbae6;
  }
  iVar8 = 10;
LAB_005fba91:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(in_stack_00000004->model).motion_controller,iVar8,1);
  return 1;
}
