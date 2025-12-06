// Name: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
// Address: 0058adb0
// Address Range: [[0058adb0, 0058aea1]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure * this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure *this_ptr)

{
  int iVar1;
  float *matrix;
  double dVar2;
  int *in_stack_0000000c;
  int iVar3;
  uint uStack_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x30);
  iVar1 = 0;
  if (0 < *in_stack_0000000c) {
    matrix = (float *)(in_stack_0000000c + 0x16);
    do {
      dVar2 = core_xform_cpp_determinant_FUN_005f61c0((CMatrix3x4f *)matrix);
      iVar3 = SUB84 /* extract 2-byte value */(dVar2,0);
      if (dVar2 < 0.0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x3b2;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::fixupMatrices - %s is mirrored.",uStack_14);
      }
      if ((((ulonglong)dVar2 & 0x7fffffff00000000) == 0) && (iVar3 == 0)) {
        g_CurrentLineNumber = 0x3b6;
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is singular.","CBoneStructure::fixupMatrices - %s is singular.",
                   in_stack_0000000c + iVar1 * 0x21 + 1);
      }
      core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,0);
      iVar1 = iVar1 + 1;
      matrix = matrix + 0x21;
    } while (iVar1 < *in_stack_0000000c);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
