// Name: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// Address: 004a9500
// Address Range: [[004a9500, 004a952d]]
// Convention: __cdecl
// Signature: CEnemy * core_enemy.cpp_CEnemy_ctor_FUN_004a9500(CEnemy * this_ptr)
// Cross-references:
//   core_armour.cpp_CArmour_ctor_FUN_004121a0 (004121a0) at 004121a8 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_ctor_FUN_004150f0 (004150f0) at 004150f6 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_ctor_FUN_00416450 (00416450) at 00416458 [UNCONDITIONAL_CALL]
//   core_beast.cpp_CBeast_ctor_FUN_00418220 (00418220) at 00418226 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_ctor_FUN_004185c0 (004185c0) at 004185c8 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041bbc0 (0041bbc0) at 0041bbcb [UNCONDITIONAL_CALL]
//   core_bride.cpp_CBride_ctor_FUN_004237a0 (004237a0) at 004237a6 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_CBugs_ctor_FUN_00424cb0 (00424cb0) at 00424cb8 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444140 (00444140) at 00444146 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_ctor_FUN_0047f050 (0047f050) at 0047f056 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_ctor_FUN_00483fc0 (00483fc0) at 00483fc7 [UNCONDITIONAL_CALL]
//   core_drone.cpp_ctor_FUN_0048eb50 (0048eb50) at 0048eb56 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_FUN_004e44e0 (004e44e0) at 004e44e6 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6030 (004e6030) at 004e6039 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0 (004f6ca0) at 004f6ca6 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f98a0 (004f98a0) at 004f98a6 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00502f90 (00502f90) at 00502f96 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f1d0 (0051f1d0) at 0051f1d7 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_ctor_FUN_00525200 (00525200) at 00525208 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_CSentinel_ctor_FUN_00567db0 (00567db0) at 00567db6 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_CSmiley_ctor_FUN_005a2430 (005a2430) at 005a2436 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_ctor_FUN_005c6a80 (005c6a80) at 005c6a88 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_ctor_FUN_005daf60 (005daf60) at 005daf66 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0 (005e3ef0) at 005e3ef9 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 (005e5590) at 005e5596 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_ctor_FUN_005efc10 (005efc10) at 005efc16 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_ctor_FUN_005f8fe0 (005f8fe0) at 005f8fec [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable PTR_core_enemy.cpp_FUN_004a9650_0065d7d4
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_charactr.cpp_CCharacter_ctor_FUN_00427e20

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_004a9500(CEnemy *this_ptr)

{
  CEnemy *pCVar1;
  char cVar2;
  CCharacter *pCVar3;
  CEnemy *pCVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  
  pCVar4 = (CEnemy *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base_character);
  (pCVar4->base_character).base_actor.vtable = &PTR_core_enemy_cpp_FUN_004a9650_0065d7d4;
  fVar5 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  pCVar4->pool_me = 0;
  pCVar4->field8_0xbeac = 0;
  pCVar4->field6_0xbe38[4] = '\0';
  pCVar4->field6_0xbe38[5] = '\0';
  pCVar4->field6_0xbe38[6] = '\0';
  pCVar4->field6_0xbe38[7] = '\0';
  pCVar4->field6_0xbe38[8] = '\0';
  pCVar4->field6_0xbe38[9] = '\0';
  pCVar4->field6_0xbe38[10] = '\0';
  pCVar4->field6_0xbe38[0xb] = '\0';
  pCVar4->field6_0xbe38[0xc] = '\0';
  pCVar4->field6_0xbe38[0xd] = '\0';
  pCVar4->field6_0xbe38[0xe] = 'H';
  pCVar4->field6_0xbe38[0xf] = 'B';
  pCVar4->randomize_me = 1;
  pCVar1 = pCVar4 + 1;
  (pCVar1->base_character).base_actor.actor_name[0] = '\0';
  (pCVar1->base_character).base_actor.actor_name[1] = '\0';
  (pCVar1->base_character).base_actor.actor_name[2] = '\0';
  (pCVar1->base_character).base_actor.actor_name[3] = '\0';
  pCVar4->field4_0xbe30 = 0;
  pCVar4->patrol_name_pattern[0] = '\0';
  pCVar4->guard_distance = 100.0;
  pCVar4->field6_0xbe38[0] = '\0';
  pCVar4->field6_0xbe38[1] = '\0';
  pCVar4->field6_0xbe38[2] = '\0';
  pCVar4->field6_0xbe38[3] = '\0';
  pCVar4->victim_height = 6.0;
  pCVar3 = &pCVar4[1].base_character;
  (pCVar3->base_actor).actor_name[4] = '\x01';
  (pCVar3->base_actor).actor_name[5] = '\0';
  (pCVar3->base_actor).actor_name[6] = '\0';
  (pCVar3->base_actor).actor_name[7] = '\0';
  pCVar4->speed = fVar5;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  (pCVar4->base_character).base_actor.scale.x = iVar6 + 0x10000;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  pcVar7 = "ene";
  (pCVar4->base_character).base_actor.scale.y = iVar6 + 0x10000;
  iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(-0x1fff,0x1fff);
  piVar8 = &(pCVar4->base_character).base_actor.field21_0x11c;
  (pCVar4->base_character).base_actor.scale.z = iVar6 + 0x10000;
  do {
    cVar2 = *pcVar7;
    *(char *)piVar8 = cVar2;
    if (cVar2 == '\0') {
      return pCVar4;
    }
    cVar2 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    *(char *)((int)piVar8 + 1) = cVar2;
    piVar8 = (int *)((int)piVar8 + 2);
  } while (cVar2 != '\0');
  return pCVar4;
}


// Assembly code:
// 004a9500: PUSH EBX
//   Label: core_enemy.cpp_CEnemy_ctor_FUN_004a9500
// 004a9501: PUSH ESI
// 004a9502: PUSH EDI
// 004a9503: SUB ESP,0x4
// 004a9506: MOV EDX,dword ptr [ESP + 0x14]
// 004a950a: PUSH EDX
// 004a950b: CALL core_charactr.cpp_CCharacter_ctor_FUN_00427e20
//   XREF to: 00427e20 (UNCONDITIONAL_CALL)
// 004a9510: ADD ESP,0x4
// 004a9513: PUSH 0x3f8ccccd
// 004a9518: MOV EBX,EAX
// 004a951a: PUSH 0x3f666666
// 004a951f: MOV dword ptr [EAX + 0x154],0x65d7d4
//   XREF to: 0065d7d4 (DATA)
// 004a9529: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
