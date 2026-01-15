// Name: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
// Address: 0058adb0
// Address Range: [[0058adb0, 0058aea1]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure * this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure *this_ptr)

{
  int *piVar1;
  int iVar2;
  float *matrix;
  double dVar3;
  int *in_stack_00000004;
  int iStack_24;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x30);
  piVar1 = in_stack_00000004;
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    matrix = (float *)(in_stack_00000004 + 0x16);
    do {
      dVar3 = core_xform_cpp_determinant_FUN_005f61c0((CMatrix3x4f *)matrix);
      if (dVar3 < 0.0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x3b2;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is mirrored.",piVar1 + iVar2 * 0x21 + 1);
      }
      iStack_24 = SUB84 /* extract 2-byte value */(dVar3,0);
      if ((((ulonglong)dVar3 & 0x7fffffff00000000) == 0) && (iStack_24 == 0)) {
        g_CurrentLineNumber = 0x3b6;
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is singular.",piVar1 + iVar2 * 0x21 + 1);
      }
      core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,0);
      iVar2 = iVar2 + 1;
      matrix = matrix + 0x21;
    } while (iVar2 < *in_stack_00000004);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
