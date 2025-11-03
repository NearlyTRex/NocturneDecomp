// Name: core_set.cpp_staticInit_FUN_00569040
// Address: 00569040
// Address Range: [[00569040, 005690bf]]
// Convention: __cdecl
// Signature: void core_set.cpp_staticInit_FUN_00569040(void)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   WatcomStaticDestructorNode g_CDemonSetDestructorNode
//   WatcomStaticDestructorNode g_CDemonCameraDestructorNode
//   WatcomStaticDestructorNode g_CDemonRaytraceDestructorNode
//   WatcomStaticDestructorNode g_CKeyFramedModelDestructorNode
//   CDemonSet g_CDemonSetInstance
//   CDemonCamera g_CDemonCameraInstance
//   CDemonRaytrace g_CDemonRaytraceInstance
//   CKeyFramedModel g_CKeyFramedModelInstance
//   CVector3f[4000] g_FaceNormalArray
// Function calls:
//   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
//   core_set.cpp_CDemonSet_ctor_FUN_005690c0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_set_cpp_staticInit_FUN_00569040(void)

{
  core_set_cpp_CDemonSet_ctor_FUN_005690c0(&g_CDemonSetInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonSetDestructorNode);
  core_dcamera_cpp_CDemonCamera_ctor_FUN_0044c030(&g_CDemonCameraInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonCameraDestructorNode);
  core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00494200(&g_CDemonRaytraceInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CDemonRaytraceDestructorNode);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_CKeyFramedModelInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CKeyFramedModelDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_FaceNormalArray,4000,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 00569040: PUSH 0x3114278
//   Label: core_set.cpp_staticInit_FUN_00569040
//   XREF to: 03114278 (DATA)
// 00569045: CALL core_set.cpp_CDemonSet_ctor_FUN_005690c0
//   XREF to: 005690c0 (UNCONDITIONAL_CALL)
// 0056904a: ADD ESP,0x4
// 0056904d: PUSH 0x681088
//   XREF to: 00681088 (DATA)
// 00569052: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00569057: ADD ESP,0x4
// 0056905a: PUSH 0x32758e4
//   XREF to: 032758e4 (DATA)
// 0056905f: CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0044c030
//   XREF to: 0044c030 (UNCONDITIONAL_CALL)
// 00569064: ADD ESP,0x4
// 00569067: PUSH 0x681098
//   XREF to: 00681098 (DATA)
// 0056906c: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00569071: ADD ESP,0x4
// 00569074: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00569079: CALL core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00494200
//   XREF to: 00494200 (UNCONDITIONAL_CALL)
// 0056907e: ADD ESP,0x4
// 00569081: PUSH 0x6810a8
//   XREF to: 006810a8 (DATA)
// 00569086: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0056908b: ADD ESP,0x4
// 0056908e: PUSH 0x32780a4
//   XREF to: 032780a4 (DATA)
// 00569093: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 00569098: ADD ESP,0x4
// 0056909b: PUSH 0x6810b8
//   XREF to: 006810b8 (DATA)
// 005690a0: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005690a5: ADD ESP,0x4
// 005690a8: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005690ad: PUSH 0xfa0
// 005690b2: PUSH 0x32c1ccc
//   XREF to: 032c1ccc (DATA)
// 005690b7: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005690bc: ADD ESP,0xc
// 005690bf: RET
