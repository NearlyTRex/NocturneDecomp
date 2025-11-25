// Name: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
// Address: 0051b8a0
// Address Range: [[0051b8a0, 0051b91c]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0(CLodMesh * this_ptr, FILE * file_handle)
// Cross-references:
//   core_skeledit.cpp_FUN_00589c20 (00589c20) at 00589dc5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_loadPrecomputedLodData_FUN_0051b720 (0051b720) at 0051b73f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_meshlod_00637339
//   TerminatedCString s_meshlod_simplify_log_0067d4a0
// Function calls:
//   crt_file.c_create_directory_FUN_00600e10
//   crt_io.c_deleteFile_FUN_005ff9d0
//   shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
//   shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
//   shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
//   shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
//   shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
//   shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
//   shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
          (CLodMesh *this_ptr,FILE *file_handle)

{
  crt_file_c_create_directory_FUN_00600e10("meshlod");
  crt_io_c_deleteFile_FUN_005ff9d0("meshlod\\simplify.log");
  shape_meshlod_cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10(this_ptr);
  shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(this_ptr);
  shape_meshlod_cpp_CLodMesh_gridLoad_FUN_0051d2d0(this_ptr->next_lod,file_handle);
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(this_ptr);
  shape_meshlod_cpp_CLodMesh_buildEdges_FUN_00515ba0(this_ptr->next_lod);
  shape_meshlod_cpp_CLodMesh_createOrigSamplePoints_FUN_00517000(this_ptr);
  shape_meshlod_cpp_CLodMesh_eqLoad_FUN_0051cdf0(this_ptr,file_handle);
  shape_meshlod_cpp_CLodMesh_loadReplayData_FUN_0051d180(this_ptr,file_handle);
  return 1;
}


// Assembly code:
// 0051b8a0: PUSH EBX
//   Label: shape_meshlod.cpp_CLodMesh_initializeLodGeneration_FUN_0051b8a0
// 0051b8a1: PUSH ESI
// 0051b8a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051b8a6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0051b8aa: PUSH 0x637339
//   XREF to: 00637339 (DATA)
// 0051b8af: CALL crt_file.c_create_directory_FUN_00600e10
//   XREF to: 00600e10 (UNCONDITIONAL_CALL)
// 0051b8b4: ADD ESP,0x4
// 0051b8b7: PUSH 0x67d4a0
//   XREF to: 0067d4a0 (DATA)
// 0051b8bc: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0051b8c1: ADD ESP,0x4
// 0051b8c4: PUSH EBX
// 0051b8c5: CALL shape_meshlod.cpp_CLodMesh_normalizeAndCenterMesh_FUN_00516e10
//   XREF to: 00516e10 (UNCONDITIONAL_CALL)
// 0051b8ca: ADD ESP,0x4
// 0051b8cd: PUSH EBX
// 0051b8ce: CALL shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
//   XREF to: 00516f50 (UNCONDITIONAL_CALL)
// 0051b8d3: ADD ESP,0x4
// 0051b8d6: PUSH ESI
// 0051b8d7: MOV EDX,dword ptr [EBX + 0x34]
// 0051b8da: PUSH EDX
// 0051b8db: CALL shape_meshlod.cpp_CLodMesh_gridLoad_FUN_0051d2d0
//   XREF to: 0051d2d0 (UNCONDITIONAL_CALL)
// 0051b8e0: ADD ESP,0x8
// 0051b8e3: PUSH EBX
// 0051b8e4: CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
//   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
// 0051b8e9: ADD ESP,0x4
// 0051b8ec: MOV ECX,dword ptr [EBX + 0x34]
// 0051b8ef: PUSH ECX
// 0051b8f0: CALL shape_meshlod.cpp_CLodMesh_buildEdges_FUN_00515ba0
//   XREF to: 00515ba0 (UNCONDITIONAL_CALL)
// 0051b8f5: ADD ESP,0x4
// 0051b8f8: PUSH EBX
// 0051b8f9: CALL shape_meshlod.cpp_CLodMesh_createOrigSamplePoints_FUN_00517000
//   XREF to: 00517000 (UNCONDITIONAL_CALL)
// 0051b8fe: ADD ESP,0x4
// 0051b901: PUSH ESI
// 0051b902: PUSH EBX
// 0051b903: CALL shape_meshlod.cpp_CLodMesh_eqLoad_FUN_0051cdf0
//   XREF to: 0051cdf0 (UNCONDITIONAL_CALL)
// 0051b908: ADD ESP,0x8
// 0051b90b: PUSH ESI
// 0051b90c: PUSH EBX
// 0051b90d: CALL shape_meshlod.cpp_CLodMesh_loadReplayData_FUN_0051d180
//   XREF to: 0051d180 (UNCONDITIONAL_CALL)
// 0051b912: MOV EAX,0x1
// 0051b917: ADD ESP,0x8
// 0051b91a: POP ESI
// 0051b91b: POP EBX
// 0051b91c: RET
