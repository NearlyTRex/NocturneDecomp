// Name: core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
// Address: 0040b970
// Address Range: [[0040b970, 0040b9ea]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970(CDeformableModelInstance * model_ptr, char * property_name)
// Cross-references:
//   core_armour.cpp_CArmour_serialize_FUN_004123a0 (004123a0) at 004123cf [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70 (00415d70) at 00415d9f [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 004175af [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_load_FUN_00418330 (00418330) at 0041835f [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_load_FUN_00418ac0 (00418ac0) at 00418aef [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d2aa [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_load_FUN_00424560 (00424560) at 00424585 [UNCONDITIONAL_CALL]
//   core_cow.cpp_CZombieCow_load_FUN_00444840 (00444840) at 0044486e [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0 (0047f7b0) at 0047f7de [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485dff [UNCONDITIONAL_CALL]
//   core_drone.cpp_CDrone_load_FUN_0048f2f0 (0048f2f0) at 0048f31e [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_load_FUN_004e5470 (004e5470) at 004e549f [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_load_FUN_004e81c0 (004e81c0) at 004e81e9 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f6347 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0 (004f76c0) at 004f76ef [UNCONDITIONAL_CALL]
//   core_imp.cpp_CImp_load_FUN_004fab00 (004fab00) at 004fab2f [UNCONDITIONAL_CALL]
//   core_larva.cpp_CLarva_load_FUN_00503960 (00503960) at 0050398e [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 0052095f [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 0052725e [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0 (00544ba0) at 00544bcf [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_load_FUN_00546190 (00546190) at 005461f7 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_load_FUN_00568c70 (00568c70) at 00568c8a [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_load_FUN_005a3220 (005a3220) at 005a324f [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_serialize_FUN_005c7710 (005c7710) at 005c773f [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_serialize_FUN_005db880 (005db880) at 005db89b [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980 (005f1980) at 005f19ae [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fbfff [UNCONDITIONAL_CALL]
// Globals:
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
          (CDeformableModelInstance *model_ptr,char *property_name)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  undefined4 local_d0;
  char acStack_cc [196];
  
  pcVar3 = (char *)&local_d0;
  if (g_ActorReadingMode == 1) {
    core_actor_cpp_serializeString_FUN_0040b5c0((char **)&local_d0,property_name);
    local_d0 = acStack_cc;
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(model_ptr);
    return;
  }
  pcVar2 = model_ptr->field11_0x2260;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)&local_d0,property_name);
  return;
}


// Assembly code:
// 0040b970: PUSH ESI
//   Label: core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
// 0040b971: PUSH EDI
// 0040b972: SUB ESP,0xc8
// 0040b978: MOV EDI,dword ptr [ESP + 0xd4]
//   XREF to: Stack[0x4] (READ)
// 0040b97f: MOV EDX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[0x8] (READ)
// 0040b986: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b98d: JNZ 0x0040b9b2
//   XREF to: 0040b9b2 (CONDITIONAL_JUMP)
// 0040b98f: PUSH EDX
// 0040b990: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 0040b994: PUSH ESI
// 0040b995: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0040b99a: ADD ESP,0x8
// 0040b99d: MOV ESI,ESP
// 0040b99f: PUSH ESI
// 0040b9a0: PUSH EDI
// 0040b9a1: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0040b9a6: ADD ESP,0x8
// 0040b9a9: ADD ESP,0xc8
// 0040b9af: POP EDI
// 0040b9b0: POP ESI
// 0040b9b1: RET
// 0040b9b2: LEA ESI,[EDI + 0x2260]
//   Label: LAB_0040b9b2
// 0040b9b8: MOV EDI,ESP
// 0040b9ba: PUSH EDI
// 0040b9bb: MOV AL,byte ptr [ESI]
//   Label: LAB_0040b9bb
// 0040b9bd: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0xd0] (DATA)
// 0040b9bf: CMP AL,0x0
// 0040b9c1: JZ 0x0040b9d3
//   XREF to: 0040b9d3 (CONDITIONAL_JUMP)
// 0040b9c3: MOV AL,byte ptr [ESI + 0x1]
// 0040b9c6: ADD ESI,0x2
// 0040b9c9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0xcf] (WRITE)
// 0040b9cc: ADD EDI,0x2
// 0040b9cf: CMP AL,0x0
// 0040b9d1: JNZ 0x0040b9bb
//   XREF to: 0040b9bb (CONDITIONAL_JUMP)
// 0040b9d3: POP EDI
//   Label: LAB_0040b9d3
// 0040b9d4: PUSH EDX
// 0040b9d5: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xd0] (DATA)
// 0040b9d9: PUSH ESI
// 0040b9da: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 0040b9df: ADD ESP,0x8
// 0040b9e2: ADD ESP,0xc8
// 0040b9e8: POP EDI
// 0040b9e9: POP ESI
// 0040b9ea: RET
