// Name: crt_memory.c_free_FUN_00601cd0
// Address: 00601cd0
// Address Range: [[00601cd0, 00601cdd]]
// Convention: __cdecl
// Signature: void crt_memory.c_free_FUN_00601cd0(void * ptr)
// Cross-references:
//   crt_env.c_findEnvVar_FUN_0060f1f0 (0060f1f0) at 0060f27d [UNCONDITIONAL_CALL]
//   crt_env.c_putenv_internal_FUN_0060ee80 (0060ee80) at 0060ef40 [UNCONDITIONAL_CALL]
//   crt_io.c_realpath_FUN_00601140 (00601140) at 006011b1 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_freeBuffer_FUN_0060d7a0 (0060d7a0) at 0060d7a5 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f7a1 [UNCONDITIONAL_CALL]
//   crt_startup.c_GetModuleFileNameCompat_FUN_0060a560 (0060a560) at 0060a5ba [UNCONDITIONAL_CALL]
//   crt_stdio.c_fclose_FUN_00601fd0 (00601fd0) at 00602055 [UNCONDITIONAL_CALL]
//   crt_tls.c_initialize_thread_tls_data_FUN_0060a2d8 (0060a2d8) at 0060a310 [UNCONDITIONAL_CALL]
//   crt_tls.c_register_thread_data_FUN_0060cbd0 (0060cbd0) at 0060cc01 [UNCONDITIONAL_CALL]
//   crt_tls.c_unregister_thread_data_FUN_0060cc3c (0060cc3c) at 0060cc67 [UNCONDITIONAL_CALL]
//   crt_unknown.c_DeleteCritcalSectionsMaybe_FUN_00609ff4 (00609ff4) at 0060a023 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_006093e8 (006093e8) at 006093fa [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060ccb4 (0060ccb4) at 0060cccd [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060e4f0 (0060e4f0) at 0060e525 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fb40 (0060fb40) at 0060fbef [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_0060fe94 (0060fe94) at 0060ff26 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_006107f0 (006107f0) at 00610862 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00610900 (00610900) at 00610955 [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticFinal_FUN_00602748 (00602748) at 00602770 [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticFinal_FUN_00608bb0 (00608bb0) at 00608bbb [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticFinal_FUN_0060c73c (0060c73c) at 0060c769 [UNCONDITIONAL_CALL]
//   crt_unknown.c_staticInit_FUN_0060c650 (0060c650) at 0060c721 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_debugFree_FUN_0050f460 (0050f460) at 0050f4f1 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_allocatePolygons_FUN_005d2320 (005d2320) at 005d235b [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_allocateVertices_FUN_005d2500 (005d2500) at 005d252d [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_free_FUN_005d2600 (005d2600) at 005d2626 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_removePolygon_FUN_005d2f50 (005d2f50) at 005d3000 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_CObj_removeVertex_FUN_005d3140 (005d3140) at 005d3223 [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_COptimize_FUN_005d7000 (005d7000) at 005d70bc [UNCONDITIONAL_CALL]
//   shape_superopt.cpp_FUN_005c79f0 (005c79f0) at 005c7a80 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0

#include "nocturne.h"

void __cdecl crt_memory_c_free_FUN_00601cd0(void *ptr)

{
  crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(ptr);
  return;
}


// Assembly code:
// 00601cd0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: crt_memory.c_free_FUN_00601cd0
//   XREF to: Stack[0x4] (READ)
// 00601cd4: PUSH EDX
// 00601cd5: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 00601cda: ADD ESP,0x4
// 00601cdd: RET
