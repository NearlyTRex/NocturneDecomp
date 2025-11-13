// Name: sound_sndmain.cpp_lockSound_PollStream_FUN_005ace90
// Address: 005ace90
// Address Range: [[005ace90, 005acf13]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_lockSound_PollStream_FUN_005ace90()
// Cross-references:
//   sound_sndmain.cpp_processAudio_FUN_005abe20 (005abe20) at 005abe6f [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00651097
//   undefined4 DAT_0065109f
//   undefined4 DAT_006510a7
//   undefined4 DAT_00663164
//   CSfxSample[64] g_SfxSamples
//   undefined4 DAT_03f629ac
//   undefined4 DAT_03f6882c
// Function calls:
//   sound_sndmain.cpp_CSfxSlot_pollStream_FUN_005a6730
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_sndmain.cpp_lockSound_PollStream(undefined4 param_1) */

void sound_sndmain_cpp_lockSound_PollStream_FUN_005ace90(void)

{
  CSfxSlot *extraout_EAX;
  CSfxSlot *this_ptr;
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  pCVar1 = g_SfxSamples;
  this_ptr = extraout_EAX;
  do {
    this_ptr = (CSfxSlot *)sound_sndmain_cpp_CSfxSlot_pollStream_FUN_005a6730(this_ptr);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != (CSfxSample *)&DAT_03f6882c);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return;
}


// Assembly code:
// 005ace90: PUSH EBX
//   Label: sound_sndmain.cpp_lockSound_PollStream_FUN_005ace90
// 005ace91: PUSH ESI
// 005ace92: PUSH EBP
// 005ace93: MOV EBP,ESP
// 005ace95: SUB ESP,0x10
// 005ace98: AND ESP,0xfffffff8
// 005ace9b: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005acea0: FLD float ptr [0x00663164]
//   XREF to: 00663164 (READ)
// 005acea6: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005acea9: FST double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005aceac: FLD ST0
// 005aceae: FADD double ptr [0x00651097]
//   XREF to: 00651097 (READ)
// 005aceb4: FXCH
// 005aceb6: FADD double ptr [0x0065109f]
//   XREF to: 0065109f (READ)
// 005acebc: FXCH
// 005acebe: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 005acec2: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005acec6: TEST EDX,EDX
// 005acec8: JNZ 0x005acefb
//   XREF to: 005acefb (CONDITIONAL_JUMP)
// 005aceca: MOV EBX,0x3f6282c
//   Label: LAB_005aceca
//   XREF to: 03f6282c (PARAM)
// 005acecf: LEA ESI,[EBX + 0x6000]
//   XREF to: 03f6882c (DATA)
// 005aced5: PUSH dword ptr [ESP + 0x8]
//   Label: LAB_005aced5
//   XREF to: Stack[-0x18] (READ)
// 005aced9: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x14] (READ)
// 005acedd: PUSH EBX
//   XREF to: 03f6282c (DATA)
//   XREF to: 03f629ac (DATA)
// 005acede: CALL sound_sndmain.cpp_CSfxSlot_pollStream_FUN_005a6730
//   XREF to: 005a6730 (UNCONDITIONAL_CALL)
// 005acee3: ADD EBX,0x180
//   XREF to: 03f629ac (PARAM)
// 005acee9: ADD ESP,0xc
// 005aceec: CMP EBX,ESI
// 005aceee: JNZ 0x005aced5
//   XREF to: 005aced5 (CONDITIONAL_JUMP)
// 005acef0: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005acef5: MOV ESP,EBP
// 005acef7: POP EBP
// 005acef8: POP ESI
// 005acef9: POP EBX
// 005acefa: RET
// 005acefb: FLD double ptr [ESP]
//   Label: LAB_005acefb
//   XREF to: Stack[-0x20] (DATA)
// 005acefe: MOV EBX,dword ptr [0x00663164]
//   XREF to: 00663164 (READ)
// 005acf04: FADD double ptr [0x006510a7]
//   XREF to: 006510a7 (READ)
// 005acf0a: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005acf0e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 005acf12: JMP 0x005aceca
//   XREF to: 005aceca (UNCONDITIONAL_JUMP)
