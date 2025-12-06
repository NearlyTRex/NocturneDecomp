// Name: core_skeledit.cpp_FUN_0058c190
// Address: 0058c190
// Address Range: [[0058c190, 0058d782]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058c190()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_0058c190(void)

{
  char cVar1;
  SVert *pSVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  CDeformableModel *pCVar6;
  bool bVar7;
  FILE *pFVar8;
  int iVar9;
  uint *puVar10;
  FILE *file_ptr;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar12;
  byte *puVar13;
  CDeformableModel *pCVar14;
  ushort *puVar16;
  int iVar17;
  uint *puVar18;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  STextureSet *unaff_ESI;
  CLodEdge **ppCVar19;
  char *pcVar20;
  ushort *puVar21;
  STextureSet *pSVar22;
  char *pcVar23;
  int unaff_EDI;
  char *pcVar24;
  byte bVar25;
  CDeformableModel *in_stack_0000000c;
  CDeformableModel *in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000024;
  int iStack00000028;
  int iStack0000002c;
  int iStack00000030;
  int in_stack_00000034;
  CDeformableModel *pCStack00000038;
  int iStack0000003c;
  int in_stack_00000040;
  int in_stack_00000044;
  CDeformableModel *in_stack_00000048;
  uint in_stack_0000004c;
  CDeformableModel *in_stack_00000050;
  int in_stack_00000058;
  int in_stack_0000005c;
  char *in_stack_00000060;
  int in_stack_00000064;
  FILE *in_stack_00000068;
  int in_stack_0000006c;
  FILE *in_stack_00000070;
  int in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_000000a4;
  int in_stack_000000ac;
  int in_stack_000000b0;
  int in_stack_000000b4;
  int in_stack_000000c0;
  int *in_stack_ffff5df0;
  int in_stack_ffff5df4;
  uint in_stack_ffff5e20;
  CDeformableModel *in_stack_ffff5e24;
  uint in_stack_ffff5e28;
  uint in_stack_ffff5e2c;
  CMatrix3x4f *in_stack_ffff5e30;
  CLodVert *in_stack_ffff5e64;
  int in_stack_ffff5e74;
  int aiStack_6e08 [4688];
  uint auStack_24c8 [1190];
  byte auStack_1230 [20];
  byte auStack_121c [1008];
  char acStack_e2c [4];
  CLodVert CStack_e28;
  char acStack_8b4 [4];
  char acStack_8b0 [252];
  char acStack_7b4 [4];
  char acStack_7b0 [4];
  char acStack_7ac [4];
  char acStack_7a8 [4];
  char acStack_7a4 [8];
  char acStack_79c [4];
  char acStack_798 [216];
  char acStack_6c0 [4];
  char acStack_6bc [264];
  char acStack_5b4 [4];
  char acStack_5b0 [256];
  char acStack_4b0 [8];
  char acStack_4a8 [196];
  char acStack_3e4 [4];
  char acStack_3e0 [4];
  char acStack_3dc [4];
  char acStack_3d8 [284];
  byte auStack_2bc [16];
  byte auStack_2ac [8];
  byte auStack_2a4 [16];
  int iStack_294;
  SLodSubmesh *pSStack_290;
  byte *puStack_28c;
  CLodMesh *pCStack_288;
  FILE *pFStack_284;
  byte auStack_274 [68];
  byte auStack_230 [16];
  byte auStack_220 [92];
  byte local_1c4 [88];
  byte auStack_16c [8];
  byte auStack_164 [8];
  float fStack_15c;
  byte auStack_158 [8];
  SLodSubmesh *pSStack_150;
  byte auStack_14c [8];
  SLodSubmesh *pSStack_144;
  CLodFace *pCStack_140;
  byte *puStack_13c;
  CLodMesh *pCStack_138;
  CLodEdge *local_11c;
  CLodMesh CStack_114;
  FILE local_9c;
  int local_7c;
  int local_74;
  int local_70;
  uint local_48;
  int local_40 [3];
  int local_34 [6];
  int local_1c;
  FILE *local_18;
  CBoneStructure *pCStack_10;
  byte auStack_c [4];
  uint *puVar11;
  int *piVar15;
  
  pCVar6 = in_stack_0000000c;
  bVar25 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa248);
  DAT_03670650 = 0;
  pFVar8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ((char *)in_stack_00000010,(char *)0x0,"rt",
                      "..\\core\\skeledit.cpp",0x60a);
  local_18 = pFVar8;
  if (pFVar8 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Can't open %s",in_stack_00000014);
    return 0;
  }
  iVar17 = 1;
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(in_stack_0000000c);
  do {
    iVar9 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar9 < 0) break;
  } while ((iVar9 != 10) || (iVar17 = iVar17 + -1, 0 < iVar17));
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)pCStack_10,"%d\n",auStack_c);
  core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
            (pCStack_10,&local_9c,in_stack_ffff5df0);
  core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
            (pCStack_10,(FILE *)0x0,in_stack_ffff5df4);
  core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_0000000c);
  core_skeledit_cpp_FUN_0058b160();
  iVar17 = core_skeledit_cpp_FUN_0058b200();
  if (iVar17 == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Heirarchy in %s does not match that in skeleton %s");
    if (*(int *)(in_stack_00000034 + 0x308) != 2) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1230);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_3e4,"Display %s");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1230 + 8),acStack_3e0);
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_3dc,"Display %s");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1230 + 0x10),acStack_3d8);
      iVar17 = 0;
      while( true ) {
        iVar17 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           ((CPickList *)auStack_121c,&DAT_03670650,iVar17,0);
        if (iVar17 < 0) break;
        if (iVar17 == 0) {
          core_skeledit_cpp_FUN_0058afe0();
        }
        if (iVar17 == 1) {
          core_skeledit_cpp_FUN_0058afe0();
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)(auStack_121c + 4),0,in_stack_ffff5e20,(uint)in_stack_ffff5e24,
                 in_stack_ffff5e28,in_stack_ffff5e2c,(uint)in_stack_ffff5e30);
    }
    return 0;
  }
  iVar17 = 1;
  do {
    iVar9 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCStack_10);
    if (iVar9 < 0) break;
  } while ((iVar9 != 10) || (iVar17 = iVar17 + -1, 0 < iVar17));
  iVar17 = crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)in_stack_0000000c,"%d,%d,%d\n");
  if (iVar17 != 3) {
LAB_0058c613:
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"%s is corrupt!");
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000070,"..\\core\\skeledit.cpp",0x647);
    return 0;
  }
  core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(in_stack_0000000c,1,1,local_7c,1);
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(in_stack_0000000c,0,local_74,local_70,0);
  iVar17 = core_skeledit_cpp_FUN_0058b8e0();
  if (((iVar17 == 0) || (iVar17 = core_skeledit_cpp_FUN_0058b9b0(), iVar17 == 0)) ||
     (iVar17 = core_skeledit_cpp_FUN_0058bc40(), iVar17 == 0)) goto LAB_0058c613;
  if (in_stack_00000050->texture_sets[0].textures[4].texture_variants[1].texture_name[0] == '\0') {
    core_skeledit_cpp_FUN_0058f790();
  }
  else {
    iVar17 = core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
                       (in_stack_00000050);
    if (iVar17 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(in_stack_ffff5e24);
  core_skeledit_cpp_FUN_0058aeb0();
  core_skeledit_cpp_FUN_0058dde0();
  iStack00000030 = 0;
  if (0 < (int)in_stack_ffff5e30) {
    local_18 = (FILE *)&stack0xffff5e88;
    iVar17 = 0;
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_18,in_stack_ffff5e30);
      puVar10 = (uint *)((int)auStack_24c8 + iVar17);
      iVar17 = iVar17 + 0x30;
      ppCVar19 = &CStack_114.lod_levels_ptr;
      for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar10 = *ppCVar19;
        ppCVar19 = ppCVar19 + (uint)bVar25 * -2 + 1;
        puVar10 = puVar10 + (uint)bVar25 * -2 + 1;
      }
      iStack00000030 = iStack00000030 + 1;
      local_18 = (FILE *)&((CMatrix3x4f *)((int)local_18 + 0x60))->m[2].x;
    } while (iStack00000030 < (int)in_stack_ffff5e30);
  }
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_00000060,(char *)&stack0x00000044,acStack_6c0,(char *)0x0,(char *)0x0);
  crt_file_c_makepath_FUN_005febfc
            (CStack_e28.lod_workspace + 0x14c,(char *)&stack0x00000048,acStack_6bc,(char *)0x0,
             (char *)0x0);
  if ((in_stack_00000068[0x1b]._bufsize == 0) &&
     (iVar17 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,"Copy textures from a directory (empty string if textures are already in art directory.)",
                          CStack_e28.lod_workspace + 0x150,0x104,1), iVar17 == 0)) {
    return 0;
  }
  if (CStack_e28.lod_workspace[0x154] != '\0') {
    crt_string_c_splitpath_FUN_005ff178
              (CStack_e28.lod_workspace + 0x154,(char *)&stack0x0000004c,acStack_5b4,acStack_7b4,
               acStack_8b4);
    crt_file_c_makepath_FUN_005febfc(acStack_4b0,(char *)0x0,acStack_5b0,acStack_7b0,acStack_8b0);
    in_stack_00000040 = 0;
    if (0 < in_stack_0000000c->num_texture_sets) {
      unaff_ESI = in_stack_0000000c->texture_sets;
      do {
        local_34[2] = 0;
        if (0 < in_stack_0000000c->num_textures) {
          pcVar24 = unaff_ESI->textures[0].texture_variants[0].texture_name;
          do {
            crt_string_c_splitpath_FUN_005ff178
                      (pcVar24,(char *)0x0,(char *)0x0,acStack_7ac,(char *)0x0);
            crt_file_c_makepath_FUN_005febfc
                      ((char *)(CStack_e28.adjacent_edge_indices + 0x20),(char *)&stack0x00000058,
                       acStack_4a8,acStack_7a8,"tga");
            crt_file_c_makepath_FUN_005febfc
                      (CStack_e28.lod_workspace + 0x268,(char *)0x0,"art",acStack_7a4,
                       "tga");
            pFVar8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               ((char *)(CStack_e28.adjacent_edge_indices + 0x22),(char *)0x0,
                                "rb","..\\core\\skeledit.cpp",0x6a5);
            if ((pFVar8 == (FILE *)0x0) &&
               (pcVar20 = crt_string_c_strstr_FUN_005fedd0(acStack_79c,"gore"),
               pcVar20 != (char *)0x0)) {
              crt_file_c_makepath_FUN_005febfc
                        ((char *)(CStack_e28.adjacent_edge_indices + 0x24),"t:",
                         "\\enemy",acStack_798,"tga");
              pFVar8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                 ((char *)(CStack_e28.adjacent_edge_indices + 0x25),(char *)0x0,
                                  "rb","..\\core\\skeledit.cpp",0x6a9);
            }
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Copying %s -> %s");
            if (pFVar8 == (FILE *)0x0) {
              if (*(int *)(in_stack_00000094 + 0x308) != 2) {
                crt_stdio_c_sprintf_FUN_005fdbd0(acStack_e2c,"Can't open %s.  Keep going anyway?");
                in_stack_ffff5e64 = &CStack_e28;
                iVar17 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                   (g_CEditorToolsPtr,(char *)in_stack_ffff5e64);
                if (iVar17 == 0) {
                  return 0;
                }
              }
            }
            else {
              file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (CStack_e28.lod_workspace + 0x280,(char *)0x0,"wb",
                                    "..\\core\\skeledit.cpp",0x6b5);
              if (file_ptr == (FILE *)0x0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x6b6;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
              }
              while (iVar17 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8), -1 < iVar17) {
                crt_stdio_c_fputc_FUN_006007a0(iVar17,file_ptr);
              }
              if ((pFVar8->_flag & 0x20) != 0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x6bc;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading %s");
              }
              if ((file_ptr->_flag & 0x20) != 0) {
                g_CurrentLineNumber = 0x6bd;
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing %s");
              }
              in_stack_ffff5e64 = (CLodVert *)0x58cae6;
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar8,"..\\core\\skeledit.cpp",0x6be);
              in_stack_ffff5e74 = 0x6bf;
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\skeledit.cpp",0x6bf);
            }
            pcVar24 = pcVar24 + 0x48;
            local_34[2] = local_34[2] + 1;
          } while (local_34[2] < in_stack_0000000c->num_textures);
        }
        unaff_ESI = unaff_ESI + 1;
        in_stack_00000040 = in_stack_00000040 + 1;
      } while (in_stack_00000040 < in_stack_0000000c->num_texture_sets);
    }
  }
  local_40[0] = 2;
  if (*(int *)(in_stack_0000006c + 0x308) == 1) {
    bVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of 256x256 crams",local_40,true,1,8,true)
    ;
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar7) == 0) {
      return 0;
    }
    pcVar20 = "$$TEST";
    pcVar24 = CStack_e28.lod_workspace + 0x360;
