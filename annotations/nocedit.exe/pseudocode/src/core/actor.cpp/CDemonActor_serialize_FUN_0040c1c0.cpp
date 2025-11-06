// Name: core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
// Address: 0040c1c0
// Address Range: [[0040c1c0, 0040c25a]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor * this_ptr)
// Cross-references:
//   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 (00410f40) at 00410f46 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 (00411900) at 00411906 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 (00411f50) at 00411f56 [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_CBackgroundActor_serialize_FUN_00412990 (00412990) at 00412996 [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_serialize_FUN_00414340 (00414340) at 00414346 [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_serialize_FUN_00414910 (00414910) at 00414916 [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_load_FUN_00418000 (00418000) at 00418006 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_CBodyPart_serialize_FUN_00419880 (00419880) at 0041988c [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 00422070 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_load_FUN_00430fe0 (00430fe0) at 00430fe6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 004283ac [UNCONDITIONAL_CALL]
//   core_crate.cpp_CCrate_load_FUN_00448910 (00448910) at 00448916 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_CCurtain_load_FUN_0044b3e0 (0044b3e0) at 0044b3e9 [UNCONDITIONAL_CALL]
//   core_dest.cpp_CActorDestination_load_FUN_0046fdb0 (0046fdb0) at 0046fdbf [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480aa7 [UNCONDITIONAL_CALL]
//   core_drip.cpp_CDrip_load_FUN_0048e170 (0048e170) at 0048e273 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8b37 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660 (004a9660) at 004a9678 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be8a0 (004be8a0) at 004be8a6 [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_load_FUN_004cac60 (004cac60) at 004cac66 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_CFlameCan_load_FUN_004cb620 (004cb620) at 004cb626 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbe60 (004cbe60) at 004cbe66 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0 (004d19e0) at 004d19e6 [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_CGasMask_load_FUN_004e5e20 (004e5e20) at 004e5e25 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_serialize_FUN_004ea090 (004ea090) at 004ea096 [UNCONDITIONAL_CALL]
//   core_grave.cpp_CGrave_load_FUN_004ee7f0 (004ee7f0) at 004ee7fa [UNCONDITIONAL_CALL]
//   core_health.cpp_CHealthItem_serialize_FUN_004f1f20 (004f1f20) at 004f1f2f [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0 (004f3ef0) at 004f3ef5 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2631 [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_CKeyActor_serialize_FUN_00501880 (00501880) at 0050188f [UNCONDITIONAL_CALL]
//   core_ladder.cpp_CLadder_load_FUN_005029c0 (005029c0) at 005029c6 [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00504e91 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506d00 (00506d00) at 00506d06 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_CMansionPuzzleCircle_load_FUN_0050adf0 (0050adf0) at 0050adfa [UNCONDITIONAL_CALL]
//   core_marquee.cpp_CMarquee_load_FUN_0050c2f0 (0050c2f0) at 0050c2f6 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0 (00544ba0) at 00544c0f [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_load_FUN_0054a3b0 (0054a3b0) at 0054a3b6 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054dbcc [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005891b0 (005891b0) at 005891b6 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_load_FUN_005b87f0 (005b87f0) at 005b87f6 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba4f0 (005ba4f0) at 005ba4f6 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_serialize_FUN_005dab30 (005dab30) at 005dab36 [UNCONDITIONAL_CALL]
//   core_trap.cpp_CTrap_serialize_FUN_005de9c0 (005de9c0) at 005de9c6 [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_serialize_FUN_005dec80 (005dec80) at 005dec86 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 (005e0690) at 005e0697 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e41af [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e872a [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80 (005e9a80) at 005e9a86 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_serialize_FUN_005eb510 (005eb510) at 005eb516 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 (005ee250) at 005ee25f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_location_006141ac
//   TerminatedCString s_orient_006141b5
//   TerminatedCString s_fov_006141bc
//   TerminatedCString s_wasCreated_006141c0
//   TerminatedCString s_createProb_006141cb
//   TerminatedCString s_createEvent_006141d6
//   int g_CDemonActorClassVersion = 0x7
// Function calls:
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeLocation_FUN_0040b480
//   core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   core_actor.cpp_serializeString_FUN_0040b5c0

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(CDemonActor *this_ptr)

