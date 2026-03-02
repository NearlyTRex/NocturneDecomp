// Name: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// Address: 0058a4a0
// Address Range: [[0058a4a0, 0058aa01]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  CMatrix3x4f *pCVar8;
  CBoneStructure *pCVar9;
  uint *puVar10;
  SBoneData *pSVar11;
  uint *puVar12;
  char (*bone_name) [30];
  char *pcVar13;
  SBoneData *pSVar14;
  byte bVar15;
  int local_248 [100];
  uint local_b8 [8];
  int local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  SBoneData *local_34;
  SBoneData *local_30;
  int *local_2c;
  SBoneData *local_28;
  int local_24;
  SBoneData *local_20;
  SBoneData *local_1c;
  SBoneData *local_18;
  int local_14;
  
  bVar15 = 0;
  __STK();
  iVar6 = 1;
  do {
    iVar5 = _fgetc(file);
    if (iVar5 < 0) break;
  } while ((iVar5 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
  _fscanf(file,"%d,%d\n",this_ptr,frame_count_out);
  if (100 < this_ptr->bone_count) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x2a6;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too bony!");
  }
  iVar6 = 1;
  do {
    iVar5 = _fgetc(file);
    if (iVar5 < 0) break;
  } while ((iVar5 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
  iVar6 = 0;
  if (0 < this_ptr->bone_count) {
    local_34 = this_ptr->bones;
    local_2c = &this_ptr->bones[0].parent_index;
    pcVar13 = g_BoneNameBuffer[0];
    do {
      pSVar11 = local_34 + iVar6;
      _fscanf(file,"\"%[^\"]\",%d\n",pSVar11,local_2c);
      pcVar7 = pcVar13 + 0x1e;
      do {
        cVar1 = pSVar11->name[0];
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pSVar11->name[1];
        pSVar11 = (SBoneData *)(pSVar11->name + 2);
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      local_2c = local_2c + 0x21;
      pcVar13 = pcVar7;
    } while (iVar6 < this_ptr->bone_count);
  }
  iVar6 = 1;
  do {
    iVar5 = _fgetc(file);
    if (iVar5 < 0) break;
  } while ((iVar5 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 699;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::readBONheader - error reading file!");
  }
  iVar6 = 0;
  if (0 < this_ptr->bone_count) {
    iVar5 = 0;
    do {
      *(uint *)((int)local_248 + iVar5) = 0;
      for (iVar2 = iVar6; -1 < iVar2; iVar2 = this_ptr->bones[iVar2].parent_index) {
        *(int *)((int)local_248 + iVar5) = *(int *)((int)local_248 + iVar5) + 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < this_ptr->bone_count);
  }
  local_24 = this_ptr->bone_count + -1;
  if (-1 < local_24) {
    local_30 = this_ptr->bones;
    local_28 = this_ptr->bones;
    do {
      local_14 = 0;
      if (0 < local_24) {
        local_20 = local_30;
        local_1c = local_30 + 1;
        pCVar8 = &local_28->local_matrix;
        local_18 = local_28 + 1;
        piVar4 = local_248;
        do {
          puVar10 = piVar4 + 1;
          iVar6 = local_248[local_14] - local_248[local_14 + 1];
          if (iVar6 == 0) {
            iVar6 = _stricmp(local_20->name,local_1c->name);
          }
          if (0 < iVar6) {
            pSVar14 = local_28 + local_14;
            pSVar11 = pSVar14;
            puVar12 = local_b8;
            for (iVar6 = 7; iVar6 != 0; iVar6 = iVar6 + -1) {
              *puVar12 = *(uint *)pSVar11->name;
              pSVar11 = (SBoneData *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
              puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
            }
            *(ushort *)puVar12 = *(ushort *)pSVar11->name;
            local_98 = pSVar14->parent_index;
            local_94 = pCVar8->m[0].w;
            local_90 = pCVar8->m[0].x;
            local_8c = pCVar8->m[0].y;
            local_88 = pCVar8->m[0].z;
            local_84 = pCVar8->m[1].w;
            local_80 = pCVar8->m[1].x;
            local_7c = pCVar8->m[1].y;
            local_78 = pCVar8->m[1].z;
            local_74 = pCVar8->m[2].w;
            local_70 = pCVar8->m[2].x;
            local_6c = pCVar8->m[2].y;
            local_68 = pCVar8->m[2].z;
            local_64 = pCVar8[1].m[0].w;
            local_60 = pCVar8[1].m[0].x;
            local_5c = pCVar8[1].m[0].y;
            local_58 = pCVar8[1].m[0].z;
            local_54 = pCVar8[1].m[1].w;
            local_50 = pCVar8[1].m[1].x;
            local_4c = pCVar8[1].m[1].y;
            local_48 = pCVar8[1].m[1].z;
            local_44 = pCVar8[1].m[2].w;
            local_40 = pCVar8[1].m[2].x;
            local_3c = pCVar8[1].m[2].y;
            local_38 = pCVar8[1].m[2].z;
            pSVar11 = local_18;
            for (iVar6 = 0x21; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(uint *)pSVar14->name = *(uint *)pSVar11->name;
              pSVar11 = (SBoneData *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
              pSVar14 = (SBoneData *)((int)pSVar14 + (uint)bVar15 * -8 + 4);
            }
            puVar12 = local_b8;
            pSVar11 = local_18;
            for (iVar6 = 0x21; iVar6 != 0; iVar6 = iVar6 + -1) {
              *(uint *)pSVar11->name = *puVar12;
              puVar12 = puVar12 + (uint)bVar15 * -2 + 1;
              pSVar11 = (SBoneData *)((int)pSVar11 + (uint)bVar15 * -8 + 4);
            }
            uVar3 = *piVar4;
            *piVar4 = *puVar10;
            *puVar10 = uVar3;
          }
          pCVar8 = (CMatrix3x4f *)((int)(pCVar8 + 2) + 0x24);
          local_14 = local_14 + 1;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          piVar4 = puVar10;
        } while (local_14 < local_24);
      }
      local_24 = local_24 + -1;
    } while (-1 < local_24);
  }
  iVar6 = 0;
  if (0 < this_ptr->bone_count) {
    bone_name = g_BoneNameBuffer;
    pCVar9 = this_ptr;
    do {
      iVar5 = core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30(this_ptr,*bone_name);
      pCVar9->shuffled_bone_indices[0] = iVar5;
      if (iVar5 < 0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2e8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling bones...");
      }
      pCVar9 = (CBoneStructure *)pCVar9->bones;
      iVar6 = iVar6 + 1;
      bone_name = bone_name + 1;
    } while (iVar6 < this_ptr->bone_count);
  }
  iVar6 = 0;
  pCVar9 = this_ptr;
  if (0 < this_ptr->bone_count) {
    do {
      iVar5 = pCVar9->bones[0].parent_index;
      if ((-1 < iVar5) &&
         (iVar5 = this_ptr->shuffled_bone_indices[iVar5], pCVar9->bones[0].parent_index = iVar5,
         iVar6 <= iVar5)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2f0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling parent bones...");
      }
      iVar6 = iVar6 + 1;
      pCVar9 = (CBoneStructure *)&pCVar9->bones[0].world_matrix.m[2].z;
    } while (iVar6 < this_ptr->bone_count);
  }
  return;
}
