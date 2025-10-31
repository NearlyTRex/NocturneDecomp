// Name: core_actor.cpp_serializeMotionState_FUN_0040b9f0
// Address: 0040b9f0
// Address Range: [[0040b9f0, 0040badb]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeMotionState_FUN_0040b9f0(void * motion, char * property_name)
// Cross-references:
//   core_armour.cpp_CArmour_serialize_FUN_004123a0 (004123a0) at 004123dd [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70 (00415d70) at 00415dad [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 004175bd [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_load_FUN_00418330 (00418330) at 0041836d [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_load_FUN_00418ac0 (00418ac0) at 00418afd [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d2d1 [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_load_FUN_00424560 (00424560) at 004245de [UNCONDITIONAL_CALL]
//   core_cow.cpp_CZombieCow_load_FUN_00444840 (00444840) at 0044488d [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0 (0047f7b0) at 0047f7fd [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485ea6 [UNCONDITIONAL_CALL]
//   core_drone.cpp_CDrone_load_FUN_0048f2f0 (0048f2f0) at 0048f33d [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_load_FUN_004e5470 (004e5470) at 004e54ad [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_load_FUN_004e81c0 (004e81c0) at 004e8247 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_serialize_FUN_004f2610 (004f2610) at 004f264a [UNCONDITIONAL_CALL]
//   core_hostage.cpp_CHostage_load_FUN_004f6170 (004f6170) at 004f6355 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0 (004f76c0) at 004f76fd [UNCONDITIONAL_CALL]
//   core_imp.cpp_CImp_load_FUN_004fab00 (004fab00) at 004fab3d [UNCONDITIONAL_CALL]
//   core_larva.cpp_CLarva_load_FUN_00503960 (00503960) at 005039ad [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 005209c0 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 00527281 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0 (00544ba0) at 00544bdd [UNCONDITIONAL_CALL]
//   core_passngr.cpp_CPassenger_load_FUN_00546190 (00546190) at 00546205 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_load_FUN_00568c70 (00568c70) at 00568ca9 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_load_FUN_005a3220 (005a3220) at 005a3271 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_serialize_FUN_005c7710 (005c7710) at 005c774d [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_serialize_FUN_005db880 (005db880) at 005db8ba [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50 (005e6f50) at 005e6fed [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980 (005f1980) at 005f19d1 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fc037 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_motion_state_info_openin_00613f33
//   TerminatedCString s_motion_state_info_closin_00613f53
//   TerminatedCString s_s_s_00613f73
//   TerminatedCString s_s_00613f7e
//   char* g_PropertyNamePrefix = 00000000
//   FILE* g_ActorDataFile
//   int g_ActorReadingMode
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_0040aee0
//   core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   core_motion.cpp_CMotionController_load_FUN_0052e5d0
//   core_motion.cpp_CMotionController_save_FUN_0052e670
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeMotionState_FUN_0040b9f0(void *motion,char *property_name)

