// Name: core_filmreel.cpp_CFilmProjector_load_FUN_004beb40
// Address: 004beb40
// Address Range: [[004beb40, 004beccc]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmProjector_load_FUN_004beb40(void)

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_CFilmProjector_load(CFilmProjector* param_1,
   uint param_2) */

void core_filmreel_cpp_CFilmProjector_load_FUN_004beb40(void)

{
  float fVar1;
  int iVar2;
  CDemonActor *pCVar3;
  uint uVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x184) == 0) {
    if (*(int *)(in_stack_00000004 + 0x3dc) != 0) {
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730(g_CFilterFXPtr,(char *)0x0);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0x3e0));
      uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      *(uint *)(in_stack_00000004 + 0x3e0) = uVar4;
    }
  }
  else {
    fVar1 = (float)3.1415926535000001;
    *(float *)(*(int *)(in_stack_00000004 + 0x158) + 0x38) =
         *(float *)(*(int *)(in_stack_00000004 + 0x158) + 0x38) - in_stack_00000008 * fVar1;
    *(float *)(in_stack_00000004 + 0x3d8) =
         *(float *)(in_stack_00000004 + 0x3d8) - in_stack_00000008 * fVar1;
    if (*(int *)(in_stack_00000004 + 0x3dc) == 0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004 + 0x158),
                          g_CFilmReelClassInfo.name_hash);
      if (pCVar3 == (CDemonActor *)0x0) {
        g_CurrentFilename = "..\\core\\filmreel.cpp";
        g_CurrentLineNumber = 0x11e;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CFilmProjector::Need to put CFilmReel in place");
      }
      core_dfilter_cpp_CFilterFX_openMovie_FUN_00470730
                (g_CFilterFXPtr,(char *)&pCVar3[2].location.position.z);
      sound_sndmain_cpp_killSfx_FUN_005a9c40(*(uint *)(in_stack_00000004 + 0x3e0));
      uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      *(uint *)(in_stack_00000004 + 0x3e0) = uVar4;
    }
    else {
      iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0x3e0));
      if (iVar2 == 0) {
        uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
        *(uint *)(in_stack_00000004 + 0x3e0) = uVar4;
      }
    }
    if (*(int *)(in_stack_00000004 + 0x370) == *(int *)(in_stack_00000004 + 0x158)) {
      core_event_cpp_CEventList_FUN_004aabe0(g_CEventListPtr);
    }
  }
  *(uint *)(in_stack_00000004 + 0x3dc) = *(uint *)(in_stack_00000004 + 0x184);
  core_dest_cpp_FUN_0046f9b0();
  return;
}
