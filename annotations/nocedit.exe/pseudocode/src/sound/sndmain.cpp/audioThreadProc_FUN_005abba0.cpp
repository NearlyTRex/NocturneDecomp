// Name: sound_sndmain.cpp_audioThreadProc_FUN_005abba0
// Address: 005abba0
// Address Range: [[005abba0, 005abbf0]]
// Convention: __cdecl
// Signature: DWORD sound_sndmain.cpp_audioThreadProc_FUN_005abba0(LPVOID lpThreadParam)
// Cross-references:
//   sound_sndmain.cpp_startSoundThread_FUN_005abc00 (005abc00) at 005abc47 [DATA]
// Globals:
//   double g_AudioLatencySeconds
//   undefined4 g_AudioLatencySeconds+4
//   int g_AudioThreadRunning
//   int g_AudioThreadShutdownFlag
// Function calls:
//   sound_sndmain.cpp_processAudio_FUN_005abe20
//   wincore_winrun.cpp_sleep_FUN_005f40e0

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_005abba0(LPVOID lpThreadParam)

{
  g_AudioThreadRunning = 1;
  while( true ) {
    if (g_AudioThreadShutdownFlag != 0) {
      g_AudioThreadRunning = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_005abe20();
    if (g_AudioThreadShutdownFlag != 0) break;
    wincore_winrun_cpp_sleep_FUN_005f40e0
              ((double)CONCAT44(g_AudioLatencySeconds._4_4_,g_AudioLatencySeconds._0_4_));
  }
  g_AudioThreadRunning = 0;
  return 0;
}


// Assembly code:
// 005abba0: PUSH EBX
//   Label: sound_sndmain.cpp_audioThreadProc_FUN_005abba0
// 005abba1: PUSH ESI
// 005abba2: PUSH EDI
// 005abba3: MOV EDX,0x1
// 005abba8: MOV ECX,dword ptr [0x03f69404]
//   XREF to: 03f69404 (READ)
// 005abbae: MOV dword ptr [0x03f69400],EDX
//   XREF to: 03f69400 (WRITE)
// 005abbb4: TEST ECX,ECX
// 005abbb6: JNZ 0x005abbc6
//   Label: LAB_005abbb6
//   XREF to: 005abbc6 (CONDITIONAL_JUMP)
// 005abbb8: CALL sound_sndmain.cpp_processAudio_FUN_005abe20
//   XREF to: 005abe20 (UNCONDITIONAL_CALL)
// 005abbbd: CMP dword ptr [0x03f69404],0x0
//   XREF to: 03f69404 (READ)
// 005abbc4: JZ 0x005abbd1
//   XREF to: 005abbd1 (CONDITIONAL_JUMP)
// 005abbc6: XOR EAX,EAX
//   Label: LAB_005abbc6
// 005abbc8: MOV [0x03f69400],EAX
//   XREF to: 03f69400 (WRITE)
// 005abbcd: POP EDI
// 005abbce: POP ESI
// 005abbcf: POP EBX
// 005abbd0: RET
// 005abbd1: MOV EBX,dword ptr [0x03f693fc]
//   Label: LAB_005abbd1
//   XREF to: 03f693fc (READ)
// 005abbd7: PUSH EBX
// 005abbd8: MOV ESI,dword ptr [0x03f693f8]
//   XREF to: 03f693f8 (READ)
// 005abbde: PUSH ESI
// 005abbdf: CALL wincore_winrun.cpp_sleep_FUN_005f40e0
//   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
// 005abbe4: MOV EDI,dword ptr [0x03f69404]
//   XREF to: 03f69404 (READ)
// 005abbea: ADD ESP,0x8
// 005abbed: TEST EDI,EDI
// 005abbef: JMP 0x005abbb6
//   XREF to: 005abbb6 (UNCONDITIONAL_JUMP)
