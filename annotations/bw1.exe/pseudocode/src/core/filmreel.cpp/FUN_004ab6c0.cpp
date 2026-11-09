// Name: core_filmreel.cpp_FUN_004ab6c0
// Address: 004ab6c0
// Address Range: [[004ab6c0, 004ab842]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_004ab6c0(CActorDestination *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_filmreel_cpp_FUN_004ab6c0(CActorDestination *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&param_1->field_0x184 == 0) {
    if (*(int *)&param_1[1].field_0x1e8 != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_0045ddb0(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x1ec);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,0x5df152);
      *(uint *)&param_1[1].field_0x1ec = uVar3;
    }
  }
  else {
    fVar1 = param_2 * _DAT_005df15f;
    *(float *)(*(int *)&param_1->field_0x158 + 0x38) =
         *(float *)(*(int *)&param_1->field_0x158 + 0x38) - fVar1;
    *(float *)&param_1[1].field_0x1e4 = *(float *)&param_1[1].field_0x1e4 - fVar1;
    if (*(int *)&param_1[1].field_0x1e8 == 0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                        (*(uint *)&param_1->field_0x158,g_CFilmReelClassInfo.name_hash);
      if (iVar2 == 0) {
        _DAT_01d1d400 = "..\\core\\filmreel.cpp";
        _DAT_01d1d404 = 0x11d;
        core_main_c_FUN_005030e0("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_0045ddb0(g_CFilterFXPtr,(char *)(iVar2 + 0x2d8));
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x1ec);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"35-start.wav")
      ;
      *(uint *)&param_1[1].field_0x1ec = uVar3;
    }
    else {
      iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x1ec);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"35-loop.wav");
        *(uint *)&param_1[1].field_0x1ec = uVar3;
      }
    }
    if (*(int *)&param_1[1].field_0x17c == *(int *)&param_1->field_0x158) {
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,&param_1[1].field_0x180);
    }
  }
  *(uint *)&param_1[1].field_0x1e8 = *(uint *)&param_1->field_0x184;
  core_dest_cpp_FUN_0045d2a0(param_1,param_2);
  return;
}
