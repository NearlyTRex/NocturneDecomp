// Name: sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
// Address: 005ab9a0
// Address Range: [[005ab9a0, 005aba3a]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0(int bits_per_sample, int channels, int sample_rate, int signed_samples)
// Cross-references:
//   sound_sndmain.cpp_startRecording_FUN_005aba90 (005aba90) at 005abad0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650daa
//   TerminatedCString s_setRecordingFormat_can_t_00650dbf
//   int g_RecordingBitsPerSample = 0x8
//   int g_RecordingChannelCount = 0x1
//   int g_RecordingSampleRate = 0x2b11
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectSoundCapture* g_RecordingDeviceInterface
//   int g_RecordingSamplesSigned
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setRecordingFormat_FUN_005ab9a0
          (int bits_per_sample,int channels,int sample_rate,int signed_samples)

{
  int iVar1;
  HRESULT HVar2;
  LPUNKNOWN in_stack_00000014;
  int in_stack_00000018;
  
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_005ab980();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x14ad;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setRecordingFormat - can't do this while recording active!");
  }
  g_RecordingBitsPerSample = sample_rate;
  g_RecordingChannelCount = signed_samples;
  g_RecordingSampleRate = (int)in_stack_00000014;
  g_RecordingSamplesSigned = (int)(in_stack_00000018 != 0);
  if (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0) {
    HVar2 = (*g_RecordingDeviceInterface->vtable->CreateCaptureBuffer)
                      (g_RecordingDeviceInterface,(void *)sample_rate,
                       (LPDIRECTSOUNDCAPTUREBUFFER *)signed_samples,in_stack_00000014);
    if (HVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 005ab9a0: PUSH EBX
//   Label: sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
// 005ab9a1: PUSH ESI
// 005ab9a2: PUSH EDI
// 005ab9a3: PUSH EBP
// 005ab9a4: CALL sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
//   XREF to: 005ab980 (UNCONDITIONAL_CALL)
// 005ab9a9: TEST EAX,EAX
// 005ab9ab: JNZ 0x005ab9ef
//   XREF to: 005ab9ef (CONDITIONAL_JUMP)
// 005ab9ad: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_005ab9ad
//   XREF to: Stack[0x4] (READ)
// 005ab9b1: MOV [0x00681b54],EAX
//   XREF to: 00681b54 (WRITE)
// 005ab9b6: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ab9ba: MOV [0x00681b58],EAX
//   XREF to: 00681b58 (WRITE)
// 005ab9bf: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ab9c3: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005ab9c7: MOV [0x00681b5c],EAX
//   XREF to: 00681b5c (WRITE)
// 005ab9cc: TEST EBX,EBX
// 005ab9ce: SETNZ AL
// 005ab9d1: AND EAX,0xff
// 005ab9d6: MOV ESI,dword ptr [0x03f69c54]
//   XREF to: 03f69c54 (READ)
// 005ab9dc: MOV [0x03f69c5c],EAX
//   XREF to: 03f69c5c (WRITE)
// 005ab9e1: TEST ESI,ESI
// 005ab9e3: JNZ 0x005aba14
//   XREF to: 005aba14 (CONDITIONAL_JUMP)
// 005ab9e5: MOV EAX,0x1
//   Label: LAB_005ab9e5
// 005ab9ea: POP EBP
// 005ab9eb: POP EDI
// 005ab9ec: POP ESI
// 005ab9ed: POP EBX
// 005ab9ee: RET
// 005ab9ef: MOV EDX,0x650daa
//   Label: LAB_005ab9ef
//   XREF to: 00650daa (DATA)
// 005ab9f4: MOV ECX,0x14ad
// 005ab9f9: PUSH 0x650dbf
//   XREF to: 00650dbf (DATA)
// 005ab9fe: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005aba04: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005aba0a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005aba0f: ADD ESP,0x4
// 005aba12: JMP 0x005ab9ad
//   XREF to: 005ab9ad (UNCONDITIONAL_JUMP)
// 005aba14: PUSH EAX
//   Label: LAB_005aba14
// 005aba15: MOV EDI,dword ptr [0x00681b5c]
//   XREF to: 00681b5c (READ)
// 005aba1b: PUSH EDI
// 005aba1c: MOV EBP,dword ptr [0x00681b58]
//   XREF to: 00681b58 (READ)
// 005aba22: PUSH EBP
// 005aba23: MOV EAX,[0x00681b54]
//   XREF to: 00681b54 (READ)
// 005aba28: PUSH EAX
// 005aba29: MOV ECX,dword ptr [ESI]
// 005aba2b: PUSH ESI
// 005aba2c: CALL dword ptr [ECX + 0xc]
// 005aba2f: ADD ESP,0x14
// 005aba32: TEST EAX,EAX
// 005aba34: JNZ 0x005ab9e5
//   XREF to: 005ab9e5 (CONDITIONAL_JUMP)
// 005aba36: POP EBP
// 005aba37: POP EDI
// 005aba38: POP ESI
// 005aba39: POP EBX
// 005aba3a: RET
