// Name: core_mission.cpp_CDemonMission_run_FUN_00524420
// Address: 00524420
// Address Range: [[00524420, 00524623]]
// Convention: __cdecl
// Signature: void core_mission.cpp_CDemonMission_run_FUN_00524420(CDemonMission * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1b80 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 (004e1cb0) at 004e2058 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2f10 (004e2f10) at 004e2f77 [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e2fc0 (004e2fc0) at 004e3044 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_006392aa
//   TerminatedCString s_CDemonMission_run_hero_l_006392be
//   TerminatedCString s_core_mission_cpp_006392e3
//   TerminatedCString s_CDemonMission_run_no_gLo_006392f7
//   TerminatedCString s_hq_geo_0063931a
//   TerminatedCString s_Press_any_key_to_continu_00639321
//   CGame* g_CGamePtr = 02d81a9c
//   CLevelLoader* g_CLevelLoaderPtr = 02dcd850
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CBitFont* g_ThemeFont
//   CGame g_CGameInstance
//   undefined4 DAT_02d81cf4
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   CLevelLoader g_CLevelLoaderInstance
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined1 DAT_02f35f10
//   undefined4 DAT_03261368
// Function calls:
//   core_game.cpp_CGame_displayActStats_FUN_004e3800
//   core_game.cpp_CGame_finishAct_FUN_004e3b90
//   core_game.cpp_CGame_runGameSession_FUN_004daf80
//   core_level.cpp_CLevelLoader_show_FUN_00503dc0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
//   core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   core_mission.cpp_CDemonMission_FUN_00523f20
//   core_mission.cpp_CDemonMission_FUN_00523fb0
//   core_mission.cpp_CDemonMission_FUN_00524760
//   core_mission.cpp_CDemonMission_load_FUN_00522d90
//   core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

void __cdecl core_mission_cpp_CDemonMission_run_FUN_00524420(CDemonMission *this_ptr)

{
  CHero *actor_ptr;
  int iVar1;
  int iVar2;
  char *color_value;
  int unaff_retaddr;
  CDemonActor *in_stack_00000008;
  CLevelLoader *this_ptr_00;
  int in_stack_0000002c;
  char *in_stack_00000044;
  
  while( true ) {
    if (g_HeroCount < 1) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x4c5;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::run - hero list empty");
    }
    if (g_HeroActors[g_LocalHeroIndex] == (CHero *)0x0) {
      g_CurrentFilename = "..\\core\\mission.cpp";
      g_CurrentLineNumber = 0x4c6;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::run - no gLocalHero");
    }
    core_mission_cpp_CDemonMission_FUN_00523fb0(this_ptr);
    DAT_02f35f10 = '\0';
    core_mission_cpp_CDemonMission_buildActiveSetActorList_FUN_00524120(this_ptr);
    iVar1 = core_game_cpp_CGame_runGameSession_FUN_004daf80(g_CGamePtr);
    actor_ptr = g_HeroActors[g_LocalHeroIndex];
    core_mission_cpp_CDemonMission_setupActorMaybe_FUN_00523be0(this_ptr,(CDemonActor *)actor_ptr);
    (*(actor_ptr->base_character).base_actor.metadata.vtable[1].fillAttackDamageInfo)
              ((CDemonActor *)actor_ptr,unaff_retaddr,(SDamageInfo *)this_ptr,in_stack_00000008);
    core_mission_cpp_CDemonMission_checkMemory2_FUN_00522d30(this_ptr);
    if ((iVar1 == 0) || (DAT_02f35f10 == '\0')) break;
    iVar1 = crt_string_c_stricmp_FUN_005fe7f0(g_CDemonSetPtr->geometry_filename,"hq.geo");
    if (iVar1 != 0) {
      core_game_cpp_CGame_displayActStats_FUN_004e3800(g_CGamePtr);
      in_stack_0000002c = -1;
      iVar2 = 9;
      this_ptr_00 = g_CLevelLoaderPtr;
    }
    else {
      iVar2 = 0;
      this_ptr_00 = (CLevelLoader *)0x9;
    }
    core_level_cpp_CLevelLoader_show_FUN_00503dc0(this_ptr_00,iVar2,1,in_stack_0000002c);
    core_mission_cpp_CDemonMission_load_FUN_00522d90(this_ptr,&DAT_02f35f10,0);
    in_stack_0000002c = 0x52457b;
    iVar2 = core_mission_cpp_CDemonMission_createHeros_FUN_00524a80(this_ptr,(int)actor_ptr);
    if (iVar2 == 0) goto LAB_005244ee;
    iVar2 = core_mission_cpp_CDemonMission_FUN_00524760(this_ptr);
    if (iVar2 == 0) goto LAB_005244ee;
    if (iVar1 != 0) {
      color_value = support_newmsg_cpp_getLocalizedString_FUN_005441f0
                              ("Press any key to continue...");
      iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
      in_stack_0000002c = 0x5245e0;
      engine_font_cpp_CBitFont_drawTextRight_FUN_004cdce0
                (g_ThemeFont,0x27f,0x1db - iVar1,0,(int)color_value,in_stack_00000044);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      engine_2d_c_clearInputAndWait_FUN_00403260();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
  }
  core_mission_cpp_CDemonMission_FUN_00523f20(this_ptr);
LAB_005244ee:
  if (g_CGamePtr->field87_0x258 == 0) {
    return;
  }
  core_game_cpp_CGame_finishAct_FUN_004e3b90();
  return;
}


