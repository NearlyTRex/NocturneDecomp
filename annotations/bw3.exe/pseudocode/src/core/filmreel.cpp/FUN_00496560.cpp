// Name: core_filmreel.cpp_FUN_00496560
// Address: 00496560
// Address Range: [[00496560, 004966e2]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00496560(CActorDestination *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_filmreel_cpp_FUN_00496560(CActorDestination *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&param_1->field_0x184 == 0) {
    if (*(int *)&param_1[1].field_0x1e8 != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x1ec);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,0x5c048e);
      *(uint *)&param_1[1].field_0x1ec = uVar3;
    }
  }
  else {
    fVar1 = param_2 * _DAT_005c049b;
    *(float *)(*(int *)&param_1->field_0x158 + 0x38) =
         *(float *)(*(int *)&param_1->field_0x158 + 0x38) - fVar1;
    *(float *)&param_1[1].field_0x1e4 = *(float *)&param_1[1].field_0x1e4 - fVar1;
    if (*(int *)&param_1[1].field_0x1e8 == 0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                        (*(uint *)&param_1->field_0x158,g_CFilmReelClassInfo.name_hash);
      if (iVar2 == 0) {
        _DAT_01d71de0 = "..\\core\\filmreel.cpp";
        _DAT_01d71de4 = 0x11d;
        core_main_c_FUN_004e4330("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00459d00(g_CFilterFXPtr,(char *)(iVar2 + 0x2d8));
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x1ec);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"35-start.wav")
      ;
      *(uint *)&param_1[1].field_0x1ec = uVar3;
    }
    else {
      iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x1ec);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"35-loop.wav");
        *(uint *)&param_1[1].field_0x1ec = uVar3;
      }
    }
    if (*(int *)&param_1[1].field_0x17c == *(int *)&param_1->field_0x158) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,&param_1[1].field_0x180);
    }
  }
  *(uint *)&param_1[1].field_0x1e8 = *(uint *)&param_1->field_0x184;
  core_dest_cpp_FUN_004591f0(param_1,param_2);
  return;
}
