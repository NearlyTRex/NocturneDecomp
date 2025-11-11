// Name: crt_env.c_getenv_FUN_006013f0
// Address: 006013f0
// Address Range: [[006013f0, 0060144a]]
// Convention: __cdecl
// Signature: char * crt_env.c_getenv_FUN_006013f0(char * name)
// Cross-references:
//   core_game.cpp_CGame_processFrame_FUN_004da100 (004da100) at 004dab63 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_runGameSession_FUN_004daf80 (004daf80) at 004db18e [UNCONDITIONAL_CALL]
//   core_game.cpp_SaveRelated_FUN_004dcee0 (004dcee0) at 004dd623 [UNCONDITIONAL_CALL]
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507a92 [UNCONDITIONAL_CALL]
//   core_netgame.cpp_CNetGame_FUN_0053f780 (0053f780) at 0053f816 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 005933d6 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b250e [UNCONDITIONAL_CALL]
//   crt_io.c_getTempDirectory_FUN_00609afc (00609afc) at 00609b14 [UNCONDITIONAL_CALL]
//   crt_io.c_parseFileInfo_FUN_0060e3b0 (0060e3b0) at 0060e3bc [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f7f4 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e726 [UNCONDITIONAL_CALL]
//   crt_stdlib.c_system_FUN_00602130 (00602130) at 0060213e [UNCONDITIONAL_CALL]
//   crt_time.c_tzset_FUN_006072f8 (006072f8) at 006072fd [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 (004b1c00) at 004b1c37 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0 (005adba0) at 005adc7e [UNCONDITIONAL_CALL]
//   wincore_winrun.cpp_getComputerAndUserName_FUN_005f4140 (005f4140) at 005f41d8 [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironmentBlock
// Function calls:
//   crt_string.c_mbstrnicmp_FUN_00608e50

#include "nocturne.h"

char * __cdecl crt_env_c_getenv_FUN_006013f0(char *name)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  SIZE_T count;
  char **ppcVar4;
  char *pcVar5;
  
  if ((g_EnvironmentBlock != (char **)0x0) && (name != (char *)0x0)) {
    uVar3 = 0xffffffff;
    pcVar5 = name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    count = ~uVar3 - 1;
    for (ppcVar4 = g_EnvironmentBlock; pcVar5 = *ppcVar4, pcVar5 != (char *)0x0;
        ppcVar4 = ppcVar4 + 1) {
      iVar2 = crt_string_c_mbstrnicmp_FUN_00608e50(pcVar5,name,count);
      if ((iVar2 == 0) && (pcVar5[count] == '=')) {
        return pcVar5 + ~uVar3;
      }
    }
  }
  return (char *)0x0;
}


// Assembly code:
// 006013f0: PUSH EBX
//   Label: crt_env.c_getenv_FUN_006013f0
// 006013f1: PUSH ESI
// 006013f2: PUSH EDI
// 006013f3: PUSH EBP
// 006013f4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 006013f8: MOV ESI,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 006013fe: TEST ESI,ESI
// 00601400: JZ 0x00601444
//   XREF to: 00601444 (CONDITIONAL_JUMP)
// 00601402: TEST EBP,EBP
// 00601404: JZ 0x00601444
//   XREF to: 00601444 (CONDITIONAL_JUMP)
// 00601406: MOV EDI,EBP
// 00601408: PUSH ES
// 00601409: MOV AX,DS
// 0060140b: MOV ES,AX
// 0060140d: SUB ECX,ECX
// 0060140f: DEC ECX
// 00601410: XOR EAX,EAX
// 00601412: SCASB.REPNE ES:EDI
// 00601414: NOT ECX
// 00601416: DEC ECX
// 00601417: POP ES
// 00601418: MOV EDI,ECX
// 0060141a: JMP 0x0060143e
//   XREF to: 0060143e (UNCONDITIONAL_JUMP)
// 0060141c: PUSH EDI
//   Label: LAB_0060141c
// 0060141d: PUSH EBP
// 0060141e: PUSH EBX
// 0060141f: CALL crt_string.c_mbstrnicmp_FUN_00608e50
//   XREF to: 00608e50 (UNCONDITIONAL_CALL)
// 00601424: ADD ESP,0xc
// 00601427: TEST EAX,EAX
// 00601429: JNZ 0x0060143b
//   XREF to: 0060143b (CONDITIONAL_JUMP)
// 0060142b: CMP byte ptr [EDI + EBX*0x1],0x3d
// 0060142f: JNZ 0x0060143b
//   XREF to: 0060143b (CONDITIONAL_JUMP)
// 00601431: LEA EAX,[EDI + 0x1]
// 00601434: ADD EAX,EBX
// 00601436: POP EBP
// 00601437: POP EDI
// 00601438: POP ESI
// 00601439: POP EBX
// 0060143a: RET
// 0060143b: ADD ESI,0x4
//   Label: LAB_0060143b
// 0060143e: MOV EBX,dword ptr [ESI]
//   Label: LAB_0060143e
// 00601440: TEST EBX,EBX
// 00601442: JNZ 0x0060141c
//   XREF to: 0060141c (CONDITIONAL_JUMP)
// 00601444: XOR EAX,EAX
//   Label: LAB_00601444
// 00601446: POP EBP
// 00601447: POP EDI
// 00601448: POP ESI
// 00601449: POP EBX
// 0060144a: RET