LAB_0058c4e0:
    do {
      cVar1 = *pcVar20;
      *pcVar24 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar20[1];
      pcVar20 = pcVar20 + 2;
      pcVar24[1] = cVar1;
      pcVar24 = pcVar24 + 2;
    } while (cVar1 != '\0');
  }
  else {
    if (*(int *)(in_stack_0000006c + 0x308) == 2) {
      pcVar20 = "$$BATCH";
      pcVar24 = CStack_e28.lod_workspace + 0x35c;
      goto LAB_0058c4e0;
    }
    bVar7 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of 256x256 crams",local_40,true,1,8,true)
    ;
    if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar7) == 0) {
      return 0;
    }
    crt_string_c_splitpath_FUN_005ff178
              ((char *)in_stack_00000070,(char *)0x0,(char *)0x0,CStack_e28.lod_workspace + 0x360,
               (char *)0x0);
    shape_design_c_initializeTextureManager_FUN_0046a880(1);
    shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
    iVar17 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_34[1]);
    if (1 < in_stack_0000000c->num_texture_sets) {
      iVar17 = iVar17 + -1;
    }
    *(byte *)((int)CStack_e28.adjacent_edge_indices + iVar17 + -0x7c) = 0;
    iVar17 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,"Enter crammed texture base name (no path or extension)",
                        CStack_e28.lod_workspace + 0x370,iVar17 + 1,1);
    if (iVar17 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_FUN_0058de70();
  local_1c = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)(local_1c4 + 0x54));
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            ((CLodMesh *)auStack_16c,in_stack_0000000c->vertex_count[0],
             in_stack_0000000c->tri_count[0] + in_stack_0000000c->cap_tri_count[0],
             in_stack_0000000c->num_textures);
  pFVar8 = in_stack_00000068;
  iVar17 = 1;
  do {
    iVar9 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar9 < 0) break;
  } while ((iVar9 != 10) || (iVar17 = iVar17 + -1, 0 < iVar17));
  iVar17 = 0;
  if (0 < in_stack_0000000c->vertex_count[0]) {
    iStack00000028 = 0;
    do {
      pSVar2 = in_stack_0000000c->vertex_data_ptr[0];
      puVar18 = (uint *)((int)&((CVector3f *)auStack_164._0_4_)->x + iStack00000028);
      *puVar18 = *(uint *)((int)pSVar2->bone_weights + in_stack_00000024 + 0xc);
      puVar18[1] = *(uint *)((int)pSVar2->bone_weights + in_stack_00000024 + 0x10);
      puVar18[2] = *(uint *)((int)pSVar2->bone_weights + in_stack_00000024 + 0x14);
      puVar10 = puVar18;
      do {
        puVar11 = puVar10 + 1;
        puVar10[3] = 0;
        puVar10 = puVar11;
      } while (puVar11 != puVar18 + 100);
      iVar9 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000068,"%d\n");
      if (((iVar9 != 1) || (unaff_EBP < 1)) || ((int)in_stack_ffff5e64 < unaff_EBP)) {
LAB_0058c601:
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)(auStack_16c + 4));
        goto LAB_0058c613;
      }
      iVar9 = 0;
      if (0 < unaff_EBP) {
        do {
          iVar12 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000068,"%d,%f\n");
          if (iVar12 != 2) goto LAB_0058c601;
          unaff_EDI = aiStack_6e08[unaff_EDI];
          iVar9 = iVar9 + 1;
          puVar18[unaff_EDI + 3] = (float)puVar18[unaff_EDI + 3] + (float)unaff_ESI;
        } while (iVar9 < unaff_EBP);
      }
      iVar17 = iVar17 + 1;
      in_stack_00000024 = in_stack_00000024 + 0x34;
      iStack00000028 = iStack00000028 + 0x4c4;
    } while (iVar17 < in_stack_0000000c->vertex_count[0]);
  }
  iVar17 = 0;
  in_stack_0000005c = 0;
  if (0 < in_stack_0000000c->num_parts) {
    pCStack00000038 = in_stack_0000000c;
    do {
      iStack0000002c = iVar17 * 4;
      iStack00000030 = iVar17 * 0x12;
      in_stack_00000034 = iVar17 * 0x8c;
      iVar9 = 0;
      if (0 < pCStack00000038->parts[0].tri_counts[0]) {
        do {
          puVar18 = (uint *)((int)fStack_15c + in_stack_00000034);
          puVar16 = (ushort *)
                    ((int)&(in_stack_0000000c->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                    iStack00000030);
          puVar18[1] = in_stack_0000005c;
          uVar3 = *(uint *)((int)in_stack_0000000c->index_data_ptr[0] + iStack0000002c);
          puVar18[2] = 0;
          puVar18[3] = 0xfffe7961;
          puVar21 = puVar16 + 3;
          *puVar18 = uVar3;
          fVar5 = (float)0.00390625;
          puVar10 = puVar18;
          do {
            puVar18[4] = (uint)*puVar16;
            puVar10[7] = (float)puVar16[3] * fVar5;
            in_stack_00000070 = (FILE *)(uint)puVar16[6];
            puVar18 = puVar18 + 1;
            puVar16 = puVar16 + 1;
            puVar10[8] = (float)(int)in_stack_00000070 * fVar5;
            puVar10 = puVar10 + 2;
          } while (puVar16 != puVar21);
          iVar17 = iVar17 + 1;
          iStack0000002c = iStack0000002c + 4;
          iStack00000030 = iStack00000030 + 0x12;
          in_stack_00000034 = in_stack_00000034 + 0x8c;
          iVar9 = iVar9 + 1;
        } while (iVar9 < pCStack00000038->parts[0].tri_counts[0]);
      }
      pCStack00000038 = (CDeformableModel *)(pCStack00000038->tri_count + 3);
      in_stack_0000005c = in_stack_0000005c + 1;
    } while (in_stack_0000005c < in_stack_0000000c->num_parts);
  }
  in_stack_00000058 = 0;
  if (0 < in_stack_0000000c->num_parts) {
    in_stack_00000048 = in_stack_0000000c;
    do {
      in_stack_0000000c = (CDeformableModel *)0x0;
      in_stack_00000010 = in_stack_00000048;
      iStack0000003c = iVar17 * 4;
      in_stack_00000040 = iVar17 * 0x12;
      in_stack_00000044 = iVar17 * 0x8c;
      if (0 < in_stack_00000048->parts[0].cap_tri_counts[0]) {
        do {
          puVar18 = (uint *)((int)fStack_15c + in_stack_00000044);
          puVar16 = (ushort *)
                    ((int)&(pCVar6->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                    in_stack_00000040);
          puVar18[1] = in_stack_00000058;
          uVar3 = *(uint *)((int)pCVar6->index_data_ptr[0] + iStack0000003c);
          puVar18[2] = 1;
          *puVar18 = uVar3;
          puVar18[3] = pCVar6->cap_index_ptr[0][iVar17 - pCVar6->tri_count[0]];
          puVar21 = puVar16 + 3;
          fVar5 = (float)0.00390625;
          puVar10 = puVar18;
          do {
            puVar18[4] = (uint)*puVar16;
            puVar10[7] = (float)puVar16[3] * fVar5;
            in_stack_00000070 = (FILE *)(uint)puVar16[6];
            puVar18 = puVar18 + 1;
            puVar16 = puVar16 + 1;
            puVar10[8] = (float)(int)in_stack_00000070 * fVar5;
            puVar10 = puVar10 + 2;
          } while (puVar16 != puVar21);
          iVar17 = iVar17 + 1;
          iStack0000003c = iStack0000003c + 4;
          in_stack_00000044 = in_stack_00000044 + 0x8c;
          in_stack_0000000c = (CDeformableModel *)((int)in_stack_0000000c + 1);
          in_stack_00000040 = in_stack_00000040 + 0x12;
        } while ((int)in_stack_0000000c < in_stack_00000048->parts[0].cap_tri_counts[0]);
      }
      in_stack_00000048 = (CDeformableModel *)(in_stack_00000048->tri_count + 3);
      in_stack_00000058 = in_stack_00000058 + 1;
    } while (in_stack_00000058 < pCVar6->num_parts);
  }
  auStack_14c._0_4_ = &DAT_00000002;
  pCStack_140 = (CLodFace *)&DAT_00000001;
  pSStack_144 = (SLodSubmesh *)&DAT_00000001;
  puStack_13c = &DAT_00000001;
  pCStack_138 = (CLodMesh *)0x0;
  pSStack_150 = (SLodSubmesh *)&DAT_00000004;
  iVar17 = 0;
  pCVar14 = pCVar6;
  if (0 < pCVar6->num_textures) {
    do {
      pSVar22 = pCVar14->texture_sets;
      pcVar24 = (char *)(auStack_158._4_4_ + 0x10) + (iVar17 * 0x12 + -4) * 4;
      for (iVar9 = 0x12; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(int *)pcVar24 = pSVar22->textures[0].texture_variants[0].base.type;
        pSVar22 = (STextureSet *)((int)pSVar22 + (uint)bVar25 * -8 + 4);
        pcVar24 = pcVar24 + (uint)bVar25 * -8 + 4;
      }
      iVar17 = iVar17 + 1;
      pCVar14 = (CDeformableModel *)(pCVar14->vertex_data_ptr + 2);
    } while (iVar17 < pCVar6->num_textures);
  }
  auStack_14c._4_4_ = in_stack_ffff5e64;
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000068,"..\\core\\skeledit.cpp",0x75a);
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330((CLodMesh *)auStack_164);
  shape_meshlod_cpp_CLodMesh_copy_FUN_00515860
            ((CLodMesh *)auStack_2bc,(CLodMesh *)(auStack_164 + 4));
  shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0((CLodMesh *)(auStack_2bc + 4));
  auStack_2a4._8_4_ = &DAT_00000004;
  auStack_2a4._12_4_ = &DAT_00000002;
  puStack_28c = &DAT_00000001;
  pSStack_290 = (SLodSubmesh *)0x0;
  pCStack_288 = (CLodMesh *)&DAT_00000001;
  pFStack_284 = (FILE *)0x0;
  g_EnableMidpointSampling = 1;
  g_LodReplayMode = 0;
  iStack_294 = in_stack_ffff5e74;
  if (*(int *)(in_stack_000000a4 + 0x308) == 2) {
    *(uint *)(in_stack_000000a4 + 0x30c) = 0;
    local_11c = (CLodEdge *)
                shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                          ((CLodMesh *)auStack_158,"wt");
    if (local_11c == (CLodEdge *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x179;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
    }
    core_skeledit_cpp_FUN_0058a0f0();
    shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0
              ((CLodMesh *)auStack_14c,*(int *)(in_stack_000000b0 + 0x300),2);
    *(uint *)(in_stack_000000b4 + 0x30c) = 1;
    g_LodReplayMode = 1;
    auStack_274._12_4_ =
         shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770
                   ((CLodMesh *)auStack_2a4,"wt");
    if ((SSpatialGrid *)auStack_274._12_4_ == (SSpatialGrid *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x179;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
    }
    core_skeledit_cpp_FUN_0058a0f0();
    shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0
              ((CLodMesh *)(auStack_2a4 + 0xc),*(int *)(in_stack_000000c0 + 0x304),0);
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(g_CEditorToolsPtr,(char *)0x0)
    ;
    shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
              (g_CEditorToolsPtr,"LOD generation complete!");
    iVar17 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar9 = 0;
    do {
      iVar12 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      if (0 < iVar12 - iVar17) {
        iVar9 = iVar9 + (iVar12 - iVar17);
      }
      iVar17 = iVar12;
    } while (iVar9 < 0x360000);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_274);
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&CStack_114);
    return 1;
  }
  *(uint *)(in_stack_000000a4 + 0x30c) = 0;
  iVar17 = core_skeledit_cpp_FUN_00589c20();
  if (-1 < iVar17) {
    if (iVar17 != 0) {
      iVar9 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
                        ((CLodMesh *)(auStack_158 + 4));
      pCVar6->num_lods = iVar9;
      if (iVar9 < 1) goto LAB_0058d5ef;
      iVar12 = 0;
      if (0 < iVar9) {
        iVar9 = 0;
        pCVar14 = pCVar6;
        do {
          piVar15 = &pCVar14->lod_info[0].shadow_only_flag;
          iVar4 = *(int *)((int)local_34 + iVar9);
          *piVar15 = 0;
          pCVar14->lod_info[0].pixel_height = iVar4;
          iVar12 = iVar12 + 1;
          iVar9 = iVar9 + 4;
          pCVar14 = (CDeformableModel *)piVar15;
        } while (iVar12 < pCVar6->num_lods);
      }
    }
    iVar9 = 0;
    if (0 < pCVar6->num_lods) {
      in_stack_00000064 = 0;
      do {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Extracting LOD %d of %d");
        shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)(auStack_274 + 0x40));
        if (in_stack_00000010 == (CDeformableModel *)0x0) {
          shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0
                    ((CLodMesh *)auStack_230,(CLodMesh *)(auStack_14c + 4));
        }
        else {
          shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920((CLodMesh *)(auStack_14c + 4));
        }
        shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0((CLodMesh *)(auStack_230 + 4));
        if (iVar9 == 0) {
          if (auStack_220._8_4_ != in_stack_00000014) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0x7bc;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Texture cram count mismatch!");
          }
          iVar12 = 0;
          if (0 < (int)auStack_220._12_4_) {
            pcVar24 = (char *)(in_stack_00000040 + 8);
            do {
              pcVar23 = (char *)(iVar12 * 0x48 + auStack_220._16_4_ + 8);
              iVar12 = iVar12 + 1;
              pcVar20 = pcVar24;
              do {
                cVar1 = *pcVar23;
                *pcVar20 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar23[1];
                pcVar23 = pcVar23 + 2;
                pcVar20[1] = cVar1;
                pcVar20 = pcVar20 + 2;
              } while (cVar1 != '\0');
              pcVar24 = pcVar24 + 0x48;
            } while (iVar12 < (int)auStack_220._12_4_);
          }
        }
        core_skeledit_cpp_FUN_0058d790();
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_220);
        iVar9 = iVar9 + 1;
        in_stack_00000064 = in_stack_00000064 + 4;
      } while (iVar9 < pCVar6->num_lods);
    }
    pCVar6->lod_info[0].shadow_only_flag = 0;
    pCVar6->lod_info[0].pixel_height = 999999;
    local_48 = 999999;
    if (pCVar6->num_lods < 5) {
      *(uint *)(in_stack_000000ac + 0x30c) = 1;
      g_LodReplayMode = 1;
      iVar9 = core_skeledit_cpp_FUN_00589c20();
      if (iVar9 < 0) goto LAB_0058d5ef;
      if (iVar9 != 0) {
        iVar9 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
                          ((CLodMesh *)(auStack_2ac + 4));
        if (iVar9 < 1) goto LAB_0058d5ef;
        if (iVar9 == 2) {
          pCVar6->lod_info[pCVar6->num_lods].pixel_height = 999999;
          pCVar6->lod_info[pCVar6->num_lods].shadow_only_flag = 1;
          pCVar6->num_lods = pCVar6->num_lods + 1;
          shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)local_1c4);
          shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920((CLodMesh *)(auStack_2bc + 4));
          core_skeledit_cpp_FUN_0058d790();
          shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)(auStack_220 + 0x58));
        }
      }
    }
    in_stack_0000006c = 1;
    if (1 < pCVar6->num_texture_sets) {
      in_stack_00000068 = (FILE *)(pCVar6->texture_sets + 1);
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)&CStack_114.precompute_file,"%s%d");
        core_skeledit_cpp_FUN_0058de70();
        puVar13 = (byte *)shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
        if ((STextureSet *)puVar13 != unaff_ESI) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x7fe;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Cram getNumCramsUsed() mismatch!");
        }
        iStack00000030 = 0;
        if (0 < iVar17) {
          pcVar24 = ((STextureSet *)in_stack_00000068)->textures[0].texture_variants[0].texture_name
          ;
          do {
            pcVar20 = shape_design_c_getTextureName_FUN_0046e060(iStack00000030);
            pcVar23 = pcVar24 + 0x48;
            do {
              cVar1 = *pcVar20;
              *pcVar24 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar20[1];
              pcVar20 = pcVar20 + 2;
              pcVar24[1] = cVar1;
              pcVar24 = pcVar24 + 2;
            } while (cVar1 != '\0');
            iStack00000030 = iStack00000030 + 1;
            pcVar24 = pcVar23;
          } while (iStack00000030 < iVar17);
        }
        in_stack_00000068 = (FILE *)((int)in_stack_00000068 + 0x1680);
        in_stack_0000006c = in_stack_0000006c + 1;
      } while (in_stack_0000006c < pCVar6->num_texture_sets);
    }
    pCVar6->num_textures = iVar17;
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_2ac);
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_14c);
    return 1;
  }
LAB_0058d5ef:
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_2ac);
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)auStack_14c);
  return 0;
}
