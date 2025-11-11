// Name: sound_sndmain.cpp_FUN_005ad3b0
// Address: 005ad3b0
// Address Range: [[005ad3b0, 005ad5b8]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ad3b0()
// Cross-references:
//   sound_sndmain.cpp_testSoundFiles_FUN_005ad5c0 (005ad5c0) at 005adb55 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Can_t_get_sample_info_fo_00651233
//   TerminatedCString s_Sample_s_has_unknown_or__00651250
//   TerminatedCString s_Error_playing_s_00651278
//   TerminatedCString s_Canceled_00651289
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
//   undefined4 DAT_03f5d8a0
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_sndmain.cpp_FUN_005a8480
//   sound_sndmain.cpp_FUN_005a88e0
//   sound_sndmain.cpp_FUN_005a8a80
//   sound_sndmain.cpp_FUN_005a9720
//   sound_sndmain.cpp_FUN_005aa020
//   sound_sndmain.cpp_FUN_005aa0a0
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   sound_sndmain.cpp_startSfx_FUN_005a8e90
//   wincore_winrun.cpp_sleep_FUN_005f40e0

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005ad3b0(undefined4 param_1) */

char * sound_sndmain_cpp_FUN_005ad3b0(void)

{
  char cVar1;
  double dVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *in_stack_00000004;
  float in_stack_0000002c;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_58;
  
  sound_sndmain_cpp_FUN_005a8480();
  pcVar5 = (char *)&uStack_16c;
  pcVar4 = in_stack_00000004;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = sound_sndmain_cpp_getSampleInfo_FUN_005aa3f0((char *)&uStack_16c);
  if (iVar3 == 0) {
    uStack_16c = in_stack_00000004;
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03f5d8a0,"Can't get sample info for %s");
    pcVar4 = &DAT_03f5d8a0;
  }
  else if (iStack_58 < 1) {
    uStack_16c = in_stack_00000004;
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03f5d8a0,"Sample %s has unknown or invalid length");
    pcVar4 = &DAT_03f5d8a0;
  }
  else {
    uStack_16c = (char *)0x0;
    sound_sndmain_cpp_FUN_005aa020();
    uStack_168 = 0x3ff00000;
    uStack_16c = (char *)0x0;
    sound_sndmain_cpp_FUN_005aa0a0();
    uStack_164 = 0x5ad458;
    sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
    uStack_160 = 0x40340000;
    uStack_164 = 0;
    uStack_168 = 0;
    uStack_16c = (char *)0x0;
    sound_sndmain_cpp_FUN_005a88e0();
    uStack_15c = 0x41200000;
    uStack_160 = 0x5ad479;
    sound_sndmain_cpp_FUN_005a8a80();
    uStack_15c = 0x5ad485;
    iVar3 = sound_sndmain_cpp_startSfx_FUN_005a8e90();
    sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
    if (iVar3 == 0) {
      uStack_15c = 0x5ad535;
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03f5d8a0,"Error playing %s");
      pcVar4 = &DAT_03f5d8a0;
    }
    else {
      dVar2 = (double)sound_sndmain_cpp_FUN_005a9720();
      if (0.0 <= (float)dVar2) {
        while (iVar3 = sound_sndmain_cpp_SoundLockKillBlah_FUN_005a9660(), iVar3 != 0) {
          iVar3 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,1);
          if (iVar3 != 0) {
            return "Canceled";
          }
          dVar2 = (double)sound_sndmain_cpp_FUN_005a9720();
          if ((float)dVar2 < in_stack_0000002c) break;
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.05);
          in_stack_0000002c = (float)dVar2;
        }
      }
      pcVar4 = (char *)0x0;
    }
  }
  return pcVar4;
}


