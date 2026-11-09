// Name: core_zombie.cpp_FUN_0058b3f0
// Address: 0058b3f0
// Address Range: [[0058b3f0, 0058bd4f]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_FUN_0058b3f0(CZombie *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_zombie_cpp_FUN_0058b3f0(CZombie *this_ptr,float delta_time)

{
  CDemonActor *actor_ptr;
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  uint *puVar8;
  float *pfVar9;
  byte bVar10;
  float afStackY_1138 [954];
  float *pfVar11;
  CVector3f *dimensions;
  float fStack_238;
  float fStack_234;
  int aiStack_208 [10];
  uint auStack_1e0 [2];
  float fStack_1d8;
  byte auStack_1d4 [12];
  float afStack_1c8 [6];
  uint auStack_1b0 [2];
  float fStack_1a8;
  byte auStack_1a4 [12];
  uint auStack_198 [6];
  uint auStack_180 [6];
  float local_168;
  float fStack_164;
  float fStack_160;
  float afStack_15c [3];
  uint uStack_150;
  float afStack_14c [5];
  CVector3f CStack_138;
  uint uStack_12c;
  float afStack_128 [2];
  CVector3f CStack_120;
  CVector3f CStack_114;
  float fStack_108;
  float afStack_104 [5];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  CVector3f CStack_9c;
  CVector3f CStack_90;
  uint uStack_84;
  float afStack_80 [2];
  byte auStack_78 [8];
  float afStack_70 [4];
  uint uStack_60;
  float fStack_58;
  uint uStack_54;
  uint auStack_48 [3];
  uint uStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  float *local_2c;
  int local_28;
  float *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar10 = 0;
  if (*(int *)&this_ptr->field_0xd124 < 0) {
    return 0;
  }
  fVar2 = *(float *)&this_ptr->field_0xd05c - delta_time;
  *(float *)&this_ptr->field_0xd05c = fVar2;
  if (0.0 < fVar2) {
    *(int *)&this_ptr->field_0xd058 = *(int *)&this_ptr->field_0xd058 + 1;
    local_18 = core_actor_cpp_FUN_0040ce40(0x40a00000,0x41200000);
    *(uint *)&this_ptr->field_0xd05c = local_18;
  }
  if (*(int *)&this_ptr->field_0x25b0 != 0) {
    return 0;
  }
  if (*(int *)&this_ptr->field_0x2628 != 0) {
    return 0;
  }
  if (0.0 < *(float *)&this_ptr->field_0xd060) {
    fVar2 = *(float *)&this_ptr->field_0xd060 - delta_time;
    *(float *)&this_ptr->field_0xd060 = fVar2;
    if (0.0 <= fVar2) {
      return 0;
    }
    *(uint *)&this_ptr->field_0xd060 = 0;
    return 0;
  }
  iVar4 = *(int *)&this_ptr->field_0xd064;
  if (iVar4 == 0) {
    local_24 = afStack_15c;
    local_30 = 0;
    local_28 = 0;
    local_1c = 0;
    local_2c = (float *)&this_ptr->field_0x20;
    for (local_20 = 0; local_20 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_20 = local_20 + 1)
    {
      actor_ptr = *(CDemonActor **)(&g_CDemonSetPtr->field_0x14d168 + local_28);
      iVar4 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x94))(actor_ptr);
      if ((iVar4 == 0) &&
         (iVar4 = (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x84))(actor_ptr,this_ptr),
         iVar4 == 3)) {
        (**(code **)(*(int *)&actor_ptr->field_0x154 + 0x1c))(actor_ptr);
        pfVar11 = local_24;
        pfVar7 = afStack_1c8;
        pfVar9 = &local_168;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar9 = *pfVar7;
          pfVar7 = pfVar7 + (uint)bVar10 * -2 + 1;
          pfVar9 = pfVar9 + (uint)bVar10 * -2 + 1;
        }
        dimensions = (CVector3f *)auStack_78;
        fStack_f0 = *pfVar11 - local_168;
        fStack_ec = pfVar11[1] - fStack_164;
        fStack_e8 = pfVar11[2] - fStack_160;
        auStack_78._0_4_ = *pfVar11 - local_168;
        *(float *)(auStack_78 + (uint)bVar10 * -8 + 4) = afStack_104[(uint)bVar10 * -2 + 6];
        *(float *)(auStack_78 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        iStack_34 = core_zombie_cpp_FUN_00588750(dimensions);
        if (((iStack_34 != 0) &&
            (iVar4 = core_zombie_cpp_FUN_0058bdf0(this_ptr,iStack_34), iVar4 != 0)) &&
           ((iVar4 = core_actor_cpp_FUN_0040c790(actor_ptr,"CBodyPart"), iVar4 == 0 ||
            ((*(uint *)&actor_ptr->field_0x6c & 3) == (*(uint *)&this_ptr->field_0xd058 & 3))))) {
          fStack_108 = *(float *)&actor_ptr->field_0x20 - *local_2c;
          afStack_104[0] = *(float *)&actor_ptr->field_0x24 - local_2c[1];
          afStack_104[1] = *(float *)&actor_ptr->field_0x28 - local_2c[2];
          afStack_70[1] = fStack_108;
          afStack_70[(uint)bVar10 * -2 + 2] = afStack_104[(uint)bVar10 * -2];
          afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3] =
               afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          afStack_70[2] = afStack_70[2] * afStack_70[2] * afStack_70[2] * afStack_70[2];
          fStack_238 = SQRT(afStack_70[3] * afStack_70[3] +
                            afStack_70[1] * afStack_70[1] + afStack_70[2] * afStack_70[2]);
          if (((float)_DAT_005d8827 <= fStack_238) &&
             (fStack_238 <= *(float *)&this_ptr->field_0xd054 * _DAT_005d8837)) {
            *(CDemonActor **)(&stack0xfffffdd0 + local_1c) = actor_ptr;
            *(int *)((int)aiStack_208 + local_1c) = iStack_34;
            local_1c = local_1c + 4;
            local_30 = local_30 + 1;
            if (0x27 < local_1c) break;
          }
        }
      }
      local_28 = local_28 + 4;
    }
    if (local_30 < 1) {
      return 0;
    }
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,local_30 + -1);
    *(uint *)&this_ptr->field_0xd064 = *(uint *)(&stack0xfffffdd0 + iVar4 * 4);
    iVar4 = aiStack_208[iVar4];
    *(uint *)&this_ptr->field_0xd060 = 0xc2200000;
    *(int *)&this_ptr->field_0xd068 = iVar4;
    *(int *)&this_ptr->field_0xd058 = *(int *)&this_ptr->field_0xd058 + 1;
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s is going to try to pick up %s\n",this_ptr,
               *(uint *)&this_ptr->field_0xd064);
    return 1;
  }
  iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x94))(iVar4);
  if (iVar4 != 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,this_ptr,
               *(uint *)&this_ptr->field_0xd064);
    *(uint *)&this_ptr->field_0xd064 = 0;
    *(uint *)&this_ptr->field_0xd060 = 0;
    core_zombie_cpp_FUN_0058cc20(this_ptr);
    return 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x20 - *(float *)(*(int *)&this_ptr->field_0xd064 + 0x20);
  fVar3 = *(float *)&this_ptr->field_0x28 - *(float *)(*(int *)&this_ptr->field_0xd064 + 0x28);
  fStack_234 = (float)_DAT_005d8827 - SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)_DAT_005d881f;
  if (fStack_234 < 1.0) {
    fStack_234 = 1.0;
  }
  *(float *)&this_ptr->field_0xd060 = delta_time * fStack_234 + *(float *)&this_ptr->field_0xd060;
  iStack_38 = core_zombie_cpp_FUN_0058bd50(this_ptr,*(int *)&this_ptr->field_0xd068);
  iVar4 = -1;
  if ((((-1 < iStack_38) && (*(float *)&this_ptr->field_0xd060 < 0.0)) &&
      (iVar5 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xd064 + 0x154) + 0x84))
                         (*(int *)&this_ptr->field_0xd064,this_ptr), iVar5 == 3)) &&
     (iVar5 = core_zombie_cpp_FUN_0058bdf0(this_ptr,*(int *)&this_ptr->field_0xd068), iVar5 != 0)) {
    uVar1 = *(uint *)&this_ptr->field_0xd068;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0058b65f:
        iVar4 = *(int *)&this_ptr->field_0xd064;
        (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
        puVar6 = auStack_198;
        puVar8 = auStack_1e0;
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        auStack_48[0] = 0x3f000000;
        core_bodypart_cpp_FUN_00416c50(auStack_1e0,auStack_1d4,auStack_48);
        uStack_150 = uStack_84;
        afStack_14c[(uint)bVar10 * -2] = afStack_80[(uint)bVar10 * -2];
        afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_bodypart_cpp_FUN_00416bd0(&uStack_150);
        pfVar11 = afStack_104 + 2;
        uStack_60 = uStack_54;
        afStack_70[(uint)bVar10 * -2 + 5] = afStack_70[(uint)bVar10 * -2 + 8];
        afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6] =
             afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
        fStack_58 = fStack_1d8 + (float)_DAT_005d882f;
        afStack_104[2] = (float)uStack_60;
        afStack_104[(uint)bVar10 * -2 + 3] = afStack_70[(uint)bVar10 * -2 + 5];
        afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6];
        core_actor_cpp_FUN_00408b80(iVar4,pfVar11);
        CStack_9c._0_4_ = CStack_114._0_4_;
        *(uint *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        if (&CStack_e4 != &CStack_9c) {
          CStack_e4._0_4_ = CStack_9c._0_4_;
          CStack_e4._4_4_ = CStack_9c._4_4_;
          CStack_e4._8_4_ = CStack_9c._8_4_;
        }
      }
      else {
LAB_0058b9e6:
        iVar4 = *(int *)&this_ptr->field_0xd064;
        if (&CStack_e4 != (CVector3f *)(iVar4 + 0x20)) {
          CStack_e4._0_4_ = *(uint *)(iVar4 + 0x20);
          CStack_e4._4_4_ = *(uint *)(iVar4 + 0x24);
          CStack_e4._8_4_ = *(uint *)(iVar4 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_0058b9e6;
        goto LAB_0058b65f;
      }
      iVar4 = *(int *)&this_ptr->field_0xd064;
      (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
      puVar6 = auStack_180;
      puVar8 = auStack_1b0;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + (uint)bVar10 * -2 + 1;
        puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
      }
      uStack_3c = 0x3f000000;
      core_bodypart_cpp_FUN_00416c50(auStack_1b0,auStack_1a4,&uStack_3c);
      uStack_b4 = uStack_cc;
      afStack_b0[(uint)bVar10 * -2] = afStack_c8[(uint)bVar10 * -2];
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_bodypart_cpp_FUN_00416bd0(&uStack_b4);
      puVar6 = &uStack_12c;
      afStack_b0[2] = afStack_14c[2];
      afStack_b0[(uint)bVar10 * -2 + 3] = afStack_14c[(uint)bVar10 * -2 + 3];
      afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      fStack_a0 = fStack_1a8 + (float)_DAT_005d882f;
      uStack_12c = afStack_b0[2];
      afStack_128[(uint)bVar10 * -2] = afStack_b0[(uint)bVar10 * -2 + 3];
      afStack_128[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_actor_cpp_FUN_00408b80(iVar4,puVar6);
      CStack_d8._0_4_ = CStack_138._0_4_;
      *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_138 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_138 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      if (&CStack_e4 != &CStack_d8) {
        CStack_e4._0_4_ = CStack_d8._0_4_;
        CStack_e4._4_4_ = CStack_d8._4_4_;
        CStack_e4._8_4_ = CStack_d8._8_4_;
      }
    }
    iVar4 = iStack_38;
    CStack_c0._0_4_ = _DAT_02cfd900;
    *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + 4) =
         *(uint *)(&DAT_02cfd904 + (uint)bVar10 * -8);
    *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)(&DAT_02cfd908 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    if (iVar4 == 0) {
      CStack_120._4_4_ = iVar4;
      CStack_120._8_4_ = iVar4;
      CStack_120._0_4_ = 0xbfc00000;
      if (&CStack_c0 != (CVector3f *)(afStack_128 + 2)) {
        CStack_c0._0_4_ = 0xbfc00000;
        CStack_c0._4_4_ = 0;
        CStack_c0._8_4_ = 0;
      }
    }
    if (iStack_38 == 1) {
      CStack_90._4_4_ = 0;
      CStack_90._8_4_ = 0;
      CStack_90._0_4_ = 0x3fc00000;
      if (&CStack_c0 != &CStack_90) {
        CStack_c0._0_4_ = 0x3fc00000;
        CStack_c0._4_4_ = 0;
        CStack_c0._8_4_ = 0;
      }
    }
    iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      ((CCharacter *)this_ptr,&CStack_e4,(CPathMap *)0x0,&CStack_c0,0.0,0.0);
  }
  if (iVar4 < 0) {
    engine_console_cpp_FUN_00441ff0
              (g_CConsolePtr,"%s can't pick up %s, giving up\n",this_ptr,
               *(uint *)&this_ptr->field_0xd064);
    *(uint *)&this_ptr->field_0xd064 = 0;
    *(uint *)&this_ptr->field_0xd060 = 0x41a00000;
    core_zombie_cpp_FUN_0058cc20(this_ptr);
    return 0;
  }
  if (iVar4 < 1) {
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
      iVar4 = 0xd;
      goto LAB_0058ba6c;
    }
    if (uVar1 != 3) goto LAB_0058baca;
  }
  iVar4 = 0xb;
LAB_0058ba6c:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&this_ptr->field_0x158,iVar4,1);
  return 1;
}
