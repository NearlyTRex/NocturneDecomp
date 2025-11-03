// Name: core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
// Address: 0040d290
// Address Range: [[0040d290, 0040d328]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
// Cross-references:
//   core_ammo.cpp_CAmmo_getPropertyList_FUN_00411360 (00411360) at 0041136c [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_getPropertyList_FUN_00411b30 (00411b30) at 00411b3c [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_FUN_00412030 (00412030) at 0041203c [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_FUN_00412a40 (00412a40) at 00412a4c [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_FUN_00414400 (00414400) at 0041440c [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_FUN_00414dc0 (00414dc0) at 00414dcf [UNCONDITIONAL_CALL]
//   core_battery.cpp_FUN_004180b0 (004180b0) at 004180bc [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004226e0 (004226e0) at 004226ed [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_00431120 (00431120) at 0043112c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f730 (0042f730) at 0042f73c [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442130 (00442130) at 0044213c [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448b20 (00448b20) at 00448b2b [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b610 (0044b610) at 0044b61c [UNCONDITIONAL_CALL]
//   core_dest.cpp_FUN_0046fe80 (0046fe80) at 0046fe8c [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_getPropertyList_FUN_00481320 (00481320) at 0048132d [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048e930 (0048e930) at 0048e93c [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8db0 (004a8db0) at 004a8dbd [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be960 (004be960) at 004be96c [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004cae70 (004cae70) at 004cae7c [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb6e0 (004cb6e0) at 004cb6ec [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccaa0 (004ccaa0) at 004ccaab [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d2500 (004d2500) at 004d250e [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_FUN_004e5eb0 (004e5eb0) at 004e5ebb [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_getPropertyList_FUN_004eb3c0 (004eb3c0) at 004eb3cc [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004ee9e0 (004ee9e0) at 004ee9ec [UNCONDITIONAL_CALL]
//   core_health.cpp_FUN_004f2040 (004f2040) at 004f204c [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_FUN_004f3f60 (004f3f60) at 004f3f6b [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_FUN_00501940 (00501940) at 0050194c [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502ca0 (00502ca0) at 00502cac [UNCONDITIONAL_CALL]
//   core_lever.cpp_FUN_00505240 (00505240) at 0050524c [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506da0 (00506da0) at 00506dac [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b3e0 (0050b3e0) at 0050b3ec [UNCONDITIONAL_CALL]
//   core_marquee.cpp_FUN_0050c3e0 (0050c3e0) at 0050c3ec [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a5fc [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e7d0 (0054e7d0) at 0054e7dc [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_00589310 (00589310) at 0058931c [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b8e90 (005b8e90) at 005b8e9c [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba840 (005ba840) at 005ba84c [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005daba0 (005daba0) at 005dabab [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_FUN_005dea50 (005dea50) at 005dea5b [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df6e0 (005df6e0) at 005df6eb [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e0f70 (005e0f70) at 005e0f7d [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8ba0 (005e8ba0) at 005e8bb8 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_FUN_005e9c00 (005e9c00) at 005e9c0c [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005eb940 (005eb940) at 005eb94c [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_FUN_005ee9f0 (005ee9f0) at 005ee9fc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Name_0061441c
//   TerminatedCString s_Pos_00614421
//   TerminatedCString s_PHB_00614425
//   TerminatedCString s_Creation_event_00614429
//   TerminatedCString s_none_00614438
//   TerminatedCString s_Probability_0061443d
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

void __cdecl
core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290
          (CDemonActor *this_ptr,CActorPropertyList *property_list)

{
  int iVar1;
  
  property_list->field0_0x0 = (int)this_ptr;
  core_actor_cpp_CActorPropertyList_FUN_0040e290(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(property_list);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(property_list);
  if (this_ptr->create_event[0] != '\0') {
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(this_ptr->create_event,"none");
    if (iVar1 != 0) {
      core_actor_cpp_CActorPropertyList_FUN_0040e1a0(property_list);
      return;
    }
  }
  return;
}


// Assembly code:
// 0040d290: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
// 0040d291: PUSH ESI
// 0040d292: PUSH EDI
// 0040d293: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0040d297: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040d29b: PUSH 0x40d270
//   XREF to: 0040d270 (DATA)
// 0040d2a0: PUSH 0x1e
// 0040d2a2: PUSH EBX
// 0040d2a3: PUSH 0x61441c
//   XREF to: 0061441c (DATA)
// 0040d2a8: PUSH ESI
// 0040d2a9: MOV dword ptr [ESI],EBX
// 0040d2ab: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0040d2b0: ADD ESP,0x14
// 0040d2b3: PUSH 0x0
// 0040d2b5: LEA EAX,[EBX + 0x20]
// 0040d2b8: PUSH EAX
// 0040d2b9: PUSH 0x614421
//   XREF to: 00614421 (DATA)
// 0040d2be: PUSH ESI
// 0040d2bf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 0040d2c4: ADD ESP,0x10
// 0040d2c7: PUSH 0x0
// 0040d2c9: LEA EAX,[EBX + 0x30]
// 0040d2cc: PUSH EAX
// 0040d2cd: PUSH 0x614425
//   XREF to: 00614425 (DATA)
// 0040d2d2: PUSH ESI
// 0040d2d3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 0040d2d8: ADD ESP,0x10
// 0040d2db: LEA EDI,[EBX + 0x78]
// 0040d2de: PUSH EDI
// 0040d2df: PUSH 0x614429
//   XREF to: 00614429 (DATA)
// 0040d2e4: PUSH ESI
// 0040d2e5: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0040d2ea: MOV AH,byte ptr [EBX + 0x78]
// 0040d2ed: ADD ESP,0xc
// 0040d2f0: TEST AH,AH
// 0040d2f2: JNZ 0x0040d2f8
//   XREF to: 0040d2f8 (CONDITIONAL_JUMP)
// 0040d2f4: POP EDI
//   Label: LAB_0040d2f4
// 0040d2f5: POP ESI
// 0040d2f6: POP EBX
// 0040d2f7: RET
// 0040d2f8: PUSH 0x614438
//   Label: LAB_0040d2f8
//   XREF to: 00614438 (DATA)
// 0040d2fd: PUSH EDI
// 0040d2fe: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0040d303: ADD ESP,0x8
// 0040d306: TEST EAX,EAX
// 0040d308: JZ 0x0040d2f4
//   XREF to: 0040d2f4 (CONDITIONAL_JUMP)
// 0040d30a: PUSH 0x0
// 0040d30c: PUSH 0x3f800000
// 0040d311: ADD EBX,0x74
// 0040d314: PUSH 0x0
// 0040d316: PUSH EBX
// 0040d317: PUSH 0x61443d
//   XREF to: 0061443d (DATA)
// 0040d31c: PUSH ESI
// 0040d31d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 0040d322: ADD ESP,0x18
// 0040d325: POP EDI
// 0040d326: POP ESI
// 0040d327: POP EBX
// 0040d328: RET
