// Name: core_stranger.cpp_CStranger_tryPickupObject_FUN_0053b630
// Address: 0053b630
// Address Range: [[0053b630, 0053bea9]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_stranger_cpp_CStranger_tryPickupObject_FUN_0053b630(int param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  byte auStack_16c [24];
  byte auStack_154 [24];
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  byte auStack_130 [12];
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  byte auStack_118 [12];
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  byte auStack_f4 [12];
  byte auStack_e8 [12];
  byte auStack_dc [12];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [3];
  byte auStack_94 [12];
  byte auStack_88 [12];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_30;
  uint uStack_2c;
  float local_28;
  int local_24;
  float fStack_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((((0.0 < *(float *)(param_1 + 0x1faa8)) || (*(int *)(param_1 + 0x1fa08) != 0)) ||
      (local_14 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                                   (param_1,0), local_14 < (float)_DAT_00595a9f)) ||
     (((local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0
                                    (param_1 + 0x150,0), local_14 < 1.0 ||
       (*(int *)(param_1 + 0x24ac) != 0)) || (*(int *)(param_1 + 0x24f0) != 0)))) {
    return 0;
  }
  local_24 = param_1 + 0x20;
  local_28 = 4.0;
  local_18 = 0;
  for (local_1c = 0; local_1c < *(int *)(0x01E57284 + 0x14cd6c); local_1c = local_1c + 1) {
    iVar7 = *(int *)(0x01E57284 + local_18 + 0x14cd70);
    iVar2 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x8c))(iVar7);
    if (iVar2 == 0) {
      uStack_2c = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x7c))(iVar7,param_1);
      switch(uStack_2c) {
      case 1:
        if (*(int *)(param_1 + 0x24ac) == 0) {
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar7,&fStack_7c,local_24);
          fVar1 = SQRT(fStack_74 * fStack_74 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
          if (fVar1 <= 0.0) {
            fStack_78 = 0.0;
            fStack_7c = 0.0;
            fStack_74 = 0.0;
          }
          else {
            fVar1 = 1.0 / fVar1;
            fStack_7c = fStack_7c * fVar1;
            fStack_78 = fStack_78 * fVar1;
            fStack_74 = fStack_74 * fVar1;
          }
          if (fStack_74 <= 0.0) {
            uStack_c0 = 0x40400000;
            uStack_bc = 0x40000000;
            uStack_c4 = 0;
            if (&uStack_13c != &uStack_c4) {
              uStack_13c = 0;
              uStack_134 = 0x40000000;
              uStack_138 = 0x40400000;
            }
            goto LAB_0053b782;
          }
        }
        break;
      case 2:
        if (*(int *)(param_1 + 0x24f0) == 0) {
          uStack_108 = 0x40400000;
          uStack_104 = 0x40000000;
          uStack_10c = 0;
          if (&uStack_13c != &uStack_10c) {
            uStack_134 = 0x40000000;
            uStack_138 = 0x40400000;
            uStack_13c = 0;
          }
LAB_0053b782:
          pfVar3 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                      (param_1,auStack_94,&uStack_13c);
          pfVar4 = (float *)(**(code **)(*(int *)(iVar7 + 0x14c) + 0x14))(iVar7,auStack_154);
          fStack_d0 = *pfVar4 + pfVar4[3];
          fStack_cc = pfVar4[1] + pfVar4[4];
          fStack_58 = fStack_d0 * _DAT_00595aa7;
          fStack_54 = fStack_cc * _DAT_00595aa7;
          fStack_c8 = pfVar4[2] + pfVar4[5];
          fStack_50 = fStack_c8 * _DAT_00595aa7;
          pfVar4 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                      (iVar7,auStack_130,&fStack_58);
          fStack_100 = *pfVar4 - *pfVar3;
          fStack_fc = pfVar4[1] - pfVar3[1];
          fStack_f8 = pfVar4[2] - pfVar3[2];
          if (((ABS(fStack_fc) <= (float)_DAT_00595ac7) &&
              (fStack_20 = fStack_100 * fStack_100 + fStack_f8 * fStack_f8, fStack_20 <= local_28))
             && (iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar7,param_2), iVar2 != 0)) {
            local_28 = fStack_20;
            uStack_30 = uStack_2c;
            *(int *)(param_1 + 0x1fa08) = iVar7;
          }
        }
        break;
      case 3:
      case 4:
        if ((*(int *)(param_1 + 0x24f0) == 0) &&
           ((iVar2 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x7c))(iVar7,param_1), iVar2 != 4 ||
            ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(iVar7,afStack_a0,local_24),
             ABS(afStack_a0[0]) <= 1.0 &&
             (iVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_88,afStack_a0),
             ABS(*(float *)(iVar2 + 4)) <= (float)_DAT_00595abf)))))) {
          uStack_4c = 0;
          uStack_48 = 0x40400000;
          uStack_44 = 0x40000000;
          if (&uStack_13c != &uStack_4c) {
            uStack_138 = 0x40400000;
            uStack_134 = 0x40000000;
            uStack_13c = 0;
          }
          goto LAB_0053b782;
        }
      }
    }
    local_18 = local_18 + 4;
  }
  iVar7 = *(int *)(param_1 + 0x1fa08);
  if (iVar7 == 0) {
    return 0;
  }
  puVar5 = (uint *)(**(code **)(*(int *)(iVar7 + 0x14c) + 0x14))(iVar7,auStack_16c);
  if ((uint *)(param_1 + 0x1fb0c) != puVar5) {
    *(uint *)(param_1 + 0x1fb0c) = *puVar5;
    *(uint *)(param_1 + 0x1fb10) = puVar5[1];
    *(uint *)(param_1 + 0x1fb14) = puVar5[2];
  }
  if ((uint *)(param_1 + 0x1fb18) != puVar5 + 3) {
    *(uint *)(param_1 + 0x1fb18) = puVar5[3];
    *(uint *)(param_1 + 0x1fb1c) = puVar5[4];
    *(uint *)(param_1 + 0x1fb20) = puVar5[5];
  }
  fStack_70 = *(float *)(param_1 + 0x1fb0c) + *(float *)(param_1 + 0x1fb18);
  fStack_6c = *(float *)(param_1 + 0x1fb10) + *(float *)(param_1 + 0x1fb1c);
  fStack_40 = fStack_70 * _DAT_00595aa7;
  fStack_68 = *(float *)(param_1 + 0x1fb14) + *(float *)(param_1 + 0x1fb20);
  fStack_3c = fStack_6c * _DAT_00595aa7;
  fStack_38 = fStack_68 * _DAT_00595aa7;
  uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                    (*(uint *)(param_1 + 0x1fa08),auStack_e8,&fStack_40);
  puVar5 = (uint *)
           core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(param_1,auStack_dc,uVar6);
  if ((uint *)(param_1 + 0x1fb00) != puVar5) {
    *(uint *)(param_1 + 0x1fb00) = *puVar5;
    *(uint *)(param_1 + 0x1fb04) = puVar5[1];
    *(uint *)(param_1 + 0x1fb08) = puVar5[2];
  }
  switch(uStack_30) {
  case 1:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x1b,1);
    uVar6 = *(uint *)(param_1 + 0x1fa08);
    pcVar8 = "Rummaging %s\n";
    break;
  case 2:
  case 3:
  case 4:
    iVar7 = *(int *)(param_1 + 0x1fa08);
    if ((iVar7 == 0) ||
       (iVar7 = (**(code **)(*(int *)(iVar7 + 0x14c) + 0x7c))(iVar7,param_1), iVar7 != 4)) {
      iVar7 = param_1 + 0x150;
      if (*(float *)(param_1 + 0x1fb04) <= (float)_DAT_00595ab7) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,0x13,1);
        uVar6 = *(uint *)(param_1 + 0x1fa08);
        pcVar8 = "Picking up %s off ground\n";
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (iVar7,&fStack_b8,_DAT_02dc9f88);
        core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                  (iVar7,&fStack_ac,_DAT_02dc9f60);
        fStack_60 = fStack_b4 - fStack_a8;
        fStack_64 = fStack_b8 - fStack_ac;
        fStack_5c = fStack_b0 - fStack_a4;
        fStack_124 = fStack_ac - *(float *)(param_1 + 0x1fb00);
        fStack_120 = fStack_a8 - *(float *)(param_1 + 0x1fb04);
        fStack_11c = fStack_a4 - *(float *)(param_1 + 0x1fb08);
        if ((float)_DAT_00595ab7 <
            ABS(SQRT(fStack_5c * fStack_5c + fStack_64 * fStack_64 + fStack_60 * fStack_60) -
                SQRT(fStack_11c * fStack_11c + fStack_124 * fStack_124 + fStack_120 * fStack_120)))
        {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s out of reach - canceling pickup\n",
                     *(uint *)(param_1 + 0x1fa08));
          *(uint *)(param_1 + 0x1fa08) = 0;
          return 0;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar7,0x15,1);
        uVar6 = *(uint *)(param_1 + 0x1fa08);
        pcVar8 = "Picking up %s waist level\n";
      }
    }
    else {
      iVar7 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (*(uint *)(param_1 + 0x1fa08),auStack_f4,param_1 + 0x20);
      *(uint *)(param_1 + 0x1faf0) = (uint)(0.0 < *(float *)(iVar7 + 8));
      if ((float)_DAT_00595aaf < *(float *)(param_1 + 0x1fb04)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x18,1);
        puVar5 = (uint *)
                 core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                           (param_1,auStack_118,*(int *)(param_1 + 0x1fa08) + 0x20);
        if ((uint *)(param_1 + 0x1fb00) != puVar5) {
          *(uint *)(param_1 + 0x1fb00) = *puVar5;
          *(uint *)(param_1 + 0x1fb04) = puVar5[1];
          *(uint *)(param_1 + 0x1fb08) = puVar5[2];
        }
        uVar6 = *(uint *)(param_1 + 0x1fa08);
        pcVar8 = ">Picking up heavy %s shelf\n" + 1;
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x17,1);
        uVar6 = *(uint *)(param_1 + 0x1fa08);
        pcVar8 = "Picking up heavy %s crate\n";
      }
    }
    break;
  default:
    _DAT_01cc4800 = "..\\core\\stranger.cpp";
    _DAT_01cc4804 = 0xd31;
    FUN_004c8440("Hell froze - invalid pickUpType: %d",uStack_30);
    goto LAB_0053bbf0;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,pcVar8,uVar6);
LAB_0053bbf0:
  *(uint *)(param_1 + 0x1faa8) = 0x40800000;
  *(uint *)(param_1 + 0x1faa0) = 4;
  return 1;
}
