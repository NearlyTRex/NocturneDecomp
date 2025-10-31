// Name: core_actor.cpp_registerActorClass_FUN_0040c2e0
// Address: 0040c2e0
// Address Range: [[0040c2e0, 0040c3b3]]
// Convention: __cdecl
// Signature: CDemonActorType * core_actor.cpp_registerActorClass_FUN_0040c2e0(CDemonActorType * this_ptr, char * class_name, void * constructor_func, int * max_version, int version, CDemonActorType * parent_class_info)
// Cross-references:
//   core_actor.cpp_staticInit_FUN_00408320 (00408320) at 00408335 [UNCONDITIONAL_CALL]
//   core_ammo.cpp_staticInit_FUN_00410d50 (00410d50) at 00410d6b [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_staticInit_FUN_00411530 (00411530) at 0041154b [UNCONDITIONAL_CALL]
//   core_anvil.cpp_staticInit_FUN_00411c70 (00411c70) at 00411c8b [UNCONDITIONAL_CALL]
//   core_armour.cpp_staticInit_FUN_00412130 (00412130) at 0041214b [UNCONDITIONAL_CALL]
//   core_backgnd.cpp_staticInit_FUN_00412740 (00412740) at 0041275b [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_00412b41 (00412b41) at 00412b6b [UNCONDITIONAL_CALL]
//   core_baron.cpp_staticInit_FUN_00412b20 (00412b20) at 00412b3b [UNCONDITIONAL_CALL]
//   core_barrier.cpp_staticInit_FUN_00414150 (00414150) at 0041416b [UNCONDITIONAL_CALL]
//   core_bat.cpp_staticInit_FUN_004146c0 (004146c0) at 004146db [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_staticInit_FUN_00415080 (00415080) at 0041509b [UNCONDITIONAL_CALL]
//   core_batman.cpp_staticInit_FUN_004163e0 (004163e0) at 004163fb [UNCONDITIONAL_CALL]
//   core_battery.cpp_staticInit_FUN_00417e20 (00417e20) at 00417e3b [UNCONDITIONAL_CALL]
//   core_beast.cpp_staticInit_FUN_004181b0 (004181b0) at 004181cb [UNCONDITIONAL_CALL]
//   core_biggs.cpp_staticInit_FUN_00418550 (00418550) at 0041856b [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_staticInit_FUN_00418de0 (00418de0) at 00418dfb [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_staticInit_FUN_0041b6d0 (0041b6d0) at 0041b6eb [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_staticInit_FUN_00421650 (00421650) at 0042166b [UNCONDITIONAL_CALL]
//   core_bride.cpp_staticInit_FUN_00423700 (00423700) at 0042374c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_staticInit_FUN_00424c40 (00424c40) at 00424c5b [UNCONDITIONAL_CALL]
//   core_chain.cpp_staticInit_FUN_0042fb10 (0042fb10) at 0042fb2b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_staticInit_FUN_00427d80 (00427d80) at 00427da5 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_staticInit_FUN_0043f770 (0043f770) at 0043f78b [UNCONDITIONAL_CALL]
//   core_conveyor.cpp_staticInit_FUN_00441c30 (00441c30) at 00441c4b [UNCONDITIONAL_CALL]
//   core_cow.cpp_staticInit_FUN_004440d0 (004440d0) at 004440eb [UNCONDITIONAL_CALL]
//   core_crate.cpp_staticInit_FUN_00448460 (00448460) at 0044847b [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_staticInit_FUN_00448c00 (00448c00) at 00448c1b [UNCONDITIONAL_CALL]
//   core_curtain.cpp_staticInit_FUN_00449610 (00449610) at 00449653 [UNCONDITIONAL_CALL]
//   core_dest.cpp_staticInit_FUN_0046f890 (0046f890) at 0046f8ab [UNCONDITIONAL_CALL]
//   core_dog.cpp_staticInit_FUN_0047efe0 (0047efe0) at 0047effb [UNCONDITIONAL_CALL]
//   core_door.cpp_staticInit_FUN_0047fa60 (0047fa60) at 0047fa7b [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_staticInit_FUN_00483ef0 (00483ef0) at 00483f52 [UNCONDITIONAL_CALL]
//   core_drip.cpp_staticInit_FUN_0048df80 (0048df80) at 0048df9b [UNCONDITIONAL_CALL]
//   core_drone.cpp_staticInit_FUN_0048eae0 (0048eae0) at 0048eafb [UNCONDITIONAL_CALL]
//   core_dynamite.cpp_staticInit_FUN_0049cd40 (0049cd40) at 0049cd5b [UNCONDITIONAL_CALL]
//   core_elephant.cpp_staticInit_FUN_004a6f70 (004a6f70) at 004a6f8b [UNCONDITIONAL_CALL]
//   core_emitter.cpp_staticInit_FUN_004a7c30 (004a7c30) at 004a7c4b [UNCONDITIONAL_CALL]
//   core_enemy.cpp_staticInit_FUN_004a94d0 (004a94d0) at 004a94e8 [UNCONDITIONAL_CALL]
//   core_filmreel.cpp_staticInit_FUN_004be620 (004be620) at 004be63b [UNCONDITIONAL_CALL]
//   core_flame.cpp_staticInit_FUN_004c9a30 (004c9a30) at 004c9a4b [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_staticInit_FUN_004cb0f0 (004cb0f0) at 004cb10b [UNCONDITIONAL_CALL]
//   core_flamegun.cpp_staticInit_FUN_004cb810 (004cb810) at 004cb82b [UNCONDITIONAL_CALL]
//   core_flashlit.cpp_staticInit_FUN_004cbb50 (004cbb50) at 004cbb6b [UNCONDITIONAL_CALL]
//   core_flies.cpp_staticInit_FUN_004cbcf0 (004cbcf0) at 004cbd0b [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_staticInit_FUN_004d16b0 (004d16b0) at 004d16cb [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_staticInit_FUN_004d2910 (004d2910) at 004d29dd [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_staticInit_FUN_004e4470 (004e4470) at 004e448b [UNCONDITIONAL_CALL]
//   core_gasmask.cpp_staticInit_FUN_004e5c90 (004e5c90) at 004e5cab [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_staticInit_FUN_004e5f90 (004e5f90) at 004e5fdc [UNCONDITIONAL_CALL]
//   core_glass.cpp_staticInit_FUN_004e8fd0 (004e8fd0) at 004e8feb [UNCONDITIONAL_CALL]
//   core_grave.cpp_staticInit_FUN_004ee4a0 (004ee4a0) at 004ee4bb [UNCONDITIONAL_CALL]
//   core_gun.cpp_staticInit_FUN_004f0280 (004f0280) at 004f029b [UNCONDITIONAL_CALL]
//   core_haystack.cpp_staticInit_FUN_004f0ba0 (004f0ba0) at 004f0bbb [UNCONDITIONAL_CALL]
//   core_health.cpp_staticInit_FUN_004f1d60 (004f1d60) at 004f1d7b [UNCONDITIONAL_CALL]
//   core_hero.cpp_staticInit_FUN_004f2120 (004f2120) at 004f2138 [UNCONDITIONAL_CALL]
//   core_hiram.cpp_staticInit_FUN_004f4380 (004f4380) at 004f439b [UNCONDITIONAL_CALL]
//   core_hostage.cpp_staticInit_FUN_004f47d0 (004f47d0) at 004f47eb [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_staticInit_FUN_004f6c30 (004f6c30) at 004f6c4b [UNCONDITIONAL_CALL]
//   core_hpriest.cpp_staticInit_FUN_004f7b00 (004f7b00) at 004f7b1b [UNCONDITIONAL_CALL]
//   core_icepick.cpp_staticInit_FUN_004f7d80 (004f7d80) at 004f7d9b [UNCONDITIONAL_CALL]
//   core_imp.cpp_staticInit_FUN_004f9830 (004f9830) at 004f984b [UNCONDITIONAL_CALL]
//   core_keyactor.cpp_staticInit_FUN_00501620 (00501620) at 0050163b [UNCONDITIONAL_CALL]
//   core_ladder.cpp_staticInit_FUN_005024d0 (005024d0) at 005024eb [UNCONDITIONAL_CALL]
//   core_larva.cpp_staticInit_FUN_00502f20 (00502f20) at 00502f3b [UNCONDITIONAL_CALL]
//   core_lever.cpp_staticInit_FUN_00504760 (00504760) at 0050477b [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_staticInit_FUN_00505890 (00505890) at 005058ab [UNCONDITIONAL_CALL]
//   core_litecone.cpp_staticInit_FUN_00506aa0 (00506aa0) at 00506abb [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_staticInit_FUN_00508890 (00508890) at 005088ab [UNCONDITIONAL_CALL]
//   core_marquee.cpp_staticInit_FUN_0050baf0 (0050baf0) at 0050bb0b [UNCONDITIONAL_CALL]
//   core_melee.cpp_staticInit_FUN_0050e760 (0050e760) at 0050e77b [UNCONDITIONAL_CALL]
//   core_mimic.cpp_staticInit_FUN_0051f100 (0051f100) at 0051f11b [UNCONDITIONAL_CALL]
//   core_minecar.cpp_staticInit_FUN_00520e20 (00520e20) at 00520e3b [UNCONDITIONAL_CALL]
//   core_mobster.cpp_staticInit_FUN_00525070 (00525070) at 0052508b [UNCONDITIONAL_CALL]
//   core_moloch.cpp_staticInit_FUN_00528ac0 (00528ac0) at 00528adb [UNCONDITIONAL_CALL]
//   core_npc.cpp_staticInit_FUN_00544770 (00544770) at 0054478b [UNCONDITIONAL_CALL]
//   core_passngr.cpp_staticInit_FUN_00545ac0 (00545ac0) at 00545adb [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_staticInit_FUN_00549320 (00549320) at 0054933b [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_staticInit_FUN_0054c7e0 (0054c7e0) at 0054c7fb [UNCONDITIONAL_CALL]
//   core_scat.cpp_staticInit_FUN_00556e00 (00556e00) at 00556e1b [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_staticInit_FUN_00567d40 (00567d40) at 00567d5b [UNCONDITIONAL_CALL]
//   core_shotgun.cpp_staticInit_FUN_00587e70 (00587e70) at 00587e8b [UNCONDITIONAL_CALL]
//   core_shovel.cpp_staticInit_FUN_00588b30 (00588b30) at 00588b4b [UNCONDITIONAL_CALL]
//   core_simbox.cpp_staticInit_FUN_00588cd0 (00588cd0) at 00588ceb [UNCONDITIONAL_CALL]
//   core_smiley.cpp_staticInit_FUN_005a23c0 (005a23c0) at 005a23db [UNCONDITIONAL_CALL]
//   core_spike.cpp_staticInit_FUN_005b81b0 (005b81b0) at 005b81cb [UNCONDITIONAL_CALL]
//   core_stairs.cpp_staticInit_FUN_005b9b00 (005b9b00) at 005b9b1b [UNCONDITIONAL_CALL]
//   core_stone.cpp_staticInit_FUN_005baca0 (005baca0) at 005bacbb [UNCONDITIONAL_CALL]
//   core_stranger.cpp_staticInit_FUN_005bae80 (005bae80) at 005baed5 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_staticInit_FUN_005c6a10 (005c6a10) at 005c6a2b [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_staticInit_FUN_005d87e0 (005d87e0) at 005d87fb [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_staticInit_FUN_005d9fd0 (005d9fd0) at 005d9feb [UNCONDITIONAL_CALL]
//   core_teleport.cpp_staticInit_FUN_005da6e0 (005da6e0) at 005da6fb [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_staticInit_FUN_005daef0 (005daef0) at 005daf0b [UNCONDITIONAL_CALL]
//   core_tommygun.cpp_staticInit_FUN_005dda20 (005dda20) at 005dda3b [UNCONDITIONAL_CALL]
//   core_trap.cpp_staticInit_FUN_005de620 (005de620) at 005de63b [UNCONDITIONAL_CALL]
//   core_trash.cpp_staticInit_FUN_005deb00 (005deb00) at 005deb1b [UNCONDITIONAL_CALL]
//   core_trigger.cpp_staticInit_FUN_005df7d0 (005df7d0) at 005df7eb [UNCONDITIONAL_CALL]
//   core_turret.cpp_staticInit_FUN_005e2080 (005e2080) at 005e209b [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_staticInit_FUN_005e3e50 (005e3e50) at 005e3e6b [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_staticInit_FUN_005e5520 (005e5520) at 005e553b [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_staticInit_FUN_005e78d0 (005e78d0) at 005e78eb [UNCONDITIONAL_CALL]
//   core_vessel.cpp_staticInit_FUN_005e8df0 (005e8df0) at 005e8e0b [UNCONDITIONAL_CALL]
//   core_wateract.cpp_staticInit_FUN_005ea810 (005ea810) at 005ea853 [UNCONDITIONAL_CALL]
//   core_waypoint.cpp_staticInit_FUN_005ebd10 (005ebd10) at 005ebd2b [UNCONDITIONAL_CALL]
//   core_weapon.cpp_staticInit_FUN_005ede40 (005ede40) at 005ede58 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_staticInit_FUN_005efb70 (005efb70) at 005efbc5 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_staticInit_FUN_005f8c90 (005f8c90) at 005f8cab [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_actor_cpp_006141e2
//   TerminatedCString s_Too_many_actor_types_006141f4
//   char[256] g_CharacterClassificationTable
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_ctype.c_tolower_FUN_005feb30

