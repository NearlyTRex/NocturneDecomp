// Name: core_dfilter.cpp_staticInit_FUN_0046ff50
// Address: 0046ff50
// Address Range: [[0046ff50, 0046ffc6]]
// Convention: __cdecl
// Signature: void core_dfilter.cpp_staticInit_FUN_0046ff50(void)
// Globals:
//   WatcomTypeInfo g_CDemonFilterTypeInfo
//   WatcomStaticDestructorNode DAT_0066ef5c
//   WatcomStaticDestructorNode DAT_0066ef6c
//   WatcomStaticDestructorNode g_CFilterCacheDestructorNode
//   WatcomStaticDestructorNode g_CFilterFXDestructorNode
//   CDemonFilter[8] CDemonFilter_ARRAY_020a4878
//   CDemonFilter[4] CDemonFilter_ARRAY_020a4ad8
//   CFilterCache g_CFilterCacheInstance
//   CFilterFx g_CFilterFXInstance
// Function calls:
//   core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
//   core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_dfilter_cpp_staticInit_FUN_0046ff50(void)

{
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (CDemonFilter_ARRAY_020a4878,8,&g_CDemonFilterTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0066ef5c);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
            (CDemonFilter_ARRAY_020a4ad8,4,&g_CDemonFilterTypeInfo);
  crt_stdlib_c_atexit_FUN_005ff060(&DAT_0066ef6c);
  core_dfilter_cpp_CFilterCache_ctor_FUN_0046ffd0(&g_CFilterCacheInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFilterCacheDestructorNode);
  core_dfilter_cpp_CFilterFX_ctor_FUN_004706c0(&g_CFilterFXInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_CFilterFXDestructorNode);
  return;
}


// Assembly code:
// 0046ff50: PUSH 0x65b390
//   Label: core_dfilter.cpp_staticInit_FUN_0046ff50
//   XREF to: 0065b390 (DATA)
// 0046ff55: PUSH 0x8
// 0046ff57: PUSH 0x20a4878
//   XREF to: 020a4878 (DATA)
// 0046ff5c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0046ff61: ADD ESP,0xc
// 0046ff64: PUSH 0x66ef5c
//   XREF to: 0066ef5c (DATA)
// 0046ff69: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0046ff6e: ADD ESP,0x4
// 0046ff71: PUSH 0x65b390
//   XREF to: 0065b390 (DATA)
// 0046ff76: PUSH 0x4
// 0046ff78: PUSH 0x20a4ad8
//   XREF to: 020a4ad8 (DATA)
// 0046ff7d: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0046ff82: ADD ESP,0xc
// 0046ff85: PUSH 0x66ef6c
//   XREF to: 0066ef6c (DATA)
// 0046ff8a: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0046ff8f: ADD ESP,0x4
// 0046ff92: PUSH 0x20a4c08
//   XREF to: 020a4c08 (DATA)
// 0046ff97: CALL core_dfilter.cpp_CFilterCache_ctor_FUN_0046ffd0
//   XREF to: 0046ffd0 (UNCONDITIONAL_CALL)
// 0046ff9c: ADD ESP,0x4
// 0046ff9f: PUSH 0x66ef7c
//   XREF to: 0066ef7c (DATA)
// 0046ffa4: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0046ffa9: ADD ESP,0x4
// 0046ffac: PUSH 0x20a570c
//   XREF to: 020a570c (DATA)
// 0046ffb1: CALL core_dfilter.cpp_CFilterFX_ctor_FUN_004706c0
//   XREF to: 004706c0 (UNCONDITIONAL_CALL)
// 0046ffb6: ADD ESP,0x4
// 0046ffb9: PUSH 0x66ef8c
//   XREF to: 0066ef8c (DATA)
// 0046ffbe: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 0046ffc3: ADD ESP,0x4
// 0046ffc6: RET