// Assembly code:
// 005ad3b0: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005ad3b0
// 005ad3b1: PUSH ESI
// 005ad3b2: PUSH EDI
// 005ad3b3: PUSH EBP
// 005ad3b4: MOV EBP,ESP
// 005ad3b6: SUB ESP,0x160
// 005ad3bc: AND ESP,0xfffffff8
// 005ad3bf: MOV EAX,ESP
// 005ad3c1: PUSH EAX
// 005ad3c2: CALL sound_sndmain.cpp_FUN_005a8480
//   XREF to: 005a8480 (UNCONDITIONAL_CALL)
// 005ad3c7: ADD ESP,0x4
// 005ad3ca: MOV EDI,ESP
// 005ad3cc: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ad3cf: PUSH EDI
// 005ad3d0: MOV AL,byte ptr [ESI]
//   Label: LAB_005ad3d0
// 005ad3d2: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x170] (DATA)
// 005ad3d4: CMP AL,0x0
// 005ad3d6: JZ 0x005ad3e8
//   XREF to: 005ad3e8 (CONDITIONAL_JUMP)
// 005ad3d8: MOV AL,byte ptr [ESI + 0x1]
// 005ad3db: ADD ESI,0x2
// 005ad3de: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x16f] (WRITE)
// 005ad3e1: ADD EDI,0x2
// 005ad3e4: CMP AL,0x0
// 005ad3e6: JNZ 0x005ad3d0
//   XREF to: 005ad3d0 (CONDITIONAL_JUMP)
// 005ad3e8: POP EDI
//   Label: LAB_005ad3e8
// 005ad3e9: MOV EAX,ESP
// 005ad3eb: PUSH EAX
// 005ad3ec: CALL sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0
//   XREF to: 005aa3f0 (UNCONDITIONAL_CALL)
// 005ad3f1: ADD ESP,0x4
// 005ad3f4: TEST EAX,EAX
// 005ad3f6: JZ 0x005ad4e8
//   XREF to: 005ad4e8 (CONDITIONAL_JUMP)
// 005ad3fc: CMP dword ptr [ESP + 0x110],0x0
//   XREF to: Stack[-0x60] (READ)
// 005ad404: JLE 0x005ad505
//   XREF to: 005ad505 (CONDITIONAL_JUMP)
// 005ad40a: PUSH 0x0
// 005ad40c: PUSH 0x0
// 005ad40e: PUSH 0x0
// 005ad410: PUSH 0x0
// 005ad412: PUSH 0x0
// 005ad414: PUSH 0x0
// 005ad416: CALL sound_sndmain.cpp_FUN_005aa020
//   XREF to: 005aa020 (UNCONDITIONAL_CALL)
// 005ad41b: ADD ESP,0x18
// 005ad41e: PUSH 0x3ff00000
// 005ad423: PUSH 0x0
// 005ad425: PUSH 0x0
// 005ad427: PUSH 0x0
// 005ad429: PUSH 0x0
// 005ad42b: PUSH 0x0
// 005ad42d: PUSH 0x0
// 005ad42f: PUSH 0x0
// 005ad431: PUSH 0x3ff00000
// 005ad436: PUSH 0x0
// 005ad438: PUSH 0x0
// 005ad43a: PUSH 0x0
// 005ad43c: PUSH 0x0
// 005ad43e: PUSH 0x0
// 005ad440: PUSH 0x0
// 005ad442: PUSH 0x0
// 005ad444: PUSH 0x3ff00000
// 005ad449: PUSH 0x0
// 005ad44b: CALL sound_sndmain.cpp_FUN_005aa0a0
//   XREF to: 005aa0a0 (UNCONDITIONAL_CALL)
// 005ad450: ADD ESP,0x48
// 005ad453: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005ad458: PUSH 0x40340000
// 005ad45d: PUSH 0x0
// 005ad45f: PUSH 0x0
// 005ad461: PUSH 0x0
// 005ad463: PUSH 0x0
// 005ad465: PUSH 0x0
// 005ad467: CALL sound_sndmain.cpp_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 005ad46c: ADD ESP,0x18
// 005ad46f: PUSH 0x41200000
// 005ad474: CALL sound_sndmain.cpp_FUN_005a8a80
//   XREF to: 005a8a80 (UNCONDITIONAL_CALL)
// 005ad479: ADD ESP,0x4
// 005ad47c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ad47f: PUSH EBX
// 005ad480: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005ad485: ADD ESP,0x4
// 005ad488: MOV ESI,EAX
// 005ad48a: MOV EBX,EAX
// 005ad48c: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005ad491: TEST ESI,ESI
// 005ad493: JZ 0x005ad522
//   XREF to: 005ad522 (CONDITIONAL_JUMP)
// 005ad499: PUSH 0x0
// 005ad49b: PUSH ESI
// 005ad49c: CALL sound_sndmain.cpp_FUN_005a9720
//   XREF to: 005a9720 (UNCONDITIONAL_CALL)
// 005ad4a1: MOV dword ptr [ESP + 0x158],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005ad4a8: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ad4af: FLD double ptr [ESP + 0x158]
//   XREF to: Stack[-0x20] (READ)
// 005ad4b6: ADD ESP,0x8
// 005ad4b9: FLDZ
// 005ad4bb: FXCH
// 005ad4bd: FSTP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (WRITE)
// 005ad4c4: FCOMP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x18] (READ)
// 005ad4cb: FNSTSW AX
// 005ad4cd: SAHF
// 005ad4ce: JA 0x005ad4df
//   XREF to: 005ad4df (CONDITIONAL_JUMP)
// 005ad4d0: XOR ESI,ESI
// 005ad4d2: PUSH EBX
//   Label: LAB_005ad4d2
// 005ad4d3: CALL sound_sndmain.cpp_SoundLockKillBlah_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 005ad4d8: ADD ESP,0x4
// 005ad4db: TEST EAX,EAX
// 005ad4dd: JNZ 0x005ad53f
//   XREF to: 005ad53f (CONDITIONAL_JUMP)
// 005ad4df: XOR EAX,EAX
//   Label: LAB_005ad4df
// 005ad4e1: MOV ESP,EBP
//   Label: LAB_005ad4e1
// 005ad4e3: POP EBP
// 005ad4e4: POP EDI
// 005ad4e5: POP ESI
// 005ad4e6: POP EBX
// 005ad4e7: RET
// 005ad4e8: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_005ad4e8
//   XREF to: Stack[0x4] (READ)
// 005ad4eb: PUSH EDX
// 005ad4ec: PUSH 0x651233
//   XREF to: 00651233 (DATA)
// 005ad4f1: PUSH 0x3f5d8a0
//   XREF to: 03f5d8a0 (DATA)
// 005ad4f6: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad4fb: MOV EAX,0x3f5d8a0
//   XREF to: 03f5d8a0 (DATA)
// 005ad500: ADD ESP,0xc
// 005ad503: JMP 0x005ad4e1
//   XREF to: 005ad4e1 (UNCONDITIONAL_JUMP)
// 005ad505: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_005ad505
//   XREF to: Stack[0x4] (READ)
// 005ad508: PUSH EDI
// 005ad509: PUSH 0x651250
//   XREF to: 00651250 (DATA)
// 005ad50e: PUSH 0x3f5d8a0
//   XREF to: 03f5d8a0 (DATA)
// 005ad513: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad518: MOV EAX,0x3f5d8a0
//   XREF to: 03f5d8a0 (DATA)
// 005ad51d: ADD ESP,0xc
// 005ad520: JMP 0x005ad4e1
//   XREF to: 005ad4e1 (UNCONDITIONAL_JUMP)
// 005ad522: MOV ESI,dword ptr [EBP + 0x14]
//   Label: LAB_005ad522
//   XREF to: Stack[0x4] (READ)
// 005ad525: PUSH ESI
// 005ad526: PUSH 0x651278
//   XREF to: 00651278 (DATA)
// 005ad52b: PUSH 0x3f5d8a0
//   XREF to: 03f5d8a0 (DATA)
// 005ad530: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ad535: MOV EAX,0x3f5d8a0
//   XREF to: 03f5d8a0 (DATA)
// 005ad53a: ADD ESP,0xc
// 005ad53d: JMP 0x005ad4e1
//   XREF to: 005ad4e1 (UNCONDITIONAL_JUMP)
// 005ad53f: PUSH 0x1
//   Label: LAB_005ad53f
// 005ad541: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005ad546: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005ad547: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005ad549: CALL dword ptr [EDX]
// 005ad54b: ADD ESP,0x8
// 005ad54e: TEST EAX,EAX
// 005ad550: JZ 0x005ad55e
//   XREF to: 005ad55e (CONDITIONAL_JUMP)
// 005ad552: MOV EAX,0x651289
//   XREF to: 00651289 (DATA)
// 005ad557: MOV ESP,EBP
// 005ad559: POP EBP
// 005ad55a: POP EDI
// 005ad55b: POP ESI
// 005ad55c: POP EBX
// 005ad55d: RET
// 005ad55e: PUSH ESI
//   Label: LAB_005ad55e
// 005ad55f: PUSH EBX
// 005ad560: CALL sound_sndmain.cpp_FUN_005a9720
//   XREF to: 005a9720 (UNCONDITIONAL_CALL)
// 005ad565: MOV dword ptr [ESP + 0x158],EAX
// 005ad56c: MOV dword ptr [ESP + 0x15c],EDX
// 005ad573: FLD double ptr [ESP + 0x158]
// 005ad57a: ADD ESP,0x8
// 005ad57d: FST float ptr [ESP + 0x15c]
// 005ad584: FCOMP float ptr [ESP + 0x158]
// 005ad58b: FNSTSW AX
// 005ad58d: SAHF
// 005ad58e: JC 0x005ad4df
//   XREF to: 005ad4df (CONDITIONAL_JUMP)
// 005ad594: PUSH 0x3fa99999
// 005ad599: MOV EAX,dword ptr [ESP + 0x160]
// 005ad5a0: PUSH 0x9999999a
// 005ad5a5: MOV dword ptr [ESP + 0x160],EAX
// 005ad5ac: CALL wincore_winrun.cpp_sleep_FUN_005f40e0
//   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
// 005ad5b1: ADD ESP,0x8
// 005ad5b4: JMP 0x005ad4d2
//   XREF to: 005ad4d2 (UNCONDITIONAL_JUMP)
