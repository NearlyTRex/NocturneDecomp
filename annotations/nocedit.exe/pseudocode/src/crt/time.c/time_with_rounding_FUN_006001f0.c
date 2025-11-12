// Name: crt_time.c_time_with_rounding_FUN_006001f0
// Address: 006001f0
// Address Range: [[006001f0, 00600226]]
// Convention: __cdecl
// Signature: time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 0050704f [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1fd0 (005b1fd0) at 005b24c6 [UNCONDITIONAL_CALL]
//   crt_io.c_utime_FUN_00608160 (00608160) at 006081cc [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CCheckOutItem_processFiles_FUN_004b4220 (004b4220) at 004b4e5f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bbf34 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b5be9 [UNCONDITIONAL_CALL]
//   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 (0046b9a0) at 0046baf8 [UNCONDITIONAL_CALL]
//   sound_mp3.cpp_testMP3DecoderBenchmark_FUN_00534210 (00534210) at 00534347 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005adc38 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_time.c_get_local_time_FUN_00607150
//   crt_time.c_mktime_FUN_00600f80

#include "nocturne.h"

time_t __cdecl crt_time_c_time_with_rounding_FUN_006001f0(time_t *optional_output)

{
  int extraout_EAX;
  time_t tVar1;
  BADSPACEBASE *in_ESP;
  int iStack_24;
  
  crt_time_c_get_local_time_FUN_00607150((tm *)&stack0xffffffd8);
  if (499 < extraout_EAX) {
    iStack_24 = iStack_24 + 1;
  }
  tVar1 = crt_time_c_mktime_FUN_00600f80((tm *)&iStack_24);
  if (optional_output != (time_t *)0x0) {
    *optional_output = tVar1;
  }
  return tVar1;
}


// Assembly code:
// 006001f0: PUSH EBX
//   Label: crt_time.c_time_with_rounding_FUN_006001f0
// 006001f1: SUB ESP,0x24
// 006001f4: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 006001f8: MOV EAX,ESP
// 006001fa: PUSH EAX
// 006001fb: CALL crt_time.c_get_local_time_FUN_00607150
//   XREF to: 00607150 (UNCONDITIONAL_CALL)
// 00600200: ADD ESP,0x4
// 00600203: CMP EAX,0x1f4
// 00600208: JL 0x0060020d
//   XREF to: 0060020d (CONDITIONAL_JUMP)
// 0060020a: INC dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0060020d: MOV EAX,ESP
//   Label: LAB_0060020d
// 0060020f: PUSH EAX
// 00600210: CALL crt_time.c_mktime_FUN_00600f80
//   XREF to: 00600f80 (UNCONDITIONAL_CALL)
// 00600215: ADD ESP,0x4
// 00600218: MOV EDX,EAX
// 0060021a: TEST EBX,EBX
// 0060021c: JZ 0x00600220
//   XREF to: 00600220 (CONDITIONAL_JUMP)
// 0060021e: MOV dword ptr [EBX],EAX
// 00600220: MOV EAX,EDX
//   Label: LAB_00600220
// 00600222: ADD ESP,0x24
// 00600225: POP EBX
// 00600226: RET
