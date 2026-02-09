// Name: core_zombie.cpp_CZombie_FUN_005fb530
// Address: 005fb530
// Address Range: [[005fb530, 005fb5c7] [005fb5e1, 005fbcf2]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  CDemonActor *pCVar6;
  int iVar7;
  int iVar8;
  CBoundingBox3D *pCVar9;
  float *unaff_ESI;
  int iVar10;
  float in_stack_00000008;
  float fVar11;
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
  
  if (*(int *)(this_ptr->unk4 + 0x40) < 0) {
    return 0;
  }
  fVar11 = *(float *)(this_ptr->unk1 + 8) - in_stack_00000008;
  *(float *)(this_ptr->unk1 + 8) = fVar11;
  if (0.0 < fVar11) {
    *(int *)(this_ptr->unk1 + 4) = *(int *)(this_ptr->unk1 + 4) + 1;
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(5.0,10.0);
    *(float *)(this_ptr->unk1 + 8) = local_14;
  }
  if ((this_ptr->base).base.carry_hands[0].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if ((this_ptr->base).base.carry_hands[1].carry_actor != (CDemonActor *)0x0) {
    return 0;
  }
  if (0.0 < *(float *)(this_ptr->unk1 + 0xc)) {
    fVar11 = *(float *)(this_ptr->unk1 + 0xc) - in_stack_00000008;
    *(float *)(this_ptr->unk1 + 0xc) = fVar11;
    if (0.0 <= fVar11) {
      return 0;
    }
    this_ptr->unk1[0xc] = '\0';
    this_ptr->unk1[0xd] = '\0';
    this_ptr->unk1[0xe] = '\0';
    this_ptr->unk1[0xf] = '\0';
    return 0;
  }
  pCVar1 = &(this_ptr->base).base.base.location;
  if (*(int *)(this_ptr->unk1 + 0x10) == 0) {
    local_24 = 0;
    local_20 = 0;
    iVar7 = 0;
    local_1c = pCVar1;
    for (local_18 = 0; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
      pCVar2 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_20);
      pCVar6 = (*((pCVar2->vtable)._ub)->getCarrier)(pCVar2);
      iVar10 = iVar7;
      if ((pCVar6 == (CDemonActor *)0x0) &&
         (iVar8 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr), iVar8 == 3))
      {
        pCVar9 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)auStack_104);
        CStack_50.z = (pCVar9->max).x - (pCVar9->min).x;
        CStack_44.x = (pCVar9->max).y - (pCVar9->min).y;
        CStack_44.y = (pCVar9->max).z - (pCVar9->min).z;
        local_14 = (float)core_zombie_cpp_FUN_005f8e50();
        if (((local_14 != 0.0) &&
            (iVar8 = core_zombie_cpp_CZombie_FUN_005fbda0(this_ptr), iVar8 != 0)) &&
           ((iVar8 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBodyPart"), iVar8 == 0
            || ((pCVar2->unk1 & 3U) == (*(uint *)(this_ptr->unk1 + 4) & 3))))) {
          CStack_80.z = (pCVar2->location).position.x - *unaff_ESI;
          fStack_74 = (pCVar2->location).position.y - unaff_ESI[1];
          fStack_74 = fStack_74 * fStack_74;
          fStack_70 = (pCVar2->location).position.z - unaff_ESI[2];
          fStack_74 = fStack_74 * fStack_74;
          fVar11 = SQRT(fStack_70 * fStack_70 + CStack_80.z * CStack_80.z + fStack_74 * fStack_74);
          if (((float)5 <= fVar11) &&
             (fVar11 <= *(float *)this_ptr->unk1 * 15.0f)) {
            *(float *)((int)afStack_124 + iVar7) = local_14;
            iVar10 = iVar7 + 4;
            *(CDemonActor **)((int)auStack_14c + iVar7) = pCVar2;
            if (0x27 < iVar10) break;
          }
        }
      }
      local_20 = local_20 + 4;
      iVar7 = iVar10;
    }
    if (local_24 < 1) {
      return 0;
    }
    iVar10 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,local_24 + -1);
    *(uint *)(this_ptr->unk1 + 0x10) = auStack_14c[iVar10 + -5];
    uVar4 = *(uint *)(this_ptr->unk1 + 0x10);
    iVar7 = *(int *)(this_ptr->unk1 + 4);
    fVar11 = afStack_124[iVar10 + -5];
    this_ptr->unk1[0xc] = '\0';
    this_ptr->unk1[0xd] = '\0';
    this_ptr->unk1[0xe] = ' ';
    this_ptr->unk1[0xf] = -0x3e;
    *(float *)(this_ptr->unk1 + 0x14) = fVar11;
    *(int *)(this_ptr->unk1 + 4) = iVar7 + 1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,uVar4);
    return 1;
  }
  iVar7 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x10) + 0x154) + 0x8c))();
  if (iVar7 != 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, sombody else beat me to it!\n",this_ptr,
               *(uint *)(this_ptr->unk1 + 0x10));
    this_ptr->unk1[0x10] = '\0';
    this_ptr->unk1[0x11] = '\0';
    this_ptr->unk1[0x12] = '\0';
    this_ptr->unk1[0x13] = '\0';
    this_ptr->unk1[0xc] = '\0';
    this_ptr->unk1[0xd] = '\0';
    this_ptr->unk1[0xe] = '\0';
    this_ptr->unk1[0xf] = '\0';
    core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
    return 0;
  }
  fVar11 = (pCVar1->position).x - *(float *)(*(int *)(this_ptr->unk1 + 0x10) + 0x20);
  fVar5 = (this_ptr->base).base.base.location.position.z -
          *(float *)(*(int *)(this_ptr->unk1 + 0x10) + 0x28);
  fVar11 = (float)5 - SQRT(fVar5 * fVar5 + fVar11 * fVar11) * (float)0.33333333333333298;
  if (fVar11 < 1.0) {
    fVar11 = 1.0;
  }
  iVar10 = -1;
  *(float *)(this_ptr->unk1 + 0xc) = in_stack_00000008 * fVar11 + *(float *)(this_ptr->unk1 + 0xc);
  iVar7 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
  if ((((-1 < iVar7) && (*(float *)(this_ptr->unk1 + 0xc) < 0.0)) &&
      (iVar8 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x10) + 0x154) + 0x7c))(), iVar8 == 3
      )) && (iVar8 = core_zombie_cpp_CZombie_FUN_005fbda0(this_ptr), iVar8 != 0)) {
    uVar3 = *(uint *)(this_ptr->unk1 + 0x14);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
LAB_005fb750:
        pCVar2 = *(CDemonActor **)(this_ptr->unk1 + 0x10);
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
        iVar10 = *(int *)(this_ptr->unk1 + 0x10);
        if (&uStack_ac != (uint *)(iVar10 + 0x20)) {
          uStack_ac = *(uint *)(iVar10 + 0x20);
          uStack_a8 = *(uint *)(iVar10 + 0x24);
          CStack_a4.z = *(float *)(iVar10 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 != 3) goto LAB_005fba18;
        goto LAB_005fb750;
      }
      pCVar2 = *(CDemonActor **)(this_ptr->unk1 + 0x10);
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
    if (iVar7 == 0) {
      fStack_74 = -1.5;
      fStack_70 = 0.0;
      fStack_6c = fStack_70;
      if (&fStack_c8 != &fStack_74) {
        fStack_c8 = -1.5;
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
      }
    }
    if (iVar7 == 1) {
      afStack_98[1] = 0.0;
      afStack_98[2] = 0.0;
      afStack_98[0] = 1.5;
      if (&fStack_c8 != afStack_98) {
        fStack_c4 = 0.0;
        fStack_c0 = 0.0;
        fStack_c8 = 1.5;
      }
    }
    iVar10 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0((CCharacter *)this_ptr);
  }
  if (iVar10 < 0) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",this_ptr,
               *(uint *)(this_ptr->unk1 + 0x10));
    this_ptr->unk1[0x10] = '\0';
    this_ptr->unk1[0x11] = '\0';
    this_ptr->unk1[0x12] = '\0';
    this_ptr->unk1[0x13] = '\0';
    this_ptr->unk1[0xc] = '\0';
    this_ptr->unk1[0xd] = '\0';
    this_ptr->unk1[0xe] = -0x60;
    this_ptr->unk1[0xf] = 'A';
    core_zombie_cpp_CZombie_FUN_005fca10(this_ptr);
    return 0;
  }
  if (iVar10 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,
             *(uint *)(this_ptr->unk1 + 0x10));
  uVar3 = *(uint *)(this_ptr->unk1 + 0x14);
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
      iVar7 = 0xc;
      goto LAB_005fba91;
    }
    if (uVar3 != 3) goto LAB_005fbae6;
  }
  iVar7 = 10;
LAB_005fba91:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar7,1);
  return 1;
}
