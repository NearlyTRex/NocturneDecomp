// Name: sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620
// Address: 005a9620
// Address Range: [[005a9620, 005a9654]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620(char * filename, CVector3d * position_source_ptr)
// Function calls:
//   sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

uint __cdecl
sound_sndmain_cpp_startSfxTrackedDoublePosition_FUN_005a9620
          (char *filename,CVector3d *position_source_ptr)

{
  uint uVar1;
  CVector3d *in_stack_00000010;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(1);
  sound_sndmain_cpp_setNextSfxTrackedDoublePosition_FUN_005a8970(in_stack_00000010);
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90((char *)in_stack_00000010);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}


// Assembly code:
// 005a9620: PUSH EBX
//   Label: sound_sndmain.cpp_startSfxTrackedDoublePosition_FUN_005a9620
// 005a9621: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005a9626: PUSH 0x1
// 005a9628: CALL sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   XREF to: 005a8bb0 (UNCONDITIONAL_CALL)
// 005a962d: ADD ESP,0x4
// 005a9630: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a9634: PUSH EDX
// 005a9635: CALL sound_sndmain.cpp_setNextSfxTrackedDoublePosition_FUN_005a8970
//   XREF to: 005a8970 (UNCONDITIONAL_CALL)
// 005a963a: ADD ESP,0x4
// 005a963d: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a9641: PUSH ECX
// 005a9642: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005a9647: ADD ESP,0x4
// 005a964a: MOV EBX,EAX
// 005a964c: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005a9651: MOV EAX,EBX
// 005a9653: POP EBX
// 005a9654: RET
