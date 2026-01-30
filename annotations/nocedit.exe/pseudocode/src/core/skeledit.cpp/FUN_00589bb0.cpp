// Name: core_skeledit.cpp_FUN_00589bb0
// Address: 00589bb0
// Address Range: [[00589bb0, 00589c11]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_00589bb0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_00589bb0(void)

{
  _FILE *p_Var1;
  CLodMesh *in_stack_00000004;
  
  __STK(0x18);
  p_Var1 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                     (in_stack_00000004,"wt");
  in_stack_00000004->precompute_file = p_Var1;
  if (p_Var1 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x179;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
  }
  core_skeledit_cpp_FUN_0058a0f0();
  return;
}
