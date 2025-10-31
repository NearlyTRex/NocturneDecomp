// Name: core_gore.cpp_staticInit_FUN_004eb8c0
// Address: 004eb8c0
// Address Range: [[004eb8c0, 004eb94d]]
// Convention: __cdecl
// Signature: void core_gore.cpp_staticInit_FUN_004eb8c0(void)
// Globals:
//   WatcomTypeInfo g_CBloodParticleTypeInfo
//   WatcomTypeInfo g_CBloodSplatTypeInfo
//   WatcomTypeInfo g_CBloodPoolTypeInfo
//   WatcomTypeInfo g_CFootstepTypeInfo
//   WatcomStaticDestructorNode g_CGoreDestructorNode
//   WatcomStaticDestructorNode DAT_0067b980
//   WatcomStaticDestructorNode DAT_0067b990
//   CGore g_CGoreInstance
//   CBloodParticle[256] DAT_02d833d4
//   CBloodSplat[2000] DAT_02d873dc
//   CBloodPool[32] DAT_02da8724
//   CFootstep[1000] DAT_02da8c2c
// Function calls:
//   core_gore.cpp_FUN_004ed730
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_gore_cpp_staticInit_FUN_004eb8c0(void)

{
  core_gore_cpp_FUN_004ed730(&g_CGoreInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CGoreDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_02d833d4,0x100,&g_CBloodParticleTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067b980);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_02d873dc,2000,&g_CBloodSplatTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (DAT_02da8724,0x20,&g_CBloodPoolTypeInfo);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_02da8c2c,1000,&g_CFootstepTypeInfo)
  ;
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0067b990);
  return;
}


// Assembly code:
// 004eb8c0: PUSH 0x2d83364
//   Label: core_gore.cpp_staticInit_FUN_004eb8c0
//   XREF to: 02d83364 (DATA)
// 004eb8c5: CALL core_gore.cpp_FUN_004ed730
//   XREF to: 004ed730 (UNCONDITIONAL_CALL)
// 004eb8ca: ADD ESP,0x4
// 004eb8cd: PUSH 0x67b970
//   XREF to: 0067b970 (DATA)
// 004eb8d2: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004eb8d7: ADD ESP,0x4
// 004eb8da: PUSH 0x65f080
//   XREF to: 0065f080 (DATA)
// 004eb8df: PUSH 0x100
// 004eb8e4: PUSH 0x2d833d4
//   XREF to: 02d833d4 (DATA)
// 004eb8e9: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004eb8ee: ADD ESP,0xc
// 004eb8f1: PUSH 0x67b980
//   XREF to: 0067b980 (DATA)
// 004eb8f6: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004eb8fb: ADD ESP,0x4
// 004eb8fe: PUSH 0x65f0a0
//   XREF to: 0065f0a0 (DATA)
// 004eb903: PUSH 0x7d0
// 004eb908: PUSH 0x2d873dc
//   XREF to: 02d873dc (DATA)
// 004eb90d: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004eb912: ADD ESP,0xc
// 004eb915: PUSH 0x65f0c0
//   XREF to: 0065f0c0 (DATA)
// 004eb91a: PUSH 0x20
// 004eb91c: PUSH 0x2da8724
//   XREF to: 02da8724 (DATA)
// 004eb921: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004eb926: ADD ESP,0xc
// 004eb929: PUSH 0x65f0e0
//   XREF to: 0065f0e0 (DATA)
// 004eb92e: PUSH 0x3e8
// 004eb933: PUSH 0x2da8c2c
//   XREF to: 02da8c2c (DATA)
// 004eb938: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004eb93d: ADD ESP,0xc
// 004eb940: PUSH 0x67b990
//   XREF to: 0067b990 (DATA)
// 004eb945: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004eb94a: ADD ESP,0x4
// 004eb94d: RET
