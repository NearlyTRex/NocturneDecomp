// Name: core_weather.cpp_FUN_0057c2e0
// Address: 0057c2e0
// Address Range: [[0057c2e0, 0057c83f]]
// Convention: unknown
// Signature: void core_weather_cpp_FUN_0057c2e0(CDemonActor *param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weather_cpp_FUN_0057c2e0(CDemonActor *param_1,uint param_2,int param_3)

{
  CEventList *this_ptr;
  int iVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_10a8 [975];
  uint uVar7;
  uint uVar8;
  float local_158;
  SDamageInfo aSStack_154 [4];
  uint uStack_150;
  uint uStack_12c;
  uint uStack_124;
  CMatrix3x3f local_118 [40];
  uint auStack_f0 [6];
  uint auStack_d8 [6];
  float local_c0;
  float local_bc [4];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  byte local_84 [12];
  float fStack_78;
  float afStack_74 [5];
  float local_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  uint local_18;
  
  bVar6 = 0;
  if (*(int *)param_1 == 5) {
    local_18 = core_actor_cpp_FUN_0040ce40(0x3f000000,0x3f400000);
    uVar8 = *(uint *)&param_1->field_0x34;
    uVar7 = 0x3f000000;
  }
  else {
    local_18 = core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
    uVar8 = *(uint *)&param_1->field_0x34;
    uVar7 = 0x40000000;
  }
  *(uint *)&param_1->field_0x20 = local_18;
  local_18 = core_actor_cpp_FUN_0040ce40(uVar7,uVar8);
  *(uint *)&param_1->field_0x2c = local_18;
  *(uint *)&param_1->field_0x24 = 1;
  local_3c = 0;
  *(uint *)&param_1->field_0x28 = param_2;
  if (*(int *)param_1 == 5) {
    local_2c = 0;
    for (local_28 = 0; local_28 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_28 = local_28 + 1)
    {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_2c),
                         g_CEnemyClassInfo.name_hash);
      local_24 = iVar1;
      local_20 = iVar1;
      if ((iVar1 != 0) &&
         (iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x10c))(iVar1), iVar2 == 0)) {
        (**(code **)(*(int *)(iVar1 + 0x154) + 0x1c))(iVar1,0);
        puVar4 = auStack_f0;
        puVar5 = auStack_d8;
        for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        iVar1 = core_box_cpp_FUN_0041daf0(auStack_d8);
        if (iVar1 != 0) {
          iVar1 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          if (iVar1 != 0) {
            fStack_90 = *(float *)(iVar1 + 0x20) - *(float *)(local_24 + 0x20);
            fStack_8c = *(float *)(iVar1 + 0x24) - *(float *)(local_24 + 0x24);
            fStack_88 = *(float *)(iVar1 + 0x28) - *(float *)(local_24 + 0x28);
            fStack_78 = fStack_90;
            afStack_74[(uint)bVar6 * -2] = local_bc[(uint)bVar6 * -2 + 0xc];
            afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
                 local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            if (_DAT_005d7977 <
                SQRT(afStack_74[1] * afStack_74[1] +
                     fStack_78 * fStack_78 + afStack_74[0] * afStack_74[0])) goto LAB_0057c3b7;
          }
          iVar1 = 0;
          pCVar3 = param_1;
          if (*(int *)&param_1->field_0x64 < 1) {
code_r0x0057c51b:
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_154);
            iVar1 = local_20;
            uStack_150 = 0x41c80000;
            uStack_12c = 10;
            uStack_124 = 0x6a;
            (**(code **)(*(int *)(local_20 + 0x154) + 0x108))(local_20,aSStack_154);
            core_fire_cpp_FUN_004a3bd0(0x01C73654,(CVector3f *)(iVar1 + 0x20),0x41f00000,1,0);
            core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (0x02CF5680,param_1,"light?.wav",(CVector3f *)(iVar1 + 0x20));
            *(int *)(&param_1->field_0x3c + *(int *)&param_1->field_0x64 * 4) = local_20;
            *(int *)&param_1->field_0x64 = *(int *)&param_1->field_0x64 + 1;
            goto LAB_0057c5a8;
          }
          while (local_20 != *(int *)&pCVar3->field_0x3c) {
            iVar1 = iVar1 + 1;
            pCVar3 = (CDemonActor *)&pCVar3->field_0x4;
            if (*(int *)&param_1->field_0x64 <= iVar1) goto code_r0x0057c51b;
          }
        }
      }
LAB_0057c3b7:
      local_2c = local_2c + 4;
    }
  }
  if (local_3c == 0) {
    core_dtrace_cpp_FUN_00477d90(&g_CDemonRaytraceInstance);
    local_54 = afStack_74[2];
    afStack_74[(uint)bVar6 * -2 + 9] = afStack_74[(uint)bVar6 * -2 + 3];
    afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_dtrace_cpp_FUN_00477db0(&g_CDemonRaytraceInstance);
    local_c0 = local_60;
    local_bc[(uint)bVar6 * -2] = afStack_74[(uint)bVar6 * -2 + 6];
    local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    local_1c = (local_c0 - local_54) * (float)_DAT_005d796b;
    local_30 = 0.0;
    if (0.0 < local_1c) {
      local_30 = local_1c;
    }
    local_34 = local_bc[0] - local_50;
    if (local_30 < local_34) {
      local_30 = local_34;
    }
    local_38 = (local_bc[1] - local_4c) * (float)_DAT_005d796b;
    if (local_30 < local_38) {
      local_30 = local_38;
    }
    core_dirmat_cpp_FUN_0045b550(local_118,(CVector3f *)&param_1->field_0x14);
    local_84._8_4_ = local_30;
    local_84._0_4_ = 0.0;
    local_84._4_4_ = 0;
    core_dirmat_cpp_FUN_0045b800(local_118,local_84);
    local_a8 = local_9c;
    local_bc[(uint)bVar6 * -2 + 6] = local_bc[(uint)bVar6 * -2 + 9];
    local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    local_48 = local_a8 + *(float *)&param_1->field_0x8;
    local_44 = local_a4 + *(float *)&param_1->field_0xc;
    local_40 = local_a0 + *(float *)&param_1->field_0x10;
    local_bc[2] = local_48;
    local_bc[(uint)bVar6 * -2 + 3] = afStack_74[(uint)bVar6 * -2 + 0xc];
    local_bc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    if ((float *)local_84 != local_bc + 2) {
      local_84._0_4_ = local_bc[2];
      local_84._4_4_ = local_bc[3];
      local_84._8_4_ = local_ac;
    }
    if (param_3 != 0) {
      core_fire_cpp_FUN_004a3bd0(0x01C73654,local_84,local_30,0,0);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,param_1,"light?.wav",(CVector3f *)local_84);
    }
  }
LAB_0057c5a8:
  local_18 = core_weather_cpp_FUN_0057c2c0();
  this_ptr = 0x01C6E360;
  *(uint *)&param_1->field_0x30 = local_18;
  local_158 = *(float *)&param_1->field_0x30;
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr,"noLightningFlash");
  if (iVar1 == 0) {
    local_158 = local_158 + _DAT_005d7973;
    if (1.0 < local_158) {
      local_158 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(&g_CDemonCameraInstance,local_158)
    ;
  }
  return;
}
