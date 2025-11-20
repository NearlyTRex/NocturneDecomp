// Name: crt_time.c_asctime_FUN_00601768
// Address: 00601768
// Address Range: [[00601768, 0060177f]]
// Convention: __watcallStack
// Signature: char * crt_time.c_asctime_FUN_00601768(tm * timeptr)
// Cross-references:
//   core_main.c_displayErrorAndQuit_FUN_00506f10 (00506f10) at 00507094 [UNCONDITIONAL_CALL]
//   core_sound.cpp_playSfxInternal_FUN_005b1fd0 (005b1fd0) at 005b24f2 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_logSoundError_FUN_005adba0 (005adba0) at 005adc62 [UNCONDITIONAL_CALL]
// Globals:
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_thread.c_GetTLS_FUN_0060242c
//   crt_time.c_asctimeFormat_FUN_00601678

#include "nocturne.h"

char * __watcallStack crt_time_c_asctime_FUN_00601768(tm *timeptr)

{
  ThreadData *pTVar1;
  char *pcVar2;
  
  pTVar1 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
  pcVar2 = crt_time_c_asctimeFormat_FUN_00601678(timeptr,pTVar1->asctime_buffer);
  return pcVar2;
}


// Assembly code:
// 00601768: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: crt_time.c_asctime_FUN_00601768
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060176e: ADD EAX,0x38
// 00601771: PUSH EAX
// 00601772: MOV EDX,dword ptr [ESP + 0x8]
// 00601776: PUSH EDX
// 00601777: CALL crt_time.c_asctimeFormat_FUN_00601678
//   XREF to: 00601678 (UNCONDITIONAL_CALL)
// 0060177c: ADD ESP,0x8
// 0060177f: RET
