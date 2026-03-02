// Name: core_skeledit.cpp_createMeshPrecomputeFile_FUN_00589bb0
// Address: 00589bb0
// Address Range: [[00589bb0, 00589c11]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_createMeshPrecomputeFile_FUN_00589bb0(CLodMesh *mesh_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_createMeshPrecomputeFile_FUN_00589bb0(CLodMesh *mesh_ptr)

{
  _FILE *p_Var1;
  CLodMeshPrecomputeEntry *in_stack_00000008;
  
  __STK();
  p_Var1 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(mesh_ptr,"wt");
  mesh_ptr->precompute_file = p_Var1;
  if (p_Var1 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x179;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
  }
  core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0
            (in_stack_00000008,mesh_ptr->precompute_file);
  return;
}
