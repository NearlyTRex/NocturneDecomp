// Name: core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10
// Address: 0058aa10
// Address Range: [[0058aa10, 0058aba8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure *this_ptr,_FILE *file,int mirror_flag)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10(CBoneStructure *this_ptr,_FILE *file,int mirror_flag)

{
  CMatrix3x4f *matrix;
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  for (iVar5 = 0; iVar5 < this_ptr->bone_count; iVar5 = iVar5 + 1) {
    iVar3 = this_ptr->shuffled_bone_indices[iVar5];
    matrix = &this_ptr->bones[iVar3].world_matrix;
    iVar4 = _fscanf(file,"%f,%f,%f\n",matrix,this_ptr->bones[iVar3].world_matrix.m + 1,
                       this_ptr->bones[iVar3].world_matrix.m + 2);
    if (iVar4 == 3) goto LAB_0058aa88;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 784;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - file is corrupt!");
LAB_0058aa88:
          iVar4 = _fscanf(file,"%f,%f,%f\n",&this_ptr->bones[iVar3].world_matrix.m[0].x,
                             &this_ptr->bones[iVar3].world_matrix.m[1].x,
                             &this_ptr->bones[iVar3].world_matrix.m[2].x);
        } while (iVar4 != 3);
        iVar4 = _fscanf(file,"%f,%f,%f\n",&this_ptr->bones[iVar3].world_matrix.m[0].y,
                           &this_ptr->bones[iVar3].world_matrix.m[1].y,
                           &this_ptr->bones[iVar3].world_matrix.m[2].y);
      } while (iVar4 != 3);
      iVar4 = _fscanf(file,"%f,%f,%f\n",&this_ptr->bones[iVar3].world_matrix.m[0].z,
                         &this_ptr->bones[iVar3].world_matrix.m[1].z,
                         &this_ptr->bones[iVar3].world_matrix.m[2].z);
    } while (iVar4 != 3);
    if (mirror_flag != 0) {
      bVar1 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].y + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].w + 3) =
           *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].w + 3) ^ 0x80;
      bVar2 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].w + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].y + 3) = bVar1 ^ 0x80;
      bVar1 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].x + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].w + 3) = bVar2 ^ 0x80;
      bVar2 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].z + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].x + 3) = bVar1 ^ 0x80;
      bVar1 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].y + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].z + 3) = bVar2 ^ 0x80;
      bVar2 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].x + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].y + 3) = bVar1 ^ 0x80;
      bVar1 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].z + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].x + 3) = bVar2 ^ 0x80;
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[2].z + 3) = bVar1 ^ 0x80;
    }
    iVar4 = core_xform_cpp_hasNegativeDeterminant_FUN_005f6be0(matrix);
    if (iVar4 != 0) {
      bVar1 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].y + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].w + 3) =
           *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].w + 3) ^ 0x80;
      bVar2 = *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].x + 3);
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].y + 3) = bVar1 ^ 0x80;
      *(byte *)((int)&this_ptr->bones[iVar3].world_matrix.m[0].x + 3) = bVar2 ^ 0x80;
    }
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,1);
  }
  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(this_ptr);
  if ((file->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\core\\skeledit.cpp";
  g_CurrentLineNumber = 827;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONframe - error reading file!");
  return;
}
