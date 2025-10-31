// Name: core_enemy.cpp_CEnemy_serialize_FUN_004a9660
// Address: 004a9660
// Address Range: [[004a9660, 004a97b1]]
// Convention: __cdecl
// Signature: void core_enemy.cpp_CEnemy_serialize_FUN_004a9660(CEnemy * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_serialize_FUN_004123a0 (004123a0) at 004123a7 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_serialize_FUN_00415d70 (00415d70) at 00415d77 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_serialize_FUN_00417580 (00417580) at 00417587 [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_load_FUN_00418330 (00418330) at 00418337 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_load_FUN_00418ac0 (00418ac0) at 00418ac7 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_load_FUN_0041d270 (0041d270) at 0041d27c [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_load_FUN_00424560 (00424560) at 00424566 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_load_FUN_004254f0 (004254f0) at 004254f9 [UNCONDITIONAL_CALL]
//   core_cow.cpp_CZombieCow_load_FUN_00444840 (00444840) at 00444846 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_serialize_FUN_0047f7b0 (0047f7b0) at 0047f7b6 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_CDraculaBride_load_FUN_00485dd0 (00485dd0) at 00485ddc [UNCONDITIONAL_CALL]
//   core_drone.cpp_CDrone_load_FUN_0048f2f0 (0048f2f0) at 0048f2f6 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_load_FUN_004e5470 (004e5470) at 004e5477 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_load_FUN_004e81c0 (004e81c0) at 004e81c6 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0 (004f76c0) at 004f76c7 [UNCONDITIONAL_CALL]
//   core_imp.cpp_CImp_load_FUN_004fab00 (004fab00) at 004fab07 [UNCONDITIONAL_CALL]
//   core_larva.cpp_CLarva_load_FUN_00503960 (00503960) at 00503966 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_load_FUN_00520930 (00520930) at 00520937 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_load_FUN_00527230 (00527230) at 00527236 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_load_FUN_00568c70 (00568c70) at 00568c76 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_load_FUN_005a3220 (005a3220) at 005a3227 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_serialize_FUN_005c7710 (005c7710) at 005c7717 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_serialize_FUN_005db880 (005db880) at 005db887 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_serialize_FUN_005e40c0 (005e40c0) at 005e40d3 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_serialize_FUN_005e6f50 (005e6f50) at 005e6f56 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_serialize_FUN_005f1980 (005f1980) at 005f1986 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_serialize_FUN_005fbfd0 (005fbfd0) at 005fbfd7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_speed_0062430d
//   TerminatedCString s_hitPoints_00624313
//   TerminatedCString s_poolMe_0062431d
//   TerminatedCString s_speed_00624324
//   TerminatedCString s_poolMe_0062432a
//   TerminatedCString s_randomizeMe_00624331
//   TerminatedCString s_scriptVictim_0062433d
//   TerminatedCString s_patrolNamePattern_0062434a
//   TerminatedCString s_guardDistance_0062435c
//   TerminatedCString s_victimHeight_0062436a
//   TerminatedCString s_victim_00624377
//   int g_CEnemyClassVersion = 0xa
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_charactr.cpp_CCharacter_serialize_FUN_004283a0

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_serialize_FUN_004a9660(CEnemy *this_ptr)

{
  if (g_CEnemyClassVersion < 4) {
    core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0((CDemonActor *)this_ptr);
    if (1 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"speed");
    }
    if (2 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770
                (&(this_ptr->base_character).hit_points,"hitPoints");
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->pool_me,"poolMe");
      return;
    }
  }
  else {
    core_charactr_cpp_CCharacter_serialize_FUN_004283a0(&this_ptr->base_character);
    core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->speed,"speed");
    core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->pool_me,"poolMe");
    if (4 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeInteger_FUN_0040b7f0(&this_ptr->randomize_me,"randomizeMe");
    }
    if (5 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr + 1),"scriptVictim");
    }
    if (6 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeString_FUN_0040b5c0
                ((char **)this_ptr->patrol_name_pattern,"patrolNamePattern");
    }
    if (7 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->guard_distance,"guardDistance")
      ;
    }
    if (8 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeFloat_FUN_0040b770(&this_ptr->victim_height,"victimHeight");
    }
    if (9 < g_CEnemyClassVersion) {
      core_actor_cpp_serializeActor_FUN_0040b870
                ((CDemonActor *)(this_ptr->field6_0xbe38 + 4),"victim");
      return;
    }
  }
  return;
}


