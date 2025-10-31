// Name: core_actor.cpp_serializeString_FUN_0040b5c0
// Address: 0040b5c0
// Address Range: [[0040b5c0, 0040b6d3]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeString_FUN_0040b5c0(char * * string_buffer, char * property_type)
// Cross-references:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0 (0040c1c0) at 0040c24e [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeKeyframedModelInstance_FUN_0040b8f0 (0040b8f0) at 0040b915 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0 (0040b6e0) at 0040b735 [UNCONDITIONAL_CALL]
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970 (0040b970) at 0040b995 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_CAmmo_serialize_FUN_00410f40 (00410f40) at 00410f6e [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_CAmmoBox_serialize_FUN_00411900 (00411900) at 004119c4 [UNCONDITIONAL_CALL]
//   core_anvil.cpp_CAnvil_serialize_FUN_00411f50 (00411f50) at 00411f7e [UNCONDITIONAL_CALL]
//   core_armour.cpp_CArmour_serialize_FUN_004123a0 (004123a0) at 004123f1 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_serialize_FUN_00413a70 (00413a70) at 00413aab [UNCONDITIONAL_CALL]
//   core_barrier.cpp_CBarrier_serialize_FUN_00414340 (00414340) at 0041437b [UNCONDITIONAL_CALL]
//   core_bat.cpp_CBat_serialize_FUN_00414910 (00414910) at 0041492a [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 004175e8 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_load_FUN_00418ac0 (00418ac0) at 00418b39 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d2f7 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_CBoxActor_load_FUN_00422060 (00422060) at 004220e8 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_load_FUN_004254f0 (004254f0) at 004255e8 [UNCONDITIONAL_CALL]
//   core_chain.cpp_CChain_load_FUN_00430fe0 (00430fe0) at 004310e1 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0 (004283a0) at 00428465 [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_FUN_00442020 (00442020) at 00442062 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_CCurtain_load_FUN_0044b3e0 (0044b3e0) at 0044b5ae [UNCONDITIONAL_CALL]
//   core_dest.cpp_CActorDestination_load_FUN_0046fdb0 (0046fdb0) at 0046fe1a [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_serialize_FUN_00480aa0 (00480aa0) at 00480d21 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485e40 [UNCONDITIONAL_CALL]
//   core_drip.cpp_CDrip_load_FUN_0048e170 (0048e170) at 0048e25f [UNCONDITIONAL_CALL]
//   core_emitter.cpp_CEmitter_load_FUN_004a8b30 (004a8b30) at 004a8ce3 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660 (004a9660) at 004a974c [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_FUN_004be8a0 (004be8a0) at 004be8db [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_serialize_FUN_004bede0 (004bede0) at 004bee1b [UNCONDITIONAL_CALL]
//   core_flame.cpp_CFlame_load_FUN_004cac60 (004cac60) at 004cacc3 [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_CFlameCan_load_FUN_004cb620 (004cb620) at 004cb676 [UNCONDITIONAL_CALL]
//   core_glass.cpp_CGlass_serialize_FUN_004ea090 (004ea090) at 004ea184 [UNCONDITIONAL_CALL]
//   core_grave.cpp_CGrave_load_FUN_004ee7f0 (004ee7f0) at 004ee888 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f27c7 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f6382 [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0 (004f7bd0) at 004f7bec [UNCONDITIONAL_CALL]
//   core_lever.cpp_CLever_load_FUN_00504e80 (00504e80) at 00504f02 [UNCONDITIONAL_CALL]
//   core_litecone.cpp_FUN_00506d00 (00506d00) at 00506d63 [UNCONDITIONAL_CALL]
//   core_marquee.cpp_CMarquee_load_FUN_0050c2f0 (0050c2f0) at 0050c30a [UNCONDITIONAL_CALL]
//   core_melee.cpp_CMelee_load_FUN_0050e920 (0050e920) at 0050ea09 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 00520973 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 0052734e [UNCONDITIONAL_CALL]
//   core_moloch.cpp_CMoloch_load_FUN_00529880 (00529880) at 005298ae [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_load_FUN_00546190 (00546190) at 005461ab [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_CPendulum_load_FUN_0054a3b0 (0054a3b0) at 0054a446 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_CPlatform_load_FUN_0054dbc0 (0054dbc0) at 0054dd63 [UNCONDITIONAL_CALL]
//   core_simbox.cpp_CSimBox_FUN_005891b0 (005891b0) at 00589230 [UNCONDITIONAL_CALL]
//   core_spike.cpp_CSpike_load_FUN_005b87f0 (005b87f0) at 005b8882 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_serialize_FUN_005e0690 (005e0690) at 005e0701 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_serialize_FUN_005e2c40 (005e2c40) at 005e2c82 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e41d7 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_serialize_FUN_005e8720 (005e8720) at 005e885e [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_serialize_FUN_005e9a80 (005e9a80) at 005e9ad6 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_serialize_FUN_005eb510 (005eb510) at 005eb6a3 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc090 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_00613f07
//   TerminatedCString s_s_s_00613f0d
//   string s_String_0066e128
//   char* g_PropertyNamePrefix = 00000000
//   char[256] g_CharacterClassificationTable
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_actor.cpp_serializeDescription_FUN_0040b290
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fputc_FUN_005fea10
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeString_FUN_0040b5c0(char **string_buffer,char *property_type)

{
  int iVar1;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s\"%s\"",&g_PropertyNamePrefix,string_buffer);
    core_actor_cpp_serializeDescription_FUN_0040b290("String",property_type);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
  } while ((g_CharacterClassificationTable[(byte)((char)iVar1 + 1)] & 2U) != 0);
  if (iVar1 != 0x22) {
    core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("String",property_type);
  }
  iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
  if (iVar1 == 0x22) {
    *(undefined1 *)string_buffer = 0;
  }
  else {
    crt_stdio_c_fputc_FUN_005fea10(iVar1,g_ActorDataFile);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%[^\"]",string_buffer);
    if (iVar1 != 1) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("String",property_type);
    }
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 != 0x22) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210("String",property_type);
      core_actor_cpp_serializeDescription_FUN_0040b290("String",property_type);
      return;
    }
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("String",property_type);
  return;
}


