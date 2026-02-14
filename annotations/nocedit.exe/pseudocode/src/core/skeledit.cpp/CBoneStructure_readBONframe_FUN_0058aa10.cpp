// Name: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
// Address: 0058aa10
// Address Range: [[0058aa10, 0058aba8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure *this_ptr,_FILE *file,int mirror_flag)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure *this_ptr,_FILE *file,int mirror_flag)

{
  CMatrix3x4f *matrix;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000004;
  
  __STK();
  for (iVar4 = 0; iVar4 < *in_stack_00000004; iVar4 = iVar4 + 1) {
    iVar2 = in_stack_00000004[iVar4 + 0xce5];
    iVar3 = iVar2 * 0x84;
    matrix = (CMatrix3x4f *)(in_stack_00000004 + iVar2 * 0x21 + 0x16);
    iVar1 = _fscanf((_FILE *)this_ptr,"%f,%f,%f\n",matrix,
                       in_stack_00000004 + iVar2 * 0x21 + 0x1a,
                       in_stack_00000004 + iVar2 * 0x21 + 0x1e);
    if (iVar1 == 3) goto LAB_0058aa88;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x310;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - file is corrupt!");
LAB_0058aa88:
          iVar1 = _fscanf((_FILE *)this_ptr,"%f,%f,%f\n",
                             in_stack_00000004 + iVar2 * 0x21 + 0x17,
                             in_stack_00000004 + iVar2 * 0x21 + 0x1b,
                             in_stack_00000004 + iVar2 * 0x21 + 0x1f);
        } while (iVar1 != 3);
        iVar1 = _fscanf((_FILE *)this_ptr,"%f,%f,%f\n",
                           in_stack_00000004 + iVar2 * 0x21 + 0x18,
                           in_stack_00000004 + iVar2 * 0x21 + 0x1c,
                           in_stack_00000004 + iVar2 * 0x21 + 0x20);
      } while (iVar1 != 3);
      iVar1 = _fscanf((_FILE *)this_ptr,"%f,%f,%f\n",in_stack_00000004 + iVar2 * 0x21 + 0x19,
                         in_stack_00000004 + iVar2 * 0x21 + 0x1d,
                         in_stack_00000004 + iVar2 * 0x21 + 0x21);
    } while (iVar1 != 3);
    if (file != (_FILE *)0x0) {
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x5b) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x5b) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 99) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 99) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x7b) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x7b) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x5f) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x5f) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x67) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x67) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x83) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x83) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x7f) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x7f) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x87) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x87) ^ 0x80;
    }
    iVar2 = core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(matrix);
    if (iVar2 != 0) {
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x5b) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x5b) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 99) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 99) ^ 0x80;
      *(byte *)((int)in_stack_00000004 + iVar3 + 0x5f) =
           *(byte *)((int)in_stack_00000004 + iVar3 + 0x5f) ^ 0x80;
    }
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,1);
  }
  core_skeledit_cpp_FUN_0058ac80();
  if ((this_ptr->bones[0].name[8] & 0x20U) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeledit.cpp";
  g_CurrentLineNumber = 0x33b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - error reading file!");
  return;
}
