// Name: core_script.cpp_FUN_0055a540
// Address: 0055a540
// Address Range: [[0055a540, 0055a6b3]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_0055a540()
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_00524760 (00524760) at 00524864 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80 (00559f80) at 0055a350 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0 (0055a4b0) at 0055a4c6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wav_00641a75
//   undefined4 DAT_00641a76
//   undefined4 DAT_00641a77
//   undefined4 DAT_00641a78
//   TerminatedCString s_smill_wav_00641a7a
//   TerminatedCString s_s_0_85_00641a84
//   undefined4 DAT_00641a85
//   undefined4 DAT_00641a86
//   undefined4 DAT_00641a87
//   TerminatedCString s_town_wav_00641a8a
//   TerminatedCString s_s_0_85_00641a93
//   undefined4 DAT_00641a94
//   undefined4 DAT_00641a95
//   undefined4 DAT_00641a96
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_02d81cc4
//   undefined4 DAT_02d81cc8
//   undefined4 DAT_02d81ccc
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 DAT_0310f4a0
//   undefined4 DAT_0310f4a8
//   undefined4 DAT_03261368
//   CSound g_CSoundInstance
// Function calls:
//   core_sound.cpp_CallToCallToPlaySFX_FUN_005b39b0
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_script.cpp_FUN_0055a540(CScript* param_1) */

void core_script_cpp_FUN_0055a540(void)

