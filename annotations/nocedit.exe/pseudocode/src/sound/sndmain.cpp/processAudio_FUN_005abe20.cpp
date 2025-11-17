// Name: sound_sndmain.cpp_processAudio_FUN_005abe20
// Address: 005abe20
// Address Range: [[005abe20, 005abe96]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_processAudio_FUN_005abe20(void)
// Cross-references:
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 00529edc [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_audioThreadProc_FUN_005abba0 (005abba0) at 005abbb8 [UNCONDITIONAL_CALL]
// Globals:
//   double g_AudioLatencyMultiplier = 3
//   CSoundDevice* g_CSoundDevicePtr
//   double g_AudioLatencySeconds
//   HANDLE g_SoundMutex
//   int g_SoundLockCount
// Function calls:
//   sound_sndmain.cpp_FUN_005ace90
//   wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_005abe20(void)

{
  int iVar1;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010
                      (g_SoundMutex,g_AudioLatencySeconds * g_AudioLatencyMultiplier);
    if (iVar1 != 0) {
      g_SoundLockCount = g_SoundLockCount + 1;
      (*g_CSoundDevicePtr->vtable->poll)(g_CSoundDevicePtr);
      sound_sndmain_cpp_FUN_005ace90();
      g_SoundLockCount = g_SoundLockCount + -1;
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_SoundMutex);
      return;
    }
  }
  return;
}


// Assembly code:
// 005abe20: CMP dword ptr [0x03f69268],0x0
//   Label: sound_sndmain.cpp_processAudio_FUN_005abe20
//   XREF to: 03f69268 (READ)
// 005abe27: JNZ 0x005abe2a
//   XREF to: 005abe2a (CONDITIONAL_JUMP)
// 005abe29: RET
//   Label: LAB_005abe29
// 005abe2a: FLD double ptr [0x03f693f8]
//   Label: LAB_005abe2a
//   XREF to: 03f693f8 (READ)
// 005abe30: FMUL double ptr [0x00650ecf]
//   XREF to: 00650ecf (READ)
// 005abe36: SUB ESP,0x8
// 005abe39: MOV ECX,dword ptr [0x03f69408]
//   XREF to: 03f69408 (READ)
// 005abe3f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005abe42: PUSH ECX
// 005abe43: CALL wincore_winrun.cpp_waitForMutexTimeout_FUN_005f4010
//   XREF to: 005f4010 (UNCONDITIONAL_CALL)
// 005abe48: ADD ESP,0xc
// 005abe4b: TEST EAX,EAX
// 005abe4d: JZ 0x005abe29
//   XREF to: 005abe29 (CONDITIONAL_JUMP)
// 005abe4f: PUSH EDI
// 005abe50: PUSH ESI
// 005abe51: PUSH EBX
// 005abe52: MOV EAX,[0x03f69268]
//   XREF to: 03f69268 (READ)
// 005abe57: MOV EBX,dword ptr [0x03f6940c]
//   XREF to: 03f6940c (READ)
// 005abe5d: PUSH EAX
// 005abe5e: INC EBX
// 005abe5f: MOV EDX,dword ptr [EAX]
// 005abe61: MOV dword ptr [0x03f6940c],EBX
//   XREF to: 03f6940c (WRITE)
// 005abe67: CALL dword ptr [EDX + 0x10]
// 005abe6a: ADD ESP,0x4
// 005abe6d: PUSH 0x0
// 005abe6f: CALL sound_sndmain.cpp_FUN_005ace90
//   XREF to: 005ace90 (UNCONDITIONAL_CALL)
// 005abe74: MOV EDI,dword ptr [0x03f6940c]
//   XREF to: 03f6940c (READ)
// 005abe7a: ADD ESP,0x4
// 005abe7d: MOV ESI,dword ptr [0x03f69408]
//   XREF to: 03f69408 (READ)
// 005abe83: DEC EDI
// 005abe84: PUSH ESI
// 005abe85: MOV dword ptr [0x03f6940c],EDI
//   XREF to: 03f6940c (WRITE)
// 005abe8b: CALL wincore_winrun.cpp_releaseMutex_FUN_005f4050
//   XREF to: 005f4050 (UNCONDITIONAL_CALL)
// 005abe90: ADD ESP,0x4
// 005abe93: POP EBX
// 005abe94: POP ESI
// 005abe95: POP EDI
// 005abe96: RET
