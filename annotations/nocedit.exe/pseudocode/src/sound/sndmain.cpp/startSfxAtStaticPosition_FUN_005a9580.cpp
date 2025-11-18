// Name: sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580
// Address: 005a9580
// Address Range: [[005a9580, 005a95d3]]
// Convention: __cdecl
// Signature: uint sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580(char * filename, double pos_x, double pos_y, double pos_z)
// Function calls:
//   sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

uint __cdecl
sound_sndmain_cpp_startSfxAtStaticPosition_FUN_005a9580
          (char *filename,double pos_x,double pos_y,double pos_z)

{
  uint uVar1;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_clearNextSfxFlagBits_FUN_005a8bb0(1);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
            (pos_y,pos_z,(double)CONCAT44(in_stack_00000024,in_stack_00000020));
  uVar1 = sound_sndmain_cpp_startSfx_FUN_005a8e90(pos_y._0_4_);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}


// Assembly code:
// 005a9580: PUSH EBX
//   Label: sound_sndmain.cpp_startSfxAtStaticPosition_FUN_005a9580
// 005a9581: PUSH ESI
// 005a9582: PUSH EDI
// 005a9583: PUSH EBP
// 005a9584: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 005a9589: PUSH 0x1
// 005a958b: CALL sound_sndmain.cpp_clearNextSfxFlagBits_FUN_005a8bb0
//   XREF to: 005a8bb0 (UNCONDITIONAL_CALL)
// 005a9590: ADD ESP,0x4
// 005a9593: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 005a9597: PUSH EDX
// 005a9598: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x18] (READ)
// 005a959c: PUSH ECX
// 005a959d: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 005a95a1: PUSH EBX
// 005a95a2: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x10] (READ)
// 005a95a6: PUSH ESI
// 005a95a7: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 005a95ab: PUSH EDI
// 005a95ac: MOV EBP,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 005a95b0: PUSH EBP
// 005a95b1: CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 005a95b6: ADD ESP,0x18
// 005a95b9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a95bd: PUSH EAX
// 005a95be: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 005a95c3: ADD ESP,0x4
// 005a95c6: MOV EBX,EAX
// 005a95c8: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 005a95cd: MOV EAX,EBX
// 005a95cf: POP EBP
// 005a95d0: POP EDI
// 005a95d1: POP ESI
// 005a95d2: POP EBX
// 005a95d3: RET
