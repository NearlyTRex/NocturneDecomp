// Name: core_mission.cpp_CDemonMission_process_FUN_004f70a0
// Address: 004f70a0
// Address Range: [[004f70a0, 004f7225]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_004f70a0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_004f70a0(CDemonMission *this_ptr)

{
  CDemonMission *pCVar1;
  int iVar2;
  CAlphaBitmap local_24;
  
  if (*(int *)(this_ptr + 0x1018) != 0) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x1018)) {
      do {
        iVar2 = iVar2 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004f6ca0
                  (this_ptr,*(CDemonActor **)(pCVar1 + 0x101c),*(int *)(pCVar1 + 0x11ac));
        pCVar1 = pCVar1 + 4;
      } while (iVar2 < *(int *)(this_ptr + 0x1018));
    }
    *(uint *)(this_ptr + 0x1018) = 0;
  }
  core_mission_cpp_FUN_004f6f80(this_ptr);
  if (-1 < *(int *)(this_ptr + 0x1450)) {
    iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
    *(uint *)(iVar2 + 0x20) = *(uint *)(this_ptr + 0x1444);
    *(uint *)(iVar2 + 0x24) = *(uint *)(this_ptr + 0x1448);
    *(uint *)(iVar2 + 0x28) = *(uint *)(this_ptr + 0x144c);
    *(uint *)(iVar2 + 0x2c) = *(uint *)(this_ptr + 0x1450);
    if (*(int *)(this_ptr + 0x1450) != *(int *)this_ptr) {
      engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d2e0(&local_24);
      engine_alphabit_cpp_FUN_0040d400(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&local_24,&DAT_01d88308,0x280,0x1e0);
      iVar2 = 0;
      do {
        engine_special_cpp_FUN_00565820();
        engine_alphabit_cpp_FUN_0040dbe0(&local_24);
        engine_special_cpp_unlockFrame_FUN_00565870(0);
        iVar2 = iVar2 + 1;
        wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      } while (iVar2 < 3);
      core_mission_cpp_FUN_004f6de0(this_ptr,*(uint *)(this_ptr + 0x1450));
      core_set_cpp_CDemonSet_clearLights_FUN_00537520(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_00534420(g_CDemonSetPtr);
      g_CScriptPtr->focus_actor_changed = 2;
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d300(&local_24,0);
    }
    *(uint *)(this_ptr + 0x1014) = 0;
    *(uint *)(this_ptr + 0x1450) = 0xffffffff;
    *(uint *)(this_ptr + 0x144c) = 0;
    *(uint *)(this_ptr + 0x1448) = *(uint *)(this_ptr + 0x144c);
    *(uint *)(this_ptr + 0x1444) = *(uint *)(this_ptr + 0x1448);
  }
  return;
}