// Assembly code:
// 00524420: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_run_FUN_00524420
// 00524421: PUSH ESI
// 00524422: PUSH EDI
// 00524423: PUSH EBP
// 00524424: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00524428: MOV EBP,0x1
// 0052442d: CMP EBP,dword ptr [0x02db87bc]
//   Label: LAB_0052442d
//   XREF to: 02db87bc (READ)
// 00524433: JG 0x00524505
//   XREF to: 00524505 (CONDITIONAL_JUMP)
// 00524439: MOV EAX,[0x02db87d0]
//   Label: LAB_00524439
//   XREF to: 02db87d0 (READ)
// 0052443e: CMP dword ptr [EAX*0x4 + 0x2db87c0],0x0
//   XREF to: 02db87c0 (DATA)
// 00524446: JNZ 0x0052446a
//   XREF to: 0052446a (CONDITIONAL_JUMP)
// 00524448: MOV EAX,0x6392e3
//   XREF to: 006392e3 (PARAM)
// 0052444d: MOV EDX,0x4c6
// 00524452: PUSH 0x6392f7
//   XREF to: 006392f7 (DATA)
// 00524457: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0052445c: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00524462: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00524467: ADD ESP,0x4
// 0052446a: MOV EAX,[0x02db87d0]
//   Label: LAB_0052446a
//   XREF to: 02db87d0 (READ)
// 0052446f: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00524476: MOV ECX,dword ptr [EAX + 0x2c]
// 00524479: PUSH ECX
// 0052447a: PUSH EBX
// 0052447b: CALL core_mission.cpp_CDemonMission_FUN_00523fb0
//   XREF to: 00523fb0 (UNCONDITIONAL_CALL)
// 00524480: ADD ESP,0x8
// 00524483: XOR AH,AH
// 00524485: PUSH EBX
// 00524486: MOV byte ptr [0x02f35f10],AH
//   XREF to: 02f35f10 (WRITE)
// 0052448c: CALL core_mission.cpp_CDemonMission_buildActiveSetActorList_FUN_00524120
//   XREF to: 00524120 (UNCONDITIONAL_CALL)
// 00524491: ADD ESP,0x4
// 00524494: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 0052449a: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 0052449b: CALL core_game.cpp_CGame_runGameSession_FUN_004daf80
//   XREF to: 004daf80 (UNCONDITIONAL_CALL)
// 005244a0: MOV ESI,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 005244a6: ADD ESP,0x4
// 005244a9: MOV ESI,dword ptr [ESI*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 005244b0: PUSH ESI
// 005244b1: PUSH EBX
// 005244b2: MOV EDI,EAX
// 005244b4: CALL core_mission.cpp_CDemonMission_setupActorMaybe_FUN_00523be0
//   XREF to: 00523be0 (UNCONDITIONAL_CALL)
// 005244b9: ADD ESP,0x8
// 005244bc: MOV EAX,dword ptr [ESI + 0x154]
// 005244c2: PUSH ESI
// 005244c3: CALL dword ptr [EAX + 0x160]
// 005244c9: ADD ESP,0x4
// 005244cc: PUSH EBX
// 005244cd: CALL core_mission.cpp_CDemonMission_checkMemory2_FUN_00522d30
//   XREF to: 00522d30 (UNCONDITIONAL_CALL)
// 005244d2: ADD ESP,0x4
// 005244d5: TEST EDI,EDI
// 005244d7: JZ 0x005244e2
//   XREF to: 005244e2 (CONDITIONAL_JUMP)
// 005244d9: CMP byte ptr [0x02f35f10],0x0
//   XREF to: 02f35f10 (READ)
// 005244e0: JNZ 0x0052452d
//   XREF to: 0052452d (CONDITIONAL_JUMP)
// 005244e2: PUSH 0x1
//   Label: LAB_005244e2
// 005244e4: PUSH ESI
// 005244e5: PUSH EBX
// 005244e6: CALL core_mission.cpp_CDemonMission_FUN_00523f20
//   XREF to: 00523f20 (UNCONDITIONAL_CALL)
// 005244eb: ADD ESP,0xc
// 005244ee: MOV EAX,[0x0067b654]
//   Label: LAB_005244ee
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 005244f3: CMP dword ptr [EAX + 0x258],0x0
//   XREF to: 02d81cf4 (READ)
// 005244fa: JNZ 0x00524616
//   XREF to: 00524616 (CONDITIONAL_JUMP)
// 00524500: POP EBP
// 00524501: POP EDI
// 00524502: POP ESI
// 00524503: POP EBX
// 00524504: RET
// 00524505: MOV ECX,0x6392aa
//   Label: LAB_00524505
//   XREF to: 006392aa (PARAM)
// 0052450a: MOV ESI,0x4c5
// 0052450f: PUSH 0x6392be
//   XREF to: 006392be (DATA)
// 00524514: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052451a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00524520: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00524525: ADD ESP,0x4
// 00524528: JMP 0x00524439
//   XREF to: 00524439 (UNCONDITIONAL_JUMP)
// 0052452d: MOV EAX,[0x006810c8]
//   Label: LAB_0052452d
//   XREF to: 006810c8 (READ)
// 00524532: PUSH 0x63931a
//   XREF to: 0063931a (DATA)
// 00524537: ADD EAX,0x14d0f0
// 0052453c: PUSH EAX
//   XREF to: 03261368 (DATA)
// 0052453d: XOR EDI,EDI
// 0052453f: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 006020fc (UNCONDITIONAL_CALL)
// 00524544: ADD ESP,0x8
// 00524547: TEST EAX,EAX
// 00524549: JNZ 0x005245f7
//   XREF to: 005245f7 (CONDITIONAL_JUMP)
// 0052454f: PUSH EBP
// 00524550: PUSH EAX
// 00524551: PUSH 0x9
// 00524553: MOV ECX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00524559: PUSH ECX
//   XREF to: 02dcd850 (DATA)
// 0052455a: MOV EDI,EBP
// 0052455c: CALL core_level.cpp_CLevelLoader_show_FUN_00503dc0
//   Label: LAB_0052455c
//   XREF to: 00503dc0 (UNCONDITIONAL_CALL)
// 00524561: ADD ESP,0x10
// 00524564: PUSH 0x0
// 00524566: PUSH 0x2f35f10
//   XREF to: 02f35f10 (DATA)
// 0052456b: PUSH EBX
// 0052456c: CALL core_mission.cpp_CDemonMission_load_FUN_00522d90
//   XREF to: 00522d90 (UNCONDITIONAL_CALL)
// 00524571: ADD ESP,0xc
// 00524574: PUSH ESI
// 00524575: PUSH EBX
// 00524576: CALL core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
//   XREF to: 00524a80 (UNCONDITIONAL_CALL)
// 0052457b: ADD ESP,0x8
// 0052457e: TEST EAX,EAX
// 00524580: JZ 0x005244ee
//   XREF to: 005244ee (CONDITIONAL_JUMP)
// 00524586: PUSH EBX
// 00524587: CALL core_mission.cpp_CDemonMission_FUN_00524760
//   XREF to: 00524760 (UNCONDITIONAL_CALL)
// 0052458c: ADD ESP,0x4
// 0052458f: TEST EAX,EAX
// 00524591: JZ 0x005244ee
//   XREF to: 005244ee (CONDITIONAL_JUMP)
// 00524597: TEST EDI,EDI
// 00524599: JNZ 0x0052442d
//   XREF to: 0052442d (CONDITIONAL_JUMP)
// 0052459f: PUSH 0x639321
//   XREF to: 00639321 (DATA)
// 005245a4: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005245a9: ADD ESP,0x4
// 005245ac: PUSH EAX
// 005245ad: PUSH EDI
// 005245ae: PUSH 0xf8
// 005245b3: PUSH 0x58
// 005245b5: MOV ESI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 005245bb: PUSH ESI
// 005245bc: MOV ESI,0x1df
// 005245c1: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 005245c6: SUB ESI,EAX
// 005245c8: ADD ESP,0x8
// 005245cb: LEA EAX,[ESI + -0x4]
// 005245ce: PUSH EAX
// 005245cf: PUSH 0x27f
// 005245d4: MOV EDI,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 005245da: PUSH EDI
// 005245db: CALL engine_font.cpp_CBitFont_drawTextRight_FUN_004cdce0
//   XREF to: 004cdce0 (UNCONDITIONAL_CALL)
// 005245e0: ADD ESP,0x18
// 005245e3: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005245e8: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005245ed: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 005245f2: JMP 0x0052442d
//   XREF to: 0052442d (UNCONDITIONAL_JUMP)
// 005245f7: MOV EAX,[0x0067b654]
//   Label: LAB_005245f7
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005245fc: PUSH EAX
//   XREF to: 02d81a9c (DATA)
// 005245fd: CALL core_game.cpp_CGame_displayActStats_FUN_004e3800
//   XREF to: 004e3800 (UNCONDITIONAL_CALL)
// 00524602: ADD ESP,0x4
// 00524605: PUSH -0x1
// 00524607: PUSH EBP
// 00524608: PUSH 0x9
// 0052460a: MOV EDX,dword ptr [0x0067cf80]
//   XREF to: 02dcd850 (PARAM)
//   XREF to: 0067cf80 (READ)
// 00524610: PUSH EDX
//   XREF to: 02dcd850 (DATA)
// 00524611: JMP 0x0052455c
//   XREF to: 0052455c (UNCONDITIONAL_JUMP)
// 00524616: PUSH EAX
//   Label: LAB_00524616
//   XREF to: 02d81a9c (DATA)
// 00524617: CALL core_game.cpp_CGame_finishAct_FUN_004e3b90
//   XREF to: 004e3b90 (UNCONDITIONAL_CALL)
// 0052461c: ADD ESP,0x4
// 0052461f: POP EBP
// 00524620: POP EDI
// 00524621: POP ESI
// 00524622: POP EBX
// 00524623: RET
