// Name: core_weather.cpp_CWeather_createLightningStrike_FUN_0057c2e0
// Address: 0057c2e0
// Address Range: [[0057c2e0, 0057c83f]]
// Convention: __cdecl
// Signature: void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_0057c2e0(CWeather *this_ptr,float flash_timer,int play_sound)

#include "nocturne.h"

void __cdecl core_weather_cpp_CWeather_createLightningStrike_FUN_0057c2e0(CWeather *this_ptr,float flash_timer,int play_sound)

{
  CHero *pCVar1;
  CEventList *this_ptr_00;
  CCharacter *this_ptr_01;
  EDeathState EVar2;
  CWeather *pCVar3;
  int iVar4;
  uint *puVar5;
  CLocation *start_position;
  float unaff_EDI;
  uint *puVar6;
  byte bVar7;
  float afStackY_10a8 [975];
  float min_value;
  float fVar8;
  int in_stack_fffffeb0;
  float fStack_144;
  EAmmoType EStack_120;
  CMatrix3x3f local_118;
  uint auStack_e4 [4];
  uint auStack_d4 [2];
  CBoundingBox3D CStack_cc;
  CVector3f local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c [2];
  CVector3f local_84 [2];
  CVector3f local_6c;
  CVector3f local_60;
  float local_54;
  float local_50 [4];
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
  CCharacter *pCStack_14;
  
  bVar7 = 0;
  if (this_ptr->weather_type == 5) {
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.5,0.75);
    fVar8 = this_ptr->max_flash_interval;
    min_value = 0.5;
  }
  else {
    local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,20.0);
    fVar8 = this_ptr->max_flash_interval;
    min_value = 2.0;
  }
  this_ptr->lightning_countdown = local_18;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(min_value,fVar8);
  this_ptr->sub_flash_interval = local_18;
  this_ptr->lightning_active = 1;
  local_3c = 0;
  this_ptr->flash_timer = flash_timer;
  if (this_ptr->weather_type == 5) {
    local_2c = 0;
    for (local_28 = 0; local_28 < g_CDemonSetPtr->actor_count; local_28 = local_28 + 1) {
      this_ptr_01 = (CCharacter *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_2c),
                               g_CEnemyClassInfo.name_hash);
      local_24 = this_ptr_01;
      local_20 = this_ptr_01;
      if ((this_ptr_01 != (CCharacter *)0x0) &&
         (EVar2 = (*(((this_ptr_01->base).vtable._uc)->_uc).getDeathState)(this_ptr_01),
         EVar2 == DEATH_STATE_ALIVE)) {
        (*((this_ptr_01->base).vtable._ub)->getBoundingBox)
                  ((CDemonActor *)this_ptr_01,(CBoundingBox3D *)0x0);
        puVar5 = auStack_e4;
        puVar6 = auStack_d4;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041daf0(&CStack_cc,in_stack_fffffeb0);
        if (iVar4 != 0) {
          pCVar1 = g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14];
          if (pCVar1 != (CHero *)0x0) {
            local_84[0].x =
                 (pCVar1->base).base.location.position.x - *(float *)((int)local_18 + 0x20);
            local_84[0].y =
                 (pCVar1->base).base.location.position.y - *(float *)((int)local_18 + 0x24);
            local_84[0].z =
                 (pCVar1->base).base.location.position.z - *(float *)((int)local_18 + 0x28);
            local_6c.x = local_84[0].x;
            *(uint *)((int)&local_6c + (uint)bVar7 * -8 + 4) =
                 *(uint *)((int)local_84 + ((uint)bVar7 * -2 + -1) * 4 + 8);
            *(uint *)((int)&local_6c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8) =
                 *(uint *)((int)local_84 + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
            if (50.0f <
                SQRT(local_6c.z * local_6c.z + local_6c.x * local_6c.x + local_6c.y * local_6c.y))
            goto LAB_0057c3b7;
          }
          iVar4 = 0;
          pCVar3 = this_ptr;
          if ((int)this_ptr[1].sub_flash_interval < 1) {
code_r0x0057c51b:
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0((SDamageInfo *)&stack0xfffffeb8);
            fStack_144 = 25.0;
            EStack_120 = AMMO_TYPE_MANA;
            local_118.m[0].x = 1.48538e-43;
            (*(((pCStack_14->base).vtable._uc)->_uc).processDamage)
                      (pCStack_14,(SDamageInfo *)&stack0xfffffeb8);
            start_position = &(pCStack_14->base).location;
            core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
                      (g_CFireEffect_PTR_005fc5a0,&start_position->position,30.0,1,0.0);
            core_sound_cpp_CSound_playActorSound_FUN_005609d0
                      (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"light?.wav",
                       &start_position->position);
            (&this_ptr[1].particle_speed)[(int)this_ptr[1].sub_flash_interval] = unaff_EDI;
            this_ptr[1].sub_flash_interval = (float)((int)this_ptr[1].sub_flash_interval + 1);
            goto LAB_0057c5a8;
          }
          while (pCStack_14 != (CCharacter *)pCVar3[1].particle_speed) {
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
    core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90(&g_CDemonRaytraceInstance,&local_6c);
    local_54 = local_6c.x;
    local_50[(uint)bVar7 * -2] = *(float *)((int)&local_6c + (uint)bVar7 * -8 + 4);
    local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)((int)&local_6c + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 8);
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00477db0(&g_CDemonRaytraceInstance,&local_60);
    CStack_cc.max.x = local_60.x;
    *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + 0x10) =
         *(uint *)((int)&local_60 + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&CStack_cc + ((uint)bVar7 * -2 + (uint)bVar7 * -2) * 4 + 0x14) =
         *(uint *)((int)&local_60 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    local_1c = (CStack_cc.max.x - local_54) * (float)0.5;
    local_30 = 0.0;
    if (0.0 < local_1c) {
      local_30 = local_1c;
    }
    local_34 = CStack_cc.max.y - local_50[0];
    if (local_30 < local_34) {
      local_30 = local_34;
    }
    local_38 = (CStack_cc.max.z - local_50[1]) * (float)0.5;
    if (local_30 < local_38) {
      local_30 = local_38;
    }
    core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(&local_118,&this_ptr->rotation);
    local_84[0].z = local_30;
    local_84[0].x = 0.0;
    local_84[0].y = 0.0;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045b800(&local_118,local_84,local_9c);
    local_a8 = local_9c[0].x;
    *(uint *)((int)&local_b4 + ((uint)bVar7 * -2 + 3) * 4 + 4) =
         *(uint *)((int)local_9c + (uint)bVar7 * -8 + 4);
    *(uint *)((int)&local_b4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 4) * 4 + 4) =
         *(uint *)((int)local_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
    local_50[2] = local_a8 + (this_ptr->direction).x;
    local_50[3] = local_a4 + (this_ptr->direction).y;
    local_40 = local_a0 + (this_ptr->direction).z;
    local_b4.x = local_50[2];
    *(float *)((int)&local_b4 + (uint)bVar7 * -8 + 4) = local_50[(uint)bVar7 * -2 + 3];
    *(float *)((int)&local_b4 + ((uint)bVar7 * -2 + (uint)bVar7 * -2 + 1) * 4 + 4) =
         local_50[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
    if (local_84 != &local_b4) {
      local_84[0].x = local_b4.x;
      local_84[0].y = local_b4.y;
      local_84[0].z = local_b4.z;
    }
    if (play_sound != 0) {
      core_fire_cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
                (g_CFireEffect_PTR_005fc5a0,local_84,local_30,0,0.0);
      core_sound_cpp_CSound_playActorSound_FUN_005609d0
                (g_CSound_PTR_006045f8,(CDemonActor *)this_ptr,"light?.wav",local_84);
    }
  }
LAB_0057c5a8:
  local_18 = (float)core_weather_cpp_getCurrentCameraAmbientValue_FUN_0057c2c0();
  this_ptr_00 = g_CEventList_PTR_005fba60;
  this_ptr->base_ambient = local_18;
  fVar8 = this_ptr->base_ambient;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (this_ptr_00,"noLightningFlash");
  if (iVar4 == 0) {
    fVar8 = fVar8 + 0.65f;
    if (1.0 < fVar8) {
      fVar8 = 1.0;
    }
    core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(&g_CDemonCameraInstance,fVar8);
  }
  return;
}
