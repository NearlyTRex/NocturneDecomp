// Name: core_skeleton.cpp_staticInit_FUN_00599670
// Address: 00599670
// Address Range: [[00599670, 005996b2]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_staticInit_FUN_00599670()
// Globals:
//   WatcomTypeInfo g_CDeformableModelTypeInfo
//   WatcomTypeInfo g_CSkeletonTypeInfo
//   WatcomStaticDestructorNode DAT_00681a4f
//   WatcomStaticDestructorNode DAT_00681a5f
//   CDeformableModel[64] g_DeformableModelPool
//   CSkeleton[40] g_SkeletonPool
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void core_skeleton_cpp_staticInit_FUN_00599670(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_DeformableModelPool,0x40,&g_CDeformableModelTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681a4f);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_SkeletonPool,0x28,&g_CSkeletonTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_00681a5f);
  return;
}


// Assembly code:
// 00599670: PUSH 0x662ef0
//   Label: core_skeleton.cpp_staticInit_FUN_00599670
//   XREF to: 00662ef0 (DATA)
// 00599675: PUSH 0x40
// 00599677: PUSH 0x368c8a0
//   XREF to: 0368c8a0 (DATA)
// 0059967c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00599681: ADD ESP,0xc
// 00599684: PUSH 0x681a4f
//   XREF to: 00681a4f (DATA)
// 00599689: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0059968e: ADD ESP,0x4
// 00599691: PUSH 0x662f10
//   XREF to: 00662f10 (DATA)
// 00599696: PUSH 0x28
// 00599698: PUSH 0x38cc8a4
//   XREF to: 038cc8a4 (DATA)
// 0059969d: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005996a2: ADD ESP,0xc
// 005996a5: PUSH 0x681a5f
//   XREF to: 00681a5f (DATA)
// 005996aa: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005996af: ADD ESP,0x4
// 005996b2: RET
