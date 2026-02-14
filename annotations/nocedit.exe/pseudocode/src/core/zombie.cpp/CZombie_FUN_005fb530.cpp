// Name: core_zombie.cpp_CZombie_FUN_005fb530
// Address: 005fb530
// Address Range: [[005fb530, 005fb5c7] [005fb5e1, 005fbcf2]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_zombie_cpp_CZombie_FUN_005fb530(CZombie *this_ptr)

{
  CLocation *pCVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  CDemonActor *pCVar7;
  int iVar8;
  int iVar9;
  CBoundingBox3D *pCVar10;
  int iVar11;
  float in_stack_00000008;
  float fStack_168;
  uint auStack_160 [10];
  int aiStack_138 [10];
  CBoundingBox3D CStack_110;
  CBoundingBox3D CStack_f8;
  CBoundingBox3D CStack_e0;
  CVector3f CStack_c8;
  CVector3f aCStack_bc [2];
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
  CVector3f aCStack_74 [2];
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
  
  if (*(int *)(this_ptr->unk4 + 0x40) < 0) {
    return 0;
  }
  fVar5 = *(float *)(this_ptr->unk1 + 8) - in_stack_00000008;
  *(float *)(this_ptr->unk1 + 8) = fVar5;
  if (0.0 < fVar5) {
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
    fVar5 = *(float *)(this_ptr->unk1 + 0xc) - in_stack_00000008;
    *(float *)(this_ptr->unk1 + 0xc) = fVar5;
    if (0.0 <= fVar5) {
      return 0;
    }
    this_ptr->unk1[0xc] = '\0';
    this_ptr->unk1[0xd] = '\0';
    this_ptr->unk1[0xe] = '\0';
    this_ptr->unk1[0xf] = '\0';
    return 0;
  }
  iVar8 = *(int *)(this_ptr->unk1 + 0x10);
  pCVar1 = &(this_ptr->base).base.base.location;
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
         (iVar9 = (*((pCVar2->vtable)._ub)->canPickup)(pCVar2,(CDemonActor *)this_ptr), iVar9 == 3))
      {
        pCVar10 = (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_110);
        fStack_5c = (pCVar10->max).x - (pCVar10->min).x;
        fStack_58 = (pCVar10->max).y - (pCVar10->min).y;
        fStack_54 = (pCVar10->max).z - (pCVar10->min).z;
        iStack_28 = core_zombie_cpp_FUN_005f8e50();
        if (((iStack_28 != 0) &&
            (iVar9 = core_zombie_cpp_CZombie_FUN_005fbda0(this_ptr), iVar9 != 0)) &&
           ((iVar9 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar2,"CBodyPart"), iVar9 == 0
            || ((pCVar2->direction_hint & 3U) == (*(uint *)(this_ptr->unk1 + 4) & 3))))) {
          fStack_8c = (pCVar2->location).position.x - (local_1c->position).x;
          fStack_88 = (pCVar2->location).position.y - (local_1c->position).y;
          fStack_88 = fStack_88 * fStack_88;
          fStack_84 = (pCVar2->location).position.z - (local_1c->position).z;
          fStack_88 = fStack_88 * fStack_88;
          fVar5 = SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
          if (((float)5 <= fVar5) &&
             (fVar5 <= *(float *)this_ptr->unk1 * 15.0f)) {
            *(int *)((int)aiStack_138 + iVar8) = iStack_28;
            iVar11 = iVar8 + 4;
            local_24 = local_24 + 1;
            *(CDemonActor **)((int)auStack_160 + iVar8) = pCVar2;
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
    *(uint *)(this_ptr->unk1 + 0x10) = auStack_160[iVar11];
    uVar4 = *(uint *)(this_ptr->unk1 + 0x10);
    iVar8 = *(int *)(this_ptr->unk1 + 4);
    iVar11 = aiStack_138[iVar11];
    this_ptr->unk1[0xc] = '\0';
    this_ptr->unk1[0xd] = '\0';
    this_ptr->unk1[0xe] = ' ';
    this_ptr->unk1[0xf] = -0x3e;
    *(int *)(this_ptr->unk1 + 0x14) = iVar11;
    *(int *)(this_ptr->unk1 + 4) = iVar8 + 1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,uVar4);
    return 1;
  }
  iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x8c))(iVar8);
  if (iVar8 != 0) {
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
  fVar5 = (pCVar1->position).x - *(float *)(*(int *)(this_ptr->unk1 + 0x10) + 0x20);
  fVar6 = (this_ptr->base).base.base.location.position.z -
          *(float *)(*(int *)(this_ptr->unk1 + 0x10) + 0x28);
  fStack_168 = (float)5 - SQRT(fVar6 * fVar6 + fVar5 * fVar5) * (float)0.33333333333333298
  ;
  if (fStack_168 < 1.0) {
    fStack_168 = 1.0;
  }
  iVar11 = -1;
  *(float *)(this_ptr->unk1 + 0xc) =
       in_stack_00000008 * fStack_168 + *(float *)(this_ptr->unk1 + 0xc);
  iVar8 = core_zombie_cpp_CZombie_FUN_005fbd00(this_ptr);
  if ((((-1 < iVar8) && (*(float *)(this_ptr->unk1 + 0xc) < 0.0)) &&
      (iVar9 = (**(code **)(*(int *)(*(int *)(this_ptr->unk1 + 0x10) + 0x154) + 0x7c))
                         (*(int *)(this_ptr->unk1 + 0x10),this_ptr), iVar9 == 3)) &&
     (iVar9 = core_zombie_cpp_CZombie_FUN_005fbda0(this_ptr), iVar9 != 0)) {
    uVar3 = *(uint *)(this_ptr->unk1 + 0x14);
    if (uVar3 < 2) {
      if (uVar3 == 1) {
LAB_005fb750:
        pCVar2 = *(CDemonActor **)(this_ptr->unk1 + 0x10);
        (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_e0);
        uStack_2c = 0x3f000000;
        core_bodypart_cpp_FUN_0041b540();
        core_bodypart_cpp_FUN_0041b4e0();
        CStack_80.z = CStack_e0.min.z + (float)0.40000000000000002;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_44,&CStack_80);
        if (&CStack_a4 != &CStack_44) {
          CStack_a4.x = CStack_44.x;
          CStack_a4.y = CStack_44.y;
          CStack_a4.z = CStack_44.z;
        }
      }
      else {
LAB_005fba18:
        iVar11 = *(int *)(this_ptr->unk1 + 0x10);
        if (&CStack_a4 != (CVector3f *)(iVar11 + 0x20)) {
          CStack_a4.x = ((CVector3f *)(iVar11 + 0x20))->x;
          CStack_a4.y = *(float *)(iVar11 + 0x24);
          CStack_a4.z = *(float *)(iVar11 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar3) {
        if (uVar3 != 3) goto LAB_005fba18;
        goto LAB_005fb750;
      }
      pCVar2 = *(CDemonActor **)(this_ptr->unk1 + 0x10);
      (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,&CStack_f8);
      uStack_30 = 0x3f000000;
      core_bodypart_cpp_FUN_0041b540();
      core_bodypart_cpp_FUN_0041b4e0();
      aCStack_bc[0].z = CStack_f8.min.z + (float)0.40000000000000002;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_50,aCStack_bc);
      if (&CStack_a4 != &CStack_50) {
        CStack_a4.x = CStack_50.x;
        CStack_a4.y = CStack_50.y;
        CStack_a4.z = CStack_50.z;
      }
    }
    CStack_c8.x = g_ZeroVector.x;
    CStack_c8.y = g_ZeroVector.y;
    CStack_c8.z = g_ZeroVector.z;
    if (iVar8 == 0) {
      aCStack_74[0].x = -1.5;
      aCStack_74[0].y = 0.0;
      aCStack_74[0].z = aCStack_74[0].y;
      if (&CStack_c8 != aCStack_74) {
        CStack_c8.x = -1.5;
        CStack_c8.y = 0.0;
        CStack_c8.z = 0.0;
      }
    }
    if (iVar8 == 1) {
      CStack_98.y = 0.0;
      CStack_98.z = 0.0;
      CStack_98.x = 1.5;
      if (&CStack_c8 != &CStack_98) {
        CStack_c8.y = 0.0;
        CStack_c8.z = 0.0;
        CStack_c8.x = 1.5;
      }
    }
    iVar11 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0
                       ((CCharacter *)this_ptr,&CStack_a4,(CPathMap *)0x0,&CStack_c8,0.0,0.0);
  }
  if (iVar11 < 0) {
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
  if (iVar11 < 1) {
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
      iVar8 = 0xc;
      goto LAB_005fba91;
    }
    if (uVar3 != 3) goto LAB_005fbae6;
  }
  iVar8 = 10;
LAB_005fba91:
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,iVar8,1);
  return 1;
}
