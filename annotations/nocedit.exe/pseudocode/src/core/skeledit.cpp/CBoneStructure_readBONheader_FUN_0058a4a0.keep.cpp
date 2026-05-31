// Name: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// Address: 0058a4a0
// MANUAL RECONSTRUCTION
// Address Range: [[0058a4a0, 0058aa01]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)

{
  int iVar5;
  int iVar3;
  int iVar6;
  SBoneData *pSVar6;
  char (*bone_name) [30];
  int local_248 [100];
  SBoneData local_b8;
  SBoneData *local_34;
  int local_24;
  int local_14;
  int iVar2;
  int uVar3;

  iVar6 = 1;
  do {
    iVar5 = _fgetc(file);
    if (iVar5 < 0) break;
  } while ((iVar5 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
  _fscanf(file,"%d,%d\n",&this_ptr->bone_count,frame_count_out);
  if (100 < this_ptr->bone_count) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x2a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  uVar3 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (uVar3 = uVar3 + -1, 0 < uVar3));
  uVar3 = 0;
  if (0 < this_ptr->bone_count) {
    local_34 = this_ptr->bones;
    do {
      pSVar6 = local_34 + uVar3;
      _fscanf(file,"\"%[^\"]\",%d\n",pSVar6->name,&pSVar6->parent_index);
      strcpy(g_BoneNameBuffer[uVar3],pSVar6->name);
      uVar3 = uVar3 + 1;
    } while (uVar3 < this_ptr->bone_count);
  }
  uVar3 = 1;
  do {
    iVar3 = _fgetc(file);
    if (iVar3 < 0) break;
  } while ((iVar3 != 10) || (uVar3 = uVar3 + -1, 0 < uVar3));
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 699;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONheader - error reading file!");
  }
  uVar3 = 0;
  if (0 < this_ptr->bone_count) {
    do {
      local_248[uVar3] = 0;
      for (iVar2 = uVar3; -1 < iVar2; iVar2 = this_ptr->bones[iVar2].parent_index) {
        local_248[uVar3] = local_248[uVar3] + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < this_ptr->bone_count);
  }
  local_24 = this_ptr->bone_count + -1;
  if (-1 < local_24) {
    do {
      for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
        uVar3 = local_248[local_14] - local_248[local_14 + 1];
        if (uVar3 == 0) {
          uVar3 = _stricmp(this_ptr->bones[local_14].name,this_ptr->bones[local_14 + 1].name);
        }
        if (0 < uVar3) {
          local_b8 = this_ptr->bones[local_14];
          this_ptr->bones[local_14] = this_ptr->bones[local_14 + 1];
          this_ptr->bones[local_14 + 1] = local_b8;
          uVar3 = local_248[local_14];
          local_248[local_14] = local_248[local_14 + 1];
          local_248[local_14 + 1] = uVar3;
        }
      }
      local_24 = local_24 + -1;
    } while (-1 < local_24);
  }
  uVar3 = 0;
  if (0 < this_ptr->bone_count) {
    bone_name = g_BoneNameBuffer;
    do {
      iVar3 = core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30(this_ptr,*bone_name);
      this_ptr->shuffled_bone_indices[uVar3] = iVar3;
      if (iVar3 < 0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2e8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling bones...");
      }
      uVar3 = uVar3 + 1;
      bone_name = bone_name + 1;
    } while (uVar3 < this_ptr->bone_count);
  }
  uVar3 = 0;
  if (0 < this_ptr->bone_count) {
    do {
      iVar3 = this_ptr->bones[uVar3].parent_index;
      if ((-1 < iVar3) &&
         (iVar3 = this_ptr->shuffled_bone_indices[iVar3], this_ptr->bones[uVar3].parent_index = iVar3,
         uVar3 <= iVar3)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2f0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling parent bones...");
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < this_ptr->bone_count);
  }
  return;
}
