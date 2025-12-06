// Name: shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50
// Address: 00516f50
// Address Range: [[00516f50, 00516ff5]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh * this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_createNextLOD_FUN_00516f50(CLodMesh *this_ptr)

{
  CLodMesh *pCVar1;
  CLodMesh *in_stack_00000004;
  
  g_CurrentDebugLine = 0x55f;
  g_CurrentDebugFilename = "..\\shape\\meshlod.cpp";
  if (in_stack_00000004->next_lod != (CLodMesh *)0x0) {
    pCVar1 = shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(in_stack_00000004->next_lod);
    shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
  }
  pCVar1 = (CLodMesh *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x74,"..\\shape\\meshlod.cpp",0x560);
  if (pCVar1 != (CLodMesh *)0x0) {
    pCVar1 = shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(pCVar1);
  }
  in_stack_00000004->next_lod = pCVar1;
  if (pCVar1 != (CLodMesh *)0x0) {
    shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_00000004->next_lod,in_stack_00000004);
    return;
  }
  g_CurrentFilename = "..\\shape\\meshlod.cpp";
  g_CurrentLineNumber = 0x561;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(in_stack_00000004->next_lod,in_stack_00000004);
  return;
}