{
  char cVar1;
  CGame *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 **ppuVar7;
  byte bVar8;
  undefined4 *in_stack_00000004;
  undefined1 *puStack_68;
  char acStack_64 [88];
  
  bVar8 = 0;
  in_stack_00000004[0x12] = 0;
  *(undefined1 *)(in_stack_00000004 + 0x15) = 0;
  in_stack_00000004[0x13] = 0xbf800000;
  in_stack_00000004[0x14] = 0xbf800000;
  *in_stack_00000004 = 0;
  iVar3 = g_LocalHeroIndex;
  in_stack_00000004[1] = 0;
  in_stack_00000004[3] = g_HeroActors[iVar3];
  pCVar2 = g_CGamePtr;
  in_stack_00000004[4] = 1;
  pCVar2->allow_damage_flag = 1;
  pCVar2->allow_enemy_attack_flag = 1;
  pCVar2->letterbox_mode = 0;
  _DAT_0310f4a0 = 0;
  in_stack_00000004[0x115] = 0xbf800000;
  in_stack_00000004[0x116] = 0xffffffff;
  pcVar5 = g_CDemonSetPtr->geometry_filename;
  in_stack_00000004[0x117] = 0;
  DAT_0310f4a8 = 0;
  in_stack_00000004[5] = 0;
  crt_string_c_splitpath_FUN_005ff178(pcVar5,(char *)0x0,(char *)0x0,&stack0xffffff90,(char *)0x0);
  pcVar4 = ".wav";
  iVar3 = -1;
  pcVar5 = &stack0xffffff94;
  do {
    pcVar6 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar6 = pcVar5 + (uint)bVar8 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0(&stack0xffffff94,"smill.wav");
  if (iVar3 == 0) {
    pcVar5 = "@0.85";
    iVar3 = -1;
    ppuVar7 = &puStack_68;
    do {
      pcVar4 = (char *)ppuVar7;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar4 = (char *)((int)ppuVar7 + (uint)bVar8 * -2 + 1);
      cVar1 = *(char *)ppuVar7;
      ppuVar7 = (undefined1 **)pcVar4;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  iVar3 = crt_string_c_stricmp_FUN_005fe7f0((char *)&puStack_68,"town.wav");
  if (iVar3 == 0) {
    pcVar4 = "@0.85";
    puStack_68 = acStack_64;
    iVar3 = -1;
    pcVar5 = acStack_64;
    do {
      pcVar6 = pcVar5;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar6 = pcVar5 + (uint)bVar8 * -2 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar1 = *pcVar4;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  puStack_68 = acStack_64;
  core_sound_cpp_CallToCallToPlaySFX_FUN_005b39b0();
  in_stack_00000004[6] = 0;
  return;
}


// Assembly code:
// 0055a540: PUSH EBX
//   Label: core_script.cpp_FUN_0055a540
// 0055a541: PUSH ESI
// 0055a542: PUSH EDI
// 0055a543: SUB ESP,0x64
// 0055a546: MOV EBX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0x4] (READ)
// 0055a54a: MOV dword ptr [EBX + 0x48],0x0
// 0055a551: MOV byte ptr [EBX + 0x54],0x0
// 0055a555: MOV dword ptr [EBX + 0x4c],0xbf800000
// 0055a55c: MOV dword ptr [EBX + 0x50],0xbf800000
// 0055a563: MOV dword ptr [EBX],0x0
// 0055a569: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0055a56e: MOV dword ptr [EBX + 0x4],0x0
// 0055a575: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0055a57c: MOV dword ptr [EBX + 0xc],EAX
// 0055a57f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 0055a584: MOV dword ptr [EBX + 0x10],0x1
// 0055a58b: MOV dword ptr [EAX + 0x22c],0x1
//   XREF to: 02d81cc8 (WRITE)
// 0055a595: XOR EDX,EDX
// 0055a597: MOV dword ptr [EAX + 0x230],0x1
//   XREF to: 02d81ccc (WRITE)
// 0055a5a1: PUSH EDX
// 0055a5a2: MOV dword ptr [EAX + 0x228],EDX
//   XREF to: 02d81cc4 (WRITE)
// 0055a5a8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x70] (DATA)
// 0055a5ac: PUSH EAX
// 0055a5ad: MOV dword ptr [0x0310f4a0],EDX
//   XREF to: 0310f4a0 (WRITE)
// 0055a5b3: MOV dword ptr [EBX + 0x454],0xbf800000
// 0055a5bd: PUSH EDX
// 0055a5be: MOV dword ptr [EBX + 0x458],0xffffffff
// 0055a5c8: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
// 0055a5cd: PUSH EDX
// 0055a5ce: ADD EAX,0x14d0f0
// 0055a5d3: MOV dword ptr [EBX + 0x45c],EDX
// 0055a5d9: PUSH EAX
//   XREF to: 03261368 (DATA)
// 0055a5da: MOV dword ptr [0x0310f4a8],EDX
//   XREF to: 0310f4a8 (WRITE)
// 0055a5e0: MOV dword ptr [EBX + 0x14],EDX
// 0055a5e3: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0055a5e8: ADD ESP,0x14
// 0055a5eb: MOV ESI,0x641a75
//   XREF to: 00641a75 (DATA)
// 0055a5f0: MOV EDI,ESP
// 0055a5f2: PUSH EDI
// 0055a5f3: SUB ECX,ECX
// 0055a5f5: DEC ECX
// 0055a5f6: MOV AL,0x0
// 0055a5f8: SCASB.REPNE ES:EDI
// 0055a5fa: DEC EDI
// 0055a5fb: MOV AL,byte ptr [ESI]
//   Label: LAB_0055a5fb
//   XREF to: 00641a75 (READ)
//   XREF to: 00641a77 (READ)
// 0055a5fd: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x70] (DATA)
// 0055a5ff: CMP AL,0x0
// 0055a601: JZ 0x0055a613
//   XREF to: 0055a613 (CONDITIONAL_JUMP)
// 0055a603: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00641a76 (READ)
//   XREF to: 00641a78 (READ)
// 0055a606: ADD ESI,0x2
// 0055a609: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6f] (WRITE)
// 0055a60c: ADD EDI,0x2
// 0055a60f: CMP AL,0x0
// 0055a611: JNZ 0x0055a5fb
//   XREF to: 0055a5fb (CONDITIONAL_JUMP)
// 0055a613: POP EDI
//   Label: LAB_0055a613
// 0055a614: PUSH 0x641a7a
//   XREF to: 00641a7a (DATA)
// 0055a619: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x70] (DATA)
// 0055a61d: PUSH EAX
// 0055a61e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0055a623: ADD ESP,0x8
// 0055a626: TEST EAX,EAX
// 0055a628: JNZ 0x0055a653
//   XREF to: 0055a653 (CONDITIONAL_JUMP)
// 0055a62a: MOV ESI,0x641a84
//   XREF to: 00641a84 (DATA)
// 0055a62f: MOV EDI,ESP
// 0055a631: PUSH EDI
// 0055a632: SUB ECX,ECX
// 0055a634: DEC ECX
// 0055a635: MOV AL,0x0
// 0055a637: SCASB.REPNE ES:EDI
// 0055a639: DEC EDI
// 0055a63a: MOV AL,byte ptr [ESI]
//   Label: LAB_0055a63a
//   XREF to: 00641a84 (READ)
//   XREF to: 00641a86 (READ)
// 0055a63c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x70] (DATA)
// 0055a63e: CMP AL,0x0
// 0055a640: JZ 0x0055a652
//   XREF to: 0055a652 (CONDITIONAL_JUMP)
// 0055a642: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00641a85 (READ)
//   XREF to: 00641a87 (READ)
// 0055a645: ADD ESI,0x2
// 0055a648: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6f] (WRITE)
// 0055a64b: ADD EDI,0x2
// 0055a64e: CMP AL,0x0
// 0055a650: JNZ 0x0055a63a
//   XREF to: 0055a63a (CONDITIONAL_JUMP)
// 0055a652: POP EDI
//   Label: LAB_0055a652
// 0055a653: PUSH 0x641a8a
//   Label: LAB_0055a653
//   XREF to: 00641a8a (DATA)
// 0055a658: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x70] (DATA)
// 0055a65c: PUSH EAX
// 0055a65d: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0055a662: ADD ESP,0x8
// 0055a665: TEST EAX,EAX
// 0055a667: JZ 0x0055a689
//   XREF to: 0055a689 (CONDITIONAL_JUMP)
// 0055a669: MOV EAX,ESP
//   Label: LAB_0055a669
// 0055a66b: PUSH EAX
// 0055a66c: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 0055a672: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 0055a673: CALL core_sound.cpp_CallToCallToPlaySFX_FUN_005b39b0
//   XREF to: 005b39b0 (UNCONDITIONAL_CALL)
// 0055a678: ADD ESP,0x8
// 0055a67b: MOV dword ptr [EBX + 0x18],0x0
// 0055a682: ADD ESP,0x64
// 0055a685: POP EDI
// 0055a686: POP ESI
// 0055a687: POP EBX
// 0055a688: RET
// 0055a689: MOV ESI,0x641a93
//   Label: LAB_0055a689
//   XREF to: 00641a93 (DATA)
// 0055a68e: MOV EDI,ESP
// 0055a690: PUSH EDI
// 0055a691: SUB ECX,ECX
// 0055a693: DEC ECX
// 0055a694: MOV AL,0x0
// 0055a696: SCASB.REPNE ES:EDI
// 0055a698: DEC EDI
// 0055a699: MOV AL,byte ptr [ESI]
//   Label: LAB_0055a699
//   XREF to: 00641a93 (READ)
//   XREF to: 00641a95 (READ)
// 0055a69b: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x70] (DATA)
// 0055a69d: CMP AL,0x0
// 0055a69f: JZ 0x0055a6b1
//   XREF to: 0055a6b1 (CONDITIONAL_JUMP)
// 0055a6a1: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00641a94 (READ)
//   XREF to: 00641a96 (READ)
// 0055a6a4: ADD ESI,0x2
// 0055a6a7: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x6f] (WRITE)
// 0055a6aa: ADD EDI,0x2
// 0055a6ad: CMP AL,0x0
// 0055a6af: JNZ 0x0055a699
//   XREF to: 0055a699 (CONDITIONAL_JUMP)
// 0055a6b1: POP EDI
//   Label: LAB_0055a6b1
// 0055a6b2: JMP 0x0055a669
//   XREF to: 0055a669 (UNCONDITIONAL_JUMP)
