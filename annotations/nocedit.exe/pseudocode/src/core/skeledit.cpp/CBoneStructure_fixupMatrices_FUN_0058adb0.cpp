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
  uint unaff_EDI;
  double dVar2;
  int *in_stack_0000000c;
  char *pcVar3;
  uint local_18;
  uint uVar4;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x30);
  iVar1 = 0;
  if (0 < *in_stack_0000000c) {
    matrix = (float *)(in_stack_0000000c + 0x16);
    do {
      pcVar3 = (char *)matrix;
      dVar2 = core_xform_cpp_determinant_FUN_005f61c0((CMatrix3x4f *)matrix);
      if (dVar2 < 0.0) {
        pcVar3 = "CBoneStructure::fixupMatrices - %s is mirrored.";
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x3b2;
        uVar4 = unaff_EDI;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::fixupMatrices - %s is mirrored.");
        local_18 = unaff_EDI;
        unaff_EDI = uVar4;
      }
      if (((local_18 & 0x7fffffff) == 0) && ((CMatrix3x4f *)pcVar3 == (CMatrix3x4f *)0x0)) {
        g_CurrentLineNumber = 0x3b6;
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is singular.",in_stack_0000000c + iVar1 * 0x21 + 1);
      }
      core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,0);
      iVar1 = iVar1 + 1;
      matrix = matrix + 0x21;
    } while (iVar1 < *in_stack_0000000c);
  }
  core_skeledit_cpp_FUN_0058ac80();
  return;
}