#include "nocturne.h"

CDemonActorType * __cdecl
core_actor_cpp_registerActorClass_FUN_0040c2e0
          (CDemonActorType *this_ptr,char *class_name,void *constructor_func,int *max_version,
          int version,CDemonActorType *parent_class_info)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  CDemonActorType *pCVar5;
  
  pCVar5 = this_ptr;
  do {
    cVar1 = *class_name;
    pCVar5->class_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = class_name[1];
    class_name = class_name + 2;
    pCVar5->class_name[1] = cVar1;
    pCVar5 = (CDemonActorType *)(pCVar5->class_name + 2);
  } while (cVar1 != '\0');
  this_ptr->factory_func = (CDemonActorFactoryFunction *)constructor_func;
  this_ptr->type_info = max_version;
  uVar4 = 0;
  this_ptr->type_id = version;
  this_ptr->parent_type = parent_class_info;
  pCVar5 = this_ptr;
  while( true ) {
    iVar3 = g_NumActorClassTypes;
    bVar2 = pCVar5->class_name[0];
    pCVar5 = (CDemonActorType *)(pCVar5->class_name + 1);
    if (bVar2 == 0) break;
    if ((g_CharacterClassificationTable[(byte)(bVar2 + 1)] & 0xe0U) != 0) {
      iVar3 = crt_ctype_c_tolower_FUN_005feb30((uint)bVar2);
      uVar4 = iVar3 * 0x20001 + uVar4 * 0x80 + (uVar4 >> 0x19);
    }
  }
  this_ptr->name_hash = uVar4;
  if (199 < iVar3) {
    g_CurrentFilename = "..\\core\\actor.cpp";
    g_CurrentLineNumber = 0xa0a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many actor types!");
  }
  g_ActorClassRegistrations[g_NumActorClassTypes] = this_ptr;
  g_NumActorClassTypes = g_NumActorClassTypes + 1;
  return this_ptr;
}


