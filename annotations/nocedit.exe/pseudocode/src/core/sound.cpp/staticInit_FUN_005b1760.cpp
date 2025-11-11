// Name: core_sound.cpp_staticInit_FUN_005b1760
// Address: 005b1760
// Address Range: [[005b1760, 005b179b]]
// Convention: __cdecl
// Signature: void core_sound.cpp_staticInit_FUN_005b1760(void)
// Globals:
//   WatcomTypeInfo g_STrainNoiseTypeInfo
//   WatcomStaticDestructorNode DAT_00681ed0
//   CSound g_CSoundInstance
//   CStrList CStrList_03f6b128
//   STrainNoise[10] STrainNoise_ARRAY_03f6b7bc
// Function calls:
//   core_sound.cpp_CSound_FUN_005b2ce0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20

#include "nocturne.h"

void __cdecl core_sound_cpp_staticInit_FUN_005b1760(void)

{
  core_sound_cpp_CSound_FUN_005b2ce0(&g_CSoundInstance);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&CStrList_03f6b128);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681ed0);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (STrainNoise_ARRAY_03f6b7bc,10,&g_STrainNoiseTypeInfo);
  return;
}


// Assembly code:
// 005b1760: PUSH 0x3f6af64
//   Label: core_sound.cpp_staticInit_FUN_005b1760
//   XREF to: 03f6af64 (DATA)
// 005b1765: CALL core_sound.cpp_CSound_FUN_005b2ce0
//   XREF to: 005b2ce0 (UNCONDITIONAL_CALL)
// 005b176a: ADD ESP,0x4
// 005b176d: PUSH 0x3f6b128
//   XREF to: 03f6b128 (DATA)
// 005b1772: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 005b1777: ADD ESP,0x4
// 005b177a: PUSH 0x681ed0
//   XREF to: 00681ed0 (DATA)
// 005b177f: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005b1784: ADD ESP,0x4
// 005b1787: PUSH 0x663320
//   XREF to: 00663320 (DATA)
// 005b178c: PUSH 0xa
// 005b178e: PUSH 0x3f6b7bc
//   XREF to: 03f6b7bc (DATA)
// 005b1793: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005b1798: ADD ESP,0xc
// 005b179b: RET
