// Name: core_mission.cpp_CDemonMission_process_FUN_00524250
// Address: 00524250
// Address Range: [[00524250, 0052439c]]
// Convention: __cdecl
// Signature: void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_mission_cpp_CDemonMission_process_FUN_00524250(CDemonMission *this_ptr)

{
  CHero *pCVar1;
  CScript *pCVar2;
  CDemonMission *pCVar3;
  int iVar4;
  
  if (*(int *)(this_ptr->unk4 + 0x14) != 0) {
    iVar4 = 0;
    pCVar3 = this_ptr;
    if (0 < *(int *)(this_ptr->unk4 + 0x14)) {
      do {
        core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
                  (*(CDemonActor **)(pCVar3->unk4 + 0x18),"..\\core\\mission.cpp",0x46b);
        iVar4 = iVar4 + 1;
        core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
        pCVar3 = (CDemonMission *)(pCVar3->unk1 + 4);
      } while (iVar4 < *(int *)(this_ptr->unk4 + 0x14));
    }
    this_ptr->unk4[0x14] = '\0';
    this_ptr->unk4[0x15] = '\0';
    this_ptr->unk4[0x16] = '\0';
    this_ptr->unk4[0x17] = '\0';
  }
  core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(this_ptr);
  if (-1 < *(int *)(this_ptr->unk4 + 0x10)) {
    pCVar1 = g_HeroActors[g_LocalHeroIndex];
    (pCVar1->base).base.location.position.x = *(float *)(this_ptr->unk4 + 4);
    (pCVar1->base).base.location.position.y = *(float *)(this_ptr->unk4 + 8);
    (pCVar1->base).base.location.position.z = *(float *)(this_ptr->unk4 + 0xc);
    (pCVar1->base).base.location.area_id = *(int *)(this_ptr->unk4 + 0x10);
    if (*(int *)(this_ptr->unk4 + 0x10) != *(int *)this_ptr->unk1) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("Changing sets...",0,0);
      engine_2d_c_drawText_FUN_00401fd0("Insert wipe here...",0,0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
      core_set_cpp_CDemonSet_FUN_0056d2d0(g_CDemonSetPtr);
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(g_CDemonSetPtr);
      pCVar2 = g_CScriptPtr;
      pCVar2->unk3[0] = '\x02';
      pCVar2->unk3[1] = '\0';
      pCVar2->unk3[2] = '\0';
      pCVar2->unk3[3] = '\0';
    }
    this_ptr->unk4[0x10] = -1;
    this_ptr->unk4[0x11] = -1;
    this_ptr->unk4[0x12] = -1;
    this_ptr->unk4[0x13] = -1;
    this_ptr->unk4[0xc] = '\0';
    this_ptr->unk4[0xd] = '\0';
    this_ptr->unk4[0xe] = '\0';
    this_ptr->unk4[0xf] = '\0';
    *(uint *)(this_ptr->unk4 + 8) = *(uint *)(this_ptr->unk4 + 0xc);
    *(uint *)(this_ptr->unk4 + 4) = *(uint *)(this_ptr->unk4 + 8);
  }
  return;
}
