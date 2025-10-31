// Name: core_actor.cpp_serializeFloat_FUN_0040b770
// Address: 0040b770
// Address Range: [[0040b770, 0040b7e6]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeFloat_FUN_0040b770(float * float_ptr, char * property_name)
// Cross-references:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 (0040c1c0) at 0040c20d [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 (00411900) at 00411967 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 (00411f50) at 00411f92 [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_serialize_FUN_004123a0 (004123a0) at 004123bb [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_serialize_FUN_00414910 (00414910) at 004149e0 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70 (00415d70) at 00415d8b [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 0041759b [UNCONDITIONAL_CALL]
//   core_battery.cpp_CBattery_load_FUN_00418000 (00418000) at 00418042 [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_load_FUN_00418330 (00418330) at 0041834b [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_load_FUN_00418ac0 (00418ac0) at 00418b25 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d4a3 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 004220ac [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_load_FUN_00422c80 (00422c80) at 00422d4c [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_load_FUN_00424560 (00424560) at 004245c8 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_load_FUN_00430fe0 (00430fe0) at 00431086 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 004283c0 [UNCONDITIONAL_CALL]
//   core_cow.cpp_CZombieCow_load_FUN_00444840 (00444840) at 004448a3 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_CCurtain_load_FUN_0044b3e0 (0044b3e0) at 0044b4c0 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0 (0047f7b0) at 0047f7ca [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480be7 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485f60 [UNCONDITIONAL_CALL]
//   core_drip.cpp_CDrip_load_FUN_0048e170 (0048e170) at 0048e242 [UNCONDITIONAL_CALL]
//   core_drone.cpp_CDrone_load_FUN_0048f2f0 (0048f2f0) at 0048f30a [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8c2b [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660 (004a9660) at 004a9786 [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_load_FUN_004cac60 (004cac60) at 004cad44 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_CFlameCan_load_FUN_004cb620 (004cb620) at 004cb662 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004cbe60 (004cbe60) at 004cbecc [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_CFrankenstienMachine_load_FUN_004d19e0 (004d19e0) at 004d1a0e [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_load_FUN_004e5470 (004e5470) at 004e548b [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_load_FUN_004e81c0 (004e81c0) at 004e8266 [UNCONDITIONAL_CALL]
//   core_grave.cpp_CGrave_load_FUN_004ee7f0 (004ee7f0) at 004ee822 [UNCONDITIONAL_CALL]
//   core_health.cpp_CHealthItem_serialize_FUN_004f1f20 (004f1f20) at 004f1f6b [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f2698 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f61ea [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0 (004f76c0) at 004f76db [UNCONDITIONAL_CALL]
//   core_imp.cpp_CImp_load_FUN_004fab00 (004fab00) at 004fab1b [UNCONDITIONAL_CALL]
//   core_larva.cpp_CLarva_load_FUN_00503960 (00503960) at 005039c3 [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00504fc8 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506d00 (00506d00) at 00506d2e [UNCONDITIONAL_CALL]
//   core_marquee.cpp_CMarquee_load_FUN_0050c2f0 (0050c2f0) at 0050c332 [UNCONDITIONAL_CALL]
//   core_melee.cpp_CMelee_load_FUN_0050e920 (0050e920) at 0050e966 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 0052094b [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 00527321 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_load_FUN_00529880 (00529880) at 005298ea [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0 (00544ba0) at 00544c23 [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_load_FUN_00546190 (00546190) at 00546222 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_load_FUN_0054a3b0 (0054a3b0) at 0054a406 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054dda1 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_load_FUN_00568c70 (00568c70) at 00568cbf [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005891b0 (005891b0) at 005891de [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_load_FUN_005a3220 (005a3220) at 005a3263 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_load_FUN_005b87f0 (005b87f0) at 005b8922 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba4f0 (005ba4f0) at 005ba50a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_serialize_FUN_005c2fe0 (005c2fe0) at 005c311e [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_serialize_FUN_005c7710 (005c7710) at 005c772b [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_serialize_FUN_005db880 (005db880) at 005db8f3 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 (005e0690) at 005e0841 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_serialize_FUN_005e2c40 (005e2c40) at 005e2d22 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e4142 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50 (005e6f50) at 005e701a [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e8847 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80 (005e9a80) at 005e9b26 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_serialize_FUN_005eb510 (005eb510) at 005eb582 [UNCONDITIONAL_CALL]
//   core_weapon.cpp_CWeapon_serialize_FUN_005ee250 (005ee250) at 005ee31c [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980 (005f1980) at 005f1a21 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc023 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_00613f20
//   TerminatedCString s_s_g_00613f23
//   string s_Floating_point_value_0066e130
//   char* g_PropertyNamePrefix = 00000000
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeFloat_FUN_0040b770(float *float_ptr,char *property_name)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%f");
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Floating point value",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g",&g_PropertyNamePrefix,(double)*float_ptr);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290
            ("Floating point value",in_stack_0000000c);
  return;
}


// Assembly code:
// 0040b770: PUSH EBX
//   Label: core_actor.cpp_serializeFloat_FUN_0040b770
// 0040b771: PUSH EDI
// 0040b772: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0040b776: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b77d: JNZ 0x0040b7c4
//   XREF to: 0040b7c4 (CONDITIONAL_JUMP)
// 0040b77f: PUSH EAX
// 0040b780: PUSH 0x613f20
//   XREF to: 00613f20 (DATA)
// 0040b785: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b78b: PUSH EBX
// 0040b78c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b791: ADD ESP,0xc
// 0040b794: CMP EAX,0x1
// 0040b797: JNZ 0x0040b7ae
//   XREF to: 0040b7ae (CONDITIONAL_JUMP)
// 0040b799: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0040b799
//   XREF to: Stack[0x8] (READ)
// 0040b79d: PUSH EDI
// 0040b79e: PUSH 0x66e130
//   XREF to: 0066e130 (DATA)
// 0040b7a3: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b7a8: ADD ESP,0x8
// 0040b7ab: POP EDI
// 0040b7ac: POP EBX
// 0040b7ad: RET
// 0040b7ae: PUSH ESI
//   Label: LAB_0040b7ae
// 0040b7af: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040b7b3: PUSH ESI
// 0040b7b4: PUSH 0x66e130
//   XREF to: 0066e130 (DATA)
// 0040b7b9: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b7be: ADD ESP,0x8
// 0040b7c1: POP ESI
// 0040b7c2: JMP 0x0040b799
//   XREF to: 0040b799 (UNCONDITIONAL_JUMP)
// 0040b7c4: SUB ESP,0x8
//   Label: LAB_0040b7c4
// 0040b7c7: FLD float ptr [EAX]
// 0040b7c9: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0040b7cc: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b7d1: PUSH 0x613f23
//   XREF to: 00613f23 (DATA)
// 0040b7d6: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b7dc: PUSH ECX
// 0040b7dd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b7e2: ADD ESP,0x14
// 0040b7e5: JMP 0x0040b799
//   XREF to: 0040b799 (UNCONDITIONAL_JUMP)
