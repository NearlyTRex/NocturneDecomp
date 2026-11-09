// Name: core_lightgun.cpp_FUN_00500d20
// Address: 00500d20
// Address Range: [[00500d20, 00500f13]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_00500d20(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_00500d20(CWeapon *param_1,float param_2)

{
  float base_frequency;
  float fVar1;
  int iVar2;
  CDemonFilter *filter_ptr;
  uint uVar3;
  float in_stack_00000018;
  
  core_weapon_cpp_CWeapon_process_FUN_005ad770(param_1,param_2);
  fVar1 = core_inv_cpp_FUN_004fa470
                    ((CInventory *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x1fae8),_DAT_00603010
                    );
  fVar1 = (_DAT_00603010 / fVar1) * in_stack_00000018 + *(float *)&param_1[1].field_0x8;
  *(float *)&param_1[1].field_0x8 = fVar1;
  if (_DAT_00603010 < fVar1) {
    *(float *)&param_1[1].field_0x8 = _DAT_00603010;
  }
  iVar2 = *(int *)&param_1->field_0x2d4;
  *(float *)&param_1[1].field_0xc = *(float *)&param_1[1].field_0x8 / _DAT_00603010;
  if (iVar2 == 2) {
    fVar1 = (_DAT_0060301c - 0x40000000) * *(float *)&param_1[1].field_0xc + 0x40000000;
    base_frequency =
         _DAT_00603020 + (_DAT_00603024 - _DAT_00603020) * *(float *)&param_1[1].field_0xc;
    iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x4);
    if (iVar2 == 0) {
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_005727e0((CVector3f *)&param_1->field_0x20);
      sound_sndmain_cpp_FUN_005728e0(fVar1);
      sound_sndmain_cpp_FUN_00572900(base_frequency);
      uVar3 = sound_sndmain_cpp_startSfx_FUN_00572d20("cre-charge.wav");
      *(uint *)&param_1[1].field_0x4 = uVar3;
      sound_sndmain_cpp_FUN_00572b40();
    }
    else {
      sound_sndmain_cpp_FUN_00573950(*(uint *)&param_1[1].field_0x4,fVar1);
      sound_sndmain_cpp_FUN_00573980(*(uint *)&param_1[1].field_0x4,base_frequency);
    }
    core_lightgun_cpp_FUN_00500090(param_1);
    if (*(int *)(param_1 + 1) != 0) {
      g_CDemonLightInstance._7376_4_ = 1;
      filter_ptr = (CDemonFilter *)
                   core_dfilter_cpp_FUN_0045d7c0(g_CFilterCachePtr,"spark2.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_00463e30(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_CWeather_createLightningStrike_FUN_005ae580(0x02C997C0,0.1,0);
    }
    core_set_cpp_FUN_005518e0(g_CDemonSetPtr,&g_CDemonLightInstance);
    *(uint *)(param_1 + 1) = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x4);
  *(uint *)(param_1 + 1) = 0;
  return;
}
