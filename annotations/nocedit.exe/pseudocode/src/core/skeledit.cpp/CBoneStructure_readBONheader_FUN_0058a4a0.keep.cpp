// Name: core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0
// Address: 0058a4a0
// MANUAL RECONSTRUCTION
// Address Range: [[0058a4a0, 0058aa01]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0(CBoneStructure *this_ptr,_FILE *file,int *frame_count_out)

{
  char cVar2;
  int iVar5;
  int iVar3;
  int iVar6;
  char (*pacVar4) [30];
  char *pcVar7;
  CMatrix3x4f *pCVar8;
  CBoneStructure *pCVar9;
  uint *puVar10;
  CBoneStructure *pCVar5;
  SBoneData *pSVar6;
  SBoneData *pSVar11;
  uint *puVar12;
  char (*bone_name) [30];
  char *pcVar13;
  uint *puVar7;
  SBoneData *pSVar14;
  byte bVar15;
  byte bVar8;
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
  char cVar1;
  int iVar2;
  int *piVar4;
  int uVar3;
  
  bVar8 = 0;
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
    local_2c = &this_ptr->bones[0].parent_index;
    pacVar4 = g_BoneNameBuffer;
    do {
      pSVar6 = local_34 + uVar3;
      _fscanf(file,"\"%[^\"]\",%d\n",pSVar6->name,local_2c);
      pcVar7 = pacVar4[1];
      do {
        cVar1 = pSVar6->name[0];
        (*pacVar4)[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar2 = pSVar6->name[1];
        pSVar6 = (SBoneData *)(pSVar6->name + 2);
        (*pacVar4)[1] = cVar2;
        pcVar13 = *pacVar4 + 2;
        pacVar4 = (char (*) [30])pcVar13;
      } while (cVar2 != '\0');
      uVar3 = uVar3 + 1;
      local_2c = local_2c + 0x21;
      pacVar4 = (char (*) [30])pcVar7;
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
    iVar3 = 0;
    do {
      *(uint *)((int)local_248 + iVar3) = 0;
      for (iVar2 = uVar3; -1 < iVar2; iVar2 = this_ptr->bones[iVar2].parent_index) {
        *(int *)((int)local_248 + iVar3) = *(int *)((int)local_248 + iVar3) + 1;
      }
      uVar3 = uVar3 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar3 < this_ptr->bone_count);
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
          puVar10 = (uint *)(piVar4 + 1);
          uVar3 = local_248[local_14] - local_248[local_14 + 1];
          if (uVar3 == 0) {
            uVar3 = _stricmp(local_20->name,local_1c->name);
          }
          if (0 < uVar3) {
            pSVar14 = local_28 + local_14;
            pSVar6 = pSVar14;
            puVar7 = local_b8;
            for (uVar3 = 7; uVar3 != 0; uVar3 = uVar3 + -1) {
              *puVar7 = *(uint *)pSVar6->name;
              pSVar6 = (SBoneData *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            *(ushort *)puVar7 = *(ushort *)pSVar6->name;
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
            for (uVar3 = 0x21; uVar3 != 0; uVar3 = uVar3 + -1) {
              pSVar14 = (SBoneData *)((int)pSVar14 + (uint)bVar8 * -8 + 4);
              pSVar11 = (SBoneData *)((int)pSVar11 + (uint)bVar8 * -8 + 4);
              *(uint *)pSVar14->name = *(uint *)pSVar11->name;
              pSVar11 = pSVar11;
              pSVar14 = pSVar14;
            }
            puVar12 = local_b8;
            pSVar6 = local_18;
            for (uVar3 = 0x21; uVar3 != 0; uVar3 = uVar3 + -1) {
              puVar12 = puVar12 + (uint)bVar8 * -2 + 1;
              *(uint *)pSVar6->name = *puVar12;
              puVar12 = puVar12;
              pSVar6 = (SBoneData *)((int)pSVar6 + (uint)bVar8 * -8 + 4);
            }
            uVar3 = *piVar4;
            *piVar4 = *puVar10;
            *puVar10 = uVar3;
          }
          pCVar8 = (CMatrix3x4f *)&pCVar8[2].m[2].x;
          local_14 = local_14 + 1;
          local_20 = local_20 + 1;
          local_1c = local_1c + 1;
          local_18 = local_18 + 1;
          piVar4 = (int *)puVar10;
        } while (local_14 < local_24);
      }
      local_24 = local_24 + -1;
    } while (-1 < local_24);
  }
  uVar3 = 0;
  if (0 < this_ptr->bone_count) {
    bone_name = g_BoneNameBuffer;
    pCVar5 = this_ptr;
    do {
      iVar3 = core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30(this_ptr,*bone_name);
      pCVar5->shuffled_bone_indices[0] = iVar3;
      if (iVar3 < 0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2e8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling bones...");
      }
      pCVar5 = (CBoneStructure *)pCVar5->bones;
      uVar3 = uVar3 + 1;
      bone_name = bone_name + 1;
    } while (uVar3 < this_ptr->bone_count);
  }
  uVar3 = 0;
  pCVar9 = this_ptr;
  if (0 < this_ptr->bone_count) {
    do {
      iVar3 = pCVar9->bones[0].parent_index;
      if ((-1 < iVar3) &&
         (iVar3 = this_ptr->shuffled_bone_indices[iVar3], pCVar9->bones[0].parent_index = iVar3,
         uVar3 <= iVar3)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x2f0;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze while shuffling parent bones...");
      }
      uVar3 = uVar3 + 1;
      pCVar9 = (CBoneStructure *)&pCVar9->bones[0].world_matrix.m[2].z;
    } while (uVar3 < this_ptr->bone_count);
  }
  return;
}
