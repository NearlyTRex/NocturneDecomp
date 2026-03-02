// Name: core_skeledit.cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00
// Address: 0058bd00
// Address Range: [[0058bd00, 0058c188]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00(CDeformableModel *this_ptr,char *filename,CBoneStructure *bone_structure)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_importVertexAssignmentsVPH_FUN_0058bd00(CDeformableModel *this_ptr,char *filename,CBoneStructure *bone_structure)

{
  byte *pbVar1;
  float fVar2;
  _FILE *file;
  int iVar3;
  CVector3f *pCVar4;
  char (*bone_name) [50];
  CVector3f *pCVar5;
  int iVar6;
  CMatrix3x4f *pCVar7;
  int iVar8;
  CMatrix3x4f *pCVar9;
  byte bVar10;
  int aiStack_430 [200];
  byte local_110 [2];
  int local_10e;
  CMatrix3x4f local_d8;
  CMatrix3x4f local_a8;
  int local_78 [4];
  int local_68;
  float local_64;
  CVector3f local_58;
  CVector3f local_4c;
  byte local_40 [4];
  long local_3c;
  int local_38;
  float local_34;
  int local_30;
  int local_2c;
  _FILE *local_28;
  SBoneData *local_24;
  uchar *local_20;
  uchar *local_1c;
  int local_18;
  SIZE_T local_14;
  
  bVar10 = 0;
  __STK();
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Importing vertex assignments from %s...");
  local_28 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (filename,(char *)0x0,"rb","..\\core\\skeledit.cpp",0x593);
  if (local_28 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x594;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::importVertexAssignmentsVPH can't open %s",filename);
  }
  _fread(local_110,0x36,1,local_28);
  if (200 < local_10e) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x59b;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many links in %s: %d, max is %d",filename,local_10e,200);
  }
  iVar6 = 0;
  if (0 < local_10e) {
    bone_name = g_SkeletonBoneNames;
    iVar8 = 0;
    do {
      _fread(&local_14,4,1,local_28);
      memset(bone_name,0,0x32);
      _fread(bone_name,local_14,1,local_28);
      iVar3 = core_skeledit_cpp_CBoneStructure_findBoneByName_FUN_0058ac30
                        (bone_structure,*bone_name);
      *(int *)((int)aiStack_430 + iVar8) = iVar3;
      iVar8 = iVar8 + 4;
      _fseek(local_28,0x102,1);
      iVar6 = iVar6 + 1;
      bone_name = bone_name + 1;
    } while (iVar6 < local_10e);
  }
  _fread(local_40,4,1,local_28);
  file = local_28;
  _fread(&local_3c,4,1,local_28);
  _fseek(file,local_3c,1);
  _fseek(file,0x30,1);
  _fread(&local_38,4,1,file);
  local_2c = 0;
  if (0 < local_38) {
    local_24 = bone_structure->bones;
    local_30 = 0;
    do {
      local_20 = this_ptr->vertex_data_ptr[0]->bone_indices + local_30 + -1;
      _fread(local_78,0x20,1,local_28);
      if (local_68 == 0) {
        iVar8 = 0;
      }
      else {
        iVar6 = local_68;
        if (local_68 < 0) {
          iVar6 = local_78[0];
        }
        iVar8 = aiStack_430[iVar6];
        if (iVar8 < 0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x5cc;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("vertex %d is influenced by bone %s, but this bone isn't in the .BON file!",local_2c,g_SkeletonBoneNames + iVar6);
        }
      }
      if ((bone_structure->bones[iVar8].parent_index < 1) || (local_68 < 1)) {
        pbVar1 = local_20 + 4;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0x80;
        pbVar1[3] = 0x3f;
        *local_20 = 1;
        local_20[1] = (byte)iVar8;
      }
      else {
        *local_20 = 2;
        local_34 = local_64;
        fVar2 = local_64 * local_64 * local_64;
        local_20[1] = (byte)iVar8;
        *(float *)(local_20 + 4) = fVar2;
        local_20[2] = (byte)bone_structure->bones[iVar8].parent_index;
        *(float *)(local_20 + 8) = 1.0 - fVar2;
      }
      local_58.x = *(float *)(local_20 + 0x10);
      pCVar5 = (CVector3f *)(local_20 + 0x10);
      local_58.y = *(float *)(local_20 + 0x14);
      local_58.z = *(float *)(local_20 + 0x18);
      local_1c = local_20;
      for (local_18 = 0; local_18 < (int)(uint)*local_20; local_18 = local_18 + 1) {
        core_xform_cpp_inverse_FUN_005f6210(&local_24[local_1c[1]].world_matrix,&local_d8);
        pCVar7 = &local_d8;
        pCVar9 = &local_a8;
        for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
          pCVar9->m[0].w = pCVar7->m[0].w;
          pCVar7 = (CMatrix3x4f *)((int)pCVar7 + ((uint)bVar10 * -2 + 1) * 4);
          pCVar9 = (CMatrix3x4f *)((int)pCVar9 + ((uint)bVar10 * -2 + 1) * 4);
        }
        pCVar4 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_4c,&local_58,&local_a8);
        if (pCVar5 != pCVar4) {
          pCVar5->x = pCVar4->x;
          pCVar5->y = pCVar4->y;
          pCVar5->z = pCVar4->z;
        }
        pCVar5 = pCVar5 + 1;
        local_1c = local_1c + 1;
      }
      local_30 = local_30 + 0x34;
      local_2c = local_2c + 1;
    } while (local_2c < local_38);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_28,"..\\core\\skeledit.cpp",0x5f9);
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Imported vertex assignments from %s OK");
  return;
}
