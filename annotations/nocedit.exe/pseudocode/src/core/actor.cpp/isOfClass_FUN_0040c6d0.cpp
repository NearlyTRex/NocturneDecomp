// Name: core_actor.cpp_isOfClass_FUN_0040c6d0
// Address: 0040c6d0
// Address Range: [[0040c6d0, 0040c6f7]]
// Convention: __cdecl
// Signature: int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a86a [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_canPickup_FUN_004111c0 (004111c0) at 004111ca [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_FUN_004119f0 (004119f0) at 00411a0a [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_004143a0 (004143a0) at 004143cf [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 004170c6 [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_00417f20 (00417f20) at 00417f2a [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041d050 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004224b0 (004224b0) at 004224d2 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b5b0 (0042b5b0) at 0042b5e4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 (0042d5a0) at 0042d86a [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00441df0 (00441df0) at 00441f22 [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448600 (00448600) at 0044860a [UNCONDITIONAL_CALL]
//   core_dest.cpp_CDestActor_renderTransparent_FUN_0046fb70 (0046fb70) at 0046fc07 [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046fd50 (0046fd50) at 0046fd89 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004855f1 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004aa0f0 (004aa0f0) at 004aa130 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004af58f [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be7b0 (004be7b0) at 004be7ba [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4ff4 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d56cd [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004dff10 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5d70 (004e5d70) at 004e5d7a [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f1fb0 (004f1fb0) at 004f1fba [UNCONDITIONAL_CALL]
//   core_hero.cpp_CallInventorySelectHealth_FUN_004f3760 (004f3760) at 004f3782 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f35b0 (004f35b0) at 004f35f5 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_FUN_004f6550 (004f6550) at 004f66b8 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fdb05 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0 (004fea20) at 004fea3c [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70 (004ffe70) at 004fff82 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 0050109a [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004fef8d [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_selectItem_FUN_004fec10 (004fec10) at 004fec64 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff886 [UNCONDITIONAL_CALL]
//   core_inv.cpp_getItemModel_FUN_004fcda0 (004fcda0) at 004fcdc4 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501900 (00501900) at 0050190a [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_005059c0 (005059c0) at 005059cb [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505a20 (00505a20) at 00505a43 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505b70 (00505b70) at 00505c28 [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00506303 [UNCONDITIONAL_CALL]
//   core_melee.cpp_FUN_0050eab0 (0050eab0) at 0050eacd [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_FUN_00524e60 (00524e60) at 00524ea2 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 (00524a80) at 00524b54 [UNCONDITIONAL_CALL]
//   core_mission.cpp_FUN_00524c20 (00524c20) at 00524c4b [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00526d90 (00526d90) at 005270b9 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DeleteActors_FUN_0053df90 (0053df90) at 0053e1c7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_005379e0 (005379e0) at 00537cc7 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053c340 (0053c340) at 0053c43e [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053cc30 (0053cc30) at 0053cc62 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_HideActors_FUN_0053dcf0 (0053dcf0) at 0053df5a [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e8c4 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00562ad2 [UNCONDITIONAL_CALL]
//   core_stone.cpp_FUN_005bad70 (005bad70) at 005badba [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c18c0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c491a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5963 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da7d0 (005da7d0) at 005da80c [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db900 (005db900) at 005db94e [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005de710 (005de710) at 005de72d [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dffdc [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2eca [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e4252 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9100 (005e9100) at 005e9125 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee340 (005ee340) at 005ee3b8 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc920 (005fc920) at 005fc92a [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fbb9d [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_matchesClassName_FUN_0040c740

#include "nocturne.h"

int __cdecl core_actor_cpp_isOfClass_FUN_0040c6d0(CDemonActor *actor_ptr,char *class_name)

{
  CDemonActorType *type_ptr;
  int iVar1;
  
  if (actor_ptr == (CDemonActor *)0x0) {
    return (int)actor_ptr;
  }
  type_ptr = (*actor_ptr->vtable->getActorType)(actor_ptr);
  iVar1 = core_actor_cpp_matchesClassName_FUN_0040c740(type_ptr,class_name);
  return iVar1;
}


// Assembly code:
// 0040c6d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: Stack[0x4] (READ)
// 0040c6d4: TEST EAX,EAX
// 0040c6d6: JNZ 0x0040c6d9
//   XREF to: 0040c6d9 (CONDITIONAL_JUMP)
// 0040c6d8: RET
// 0040c6d9: MOV EDX,dword ptr [ESP + 0x8]
//   Label: LAB_0040c6d9
//   XREF to: Stack[0x8] (READ)
// 0040c6dd: PUSH EDX
// 0040c6de: PUSH EAX
// 0040c6df: MOV EDX,dword ptr [EAX + 0x154]
// 0040c6e5: CALL dword ptr [EDX + 0xc4]
// 0040c6eb: ADD ESP,0x4
// 0040c6ee: PUSH EAX
// 0040c6ef: CALL core_actor.cpp_matchesClassName_FUN_0040c740
//   XREF to: 0040c740 (UNCONDITIONAL_CALL)
// 0040c6f4: ADD ESP,0x8
// 0040c6f7: RET
