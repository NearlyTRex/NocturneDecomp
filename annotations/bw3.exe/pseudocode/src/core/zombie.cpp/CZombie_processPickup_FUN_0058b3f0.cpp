// Name: core_zombie.cpp_CZombie_processPickup_FUN_0058b3f0
// Address: 0058b3f0
// Address Range: [[0058b3f0, 0058bd4f]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_processPickup_FUN_0058b3f0(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_CZombie_processPickup_FUN_0058b3f0(CZombie *this_ptr,float delta_time)

{
  CZombie *this_ptr_00;
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  int iVar7;
  CLocation *pCVar8;
  float *unaff_EBP;
  int unaff_ESI;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float afStackY_1138 [954];
  float *pfVar12;
  float fStack_234;
  CZombie *in_stack_fffffdd4;
  CVector3f *dimensions;
  float fStack_224;
  int aiStack_1f4 [5];
  uint auStack_1e0 [2];
  float fStack_1d8;
  byte auStack_1d4 [32];
  uint uStack_1b4;
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [6];
  uint auStack_180 [9];
  uint auStack_15c [2];
  float fStack_154;
  float fStack_150;
  float afStack_14c [5];
  float fStack_138;
  float afStack_12c [3];
  CVector3f CStack_120;
  float fStack_114;
  float afStack_110 [5];
  float fStack_fc;
  float afStack_f8 [5];
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [7];
  CVector3f CStack_64;
  float afStack_58 [4];
  float afStack_48 [3];
  uint uStack_3c;
  int iStack_38;
  int local_30;
  CLocation *local_2c;
  int local_28;
  uint *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  bVar11 = 0;
  if (*(int *)&this_ptr->field_0xd124 < 0) {
    return 0;
  }
  fVar3 = *(float *)&this_ptr->field_0xd05c - delta_time;
  *(float *)&this_ptr->field_0xd05c = fVar3;
  if (0.0 < fVar3) {
    *(int *)&this_ptr->field_0xd058 = *(int *)&this_ptr->field_0xd058 + 1;
    local_18 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(5.0,10.0);
    *(float **)&this_ptr->field_0xd05c = local_18;
  }
  if (*(int *)&(this_ptr->base).base.field_0x25b0 != 0) {
    return 0;
  }
  if (*(int *)&(this_ptr->base).base.field_0x2628 != 0) {
    return 0;
  }
  if (0.0 < *(float *)&this_ptr->field_0xd060) {
    fVar3 = *(float *)&this_ptr->field_0xd060 - delta_time;
    *(float *)&this_ptr->field_0xd060 = fVar3;
    if (0.0 <= fVar3) {
      return 0;
    }
    *(uint *)&this_ptr->field_0xd060 = 0;
    return 0;
  }
  iVar7 = *(int *)&this_ptr->field_0xd064;
  pCVar8 = &(this_ptr->base).base.base.location;
  if (iVar7 == 0) {
    local_24 = auStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = pCVar8;
    for (local_20 = 0; local_20 < g_CDemonSetPtr->actor_count; local_20 = local_20 + 1) {
      this_ptr_00 = *(CZombie **)((int)g_CDemonSetPtr->actors + local_28);
      pCVar5 = (*((this_ptr_00->base).base.base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr_00)
      ;
      if ((pCVar5 == (CDemonActor *)0x0) &&
         (iVar7 = (*((this_ptr_00->base).base.base.vtable._ub)->canPickup)
                            ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr), iVar7 == 3)) {
        fStack_234 = 8.148665e-39;
        (*((this_ptr_00->base).base.base.vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)in_stack_fffffdd4);
        puVar9 = &uStack_1b4;
        puVar10 = auStack_15c;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        dimensions = &CStack_64;
        CStack_e4.z = *unaff_EBP - fStack_154;
        CStack_d8.x = unaff_EBP[1] - fStack_150;
        CStack_d8.y = unaff_EBP[2] - afStack_14c[0];
        CStack_64.x = *unaff_EBP - fStack_154;
        afStack_58[(uint)bVar11 * -2 + -2] = *(float *)((int)&CStack_d8 + (uint)bVar11 * -8);
        afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + -1] =
             *(float *)((int)&CStack_d8 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 1) * 4);
        in_stack_fffffdd4 = (CZombie *)0x58bb95;
        local_20 = core_zombie_cpp_classifyObjectShape_FUN_00588750(dimensions);
        if (((local_20 != 0) &&
            (in_stack_fffffdd4 = this_ptr,
            iVar7 = core_zombie_cpp_CZombie_canPickupWithHand_FUN_0058bdf0(this_ptr,local_20),
            iVar7 != 0)) &&
           ((in_stack_fffffdd4 = this_ptr_00,
            iVar7 = core_actor_cpp_isOfClass_FUN_0040c790
                              ((CDemonActor *)this_ptr_00,"CBodyPart"), iVar7 == 0 ||
            (((this_ptr_00->base).base.base.direction_hint & 3U) ==
             (*(uint *)&this_ptr->field_0xd058 & 3))))) {
          afStack_f8[1] = (this_ptr_00->base).base.base.location.position.x - *local_18;
          afStack_f8[2] = (this_ptr_00->base).base.base.location.position.y - local_18[1];
          afStack_f8[3] = (this_ptr_00->base).base.base.location.position.z - local_18[2];
          afStack_58[0] = afStack_f8[1];
          afStack_58[(uint)bVar11 * -2 + 1] = afStack_f8[(uint)bVar11 * -2 + 2];
          afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 2] =
               afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
          afStack_58[1] = afStack_58[1] * afStack_58[1] * afStack_58[1] * afStack_58[1];
          fStack_224 = SQRT(afStack_58[2] * afStack_58[2] +
                            afStack_58[0] * afStack_58[0] + afStack_58[1] * afStack_58[1]);
          if (((float)_DAT_005d8827 <= fStack_224) &&
             (fStack_224 <= *(float *)&this_ptr->field_0xd054 * _DAT_005d8837)) {
            *(CZombie **)(&stack0xfffffde4 + unaff_ESI) = this_ptr_00;
            *(int *)((int)aiStack_1f4 + unaff_ESI) = local_20;
            unaff_ESI = unaff_ESI + 4;
            local_1c = local_1c + 1;
            if (0x27 < unaff_ESI) break;
          }
        }
      }
      local_28 = local_28 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    *(uint *)&this_ptr->field_0xd064 = *(uint *)(&stack0xfffffde4 + iVar7 * 4 + -0x14);
    uVar2 = *(uint *)(&stack0xfffffdf8 + iVar7 * 4);
    *(uint *)&this_ptr->field_0xd060 = 0xc2200000;
    *(uint *)&this_ptr->field_0xd068 = uVar2;
    *(int *)&this_ptr->field_0xd058 = *(int *)&this_ptr->field_0xd058 + 1;
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,
               *(uint *)&this_ptr->field_0xd064);
    return 1;
  }
  iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x94))(iVar7);
  if (iVar7 != 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,this_ptr,
               *(uint *)&this_ptr->field_0xd064);
    *(uint *)&this_ptr->field_0xd064 = 0;
    *(uint *)&this_ptr->field_0xd060 = 0;
    core_zombie_cpp_FUN_0058cc20(this_ptr);
    return 0;
  }
  fVar3 = (pCVar8->position).x - *(float *)(*(int *)&this_ptr->field_0xd064 + 0x20);
  fVar4 = (this_ptr->base).base.base.location.position.z -
          *(float *)(*(int *)&this_ptr->field_0xd064 + 0x28);
  fStack_234 = (float)_DAT_005d8827 - SQRT(fVar4 * fVar4 + fVar3 * fVar3) * (float)_DAT_005d881f;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  *(float *)&this_ptr->field_0xd060 = delta_time * fStack_234 + *(float *)&this_ptr->field_0xd060;
  iStack_38 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_0058bd50
                        (this_ptr,*(int *)&this_ptr->field_0xd068);
  iVar7 = -1;
  if ((((-1 < iStack_38) && (*(float *)&this_ptr->field_0xd060 < 0.0)) &&
      (iVar6 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xd064 + 0x154) + 0x84))
                         (*(int *)&this_ptr->field_0xd064,this_ptr), iVar6 == 3)) &&
     (iVar6 = core_zombie_cpp_CZombie_canPickupWithHand_FUN_0058bdf0
                        (this_ptr,*(int *)&this_ptr->field_0xd068), iVar6 != 0)) {
    uVar1 = *(uint *)&this_ptr->field_0xd068;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0058b65f:
        iVar7 = *(int *)&this_ptr->field_0xd064;
        (**(code **)(*(int *)(iVar7 + 0x154) + 0x1c))(iVar7);
        puVar9 = auStack_198;
        puVar10 = auStack_1e0;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
        }
        afStack_48[0] = 0.5;
        core_bodypart_cpp_FUN_00416c50(auStack_1e0,auStack_1d4,afStack_58 + 4);
        fStack_150 = fStack_84;
        afStack_14c[(uint)bVar11 * -2] = afStack_80[(uint)bVar11 * -2];
        afStack_14c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_80[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_bodypart_cpp_FUN_00416bd0(&fStack_150);
        pfVar12 = &fStack_fc;
        CStack_64.y = afStack_58[1];
        afStack_58[(uint)bVar11 * -2 + -1] = afStack_58[(uint)bVar11 * -2 + 2];
        afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2] =
             afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
        afStack_58[0] = fStack_1d8 + (float)_DAT_005d882f;
        fStack_fc = CStack_64.y;
        afStack_f8[(uint)bVar11 * -2] = afStack_58[(uint)bVar11 * -2 + -1];
        afStack_f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_58[(uint)bVar11 * -2 + (uint)bVar11 * -2];
        core_actor_cpp_FUN_00408b80(iVar7,pfVar12);
        CStack_9c.x = fStack_114;
        afStack_b0[(uint)bVar11 * -2 + 6] = afStack_110[(uint)bVar11 * -2];
        afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
             afStack_110[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        if (&CStack_e4 != (CVector3f *)(afStack_b0 + 5)) {
          CStack_e4.x = CStack_9c.x;
          CStack_e4.y = CStack_9c.y;
          CStack_e4.z = CStack_9c.z;
        }
      }
      else {
LAB_0058b9e6:
        iVar7 = *(int *)&this_ptr->field_0xd064;
        if (&CStack_e4 != (CVector3f *)(iVar7 + 0x20)) {
          CStack_e4.x = ((CVector3f *)(iVar7 + 0x20))->x;
          CStack_e4.y = *(float *)(iVar7 + 0x24);
          CStack_e4.z = *(float *)(iVar7 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_0058b9e6;
        goto LAB_0058b65f;
      }
      iVar7 = *(int *)&this_ptr->field_0xd064;
      (**(code **)(*(int *)(iVar7 + 0x154) + 0x1c))(iVar7);
      puVar9 = auStack_180;
      puVar10 = auStack_1b0;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
      }
      uStack_3c = 0x3f000000;
      core_bodypart_cpp_FUN_00416c50(auStack_1b0,auStack_1a4,&uStack_3c);
      uStack_b4 = uStack_cc;
      afStack_b0[(uint)bVar11 * -2] = *(float *)((int)&CStack_d8 + ((uint)bVar11 * -2 + 4) * 4);
      afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           *(float *)((int)&CStack_d8 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 5) * 4);
      core_bodypart_cpp_FUN_00416bd0(&uStack_b4);
      pfVar12 = afStack_14c + 8;
      afStack_b0[2] = afStack_14c[2];
      afStack_b0[(uint)bVar11 * -2 + 3] = afStack_14c[(uint)bVar11 * -2 + 3];
      afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_14c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      fStack_a0 = fStack_1a8 + (float)_DAT_005d882f;
      afStack_12c[0] = afStack_b0[2];
      afStack_14c[(uint)bVar11 * -2 + 9] = afStack_b0[(uint)bVar11 * -2 + 3];
      afStack_14c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
           afStack_b0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      core_actor_cpp_FUN_00408b80(iVar7,pfVar12);
      CStack_d8.x = fStack_138;
      *(float *)((int)&CStack_d8 + ((uint)bVar11 * -2 + 1) * 4) = afStack_14c[(uint)bVar11 * -2 + 6]
      ;
      *(float *)((int)&CStack_d8 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 2) * 4) =
           afStack_14c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      if (&CStack_e4 != &CStack_d8) {
        CStack_e4.x = CStack_d8.x;
        CStack_e4.y = CStack_d8.y;
        CStack_e4.z = CStack_d8.z;
      }
    }
    iVar7 = iStack_38;
    CStack_c0.x = _DAT_02cfd900;
    *(uint *)((int)&CStack_c0 + (uint)bVar11 * -8 + 4) =
         *(uint *)(&DAT_02cfd904 + (uint)bVar11 * -8);
    *(uint *)((int)&CStack_c0 + ((uint)bVar11 * -2 + (uint)bVar11 * -2) * 4 + 8) =
         *(uint *)(&DAT_02cfd908 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    if (iVar7 == 0) {
      CStack_120.y = (float)iVar7;
      CStack_120.z = (float)iVar7;
      CStack_120.x = -1.5;
      if (&CStack_c0 != (CVector3f *)(afStack_14c + 0xb)) {
        CStack_c0.x = -1.5;
        CStack_c0.y = 0.0;
        CStack_c0.z = 0.0;
      }
    }
    if (iStack_38 == 1) {
      CStack_90.y = 0.0;
      CStack_90.z = 0.0;
      CStack_90.x = 1.5;
      if (&CStack_c0 != (CVector3f *)(afStack_b0 + 8)) {
        CStack_c0.x = 1.5;
        CStack_c0.y = 0.0;
        CStack_c0.z = 0.0;
      }
    }
    iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      ((CCharacter *)this_ptr,&CStack_e4,(CPathMap *)0x0,&CStack_c0,0.0,0.0);
  }
  if (iVar7 < 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",this_ptr,
               *(uint *)&this_ptr->field_0xd064);
    *(uint *)&this_ptr->field_0xd064 = 0;
    *(uint *)&this_ptr->field_0xd060 = 0x41a00000;
    core_zombie_cpp_FUN_0058cc20(this_ptr);
    return 0;
  }
  if (iVar7 < 1) {
    return 1;
  }
  engine_console_cpp_FUN_00441ff0
            (g_CConsolePtr,"%s beginning to pickup %s\n",this_ptr,
             *(uint *)&this_ptr->field_0xd064);
  uVar1 = *(uint *)&this_ptr->field_0xd068;
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_0058baca:
      _DAT_01d71de0 = "..\\core\\zombie.cpp";
      _DAT_01d71de4 = 0x5a2;
      core_main_c_FUN_004e4330("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      iVar7 = 0xd;
      goto LAB_0058ba6c;
    }
    if (uVar1 != 3) goto LAB_0058baca;
  }
  iVar7 = 0xb;
LAB_0058ba6c:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            (&(this_ptr->base).base.model.base,iVar7,1);
  return 1;
}
