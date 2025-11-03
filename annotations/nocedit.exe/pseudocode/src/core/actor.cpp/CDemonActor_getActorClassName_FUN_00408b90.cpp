// Name: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
// Address: 00408b90
// Address Range: [[00408b90, 00408ba4]]
// Convention: __cdecl
// Signature: char * core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_load_FUN_0040b050 (0040b050) at 0040b062 [UNCONDITIONAL_CALL]
//   core_actor.cpp_CDemonActor_save_FUN_0040af30 (0040af30) at 0040af45 [UNCONDITIONAL_CALL]
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210 (0040b210) at 0040b27e [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004aa0f0 (004aa0f0) at 004aa100 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_setActorVariable_FUN_004b09a0 (004b09a0) at 004b09d4 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa400 (004aa400) at 004aa503 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe780 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900 (004fe900) at 004fe97a [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10 (004fed10) at 004feda8 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_saveItems_FUN_004ff3b0 (004ff3b0) at 004ff3cc [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10 (004ffe10) at 004ffe55 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 (00524700) at 0052470e [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 0052380e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053be14 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053d964 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_MasterEditorKeysHelpScreen_FUN_00535e70 (00535e70) at 005369a2 [UNCONDITIONAL_CALL]
//   core_script.cpp_GetDemonActor_FUN_005594e0 (005594e0) at 0055963b [UNCONDITIONAL_CALL]

#include "nocturne.h"

char * __cdecl core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(CDemonActor *this_ptr)

{
  CDemonActorType *pCVar1;
  
  pCVar1 = (*this_ptr->vtable->getActorType)(this_ptr);
  return pCVar1->class_name;
}


// Assembly code:
// 00408b90: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: Stack[0x4] (READ)
// 00408b94: PUSH EDX
// 00408b95: MOV EAX,dword ptr [EDX + 0x154]
// 00408b9b: CALL dword ptr [EAX + 0xc4]
// 00408ba1: ADD ESP,0x4
// 00408ba4: RET
