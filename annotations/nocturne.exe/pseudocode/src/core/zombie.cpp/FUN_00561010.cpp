// Name: core_zombie.cpp_FUN_00561010
// Address: 00561010
// Address Range: [[00561010, 005617d2]]
// Convention: unknown
// Signature: undefined4 core_zombie_cpp_FUN_00561010(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_zombie_cpp_FUN_00561010(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fStack_168;
  int aiStack_160 [10];
  int aiStack_138 [10];
  byte auStack_110 [24];
  byte auStack_f8 [8];
  float fStack_f0;
  byte auStack_ec [12];
  byte auStack_e0 [8];
  float fStack_d8;
  byte auStack_d4 [12];
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  byte auStack_bc [8];
  float fStack_b4;
  byte auStack_b0 [12];
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte auStack_80 [8];
  float fStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  byte auStack_68 [12];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  float *local_1c;
  int local_18;
  uint local_14;
  
  if (*(int *)(param_1 + 0xbdf0) < 0) {
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0xbd2c) - param_2;
  *(float *)(param_1 + 0xbd2c) = fVar2;
  if (0.0 < fVar2) {
    *(int *)(param_1 + 0xbd28) = *(int *)(param_1 + 0xbd28) + 1;
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x41200000);
    *(uint *)(param_1 + 0xbd2c) = local_14;
  }
  if (*(int *)(param_1 + 0x24ac) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24f0) != 0) {
    return 0;
  }
  if (0.0 < *(float *)(param_1 + 0xbd30)) {
    param_2 = *(float *)(param_1 + 0xbd30) - param_2;
    *(float *)(param_1 + 0xbd30) = param_2;
    if (0.0 <= param_2) {
      return 0;
    }
    *(uint *)(param_1 + 0xbd30) = 0;
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0xbd34);
  if (iVar7 == 0) {
    local_24 = 0;
    local_20 = 0;
    iVar7 = 0;
    local_1c = (float *)(param_1 + 0x20);
    for (local_18 = 0; local_18 < *(int *)(0x01E57284 + 0x14cd6c); local_18 = local_18 + 1) {
      iVar8 = *(int *)(0x01E57284 + local_20 + 0x14cd70);
      iVar4 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x8c))(iVar8);
      iVar9 = iVar7;
      if ((iVar4 == 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar8 + 0x14c) + 0x7c))(iVar8,param_1), iVar4 == 3)) {
        pfVar6 = (float *)(**(code **)(*(int *)(iVar8 + 0x14c) + 0x14))(iVar8,auStack_110);
        fStack_5c = pfVar6[3] - *pfVar6;
        fStack_58 = pfVar6[4] - pfVar6[1];
        fStack_54 = pfVar6[5] - pfVar6[2];
        iStack_28 = core_zombie_cpp_classifyObjectShape_FUN_0055e940(&fStack_5c);
        if (((iStack_28 != 0) &&
            (iVar4 = core_zombie_cpp_CZombie_canPickupWithHand_FUN_00561880(param_1,iStack_28),
            iVar4 != 0)) &&
           ((iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar8,"CBodyPart"), iVar4 == 0
            || ((*(uint *)(iVar8 + 0x6c) & 3) == (*(uint *)(param_1 + 0xbd28) & 3))))) {
          fStack_8c = *(float *)(iVar8 + 0x20) - *local_1c;
          fStack_88 = *(float *)(iVar8 + 0x24) - local_1c[1];
          fStack_88 = fStack_88 * fStack_88;
          fStack_84 = *(float *)(iVar8 + 0x28) - local_1c[2];
          fStack_88 = fStack_88 * fStack_88;
          fVar2 = SQRT(fStack_84 * fStack_84 + fStack_8c * fStack_8c + fStack_88 * fStack_88);
          if (((float)5 <= fVar2) &&
             (fVar2 <= *(float *)(param_1 + 0xbd24) * 15.0f)) {
            *(int *)((int)aiStack_138 + iVar7) = iStack_28;
            iVar9 = iVar7 + 4;
            local_24 = local_24 + 1;
            *(int *)((int)aiStack_160 + iVar7) = iVar8;
            if (0x27 < iVar9) break;
          }
        }
      }
      local_20 = local_20 + 4;
      iVar7 = iVar9;
    }
    if (local_24 < 1) {
      return 0;
    }
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040de00(0,local_24 + -1);
    *(int *)(param_1 + 0xbd34) = aiStack_160[iVar7];
    iVar7 = aiStack_138[iVar7];
    *(uint *)(param_1 + 0xbd30) = 0xc2200000;
    *(int *)(param_1 + 0xbd38) = iVar7;
    *(int *)(param_1 + 0xbd28) = *(int *)(param_1 + 0xbd28) + 1;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s is going to try to pick up %s\n",param_1,
               *(uint *)(param_1 + 0xbd34));
    return 1;
  }
  iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x8c))(iVar7);
  if (iVar7 != 0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s can't pick up %s, sombody else beat me to it!\n",param_1,
               *(uint *)(param_1 + 0xbd34));
    *(uint *)(param_1 + 0xbd34) = 0;
    *(uint *)(param_1 + 0xbd30) = 0;
    core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
    return 0;
  }
  fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbd34) + 0x20);
  fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbd34) + 0x28);
  fStack_168 = (float)5 - SQRT(fVar3 * fVar3 + fVar2 * fVar2) * (float)0.33333333333333298
  ;
  if (fStack_168 < 1.0) {
    fStack_168 = 1.0;
  }
  iVar8 = -1;
  *(float *)(param_1 + 0xbd30) = param_2 * fStack_168 + *(float *)(param_1 + 0xbd30);
  iVar7 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                    (param_1,*(uint *)(param_1 + 0xbd38));
  if ((((-1 < iVar7) && (*(float *)(param_1 + 0xbd30) < 0.0)) &&
      (iVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbd34) + 0x14c) + 0x7c))
                         (*(int *)(param_1 + 0xbd34),param_1), iVar9 == 3)) &&
     (iVar9 = core_zombie_cpp_CZombie_canPickupWithHand_FUN_00561880
                        (param_1,*(uint *)(param_1 + 0xbd38)), iVar9 != 0)) {
    uVar1 = *(uint *)(param_1 + 0xbd38);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_00561230:
        iVar8 = *(int *)(param_1 + 0xbd34);
        (**(code **)(*(int *)(iVar8 + 0x14c) + 0x14))(iVar8,auStack_e0);
        uStack_2c = 0x3f000000;
        uVar5 = core_bodypart_cpp_addVector_FUN_00417fc0
                          (auStack_e0,auStack_b0,auStack_d4,auStack_80,&uStack_2c);
        core_bodypart_cpp_scaleVector_FUN_00417f60(uVar5);
        fStack_78 = fStack_d8 + (float)0.40000000000000002;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar8,&uStack_44,auStack_80);
        if (&uStack_a4 != &uStack_44) {
          uStack_a4 = uStack_44;
          uStack_a0 = uStack_40;
          uStack_9c = uStack_3c;
        }
      }
      else {
LAB_005614f8:
        iVar8 = *(int *)(param_1 + 0xbd34);
        if (&uStack_a4 != (uint *)(iVar8 + 0x20)) {
          uStack_a4 = *(uint *)(iVar8 + 0x20);
          uStack_a0 = *(uint *)(iVar8 + 0x24);
          uStack_9c = *(uint *)(iVar8 + 0x28);
        }
      }
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) goto LAB_005614f8;
        goto LAB_00561230;
      }
      iVar8 = *(int *)(param_1 + 0xbd34);
      (**(code **)(*(int *)(iVar8 + 0x14c) + 0x14))(iVar8,auStack_f8);
      uStack_30 = 0x3f000000;
      uVar5 = core_bodypart_cpp_addVector_FUN_00417fc0
                        (auStack_f8,auStack_68,auStack_ec,auStack_bc,&uStack_30);
      core_bodypart_cpp_scaleVector_FUN_00417f60(uVar5);
      fStack_b4 = fStack_f0 + (float)0.40000000000000002;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar8,&uStack_50,auStack_bc);
      if (&uStack_a4 != &uStack_50) {
        uStack_a4 = uStack_50;
        uStack_a0 = uStack_4c;
        uStack_9c = uStack_48;
      }
    }
    uStack_c8 = _DAT_02dd1184;
    uStack_c4 = _DAT_02dd1188;
    uStack_c0 = _DAT_02dd118c;
    if (iVar7 == 0) {
      uStack_74 = 0xbfc00000;
      uStack_70 = 0;
      uStack_6c = uStack_70;
      if (&uStack_c8 != &uStack_74) {
        uStack_c8 = 0xbfc00000;
        uStack_c4 = 0;
        uStack_c0 = 0;
      }
    }
    if (iVar7 == 1) {
      uStack_94 = 0;
      uStack_90 = 0;
      uStack_98 = 0x3fc00000;
      if (&uStack_c8 != &uStack_98) {
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_c8 = 0x3fc00000;
      }
    }
    iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                      (param_1,&uStack_a4,0,&uStack_c8,0,0);
  }
  if (iVar8 < 0) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s can't pick up %s, giving up\n",param_1,
               *(uint *)(param_1 + 0xbd34));
    *(uint *)(param_1 + 0xbd34) = 0;
    *(uint *)(param_1 + 0xbd30) = 0x41a00000;
    core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
    return 0;
  }
  if (iVar8 < 1) {
    return 1;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"%s beginning to pickup %s\n",param_1,
             *(uint *)(param_1 + 0xbd34));
  uVar1 = *(uint *)(param_1 + 0xbd38);
  if (uVar1 < 2) {
    if (uVar1 != 1) {
LAB_005615c6:
      _DAT_01cc4800 = "..\\core\\zombie.cpp";
      _DAT_01cc4804 = 0x5d0;
      FUN_004c8440("Invalid zombie object shape!");
      return 1;
    }
  }
  else {
    if (uVar1 < 3) {
      uVar5 = 0xc;
      goto LAB_00561571;
    }
    if (uVar1 != 3) goto LAB_005615c6;
  }
  uVar5 = 10;
LAB_00561571:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar5,1);
  return 1;
}