{
  BADSPACEBASE *in_ESP;
  
  core_actor_cpp_serializeLocation_FUN_0040b480(&this_ptr->location,"location");
  core_actor_cpp_serializeOrientation_FUN_0040b3e0(&this_ptr->orient,"orient");
  if (g_CDemonActorClassVersion < 7) {
    core_actor_cpp_serializeFloat_FUN_0040b770((float *)&stack0x00000000,"fov");
    if (g_CDemonActorClassVersion < 6) {
      return;
    }
  }
  else if (g_CDemonActorClassVersion < 6) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->was_created,"wasCreated");
  core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->create_prob,"createProb");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)this_ptr->create_event,"createEvent");
  return;
}


// Assembly code:
// 0040c1c0: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
// 0040c1c1: SUB ESP,0x4
// 0040c1c4: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040c1c8: PUSH 0x6141ac
//   XREF to: 006141ac (DATA)
// 0040c1cd: LEA EAX,[EBX + 0x20]
// 0040c1d0: PUSH EAX
// 0040c1d1: CALL core_actor.cpp_serializeLocation_FUN_0040b480
//   XREF to: 0040b480 (UNCONDITIONAL_CALL)
// 0040c1d6: ADD ESP,0x8
// 0040c1d9: PUSH 0x6141b5
//   XREF to: 006141b5 (DATA)
// 0040c1de: LEA EAX,[EBX + 0x30]
// 0040c1e1: PUSH EAX
// 0040c1e2: CALL core_actor.cpp_serializeOrientation_FUN_0040b3e0
//   XREF to: 0040b3e0 (UNCONDITIONAL_CALL)
// 0040c1e7: MOV EDX,dword ptr [0x0066e170]
//   XREF to: 0066e170 (READ)
// 0040c1ed: ADD ESP,0x8
// 0040c1f0: CMP EDX,0x7
// 0040c1f3: JL 0x0040c203
//   XREF to: 0040c203 (CONDITIONAL_JUMP)
// 0040c1f5: CMP dword ptr [0x0066e170],0x6
//   XREF to: 0066e170 (READ)
// 0040c1fc: JGE 0x0040c223
//   XREF to: 0040c223 (CONDITIONAL_JUMP)
// 0040c1fe: ADD ESP,0x4
// 0040c201: POP EBX
// 0040c202: RET
// 0040c203: PUSH 0x6141bc
//   Label: LAB_0040c203
//   XREF to: 006141bc (DATA)
// 0040c208: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x8] (DATA)
// 0040c20c: PUSH EAX
// 0040c20d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0040c212: ADD ESP,0x8
// 0040c215: CMP dword ptr [0x0066e170],0x6
//   XREF to: 0066e170 (READ)
// 0040c21c: JGE 0x0040c223
//   XREF to: 0040c223 (CONDITIONAL_JUMP)
// 0040c21e: ADD ESP,0x4
// 0040c221: POP EBX
// 0040c222: RET
// 0040c223: PUSH 0x6141c0
//   Label: LAB_0040c223
//   XREF to: 006141c0 (DATA)
// 0040c228: LEA EAX,[EBX + 0x70]
// 0040c22b: PUSH EAX
// 0040c22c: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 0040c231: ADD ESP,0x8
// 0040c234: PUSH 0x6141cb
//   XREF to: 006141cb (DATA)
// 0040c239: LEA EAX,[EBX + 0x74]
// 0040c23c: PUSH EAX
// 0040c23d: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 0040c242: ADD ESP,0x8
// 0040c245: PUSH 0x6141d6
//   XREF to: 006141d6 (DATA)
// 0040c24a: ADD EBX,0x78
// 0040c24d: PUSH EBX
// 0040c24e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0040c253: ADD ESP,0x8
// 0040c256: ADD ESP,0x4
// 0040c259: POP EBX
// 0040c25a: RET
