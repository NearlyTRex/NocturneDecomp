// Name: sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
// Address: 005ab170
// Address Range: [[005ab170, 005ab20d]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample, int channels, int sample_rate)
// Cross-references:
//   core_menu.cpp_configureSoundOptions_FUN_00511e50 (00511e50) at 00512cca [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_findAllSoundFiles_FUN_005b2d00 (005b2d00) at 005b2d4f [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 (005aaef0) at 005aaf42 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac0fd [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setAudioBitDepth_FUN_005ab280 (005ab280) at 005ab291 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setAudioChannelCount_FUN_005ab2a0 (005ab2a0) at 005ab2b1 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_setAudioSampleRate_FUN_005ab2c0 (005ab2c0) at 005ab2d1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650c17
//   TerminatedCString s_setSoundOutputMode_can_t_00650c2c
//   int g_AudioBitsPerSample = 0x10
//   int g_AudioChannelCount = 0x2
//   int g_AudioSampleRate = 0x5622
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSoundDevice* g_CSoundDevicePtr
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSoundOutputMode_FUN_005ab170(int bits_per_sample,int channels,int sample_rate)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000010;
  int in_stack_00000014;
  undefined4 uStack00000018;
  int in_stack_00000024;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x128c;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setSoundOutputMode - can't do this while sound active!");
  }
  g_AudioBitsPerSample = sample_rate;
  g_AudioChannelCount = in_stack_00000010;
  g_AudioSampleRate = in_stack_00000014;
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->setMode)
                      (g_CSoundDevicePtr,sample_rate,in_stack_00000010,in_stack_00000014,
                       (int *)&stack0xfffffff8);
    if (iVar1 == 0) {
      return 0;
    }
    if (0 < in_stack_00000024) {
      uStack00000018 = 0x5ab1ff;
      sound_sndmain_cpp_allocMixBuffers_FUN_005a5730(in_stack_00000024,4);
      return 1;
    }
  }
  return 1;
}


// Assembly code:
// 005ab170: PUSH EBX
//   Label: sound_sndmain.cpp_setSoundOutputMode_FUN_005ab170
// 005ab171: PUSH EDI
// 005ab172: PUSH EBP
// 005ab173: SUB ESP,0x4
// 005ab176: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 005ab17b: TEST EAX,EAX
// 005ab17d: JNZ 0x005ab1b0
//   XREF to: 005ab1b0 (CONDITIONAL_JUMP)
// 005ab17f: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005ab17f
//   XREF to: Stack[0x4] (READ)
// 005ab183: MOV [0x00681b14],EAX
//   XREF to: 00681b14 (WRITE)
// 005ab188: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ab18c: MOV [0x00681b18],EAX
//   XREF to: 00681b18 (WRITE)
// 005ab191: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ab195: MOV EBX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005ab19b: MOV [0x00681b1c],EAX
//   XREF to: 00681b1c (WRITE)
// 005ab1a0: TEST EBX,EBX
// 005ab1a2: JNZ 0x005ab1d5
//   XREF to: 005ab1d5 (CONDITIONAL_JUMP)
// 005ab1a4: MOV EAX,0x1
//   Label: LAB_005ab1a4
// 005ab1a9: ADD ESP,0x4
//   Label: LAB_005ab1a9
// 005ab1ac: POP EBP
// 005ab1ad: POP EDI
// 005ab1ae: POP EBX
// 005ab1af: RET
// 005ab1b0: MOV EDX,0x650c17
//   Label: LAB_005ab1b0
//   XREF to: 00650c17 (PARAM)
// 005ab1b5: MOV ECX,0x128c
// 005ab1ba: PUSH 0x650c2c
//   XREF to: 00650c2c (DATA)
// 005ab1bf: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005ab1c5: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005ab1cb: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005ab1d0: ADD ESP,0x4
// 005ab1d3: JMP 0x005ab17f
//   XREF to: 005ab17f (UNCONDITIONAL_JUMP)
// 005ab1d5: MOV ECX,ESP
//   Label: LAB_005ab1d5
// 005ab1d7: PUSH ECX
// 005ab1d8: PUSH EAX
// 005ab1d9: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 005ab1dd: PUSH EDI
// 005ab1de: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005ab1e2: PUSH EBP
// 005ab1e3: MOV EDX,dword ptr [EBX]
// 005ab1e5: PUSH EBX
// 005ab1e6: CALL dword ptr [EDX + 0xc]
// 005ab1e9: ADD ESP,0x14
// 005ab1ec: TEST EAX,EAX
// 005ab1ee: JZ 0x005ab1a9
//   XREF to: 005ab1a9 (CONDITIONAL_JUMP)
// 005ab1f0: MOV EAX,dword ptr [ESP]
// 005ab1f3: TEST EAX,EAX
// 005ab1f5: JLE 0x005ab1a4
//   XREF to: 005ab1a4 (CONDITIONAL_JUMP)
// 005ab1f7: PUSH 0x4
// 005ab1f9: PUSH EAX
// 005ab1fa: CALL sound_sndmain.cpp_allocMixBuffers_FUN_005a5730
//   XREF to: 005a5730 (UNCONDITIONAL_CALL)
// 005ab1ff: ADD ESP,0x8
// 005ab202: MOV EAX,0x1
// 005ab207: ADD ESP,0x4
// 005ab20a: POP EBP
// 005ab20b: POP EDI
// 005ab20c: POP EBX
// 005ab20d: RET
