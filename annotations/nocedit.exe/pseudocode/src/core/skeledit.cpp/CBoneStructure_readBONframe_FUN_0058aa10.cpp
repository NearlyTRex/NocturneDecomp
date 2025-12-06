// Name: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
// Address: 0058aa10
// Address Range: [[0058aa10, 0058aba8]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure * this_ptr, FILE * file, int mirror_flag)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
          (CBoneStructure *this_ptr,FILE *file,int mirror_flag)

{
  CMatrix3x4f *matrix;
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000024;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x28);
  for (iVar3 = 0; iVar3 < (int)file->_ptr; iVar3 = iVar3 + 1) {
    iVar2 = (&file[0x1d7]._handle)[iVar3] * 0x84;
    matrix = (CMatrix3x4f *)((int)file + iVar2 + 0x58);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                      ((FILE *)mirror_flag,"%f,%f,%f\n",matrix,(int)file + iVar2 + 0x68,
                       (int)file + iVar2 + 0x78);
    if (iVar1 == 3) goto LAB_0058aa88;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x310;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - file is corrupt!");
LAB_0058aa88:
          iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                            ((FILE *)mirror_flag,"%f,%f,%f\n",(int)file + iVar2 + 0x5c,
                             (int)file + iVar2 + 0x6c,(int)file + iVar2 + 0x7c);
        } while (iVar1 != 3);
        iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                          ((FILE *)mirror_flag,"%f,%f,%f\n",(int)file + iVar2 + 0x60,
                           (int)file + iVar2 + 0x70,(int)file + iVar2 + 0x80);
      } while (iVar1 != 3);
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0
                        ((FILE *)mirror_flag,"%f,%f,%f\n",(int)file + iVar2 + 100,
                         (int)file + iVar2 + 0x74);
    } while (iVar1 != 3);
    if (in_stack_00000024 != 0) {
      *(byte *)((int)file + iVar2 + 0x5b) = *(byte *)((int)file + iVar2 + 0x5b) ^ 0x80;
      *(byte *)((int)file + iVar2 + 99) = *(byte *)((int)file + iVar2 + 99) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x7b) = *(byte *)((int)file + iVar2 + 0x7b) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x5f) = *(byte *)((int)file + iVar2 + 0x5f) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x67) = *(byte *)((int)file + iVar2 + 0x67) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x83) = *(byte *)((int)file + iVar2 + 0x83) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x7f) = *(byte *)((int)file + iVar2 + 0x7f) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x87) = *(byte *)((int)file + iVar2 + 0x87) ^ 0x80;
    }
    iVar1 = core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(matrix);
    if (iVar1 != 0) {
      *(byte *)((int)file + iVar2 + 0x5b) = *(byte *)((int)file + iVar2 + 0x5b) ^ 0x80;
      *(byte *)((int)file + iVar2 + 99) = *(byte *)((int)file + iVar2 + 99) ^ 0x80;
      *(byte *)((int)file + iVar2 + 0x5f) = *(byte *)((int)file + iVar2 + 0x5f) ^ 0x80;
    }
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,1);
  }
  core_skeledit_cpp_FUN_0058ac80();
  if ((*(byte *)(mirror_flag + 0xc) & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeledit.cpp";
  g_CurrentLineNumber = 0x33b;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - error reading file!");
  return;
}
