// Name: sound_sndmain.cpp_startSoundThread_FUN_005abc00
// Address: 005abc00
// Address Range: [[005abc00, 005abcab]]
// Convention: __cdecl
// Signature: HANDLE sound_sndmain.cpp_startSoundThread_FUN_005abc00(double latency_seconds)
// Cross-references:
//   sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340 (005ae340) at 005ae3ce [UNCONDITIONAL_CALL]
//   sound_sndwav.cpp_CWavOutDevice_start_FUN_005b08f0 (005b08f0) at 005b098b [UNCONDITIONAL_CALL]
// Globals:
//   double g_AudioLatencySecondsMin = 0.00200000000000000
//   double g_AudioLatencySeconds
//   undefined4 g_AudioLatencySeconds+4
//   int g_AudioThreadRunning
//   int g_AudioThreadShutdownFlag
// Function calls:
//   sound_sndmain.cpp_killSoundThread_FUN_005abcb0
//   wincore_winrun.cpp_createThread_FUN_005f4070
//   wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
//   wincore_winrun.cpp_sleep_FUN_005f40e0

#include "nocturne.h"

HANDLE __cdecl sound_sndmain_cpp_startSoundThread_FUN_005abc00(double latency_seconds)

{
  double dVar1;
  HANDLE hThread;
  HANDLE extraout_EAX;
  int iVar2;
  
  hThread = (HANDLE)sound_sndmain_cpp_killSoundThread_FUN_005abcb0();
  dVar1 = (double)CONCAT44(g_AudioLatencySeconds._4_4_,g_AudioLatencySeconds._0_4_);
  if (hThread != (HANDLE)0x0) {
    if (latency_seconds < g_AudioLatencySecondsMin) {
      latency_seconds = 0.002;
    }
    iVar2 = 0;
    g_AudioThreadRunning = 0;
    g_AudioThreadShutdownFlag = 0;
    g_AudioLatencySeconds = latency_seconds;
    hThread = wincore_winrun_cpp_createThread_FUN_005f4070
                        (sound_sndmain_cpp_audioThreadProc_FUN_005abba0,(LPVOID)0x0);
    dVar1 = g_AudioLatencySeconds;
    if (hThread != (HANDLE)0x0) {
      wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(hThread,3);
      hThread = extraout_EAX;
      dVar1 = g_AudioLatencySeconds;
      if (extraout_EAX != (HANDLE)0x0) {
        do {
          dVar1 = g_AudioLatencySeconds;
          if (g_AudioThreadRunning != 0) break;
          iVar2 = iVar2 + 1;
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.01);
          dVar1 = g_AudioLatencySeconds;
        } while (iVar2 < 100);
        g_AudioLatencySeconds._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
        g_AudioLatencySeconds._0_4_ = SUB84(dVar1,0);
        return (HANDLE)g_AudioThreadRunning;
      }
    }
  }
  g_AudioLatencySeconds._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
  g_AudioLatencySeconds._0_4_ = SUB84(dVar1,0);
  return hThread;
}


// Assembly code:
// 005abc00: PUSH EBX
//   Label: sound_sndmain.cpp_startSoundThread_FUN_005abc00
// 005abc01: PUSH EBP
// 005abc02: MOV EBP,ESP
// 005abc04: AND ESP,0xfffffff8
// 005abc07: CALL sound_sndmain.cpp_killSoundThread_FUN_005abcb0
//   XREF to: 005abcb0 (UNCONDITIONAL_CALL)
// 005abc0c: TEST EAX,EAX
// 005abc0e: JZ 0x005abc64
//   XREF to: 005abc64 (CONDITIONAL_JUMP)
// 005abc10: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005abc13: MOV [0x03f693f8],EAX
//   XREF to: 03f693f8 (WRITE)
// 005abc18: MOV EAX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005abc1b: FLD double ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005abc1e: MOV [0x03f693fc],EAX
//   XREF to: 03f693fc (WRITE)
// 005abc23: FCOMP double ptr [0x00650dff]
//   XREF to: 00650dff (READ)
// 005abc29: FNSTSW AX
// 005abc2b: SAHF
// 005abc2c: JNC 0x005abc44
//   XREF to: 005abc44 (CONDITIONAL_JUMP)
// 005abc2e: MOV EDX,0xd2f1a9fc
// 005abc33: MOV ECX,0x3f60624d
// 005abc38: MOV dword ptr [0x03f693f8],EDX
//   XREF to: 03f693f8 (WRITE)
// 005abc3e: MOV dword ptr [0x03f693fc],ECX
//   XREF to: 03f693fc (WRITE)
// 005abc44: XOR EBX,EBX
//   Label: LAB_005abc44
// 005abc46: PUSH EBX
// 005abc47: PUSH 0x5abba0
//   XREF to: 005abba0 (DATA)
// 005abc4c: MOV dword ptr [0x03f69400],EBX
//   XREF to: 03f69400 (WRITE)
// 005abc52: MOV dword ptr [0x03f69404],EBX
//   XREF to: 03f69404 (WRITE)
// 005abc58: CALL wincore_winrun.cpp_createThread_FUN_005f4070
//   XREF to: 005f4070 (UNCONDITIONAL_CALL)
// 005abc5d: ADD ESP,0x8
// 005abc60: TEST EAX,EAX
// 005abc62: JNZ 0x005abc69
//   XREF to: 005abc69 (CONDITIONAL_JUMP)
// 005abc64: MOV ESP,EBP
//   Label: LAB_005abc64
// 005abc66: POP EBP
// 005abc67: POP EBX
// 005abc68: RET
// 005abc69: PUSH 0x3
//   Label: LAB_005abc69
// 005abc6b: PUSH EAX
// 005abc6c: CALL wincore_winrun.cpp_setThreadPriority_FUN_005f40a0
//   XREF to: 005f40a0 (UNCONDITIONAL_CALL)
// 005abc71: ADD ESP,0x8
// 005abc74: TEST EAX,EAX
// 005abc76: JZ 0x005abc64
//   XREF to: 005abc64 (CONDITIONAL_JUMP)
// 005abc78: CMP dword ptr [0x03f69400],0x0
//   XREF to: 03f69400 (READ)
// 005abc7f: JNZ 0x005abca2
//   XREF to: 005abca2 (CONDITIONAL_JUMP)
// 005abc81: PUSH 0x3f847ae1
//   Label: LAB_005abc81
// 005abc86: PUSH 0x47ae147b
// 005abc8b: INC EBX
// 005abc8c: CALL wincore_winrun.cpp_sleep_FUN_005f40e0
//   XREF to: 005f40e0 (UNCONDITIONAL_CALL)
// 005abc91: ADD ESP,0x8
// 005abc94: CMP EBX,0x64
// 005abc97: JGE 0x005abca2
//   XREF to: 005abca2 (CONDITIONAL_JUMP)
// 005abc99: CMP dword ptr [0x03f69400],0x0
//   XREF to: 03f69400 (READ)
// 005abca0: JZ 0x005abc81
//   XREF to: 005abc81 (CONDITIONAL_JUMP)
// 005abca2: MOV EAX,[0x03f69400]
//   Label: LAB_005abca2
//   XREF to: 03f69400 (READ)
// 005abca7: MOV ESP,EBP
// 005abca9: POP EBP
// 005abcaa: POP EBX
// 005abcab: RET
