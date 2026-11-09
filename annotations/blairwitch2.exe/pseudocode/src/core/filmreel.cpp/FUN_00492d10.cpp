// Name: core_filmreel.cpp_FUN_00492d10
// Address: 00492d10
// Address Range: [[00492d10, 00492e92]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00492d10(CActorDestination *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_filmreel_cpp_FUN_00492d10(CActorDestination *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)&param_1->field_0x2e0 == 0) {
    if (*(int *)&param_1[1].field_0x1e8 != 0) {
      core_dfilter_cpp_FUN_00447c50(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x1ec);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,0x5d5310);
      *(uint *)&param_1[1].field_0x1ec = uVar3;
    }
  }
  else {
    fVar1 = param_2 * _DAT_005d531d;
    *(float *)(*(int *)&param_1->field_0x2b4 + 0x38) =
         *(float *)(*(int *)&param_1->field_0x2b4 + 0x38) - fVar1;
    *(float *)&param_1[1].field_0x1e4 = *(float *)&param_1[1].field_0x1e4 - fVar1;
    if (*(int *)&param_1[1].field_0x1e8 == 0) {
      iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                        (*(uint *)&param_1->field_0x2b4,g_CFilmReelClassInfo.name_hash);
      if (iVar2 == 0) {
        _DAT_01d046a0 = "..\\core\\filmreel.cpp";
        _DAT_01d046a4 = 0x11d;
        core_main_c_FUN_004e4500("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_FUN_00447c50(g_CFilterFXPtr,(char *)(iVar2 + 0x434));
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[1].field_0x1ec);
      uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"35-start.wav")
      ;
      *(uint *)&param_1[1].field_0x1ec = uVar3;
    }
    else {
      iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[1].field_0x1ec);
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                          (param_1,"35-loop.wav");
        *(uint *)&param_1[1].field_0x1ec = uVar3;
      }
    }
    if (*(int *)&param_1[1].field_0x17c == *(int *)&param_1->field_0x2b4) {
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(0x01C38BC0,&param_1[1].field_0x180);
    }
  }
  *(uint *)&param_1[1].field_0x1e8 = *(uint *)&param_1->field_0x2e0;
  core_dest_cpp_FUN_00447140(param_1,param_2);
  return;
}
