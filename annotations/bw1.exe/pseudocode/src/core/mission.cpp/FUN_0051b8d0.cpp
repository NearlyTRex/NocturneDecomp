// Name: core_mission.cpp_FUN_0051b8d0
// Address: 0051b8d0
// Address Range: [[0051b8d0, 0051ba55]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_0051b8d0(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_0051b8d0(CDemonMission *this_ptr)

{
  CDemonMission *pCVar1;
  int iVar2;
  CAlphaBitmap local_24;
  
  if (*(int *)(this_ptr + 0x1130) != 0) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x1130)) {
      do {
        iVar2 = iVar2 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_0051b4d0
                  (this_ptr,*(CDemonActor **)(pCVar1 + 0x1134),*(int *)(pCVar1 + 0x12c4));
        pCVar1 = pCVar1 + 4;
      } while (iVar2 < *(int *)(this_ptr + 0x1130));
    }
    *(uint *)(this_ptr + 0x1130) = 0;
  }
  core_mission_cpp_FUN_0051b7b0(this_ptr);
  if (-1 < *(int *)(this_ptr + 0x112c)) {
    iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    *(uint *)(iVar2 + 0x20) = *(uint *)(this_ptr + 0x1120);
    *(uint *)(iVar2 + 0x24) = *(uint *)(this_ptr + 0x1124);
    *(uint *)(iVar2 + 0x28) = *(uint *)(this_ptr + 0x1128);
    *(uint *)(iVar2 + 0x2c) = *(uint *)(this_ptr + 0x112c);
    if (*(int *)(this_ptr + 0x112c) != *(int *)this_ptr) {
      engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d0a0(&local_24);
      engine_alphabit_cpp_FUN_0040d1c0(&local_24);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&local_24,&DAT_01d33b88,0x280,0x1e0);
      iVar2 = 0;
      do {
        engine_special_cpp_FUN_00581f50();
        engine_alphabit_cpp_FUN_0040d9a0(&local_24);
        engine_special_cpp_unlockFrame_FUN_00581fa0(0);
        iVar2 = iVar2 + 1;
        wincore_wddvmem_cpp_FUN_005acff0();
      } while (iVar2 < 3);
      core_mission_cpp_FUN_0051b610(this_ptr,*(uint *)(this_ptr + 0x112c));
      core_set_cpp_FUN_00551b90(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_0054ec60(g_CDemonSetPtr);
      *(uint *)&g_CScriptPtr->field_0x10 = 2;
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d0c0(&local_24,0);
    }
    *(uint *)(this_ptr + 0x1014) = 0;
    *(uint *)(this_ptr + 0x112c) = 0xffffffff;
    *(uint *)(this_ptr + 0x1128) = 0;
    *(uint *)(this_ptr + 0x1124) = *(uint *)(this_ptr + 0x1128);
    *(uint *)(this_ptr + 0x1120) = *(uint *)(this_ptr + 0x1124);
  }
  return;
}
