// Name: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
// Address: 005abeb0
// Address Range: [[005abeb0, 005abf1f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency)
// Cross-references:
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005ac07b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650ed7
//   TerminatedCString s_setMaxSwSoundLatency_can_00650eec
//   double g_MinLatencyThreshold = 0.0500000000000000
//   double g_MaxLatencyThreshold = 2
//   float g_MaxSoftwareLatency = 0.5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_isSoundBusy_FUN_005ab540

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setMaxSwSoundLatency_FUN_005abeb0(float latency)

{
  int iVar1;
  float in_stack_0000000c;
  
  iVar1 = sound_sndmain_cpp_isSoundBusy_FUN_005ab540();
  if (iVar1 != 0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x15a2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("setMaxSwSoundLatency - can't do this while sound is active");
  }
  if (in_stack_0000000c < (float)g_MinLatencyThreshold) {
    in_stack_0000000c = 0.05;
  }
  if (in_stack_0000000c <= (float)g_MaxLatencyThreshold) {
    g_MaxSoftwareLatency = in_stack_0000000c;
    return;
  }
  g_MaxSoftwareLatency = 2.0;
  return;
}


// Assembly code:
// 005abeb0: CALL sound_sndmain.cpp_isSoundBusy_FUN_005ab540
//   Label: sound_sndmain.cpp_setMaxSwSoundLatency_FUN_005abeb0
//   XREF to: 005ab540 (UNCONDITIONAL_CALL)
// 005abeb5: TEST EAX,EAX
// 005abeb7: JNZ 0x005abee9
//   XREF to: 005abee9 (CONDITIONAL_JUMP)
// 005abeb9: FLD float ptr [ESP + 0x4]
//   Label: LAB_005abeb9
//   XREF to: Stack[0x4] (READ)
// 005abebd: FCOMP double ptr [0x00650f27]
//   XREF to: 00650f27 (READ)
// 005abec3: FNSTSW AX
// 005abec5: SAHF
// 005abec6: JNC 0x005abed0
//   XREF to: 005abed0 (CONDITIONAL_JUMP)
// 005abec8: MOV dword ptr [ESP + 0x4],0x3d4ccccd
//   XREF to: Stack[0x4] (WRITE)
// 005abed0: FLD float ptr [ESP + 0x4]
//   Label: LAB_005abed0
//   XREF to: Stack[0x4] (READ)
// 005abed4: FCOMP double ptr [0x00650f2f]
//   XREF to: 00650f2f (READ)
// 005abeda: FNSTSW AX
// 005abedc: SAHF
// 005abedd: JA 0x005abf0e
//   XREF to: 005abf0e (CONDITIONAL_JUMP)
// 005abedf: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005abee3: MOV [0x00681b48],EAX
//   XREF to: 00681b48 (WRITE)
// 005abee8: RET
// 005abee9: MOV EDX,0x650ed7
//   Label: LAB_005abee9
//   XREF to: 00650ed7 (PARAM)
// 005abeee: MOV ECX,0x15a2
// 005abef3: PUSH 0x650eec
//   XREF to: 00650eec (DATA)
// 005abef8: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005abefe: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005abf04: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005abf09: ADD ESP,0x4
// 005abf0c: JMP 0x005abeb9
//   XREF to: 005abeb9 (UNCONDITIONAL_JUMP)
// 005abf0e: MOV dword ptr [ESP + 0x4],0x40000000
//   Label: LAB_005abf0e
//   XREF to: Stack[0x4] (WRITE)
// 005abf16: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 005abf1a: MOV [0x00681b48],EAX
//   XREF to: 00681b48 (WRITE)
// 005abf1f: RET
