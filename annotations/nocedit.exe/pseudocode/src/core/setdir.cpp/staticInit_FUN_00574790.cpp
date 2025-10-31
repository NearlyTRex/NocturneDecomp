// Name: core_setdir.cpp_staticInit_FUN_00574790
// Address: 00574790
// Address Range: [[00574790, 005747cb]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_staticInit_FUN_00574790(void)
// Globals:
//   WatcomTypeInfo g_CBoundingBox3DTypeInfo
//   WatcomTypeInfo g_CZThumbTypeInfo
//   WatcomStaticDestructorNode g_CZThumbPoolDestructorNode
//   CZThumb[1500] g_CZThumbPool
//   CBoundingBox3D[2000] g_VDNearbyActorBoundingBoxes
// Function calls:
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_setdir_cpp_staticInit_FUN_00574790(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(g_CZThumbPool,0x5dc,&g_CZThumbTypeInfo)
  ;
  crt_stdlib_c_atexit_FUN_005ff060(&g_CZThumbPoolDestructorNode);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (g_VDNearbyActorBoundingBoxes,2000,&g_CBoundingBox3DTypeInfo);
  return;
}


// Assembly code:
// 00574790: PUSH 0x6629f0
//   Label: core_setdir.cpp_staticInit_FUN_00574790
//   XREF to: 006629f0 (DATA)
// 00574795: PUSH 0x5dc
// 0057479a: PUSH 0x3347108
//   XREF to: 03347108 (DATA)
// 0057479f: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005747a4: ADD ESP,0xc
// 005747a7: PUSH 0x6814c4
//   XREF to: 006814c4 (DATA)
// 005747ac: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 005747b1: ADD ESP,0x4
// 005747b4: PUSH 0x659900
//   XREF to: 00659900 (DATA)
// 005747b9: PUSH 0x7d0
// 005747be: PUSH 0x3357aac
//   XREF to: 03357aac (DATA)
// 005747c3: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005747c8: ADD ESP,0xc
// 005747cb: RET
