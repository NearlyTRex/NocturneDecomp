// Name: core_mission.cpp_FUN_004fc940
// Address: 004fc940
// Address Range: [[004fc940, 004fca82]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_FUN_004fc940(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mission_cpp_FUN_004fc940(CDemonMission *this_ptr)

{
  CDemonMission *pCVar1;
  int iVar2;
  CAlphaBitmap local_24;
  
  if (*(int *)(this_ptr + 0x112c) != 0) {
    iVar2 = 0;
    pCVar1 = this_ptr;
    if (0 < *(int *)(this_ptr + 0x112c)) {
      do {
        iVar2 = iVar2 + 1;
        core_mission_cpp_CDemonMission_removeActor_FUN_004fc570
                  (this_ptr,*(CDemonActor **)(pCVar1 + 0x1130),*(int *)(pCVar1 + 0x12c0));
        pCVar1 = pCVar1 + 4;
      } while (iVar2 < *(int *)(this_ptr + 0x112c));
    }
    *(uint *)(this_ptr + 0x112c) = 0;
  }
  core_mission_cpp_FUN_004fc820(this_ptr);
  if (-1 < *(int *)(this_ptr + 0x1128)) {
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    *(uint *)(iVar2 + 0x20) = *(uint *)(this_ptr + 0x111c);
    *(uint *)(iVar2 + 0x24) = *(uint *)(this_ptr + 0x1120);
    *(uint *)(iVar2 + 0x28) = *(uint *)(this_ptr + 0x1124);
    *(uint *)(iVar2 + 0x2c) = *(uint *)(this_ptr + 0x1128);
    if (*(int *)(this_ptr + 0x1128) != *(int *)this_ptr) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&local_24);
      engine_alphabit_cpp_FUN_0040d540(&local_24);
      wincore_wddvmem_cpp_FUN_00589560();
      core_mission_cpp_CDemonMission_loadSet_FUN_004fc6b0(this_ptr,*(int *)(this_ptr + 0x1128));
      core_set_cpp_FUN_005308e0(g_CDemonSetPtr);
      core_set_cpp_FUN_0052d980(g_CDemonSetPtr);
      *(uint *)&g_CScriptPtr->field_0x10 = 2;
      engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&local_24,0);
    }
    *(uint *)(this_ptr + 0x1128) = 0xffffffff;
    *(uint *)(this_ptr + 0x1124) = 0;
    *(uint *)(this_ptr + 0x1120) = *(uint *)(this_ptr + 0x1124);
    *(uint *)(this_ptr + 0x111c) = *(uint *)(this_ptr + 0x1120);
  }
  return;
}
