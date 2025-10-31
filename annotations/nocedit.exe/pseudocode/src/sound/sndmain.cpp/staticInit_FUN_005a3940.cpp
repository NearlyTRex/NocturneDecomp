// Name: sound_sndmain.cpp_staticInit_FUN_005a3940
// Address: 005a3940
// Address Range: [[005a3940, 005a399b]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_staticInit_FUN_005a3940()
// Globals:
//   undefined4 DAT_00663158
//   undefined4 DAT_0066315c
//   WatcomTypeInfo g_SfxSlotTypeInfo
//   WatcomTypeInfo g_SfxOptionsTypeInfo
//   WatcomTypeInfo g_SfxSampleTypeInfo
//   WatcomStaticDestructorNode DAT_00681ad0
//   undefined4 DAT_03f5daa0
//   SfxSlot[64] g_SfxSlots
//   SfxOptions[8] DAT_03f624a8
//   SfxSample[64] DAT_03f6282c
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_staticInit_FUN_005a3940(void)

{
  _DAT_03f5daa0 = _DAT_0066315c / _DAT_00663158;
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_SfxSlots,0x40,&g_SfxSlotTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_03f624a8,8,&g_SfxOptionsTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_03f6282c,0x40,&g_SfxSampleTypeInfo)
  ;
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681ad0);
  return;
}


// Assembly code:
// 005a3940: FLD float ptr [0x0066315c]
//   Label: sound_sndmain.cpp_staticInit_FUN_005a3940
//   XREF to: 0066315c (READ)
// 005a3946: FDIV float ptr [0x00663158]
//   XREF to: 00663158 (READ)
// 005a394c: PUSH 0x663180
//   XREF to: 00663180 (DATA)
// 005a3951: PUSH 0x40
// 005a3953: PUSH 0x3f5daa4
//   XREF to: 03f5daa4 (DATA)
// 005a3958: FSTP float ptr [0x03f5daa0]
//   XREF to: 03f5daa0 (WRITE)
// 005a395e: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005a3963: ADD ESP,0xc
// 005a3966: PUSH 0x6631a0
//   XREF to: 006631a0 (DATA)
// 005a396b: PUSH 0x8
// 005a396d: PUSH 0x3f624a8
//   XREF to: 03f624a8 (DATA)
// 005a3972: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005a3977: ADD ESP,0xc
// 005a397a: PUSH 0x6631c0
//   XREF to: 006631c0 (DATA)
// 005a397f: PUSH 0x40
// 005a3981: PUSH 0x3f6282c
//   XREF to: 03f6282c (DATA)
// 005a3986: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005a398b: ADD ESP,0xc
// 005a398e: PUSH 0x681ad0
//   XREF to: 00681ad0 (DATA)
// 005a3993: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005a3998: ADD ESP,0x4
// 005a399b: RET
