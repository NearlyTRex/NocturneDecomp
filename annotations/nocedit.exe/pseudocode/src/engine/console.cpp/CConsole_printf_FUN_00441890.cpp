// Name: engine_console.cpp_CConsole_printf_FUN_00441890
// Address: 00441890
// Address Range: [[00441890, 00441969]]
// Convention: __cdecl
// Signature: void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format, ...)
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a5e1 [UNCONDITIONAL_CALL]
//   core_ammobox.cpp_LogConsoleOpenPCTFile_FUN_00411690 (00411690) at 004116b5 [UNCONDITIONAL_CALL]
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 0041321d [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 004156c1 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416aee [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417938 [UNCONDITIONAL_CALL]
//   core_biggs.cpp_CBiggs_FUN_00418700 (00418700) at 0041897f [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_00419610 (00419610) at 00419712 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c5f7 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041cc40 (0041cc40) at 0041cee9 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00427400 (00427400) at 004274f1 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c5f0 (0042c5f0) at 0042c84c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ca70 (0042ca70) at 0042cd31 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042f1e8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 (004286e0) at 00428a7e [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043fa00 (0043fa00) at 0043fcba [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 0044458b [UNCONDITIONAL_CALL]
//   core_crate.cpp_FUN_00448a70 (00448a70) at 00448a90 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c4ae [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f3d8 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004848e4 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004869a0 (004869a0) at 00486c31 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_ShotThruHeart_FUN_00486020 (00486020) at 00486062 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048ef65 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aac00 (004aac00) at 004aaca0 [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 (004adca0) at 004adcef [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d3aa7 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004da411 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_process_FUN_004e3190 (004e3190) at 004e3540 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db00a [UNCONDITIONAL_CALL]
//   core_game.cpp_FUN_004e3110 (004e3110) at 004e3174 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4d42 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6fc2 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e8a21 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0e40 (004f0e40) at 004f111a [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f4cf7 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f7163 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f83fd [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa14e [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe405 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570 (00501570) at 005015ea [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503080 (00503080) at 005034ec [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_cleanup_FUN_00504720 (00504720) at 0050473a [UNCONDITIONAL_CALL]
//   core_lightgun.cpp_FUN_00505c70 (00505c70) at 00505f69 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 (00520a80) at 00520b5f [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_00520500 (00520500) at 005205a0 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525d97 [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00528d20 (00528d20) at 00529024 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544b1c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 005575de [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e922 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 00568448 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056b810 (0056b810) at 0056be28 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c18d [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c797 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056fbd0 (0056fbd0) at 0056ffcd [UNCONDITIONAL_CALL]
//   core_setutil.cpp_C3DSCamera_apply_FUN_00585870 (00585870) at 00585962 [UNCONDITIONAL_CALL]
//   core_shovel.cpp_fire_FUN_00588c20 (00588c20) at 00588c31 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2b79 [UNCONDITIONAL_CALL]
//   core_sound.cpp_PlaySfxByStringMaybe_FUN_005b1fd0 (005b1fd0) at 005b241f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bd722 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1680 (005c1680) at 005c1e8b [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c1fe0 (005c1fe0) at 005c23df [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2400 (005c2400) at 005c2725 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c2850 (005c2850) at 005c2c3a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c48b0 (005c48b0) at 005c4978 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_process_FUN_005c6e90 (005c6e90) at 005c7305 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_process_FUN_005d8ba0 (005d8ba0) at 005d8f1d [UNCONDITIONAL_CALL]
//   core_trigger.cpp_SomethingReceivedDamage_FUN_005e0b00 (005e0b00) at 005e0b63 [UNCONDITIONAL_CALL]
//   core_turret.cpp_FUN_005e2d50 (005e2d50) at 005e2ee9 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70 (005e9e70) at 005ea257 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_process_FUN_005efde0 (005efde0) at 005f0230 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1e40 (005f1e40) at 005f1f10 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_PickupSomethingPossibly_FUN_005fb530 (005fb530) at 005fb91e [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f995f [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_DirectSoundDevice_allocateSfx_FUN_005af410 (005af410) at 005af5e9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ComputingDelay_FUN_005a7100 (005a7100) at 005a7145 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005adbeb [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_kill_FUN_005a7e60 (005a7e60) at 005a7e97 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\engine\console.cpp_00618de9
//   TerminatedCString s_at_00618dff
//   TerminatedCString s_s_00618e02
//   TerminatedCString s_engine_console_cpp_00618e05
//   TerminatedCString s_console_txt_0066e8e8
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_vsprintf_FUN_005fdba8
//   engine_console.cpp_CConsole_writeChar_FUN_00441970
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_printf_FUN_00441890(CConsole *this_ptr,char *format,...)

{
  char cVar1;
  FILE *file;
  uint uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  byte bVar5;
  va_list_t local_14;
  
  bVar5 = 0;
  local_14 = &stack0x0000000c;
  crt_stdio_c_vsprintf_FUN_005fdba8(&stack0xffffefec,format,&local_14);
  iVar3 = 0;
  uVar2 = 0xffffffff;
  pcVar4 = &stack0xffffefec;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
  } while (cVar1 != '\0');
  if (0 < (int)(~uVar2 - 1)) {
    do {
      pcVar4 = &stack0xffffeff0 + iVar3;
      iVar3 = iVar3 + 1;
      engine_console_cpp_CConsole_writeChar_FUN_00441970(this_ptr,*pcVar4);
    } while (iVar3 < (int)(~uVar2 - 1));
  }
  engine_console_cpp_CConsole_writeChar_FUN_00441970(this_ptr,'\0');
  if (this_ptr->fileLoggingEnabled != 0) {
    file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ("console.txt",(char *)0x0,"at",
                      "?..\\engine\\console.cpp" + 1,0x4a);
    if (file != (FILE *)0x0) {
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s");
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\console.cpp",0x4d);
      return;
    }
  }
  return;
}


// Assembly code:
// 00441890: PUSH EBX
//   Label: engine_console.cpp_CConsole_printf_FUN_00441890
// 00441891: PUSH ESI
// 00441892: PUSH EDI
// 00441893: PUSH EBP
// 00441894: SUB ESP,0x1004
// 0044189a: MOV EBP,dword ptr [ESP + 0x1018]
//   XREF to: Stack[0x4] (READ)
// 004418a1: LEA EAX,[ESP + 0x1020]
//   XREF to: Stack[0xc] (DATA)
// 004418a8: MOV dword ptr [ESP + 0x1000],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004418af: LEA EAX,[ESP + 0x1000]
//   XREF to: Stack[-0x14] (DATA)
// 004418b6: PUSH EAX
// 004418b7: MOV EDX,dword ptr [ESP + 0x1020]
//   XREF to: Stack[0x8] (READ)
// 004418be: PUSH EDX
// 004418bf: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1014] (DATA)
// 004418c3: PUSH EAX
// 004418c4: LEA EDI,[ESP + 0xc]
//   XREF to: Stack[-0x1014] (DATA)
// 004418c8: CALL crt_stdio.c_vsprintf_FUN_005fdba8
//   XREF to: 005fdba8 (UNCONDITIONAL_CALL)
// 004418cd: ADD ESP,0xc
// 004418d0: XOR ECX,ECX
// 004418d2: XOR EBX,EBX
// 004418d4: MOV dword ptr [ESP + 0x1000],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004418db: SUB ECX,ECX
// 004418dd: DEC ECX
// 004418de: XOR EAX,EAX
// 004418e0: SCASB.REPNE ES:EDI
// 004418e2: NOT ECX
// 004418e4: DEC ECX
// 004418e5: MOV ESI,ECX
// 004418e7: TEST ECX,ECX
// 004418e9: JLE 0x00441900
//   XREF to: 00441900 (CONDITIONAL_JUMP)
// 004418eb: XOR EAX,EAX
//   Label: LAB_004418eb
// 004418ed: MOV AL,byte ptr [ESP + EBX*0x1]
//   XREF to: Stack[-0x1014] (DATA)
// 004418f0: PUSH EAX
// 004418f1: PUSH EBP
// 004418f2: INC EBX
// 004418f3: CALL engine_console.cpp_CConsole_writeChar_FUN_00441970
//   XREF to: 00441970 (UNCONDITIONAL_CALL)
// 004418f8: ADD ESP,0x8
// 004418fb: CMP EBX,ESI
// 004418fd: JL 0x004418eb
//   XREF to: 004418eb (CONDITIONAL_JUMP)
// 004418ff: NOP
// 00441900: PUSH 0x0
//   Label: LAB_00441900
// 00441902: PUSH EBP
// 00441903: CALL engine_console.cpp_CConsole_writeChar_FUN_00441970
//   XREF to: 00441970 (UNCONDITIONAL_CALL)
// 00441908: MOV EBX,dword ptr [EBP]
// 0044190b: ADD ESP,0x8
// 0044190e: TEST EBX,EBX
// 00441910: JNZ 0x0044191d
//   XREF to: 0044191d (CONDITIONAL_JUMP)
// 00441912: ADD ESP,0x1004
//   Label: LAB_00441912
// 00441918: POP EBP
// 00441919: POP EDI
// 0044191a: POP ESI
// 0044191b: POP EBX
// 0044191c: RET
// 0044191d: PUSH 0x4a
//   Label: LAB_0044191d
// 0044191f: PUSH 0x618de9
//   XREF to: 00618de9 (DATA)
// 00441924: PUSH 0x618dff
//   XREF to: 00618dff (DATA)
// 00441929: PUSH 0x0
// 0044192b: PUSH 0x66e8e8
//   XREF to: 0066e8e8 (DATA)
// 00441930: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00441935: MOV EBX,EAX
// 00441937: ADD ESP,0x14
// 0044193a: TEST EAX,EAX
// 0044193c: JZ 0x00441912
//   XREF to: 00441912 (CONDITIONAL_JUMP)
// 0044193e: MOV EAX,ESP
// 00441940: PUSH EAX
// 00441941: PUSH 0x618e02
//   XREF to: 00618e02 (DATA)
// 00441946: PUSH EBX
// 00441947: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0044194c: ADD ESP,0xc
// 0044194f: PUSH 0x4d
// 00441951: PUSH 0x618e05
//   XREF to: 00618e05 (DATA)
// 00441956: PUSH EBX
// 00441957: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0044195c: ADD ESP,0xc
// 0044195f: ADD ESP,0x1004
// 00441965: POP EBP
// 00441966: POP EDI
// 00441967: POP ESI
// 00441968: POP EBX
// 00441969: RET
