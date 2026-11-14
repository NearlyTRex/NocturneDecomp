// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_0057c2e0
// Address: 0057c2e0
// Address Range: [[0057c2e0, 0057c83f]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_0057c2e0(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_0057c2e0(CWeather *this_ptr,float flash_timer,int play_sound)

{
  CEventList *this_ptr_00;
  CCharacter *pCVar1;
  EDeathState EVar2;
  CWeather *pCVar3;
  int iVar4;
  uint *puVar5;
  CLocation *start_position;
  uint *puVar6;
  byte bVar7;
  float afStackY_10a8 [975];
  float min_value;
  float max_value;
  float local_158;
  SDamageInfo SStack_154;
  CMatrix3x3f local_118;
  uint auStack_f0 [6];
  uint auStack_d8 [6];
  float local_c0;
  float local_bc [2];
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f local_84;
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
  CCharacter *local_24;
  CCharacter *local_20;
  float local_1c;
  float local_18;
  
  bVar7 = 0;
  if (this_ptr->weather_type == 5) {
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,0.75);
    max_value = this_ptr->max_flash_interval;
    min_value = 0.5;
  }
  else {
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
    max_value = this_ptr->max_flash_interval;
    min_value = 2.0;
  }
  this_ptr->lightning_countdown = local_18;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(min_value,max_value);
  this_ptr->sub_flash_interval = local_18;
  this_ptr->lightning_active = 1;
  local_3c = 0;
  this_ptr->flash_timer = flash_timer;
  if (this_ptr->weather_type == 5) {
    local_2c = 0;
    for (local_28 = 0; local_28 < g_CDemonSetPtr->actor_count; local_28 = local_28 + 1) {
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_2c),
                          g_CEnemyClassInfo.name_hash);
      local_24 = pCVar1;
      local_20 = pCVar1;
      if ((pCVar1 != (CCharacter *)0x0) &&
         (EVar2 = (*(((pCVar1->base).vtable._uc)->_uc).getDeathState)(pCVar1),
         EVar2 == DEATH_STATE_ALIVE)) {
        (*((pCVar1->base).vtable._ub)->getBoundingBox)((CDemonActor *)pCVar1,(CBoundingBox3D *)0x0);
        puVar5 = auStack_f0;
        puVar6 = auStack_d8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar4 = core_box_cpp_FUN_0041daf0(auStack_d8);
        if (iVar4 != 0) {
          iVar4 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          if (iVar4 != 0) {
            fStack_90 = *(float *)(iVar4 + 0x20) - (local_24->base).location.position.x;
            fStack_8c = *(float *)(iVar4 + 0x24) - (local_24->base).location.position.y;
            fStack_88 = *(float *)(iVar4 + 0x28) - (local_24->base).location.position.z;
            fStack_78 = fStack_90;
            afStack_74[(uint)bVar7 * -2] = local_bc[(uint)bVar7 * -2 + 0xc];
            afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
                 local_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
            if (_DAT_005d7977 <
                SQRT(afStack_74[1] * afStack_74[1] +
                     fStack_78 * fStack_78 + afStack_74[0] * afStack_74[0])) goto LAB_0057c3b7;
          }
          iVar4 = 0;
          pCVar3 = this_ptr;
          if ((int)this_ptr[1].sub_flash_interval < 1) {
code_r0x0057c51b:
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&SStack_154);
            pCVar1 = local_20;
            SStack_154.damage_amount = 25.0;
            SStack_154.ammo_type = AMMO_TYPE_MANA;
            SStack_154.damage_type = DAMAGE_TYPE_ATTACK_ELECTROCUTE;
            (*(((local_20->base).vtable._uc)->_uc).processDamage)(local_20,&SStack_154);
            start_position = &(pCVar1->base).location;
            core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
                      (0x01C73654,&start_position->position,30.0,1,0.0);
            core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (0x02CF5680,(CDemonActor *)this_ptr,"light?.wav",
                       &start_position->position);
            (&this_ptr[1].particle_speed)[(int)this_ptr[1].sub_flash_interval] = (float)local_20;
            this_ptr[1].sub_flash_interval = (float)((int)this_ptr[1].sub_flash_interval + 1);
            goto LAB_0057c5a8;
          }
          while (local_20 != (CCharacter *)pCVar3[1].particle_speed) {
            iVar4 = iVar4 + 1;
            pCVar3 = (CWeather *)&pCVar3->particle_speed;
            if ((int)this_ptr[1].sub_flash_interval <= iVar4) goto code_r0x0057c51b;
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
    afStack_74[(uint)bVar7 * -2 + 9] = afStack_74[(uint)bVar7 * -2 + 3];
    afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    core_dtrace_cpp_FUN_00477db0(&g_CDemonRaytraceInstance);
    local_c0 = local_60;
    local_bc[(uint)bVar7 * -2] = afStack_74[(uint)bVar7 * -2 + 6];
    local_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
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
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_118,&this_ptr->rotation);
    local_84.z = local_30;
    local_84.x = 0.0;
    local_84.y = 0.0;
    core_dirmat_cpp_FUN_0045b800(&local_118,&local_84);
    local_a8 = local_9c;
    local_bc[(uint)bVar7 * -2 + 6] = local_bc[(uint)bVar7 * -2 + 9];
    local_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
         local_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10];
    local_48 = local_a8 + (this_ptr->direction).x;
    local_44 = local_a4 + (this_ptr->direction).y;
    local_40 = local_a0 + (this_ptr->direction).z;
    local_b4.x = local_48;
    local_bc[(uint)bVar7 * -2 + 3] = afStack_74[(uint)bVar7 * -2 + 0xc];
    local_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
         afStack_74[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
    if (&local_84 != (CVector3f *)(local_bc + 2)) {
      local_84.x = local_b4.x;
      local_84.y = local_b4.y;
      local_84.z = local_b4.z;
    }
    if (play_sound != 0) {
      core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
                (0x01C73654,&local_84,local_30,0,0.0);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (0x02CF5680,(CDemonActor *)this_ptr,"light?.wav",&local_84);
    }
  }
LAB_0057c5a8:
  local_18 = (float)core_weather_cpp_FUN_0057c2c0();
  this_ptr_00 = 0x01C6E360;
  this_ptr->base_ambient = local_18;
  local_158 = this_ptr->base_ambient;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"noLightningFlash");
  if (iVar4 == 0) {
    local_158 = local_158 + _DAT_005d7973;
    if (1.0 < local_158) {
      local_158 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(&g_CDemonCameraInstance,local_158)
    ;
  }
  return;
}