// Assembly code:
// 004a9660: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_serialize_FUN_004a9660
// 004a9661: PUSH ESI
// 004a9662: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004a9666: MOV EDX,dword ptr [0x0067937c]
//   XREF to: 0067937c (READ)
// 004a966c: LEA ESI,[EBX + 0xbe24]
// 004a9672: CMP EDX,0x4
// 004a9675: JGE 0x004a96d0
//   XREF to: 004a96d0 (CONDITIONAL_JUMP)
// 004a9677: PUSH EBX
// 004a9678: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004a967d: MOV ECX,dword ptr [0x0067937c]
//   XREF to: 0067937c (READ)
// 004a9683: ADD ESP,0x4
// 004a9686: CMP ECX,0x2
// 004a9689: JL 0x004a9699
//   XREF to: 004a9699 (CONDITIONAL_JUMP)
// 004a968b: PUSH 0x62430d
//   XREF to: 0062430d (DATA)
// 004a9690: PUSH ESI
// 004a9691: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a9696: ADD ESP,0x8
// 004a9699: CMP dword ptr [0x0067937c],0x3
//   Label: LAB_004a9699
//   XREF to: 0067937c (READ)
// 004a96a0: JGE 0x004a96a5
//   XREF to: 004a96a5 (CONDITIONAL_JUMP)
// 004a96a2: POP ESI
//   Label: LAB_004a96a2
// 004a96a3: POP EBX
// 004a96a4: RET
// 004a96a5: PUSH 0x624313
//   Label: LAB_004a96a5
//   XREF to: 00624313 (DATA)
// 004a96aa: LEA ESI,[EBX + 0x243c]
// 004a96b0: PUSH ESI
// 004a96b1: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a96b6: ADD ESP,0x8
// 004a96b9: PUSH 0x62431d
//   XREF to: 0062431d (DATA)
// 004a96be: ADD EBX,0xbe28
// 004a96c4: PUSH EBX
// 004a96c5: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a96ca: ADD ESP,0x8
// 004a96cd: POP ESI
// 004a96ce: POP EBX
// 004a96cf: RET
// 004a96d0: PUSH EBX
//   Label: LAB_004a96d0
// 004a96d1: CALL core_charactr.cpp_CCharacter_serialize_FUN_004283a0
//   XREF to: 004283a0 (UNCONDITIONAL_CALL)
// 004a96d6: ADD ESP,0x4
// 004a96d9: PUSH 0x624324
//   XREF to: 00624324 (DATA)
// 004a96de: PUSH ESI
// 004a96df: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a96e4: ADD ESP,0x8
// 004a96e7: PUSH 0x62432a
//   XREF to: 0062432a (DATA)
// 004a96ec: LEA ESI,[EBX + 0xbe28]
// 004a96f2: PUSH ESI
// 004a96f3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a96f8: MOV ECX,dword ptr [0x0067937c]
//   XREF to: 0067937c (READ)
// 004a96fe: ADD ESP,0x8
// 004a9701: CMP ECX,0x5
// 004a9704: JL 0x004a971a
//   XREF to: 004a971a (CONDITIONAL_JUMP)
// 004a9706: PUSH 0x624331
//   XREF to: 00624331 (DATA)
// 004a970b: LEA ESI,[EBX + 0xbe2c]
// 004a9711: PUSH ESI
// 004a9712: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004a9717: ADD ESP,0x8
// 004a971a: CMP dword ptr [0x0067937c],0x6
//   Label: LAB_004a971a
//   XREF to: 0067937c (READ)
// 004a9721: JL 0x004a9737
//   XREF to: 004a9737 (CONDITIONAL_JUMP)
// 004a9723: PUSH 0x62433d
//   XREF to: 0062433d (DATA)
// 004a9728: LEA ESI,[EBX + 0xbeb4]
// 004a972e: PUSH ESI
// 004a972f: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004a9734: ADD ESP,0x8
// 004a9737: CMP dword ptr [0x0067937c],0x7
//   Label: LAB_004a9737
//   XREF to: 0067937c (READ)
// 004a973e: JL 0x004a9754
//   XREF to: 004a9754 (CONDITIONAL_JUMP)
// 004a9740: PUSH 0x62434a
//   XREF to: 0062434a (DATA)
// 004a9745: LEA ESI,[EBX + 0xbe48]
// 004a974b: PUSH ESI
// 004a974c: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004a9751: ADD ESP,0x8
// 004a9754: CMP dword ptr [0x0067937c],0x8
//   Label: LAB_004a9754
//   XREF to: 0067937c (READ)
// 004a975b: JL 0x004a9771
//   XREF to: 004a9771 (CONDITIONAL_JUMP)
// 004a975d: PUSH 0x62435c
//   XREF to: 0062435c (DATA)
// 004a9762: LEA ESI,[EBX + 0xbe34]
// 004a9768: PUSH ESI
// 004a9769: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a976e: ADD ESP,0x8
// 004a9771: CMP dword ptr [0x0067937c],0x9
//   Label: LAB_004a9771
//   XREF to: 0067937c (READ)
// 004a9778: JL 0x004a978e
//   XREF to: 004a978e (CONDITIONAL_JUMP)
// 004a977a: PUSH 0x62436a
//   XREF to: 0062436a (DATA)
// 004a977f: LEA ESI,[EBX + 0xbeb0]
// 004a9785: PUSH ESI
// 004a9786: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004a978b: ADD ESP,0x8
// 004a978e: CMP dword ptr [0x0067937c],0xa
//   Label: LAB_004a978e
//   XREF to: 0067937c (READ)
// 004a9795: JL 0x004a96a2
//   XREF to: 004a96a2 (CONDITIONAL_JUMP)
// 004a979b: PUSH 0x624377
//   XREF to: 00624377 (DATA)
// 004a97a0: ADD EBX,0xbe3c
// 004a97a6: PUSH EBX
// 004a97a7: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004a97ac: ADD ESP,0x8
// 004a97af: POP ESI
// 004a97b0: POP EBX
// 004a97b1: RET