// Assembly code:
// 0040b5c0: PUSH EBX
//   Label: core_actor.cpp_serializeString_FUN_0040b5c0
// 0040b5c1: PUSH ESI
// 0040b5c2: PUSH EDI
// 0040b5c3: PUSH EBP
// 0040b5c4: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040b5c8: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040b5cc: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b5d3: JNZ 0x0040b6a7
//   XREF to: 0040b6a7 (CONDITIONAL_JUMP)
// 0040b5d9: MOV EDI,dword ptr [0x00822034]
//   Label: LAB_0040b5d9
//   XREF to: 00822034 (READ)
// 0040b5df: PUSH EDI
// 0040b5e0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040b5e5: MOV EDX,EAX
// 0040b5e7: ADD ESP,0x4
// 0040b5ea: INC DL
// 0040b5ec: AND EDX,0xff
// 0040b5f2: TEST byte ptr [EDX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 0040b5f9: JNZ 0x0040b5d9
//   XREF to: 0040b5d9 (CONDITIONAL_JUMP)
// 0040b5fb: CMP EAX,0x22
// 0040b5fe: JZ 0x0040b60e
//   XREF to: 0040b60e (CONDITIONAL_JUMP)
// 0040b600: PUSH EBX
// 0040b601: PUSH 0x66e128
//   XREF to: 0066e128 (DATA)
// 0040b606: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b60b: ADD ESP,0x8
// 0040b60e: MOV EBP,dword ptr [0x00822034]
//   Label: LAB_0040b60e
//   XREF to: 00822034 (READ)
// 0040b614: PUSH EBP
// 0040b615: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040b61a: ADD ESP,0x4
// 0040b61d: CMP EAX,0x22
// 0040b620: JZ 0x0040b681
//   XREF to: 0040b681 (CONDITIONAL_JUMP)
// 0040b622: MOV EDX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b628: PUSH EDX
// 0040b629: PUSH EAX
// 0040b62a: CALL crt_stdio.c_fputc_FUN_005fea10
//   XREF to: 005fea10 (UNCONDITIONAL_CALL)
// 0040b62f: ADD ESP,0x8
// 0040b632: PUSH ESI
// 0040b633: PUSH 0x613f07
//   XREF to: 00613f07 (DATA)
// 0040b638: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b63e: PUSH ECX
// 0040b63f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0040b644: ADD ESP,0xc
// 0040b647: CMP EAX,0x1
// 0040b64a: JZ 0x0040b65a
//   XREF to: 0040b65a (CONDITIONAL_JUMP)
// 0040b64c: PUSH EBX
// 0040b64d: PUSH 0x66e128
//   XREF to: 0066e128 (DATA)
// 0040b652: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b657: ADD ESP,0x8
// 0040b65a: MOV ESI,dword ptr [0x00822034]
//   Label: LAB_0040b65a
//   XREF to: 00822034 (READ)
// 0040b660: PUSH ESI
// 0040b661: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040b666: ADD ESP,0x4
// 0040b669: CMP EAX,0x22
// 0040b66c: JNZ 0x0040b686
//   XREF to: 0040b686 (CONDITIONAL_JUMP)
// 0040b66e: PUSH EBX
//   Label: LAB_0040b66e
// 0040b66f: PUSH 0x66e128
//   XREF to: 0066e128 (DATA)
// 0040b674: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b679: ADD ESP,0x8
// 0040b67c: POP EBP
// 0040b67d: POP EDI
// 0040b67e: POP ESI
// 0040b67f: POP EBX
// 0040b680: RET
// 0040b681: MOV byte ptr [ESI],0x0
//   Label: LAB_0040b681
// 0040b684: JMP 0x0040b66e
//   XREF to: 0040b66e (UNCONDITIONAL_JUMP)
// 0040b686: PUSH EBX
//   Label: LAB_0040b686
// 0040b687: PUSH 0x66e128
//   XREF to: 0066e128 (DATA)
// 0040b68c: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040b691: ADD ESP,0x8
// 0040b694: PUSH EBX
// 0040b695: PUSH 0x66e128
//   XREF to: 0066e128 (DATA)
// 0040b69a: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b69f: ADD ESP,0x8
// 0040b6a2: POP EBP
// 0040b6a3: POP EDI
// 0040b6a4: POP ESI
// 0040b6a5: POP EBX
// 0040b6a6: RET
// 0040b6a7: PUSH ESI
//   Label: LAB_0040b6a7
// 0040b6a8: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040b6ad: PUSH 0x613f0d
//   XREF to: 00613f0d (DATA)
// 0040b6b2: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040b6b8: PUSH ECX
// 0040b6b9: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040b6be: ADD ESP,0x10
// 0040b6c1: PUSH EBX
// 0040b6c2: PUSH 0x66e128
//   XREF to: 0066e128 (DATA)
// 0040b6c7: CALL core_actor.cpp_serializeDescription_FUN_0040b290
//   XREF to: 0040b290 (UNCONDITIONAL_CALL)
// 0040b6cc: ADD ESP,0x8
// 0040b6cf: POP EBP
// 0040b6d0: POP EDI
// 0040b6d1: POP ESI
// 0040b6d2: POP EBX
// 0040b6d3: RET