// Assembly code:
// 0040c2e0: PUSH EBX
//   Label: core_actor.cpp_registerActorClass_FUN_0040c2e0
// 0040c2e1: PUSH ESI
// 0040c2e2: PUSH EDI
// 0040c2e3: PUSH EBP
// 0040c2e4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0040c2e8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0040c2ec: MOV EDI,EBP
// 0040c2ee: PUSH EDI
// 0040c2ef: MOV AL,byte ptr [ESI]
//   Label: LAB_0040c2ef
// 0040c2f1: MOV byte ptr [EDI],AL
// 0040c2f3: CMP AL,0x0
// 0040c2f5: JZ 0x0040c307
//   XREF to: 0040c307 (CONDITIONAL_JUMP)
// 0040c2f7: MOV AL,byte ptr [ESI + 0x1]
// 0040c2fa: ADD ESI,0x2
// 0040c2fd: MOV byte ptr [EDI + 0x1],AL
// 0040c300: ADD EDI,0x2
// 0040c303: CMP AL,0x0
// 0040c305: JNZ 0x0040c2ef
//   XREF to: 0040c2ef (CONDITIONAL_JUMP)
// 0040c307: POP EDI
//   Label: LAB_0040c307
// 0040c308: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0040c30c: MOV dword ptr [EBP + 0x2c],EAX
// 0040c30f: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0040c313: MOV dword ptr [EBP + 0x30],EAX
// 0040c316: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0040c31a: XOR EBX,EBX
// 0040c31c: MOV dword ptr [EBP + 0x34],EAX
// 0040c31f: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0040c323: MOV ESI,EBP
// 0040c325: MOV dword ptr [EBP + 0x28],EAX
// 0040c328: XOR EAX,EAX
//   Label: LAB_0040c328
// 0040c32a: MOV AL,byte ptr [ESI]
// 0040c32c: INC ESI
// 0040c32d: TEST EAX,EAX
// 0040c32f: JNZ 0x0040c35e
//   XREF to: 0040c35e (CONDITIONAL_JUMP)
// 0040c331: MOV EDX,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0040c337: MOV dword ptr [EBP + 0x38],EBX
// 0040c33a: CMP EDX,0xc8
// 0040c340: JGE 0x0040c38f
//   XREF to: 0040c38f (CONDITIONAL_JUMP)
// 0040c342: MOV EAX,[0x00822044]
//   Label: LAB_0040c342
//   XREF to: 00822044 (READ)
// 0040c347: LEA ESI,[EAX + 0x1]
// 0040c34a: MOV dword ptr [EAX*0x4 + 0x822048],EBP
//   XREF to: 00822048 (DATA)
// 0040c351: MOV dword ptr [0x00822044],ESI
//   XREF to: 00822044 (WRITE)
// 0040c357: MOV EAX,EBP
// 0040c359: POP EBP
// 0040c35a: POP EDI
// 0040c35b: POP ESI
// 0040c35c: POP EBX
// 0040c35d: RET
// 0040c35e: MOV DL,AL
//   Label: LAB_0040c35e
// 0040c360: INC DL
// 0040c362: AND EDX,0xff
// 0040c368: TEST byte ptr [EDX + 0x6849c4],0xe0
//   XREF to: 006849c4 (DATA)
// 0040c36f: JZ 0x0040c328
//   XREF to: 0040c328 (CONDITIONAL_JUMP)
// 0040c371: PUSH EAX
// 0040c372: CALL crt_ctype.c_tolower_FUN_005feb30
//   XREF to: 005feb30 (UNCONDITIONAL_CALL)
// 0040c377: MOV EDX,EBX
// 0040c379: SHL EDX,0x7
// 0040c37c: SHR EBX,0x19
// 0040c37f: ADD EDX,EBX
// 0040c381: MOV EBX,EAX
// 0040c383: SHL EBX,0x11
// 0040c386: ADD EBX,EDX
// 0040c388: ADD ESP,0x4
// 0040c38b: ADD EBX,EAX
// 0040c38d: JMP 0x0040c328
//   XREF to: 0040c328 (UNCONDITIONAL_JUMP)
// 0040c38f: MOV ECX,0x6141e2
//   Label: LAB_0040c38f
//   XREF to: 006141e2 (PARAM)
// 0040c394: MOV EBX,0xa0a
// 0040c399: PUSH 0x6141f4
//   XREF to: 006141f4 (DATA)
// 0040c39e: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0040c3a4: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0040c3aa: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0040c3af: ADD ESP,0x4
// 0040c3b2: JMP 0x0040c342
//   XREF to: 0040c342 (UNCONDITIONAL_JUMP)
