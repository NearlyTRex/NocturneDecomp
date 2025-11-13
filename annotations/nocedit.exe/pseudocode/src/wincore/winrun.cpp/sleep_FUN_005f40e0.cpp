// Name: wincore_winrun.cpp_sleep_FUN_005f40e0
// Address: 005f40e0
// Address Range: [[005f40e0, 005f4135]]
// Convention: __cdecl
// Signature: void wincore_winrun.cpp_sleep_FUN_005f40e0(double seconds)
// Cross-references:
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4ca6 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbe0a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad5ac [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_audioThreadProc_FUN_005abba0 (005abba0) at 005abbdf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_killSoundThread_FUN_005abcb0 (005abcb0) at 005abcd9 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSoundThread_FUN_005abc00 (005abc00) at 005abc8c [UNCONDITIONAL_CALL]
// Globals:
//   Sleep* Sleep = 00212228
//   double g_SecondsToMillisecondsMultiplier = 1000
// Function calls:
//   crt_math.c_ceil_FUN_006001b2
//   crt_math.c_round_FUN_005fe6b0
//   Sleep

#include "nocturne.h"

void __cdecl wincore_winrun_cpp_sleep_FUN_005f40e0(double seconds)

{
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 fVar1;
  undefined4 local_8;
  
  if (seconds <= 0.0) {
    (*Sleep)(0);
    return;
  }
  crt_math_c_ceil_FUN_006001b2(seconds * g_SecondsToMillisecondsMultiplier);
  fVar1 = (float10)(double)CONCAT44(extraout_EDX,extraout_EAX);
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_8 = (DWORD)(longlong)ROUND(fVar1);
  (*Sleep)(local_8);
  return;
}


// Assembly code:
// 005f40e0: SUB ESP,0x8
//   Label: wincore_winrun.cpp_sleep_FUN_005f40e0
// 005f40e3: FLDZ
// 005f40e5: FCOMP double ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f40e9: FNSTSW AX
// 005f40eb: SAHF
// 005f40ec: JC 0x005f40fb
//   XREF to: 005f40fb (CONDITIONAL_JUMP)
// 005f40ee: PUSH 0x0
// 005f40f0: CALL dword ptr CS:[0x611644]
//   XREF to: EXTERNAL:0000009c (COMPUTED_CALL)
//   XREF to: 00611644 (READ)
// 005f40f7: ADD ESP,0x8
// 005f40fa: RET
// 005f40fb: FLD double ptr [ESP + 0xc]
//   Label: LAB_005f40fb
//   XREF to: Stack[0x4] (READ)
// 005f40ff: FMUL double ptr [0x00658184]
//   XREF to: 00658184 (READ)
// 005f4105: SUB ESP,0x8
// 005f4108: FSTP double ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 005f410b: CALL crt_math.c_ceil_FUN_006001b2
//   XREF to: 006001b2 (UNCONDITIONAL_CALL)
// 005f4110: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005f4114: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x4] (WRITE)
// 005f4118: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x8] (READ)
// 005f411c: ADD ESP,0x8
// 005f411f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005f4124: FISTP qword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f4127: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f412a: PUSH EAX
// 005f412b: CALL dword ptr CS:[0x611644]
//   XREF to: EXTERNAL:0000009c (COMPUTED_CALL)
//   XREF to: 00611644 (READ)
// 005f4132: ADD ESP,0x8
// 005f4135: RET