{
  int iVar1;
  int unk;
  CMotionController *in_stack_0000000c;
  
  if (g_ActorReadingMode != 1) {
    iVar1 = crt_stdio_c_fprintf_FUN_005fe6d0
                      (g_ActorDataFile,"%s{ // %s\n",&g_PropertyNamePrefix,property_name);
    core_actor_cpp_CDemonActor_FUN_0040aee0(iVar1);
    core_motion_cpp_CMotionController_save_FUN_0052e670(in_stack_0000000c);
    core_actor_cpp_CDemonActor_FUN_0040aee0(unk);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",&g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("motion state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_0052e5d0((CMotionController *)motion);
  do {
    while( true ) {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("motion state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}


// Assembly code:
// 0040b9f0: PUSH EBX
//   Label: core_actor.cpp_serializeMotionState_FUN_0040b9f0
// 0040b9f1: PUSH ESI
// 0040b9f2: PUSH EBP
// 0040b9f3: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0040b9f7: CMP dword ptr [0x00822038],0x1
//   XREF to: 00822038 (READ)
// 0040b9fe: JNZ 0x0040ba76
//   XREF to: 0040ba76 (CONDITIONAL_JUMP)
// 0040ba04: MOV EBP,dword ptr [0x00822034]
//   Label: LAB_0040ba04
//   XREF to: 00822034 (READ)
// 0040ba0a: PUSH EBP
// 0040ba0b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040ba10: ADD ESP,0x4
// 0040ba13: MOV ESI,EAX
// 0040ba15: TEST EAX,EAX
// 0040ba17: JL 0x0040ba4f
//   XREF to: 0040ba4f (CONDITIONAL_JUMP)
// 0040ba19: CMP ESI,0xa
//   Label: LAB_0040ba19
// 0040ba1c: JNZ 0x0040ba04
//   XREF to: 0040ba04 (CONDITIONAL_JUMP)
// 0040ba1e: MOV EAX,[0x00822034]
//   XREF to: 00822034 (READ)
// 0040ba23: PUSH EAX
// 0040ba24: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040ba28: PUSH EDX
// 0040ba29: CALL core_motion.cpp_CMotionController_load_FUN_0052e5d0
//   XREF to: 0052e5d0 (UNCONDITIONAL_CALL)
// 0040ba2e: ADD ESP,0x8
// 0040ba31: MOV ECX,dword ptr [0x00822034]
//   Label: LAB_0040ba31
//   XREF to: 00822034 (READ)
// 0040ba37: PUSH ECX
// 0040ba38: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0040ba3d: ADD ESP,0x4
// 0040ba40: MOV ESI,EAX
// 0040ba42: TEST EAX,EAX
// 0040ba44: JL 0x0040ba5f
//   XREF to: 0040ba5f (CONDITIONAL_JUMP)
// 0040ba46: CMP ESI,0xa
// 0040ba49: JNZ 0x0040ba31
//   XREF to: 0040ba31 (CONDITIONAL_JUMP)
// 0040ba4b: POP EBP
// 0040ba4c: POP ESI
// 0040ba4d: POP EBX
// 0040ba4e: RET
// 0040ba4f: PUSH EBX
//   Label: LAB_0040ba4f
// 0040ba50: PUSH 0x613f33
//   XREF to: 00613f33 (DATA)
// 0040ba55: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040ba5a: ADD ESP,0x8
// 0040ba5d: JMP 0x0040ba19
//   XREF to: 0040ba19 (UNCONDITIONAL_JUMP)
// 0040ba5f: PUSH EBX
//   Label: LAB_0040ba5f
// 0040ba60: PUSH 0x613f53
//   XREF to: 00613f53 (DATA)
// 0040ba65: CALL core_actor.cpp_handleActorPropertyParseError_FUN_0040b210
//   XREF to: 0040b210 (UNCONDITIONAL_CALL)
// 0040ba6a: ADD ESP,0x8
// 0040ba6d: CMP ESI,0xa
// 0040ba70: JNZ 0x0040ba31
//   XREF to: 0040ba31 (CONDITIONAL_JUMP)
// 0040ba72: POP EBP
// 0040ba73: POP ESI
// 0040ba74: POP EBX
// 0040ba75: RET
// 0040ba76: PUSH EDI
//   Label: LAB_0040ba76
// 0040ba77: PUSH EBX
// 0040ba78: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040ba7d: PUSH 0x613f73
//   XREF to: 00613f73 (DATA)
// 0040ba82: MOV ECX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040ba88: PUSH ECX
// 0040ba89: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040ba8e: ADD ESP,0x10
// 0040ba91: PUSH 0x1
// 0040ba93: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040ba98: ADD ESP,0x4
// 0040ba9b: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040baa0: MOV EBX,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040baa6: PUSH EBX
// 0040baa7: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0040baab: PUSH ESI
// 0040baac: CALL core_motion.cpp_CMotionController_save_FUN_0052e670
//   XREF to: 0052e670 (UNCONDITIONAL_CALL)
// 0040bab1: ADD ESP,0xc
// 0040bab4: PUSH -0x1
// 0040bab6: CALL core_actor.cpp_CDemonActor_FUN_0040aee0
//   XREF to: 0040aee0 (UNCONDITIONAL_CALL)
// 0040babb: ADD ESP,0x4
// 0040babe: PUSH 0x66e178
//   XREF to: 0066e178 (DATA)
// 0040bac3: PUSH 0x613f7e
//   XREF to: 00613f7e (DATA)
// 0040bac8: MOV EDI,dword ptr [0x00822034]
//   XREF to: 00822034 (READ)
// 0040bace: PUSH EDI
// 0040bacf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0040bad4: ADD ESP,0xc
// 0040bad7: POP EDI
// 0040bad8: POP EBP
// 0040bad9: POP ESI
// 0040bada: POP EBX
// 0040badb: RET
