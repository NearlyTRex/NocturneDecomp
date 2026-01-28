// Name: core_skeledit.cpp_FUN_00589bb0
// Address: 00589bb0
// Address Range: [[00589bb0, 00589c11]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589bb0(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589bb0(void)

{
  FILE *pFVar1;
  CLodMesh *in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x18);
  pFVar1 = shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                     (in_stack_00000004,"wt");
  in_stack_00000004->precompute_file = pFVar1;
  if (pFVar1 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x179;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
  }
  core_skeledit_cpp_FUN_0058a0f0();
  return;
}
