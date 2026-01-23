// Name: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
// Address: 0058f810
// Address Range: [[0058f810, 0059251f]]
// Convention: __cdecl
// Signature: int core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel * this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr)

{
  CBoundingBox3D *pCVar1;
  char cVar2;
  uint uVar3;
  double dVar4;
  CEditorTools *this_ptr_00;
  FILE *file;
  int iVar5;
  FILE *pFVar6;
  float *pfVar7;
  int iVar8;
  uint *puVar9;
  void *pvVar10;
  short *psVar11;
  void *pvVar12;
  uint uVar13;
  short *psVar14;
  int iVar15;
  char *pcVar16;
  ushort *puVar17;
  int iVar18;
  char **ppcVar19;
  int iVar20;
  char **ppcVar21;
  uint *puVar22;
  ushort *puVar23;
  char *pcVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  int *piVar28;
  byte bVar29;
  double dVar30;
  int *in_stack_00000004;
  float in_stack_ffff5e08;
  float in_stack_ffff5e0c;
  uint in_stack_ffff5e10;
  float fVar31;
  uint in_stack_ffff5e14;
  uint in_stack_ffff5e18;
  ushort auStack_22c4 [1018];
  uint auStack_1ad0 [953];
  CPickList local_bec;
  char local_844 [260];
  char local_740 [256];
  char local_640 [256];
  char local_540 [200];
  byte local_478 [120];
  uint local_400 [30];
  char local_388 [100];
  CBoundingBox3D local_324;
  byte local_30c [16];
  float local_2fc;
  streambuf *local_2f8;
  uint local_2f4;
  byte auStack_2f0 [4];
  uint uStack_2ec;
  uint local_2e8;
  ushort auStack_2e4 [2];
  uint local_2e0;
  byte auStack_2dc [4];
  uint uStack_2d8;
  uint local_2d4;
  ushort auStack_2d0 [2];
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  char *local_29c;
  float local_298;
  streambuf *local_294;
  char *local_290;
  float local_28c;
  streambuf *local_288;
  float local_284;
  float local_280;
  float local_27c;
  uint local_278;
  byte local_274 [4];
  byte local_270 [4];
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  char *local_248;
  float local_244;
  streambuf *local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  byte local_200 [4];
  byte local_1fc [8];
  char *local_1f4;
  float local_1f0;
  streambuf *local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  char *local_1c4;
  float local_1c0;
  streambuf *local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  char *local_1ac;
  float local_1a8;
  streambuf *local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  byte local_190 [4];
  byte local_18c [4];
  FILE *local_188;
  void *local_184;
  FILE *local_180;
  float *local_17c;
  float *local_178;
  void *local_174;
  uint *local_170;
  float local_16c;
  char *local_168;
  byte local_164 [4];
  int local_160;
  void *local_15c;
  int local_158;
  int local_154;
  uint *local_150;
  uint *local_14c;
  int *local_148;
  int local_144;
  int *local_140;
  uint local_13c [2];
  void *local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  void *local_114;
  float local_110;
  int local_10c;
  float *local_108;
  float local_104;
  float *local_fc;
  float *local_f8;
  int local_f4;
  int *local_f0;
  FILE *local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  byte local_dc [4];
  int *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  short *local_c8;
  int local_c4;
  short *local_c0;
  short *local_bc;
  int local_b8;
  void *local_b4;
  ushort *local_b0;
  int local_ac;
  int *local_a8;
  int *local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  byte *local_94;
  uint *local_90;
  streambuf **local_8c;
  void *local_88;
  void *local_84;
  int local_80;
  void *local_7c;
  float *local_78;
  int local_74;
  int local_70;
  short *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int local_54;
  void *local_50;
  void *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  int local_18;
  
  bVar29 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa228);
  if (*in_stack_00000004 != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_188 = (FILE *)0x0;
  local_184 = (void *)0x0;
  local_180 = (FILE *)0x0;
  local_17c = (float *)0x0;
  local_178 = (float *)0x0;
  local_174 = (void *)0x0;
  local_170 = (uint *)0x0;
  local_f0 = (int *)0x0;
  local_ec = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (this_ptr->texture_sets[0].textures[4].texture_variants[1].texture_name,
                        (char *)0x0,"rt","..\\core\\skeledit.cpp",0xbde);
  if (local_ec == (FILE *)0x0) {
    pcVar16 = "Can't open %s";
  }
  else {
    local_180 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("parts.log",(char *)0x0,"wt",
                           "..\\core\\skeledit.cpp",0xbee);
    if (local_180 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0xbef;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create log file!");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Matching skeleton parts for %s\n");
    pFVar6 = local_ec;
    iVar15 = 1;
    do {
      iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      file = local_ec;
      if (iVar5 < 0) break;
    } while ((iVar5 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
    crt_stdio_c_fscanf_FUN_005fe7c0(local_ec,"%d\n");
    if ((local_e8 < 0x65) || (0x67 < local_e8)) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_03670650,"%s has incorrect S3D version %d",
                 this_ptr->texture_sets[0].textures[4].texture_variants[1].texture_name);
      goto LAB_0058f8e7;
    }
    iVar15 = 1;
    do {
      iVar5 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar5 < 0) break;
    } while ((iVar5 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
    iVar15 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (local_ec,"%d,%d,%d,%d,%d,%d,%d\n",&local_e4,&local_16c,&local_168,&local_e0,
                        local_164,local_dc);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar15 == 7) {
      if (local_e0 < 0x1f) {
        in_stack_00000004[0x1c50] = local_e0;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Reading part list from %s\n");
        pFVar6 = local_ec;
        iVar15 = 1;
        do {
          iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
          if (iVar5 < 0) break;
        } while ((iVar5 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
        iVar15 = 0;
        if (0 < in_stack_00000004[0x1c50]) {
          local_148 = in_stack_00000004 + 0x1c51;
          local_94 = local_478;
          local_90 = local_400;
          piVar28 = in_stack_00000004 + 0x1c59;
          do {
            local_140 = local_148 + iVar15 * 0x18;
            local_144 = iVar15 * 4;
            iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_ec,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_94,local_90,piVar28);
            if (iVar5 != 4) goto LAB_00590a70;
            in_stack_00000004[iVar15 * 0x18 + 0x1c63] = 0;
            piVar28 = piVar28 + 0x18;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_180,"\t%2d: %s, verts=%d, tris=%d\n",iVar15,local_140,
                       *(uint *)((int)local_400 + local_144));
            iVar15 = iVar15 + 1;
            local_94 = local_94 + 4;
            local_90 = local_90 + 1;
          } while (iVar15 < in_stack_00000004[0x1c50]);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Reading texture list from %s\n");
        pFVar6 = local_ec;
        iVar15 = 1;
        do {
          iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
          if (iVar5 < 0) break;
        } while ((iVar5 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
        if (0x96 < local_e4) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar15 = 0;
        if (0 < local_e4) {
          pcVar16 = &stack0xffff5e14;
          do {
            iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0(local_ec,"%[^\n]\n");
            if (iVar5 != 1) goto LAB_00590a70;
            crt_string_c_splitpath_FUN_005ff178
                      (local_844,(char *)0x0,(char *)0x0,pcVar16,(char *)0x0);
            iVar15 = iVar15 + 1;
            pcVar16 = pcVar16 + 0x100;
          } while (iVar15 < local_e4);
        }
        pcVar16 = "gore";
        pcVar24 = local_388;
        for (iVar15 = 0x19; iVar15 != 0; iVar15 = iVar15 + -1) {
          *(uint *)pcVar24 = *(uint *)pcVar16;
          pcVar16 = pcVar16 + ((uint)bVar29 * -2 + 1) * 4;
          pcVar24 = pcVar24 + ((uint)bVar29 * -2 + 1) * 4;
        }
        if (*(int *)this_ptr->texture_sets[0].textures[8].texture_variants[0].texture_name == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",local_388,100,1);
        }
        local_160 = -1;
        if (local_388[0] != '\0') {
          iVar15 = 0;
          if (0 < in_stack_00000004[0x2f]) {
            piVar28 = in_stack_00000004 + 0x32;
            do {
              crt_string_c_splitpath_FUN_005ff178
                        ((char *)piVar28,(char *)0x0,(char *)0x0,local_640,(char *)0x0);
              iVar5 = crt_string_c_stricmp_FUN_005fe7f0(local_388,local_640);
              if (iVar5 == 0) break;
              iVar15 = iVar15 + 1;
              piVar28 = piVar28 + 0x12;
            } while (iVar15 < in_stack_00000004[0x2f]);
          }
          if (in_stack_00000004[0x2f] <= iVar15) {
            if (0x4f < in_stack_00000004[0x2f]) {
              crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Texture list full determining parts");
              goto LAB_0058f8e7;
            }
            crt_stdio_c_sprintf_FUN_005fdbd0
                      ((char *)(in_stack_00000004 + in_stack_00000004[0x2f] * 0x12 + 0x32),
                       "%s.raw");
            in_stack_00000004[0x2f] = in_stack_00000004[0x2f] + 1;
          }
          local_160 = iVar15;
          crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Automap capped faces is active\n");
        }
        local_184 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((int)local_16c * 0x3c,"..\\core\\skeledit.cpp",0xc4e);
        if (local_184 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc4f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading faces from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Reading faces from %s\n");
        pFVar6 = local_ec;
        iVar15 = 1;
        do {
          iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
          if (iVar5 < 0) break;
        } while ((iVar5 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
        iVar15 = 0;
        pvVar10 = local_184;
        if (0 < (int)local_16c) {
          do {
            iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_ec,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_13c,&local_278,
                               &local_194,local_200,local_274,local_190,local_1fc,local_270,
                               local_18c);
            if (iVar5 != 10) goto LAB_00590a70;
            *(uint *)((int)pvVar10 + 4) = 3;
            iVar5 = 0;
            *(uint *)((int)pvVar10 + 0x14) = local_13c[0];
            dVar4 = _DAT_0064bfd2;
            pvVar12 = pvVar10;
            do {
              *(uint *)((int)pvVar12 + 0x18) = *(uint *)(local_274 + iVar5 + -4);
              dVar30 = crt_math_c_round_FUN_005fe6b0
                                 ((double)*(float *)(local_190 + iVar5 + -4) * dVar4);
              local_1c = (float)(int)ROUND(dVar30);
              *(int *)((int)pvVar12 + 0x1c) = (int)ROUND(dVar30);
              in_stack_ffff5e08 = 8.173442e-39;
              dVar30 = crt_math_c_round_FUN_005fe6b0
                                 ((double)*(float *)(local_200 + iVar5 + -4) * dVar4);
              local_20 = (int)ROUND(dVar30);
              iVar5 = iVar5 + 4;
              *(int *)((int)pvVar12 + 0x20) = (int)ROUND(dVar30);
              pvVar12 = (void *)((int)pvVar12 + 0xc);
            } while (iVar5 != 0xc);
            crt_stdio_c_fprintf_FUN_005fe6d0(local_188,"\t%4d: %4d %4d %4d\n");
            iVar15 = iVar15 + 1;
            pvVar10 = (void *)((int)pvVar10 + 0x3c);
          } while (iVar15 < (int)local_174);
        }
        pFVar6 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)local_168 * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_188 = pFVar6;
        if (pFVar6 != (FILE *)0x0) {
          local_188 = (FILE *)&pFVar6->_cnt;
          pFVar6->_ptr = local_168;
        }
        if (local_188 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc7d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading vertices from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Reading vertices from %s\n");
        pFVar6 = local_ec;
        iVar15 = 1;
        do {
          iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
          if (iVar5 < 0) break;
        } while ((iVar5 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
        iVar15 = 0;
        if (0 < (int)local_168) {
          local_8c = &local_188->_link;
          do {
            ppcVar19 = &local_188->_ptr + iVar15 * 3;
            iVar5 = crt_stdio_c_fscanf_FUN_005fe7c0(local_ec,"%f,%f,%f\n");
            if (iVar5 != 3) goto LAB_00590a70;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_180,"\t%4d: %7.3f %7.3f %7.3f\n",iVar15,(double)(float)*ppcVar19,
                       (double)(float)ppcVar19[1],(double)(float)ppcVar19[2]);
            iVar15 = iVar15 + 1;
            local_8c = local_8c + 3;
          } while (iVar15 < (int)local_168);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_ec,"..\\core\\skeledit.cpp",0xc8c);
        local_ec = (FILE *)0x0;
        crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Removing duplicate faces\n");
        local_28 = 0;
        if (0 < (int)local_16c) {
          local_84 = local_184;
          do {
            local_130 = 0;
            local_12c = 0;
            local_134 = local_84;
            if (0 < local_28) {
              local_88 = local_184;
              do {
                if ((*(int *)((int)local_88 + 4) == 3) &&
                   (*(int *)((int)local_88 + 0x14) == *(int *)((int)local_84 + 0x14))) {
                  local_128 = 0;
                  do {
                    iVar5 = 0;
                    iVar15 = local_128;
                    pvVar10 = local_84;
                    do {
                      ppcVar19 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x18) * 3;
                      local_29c = *ppcVar19;
                      local_298 = (float)ppcVar19[1];
                      local_18 = 3;
                      local_294 = (streambuf *)ppcVar19[2];
                      ppcVar19 = &local_188->_ptr +
                                 *(int *)((iVar15 % 3) * 0xc + 0x18 + (int)local_88) * 3;
                      local_1f4 = *ppcVar19;
                      local_1f0 = (float)ppcVar19[1];
                      local_224 = (float)local_29c - (float)local_1f4;
                      local_1ec = (streambuf *)ppcVar19[2];
                      local_220 = local_298 - local_1f0;
                      local_21c = (float)local_294 - (float)local_1ec;
                      if ((((float)_DAT_0064bfda < ABS(local_224)) ||
                          ((float)_DAT_0064bfda < ABS(local_220))) ||
                         ((float)_DAT_0064bfda < ABS(local_21c))) break;
                      pvVar10 = (void *)((int)pvVar10 + 0xc);
                      iVar5 = iVar5 + 1;
                      iVar15 = iVar15 + 1;
                    } while (iVar5 < 3);
                    if (iVar5 == 3) {
                      crt_stdio_c_fprintf_FUN_005fe6d0
                                (local_180,"Removing face %d, it is dup with face %d\n",local_28);
                      *(uint *)((int)local_134 + 4) = 0;
                      goto LAB_005902c8;
                    }
                    local_128 = local_128 + 1;
                  } while (local_128 < 3);
                }
                local_12c = local_12c + 1;
                local_88 = (void *)((int)local_88 + 0x3c);
              } while (local_12c < local_28);
            }
LAB_005902c8:
            local_28 = local_28 + 1;
            local_84 = (void *)((int)local_84 + 0x3c);
          } while (local_28 < (int)local_16c);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing %s");
        if ((FILE *)local_30c != local_188) {
          local_30c._0_4_ = local_188->_ptr;
          local_30c._4_4_ = local_188->_cnt;
          local_30c._8_4_ = local_188->_link;
        }
        if ((FILE *)(local_30c + 0xc) != local_188) {
          local_30c._12_4_ = local_188->_ptr;
          local_2fc = (float)local_188->_cnt;
          local_2f8 = local_188->_link;
        }
        iVar15 = 1;
        pFVar6 = local_188;
        if (1 < (int)local_168) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      ((CBoundingBox3D *)local_30c,(CVector3f *)&pFVar6->_flag);
            iVar15 = iVar15 + 1;
            pFVar6 = (FILE *)&pFVar6->_flag;
          } while (iVar15 < (int)local_168);
        }
        iVar15 = in_stack_00000004[0x10];
        pCVar1 = (CBoundingBox3D *)(iVar15 + 0x10);
        if (&local_324 != pCVar1) {
          local_324.min.x = (pCVar1->min).x;
          local_324.min.y = *(float *)(iVar15 + 0x14);
          local_324.min.z = *(float *)(iVar15 + 0x18);
        }
        if ((CBoundingBox3D *)&local_324.max != pCVar1) {
          local_324.max.x = (pCVar1->min).x;
          local_324.max.y = *(float *)(iVar15 + 0x14);
          local_324.max.z = *(float *)(iVar15 + 0x18);
        }
        iVar15 = 1;
        if (1 < in_stack_00000004[0xb]) {
          iVar5 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_324,(CVector3f *)(in_stack_00000004[0x10] + iVar5 + 0x10));
            iVar15 = iVar15 + 1;
            iVar5 = iVar5 + 0x34;
          } while (iVar15 < in_stack_00000004[0xb]);
        }
        local_26c = local_324.max.x - local_324.min.x;
        local_2a8 = (float)local_30c._12_4_ - (float)local_30c._0_4_;
        local_1dc = local_26c / local_2a8;
        local_268 = local_324.max.y - local_324.min.y;
        local_2a4 = local_2fc - (float)local_30c._4_4_;
        local_1d8 = local_268 / local_2a4;
        local_264 = local_324.max.z - local_324.min.z;
        local_2a0 = (float)local_2f8 - (float)local_30c._8_4_;
        local_1d4 = local_264 / local_2a0;
        iVar15 = 0;
        pFVar6 = local_188;
        if (0 < (int)local_168) {
          do {
            pFVar6->_ptr = (char *)(((float)pFVar6->_ptr - (float)local_30c._0_4_) * local_1dc +
                                   local_324.min.x);
            pFVar6->_cnt = (int)(((float)pFVar6->_cnt - (float)local_30c._4_4_) * local_1d8 +
                                local_324.min.y);
            iVar15 = iVar15 + 1;
            pFVar6->_link =
                 (streambuf *)
                 (((float)pFVar6->_link - (float)local_30c._8_4_) * local_1d4 + local_324.min.z);
            pFVar6 = (FILE *)&pFVar6->_flag;
          } while (iVar15 < (int)local_168);
        }
        local_284 = local_2a8;
        local_280 = local_2a4;
        local_27c = local_2a0;
        local_230 = local_26c;
        local_22c = local_268;
        local_228 = local_264;
        local_1e8 = local_2a8;
        local_1e4 = local_2a4;
        local_1e0 = local_2a0;
        local_1b8 = local_26c;
        local_1b4 = local_268;
        local_1b0 = local_264;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_180,"Scale = %7.3f %7.3f %7.3f\n",(double)local_1dc,(double)local_1d8,
                   (double)local_1d4);
        pfVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)local_16c * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_17c = pfVar7;
        if (pfVar7 != (float *)0x0) {
          local_17c = pfVar7 + 1;
          *pfVar7 = local_16c;
        }
        fVar31 = (float)in_stack_00000004[0x15];
        pfVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)fVar31 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
        local_178 = pfVar7;
        if (pfVar7 != (float *)0x0) {
          local_178 = pfVar7 + 1;
          *pfVar7 = fVar31;
        }
        if ((local_17c == (float *)0x0) || (local_178 == (float *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar15 = 0;
        pvVar10 = local_184;
        pfVar7 = local_17c;
        if (0 < (int)local_16c) {
          do {
            if (*(int *)((int)pvVar10 + 4) == 3) {
              ppcVar21 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x18) * 3;
              ppcVar19 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x24) * 3;
              local_2b4 = (float)*ppcVar19 - (float)*ppcVar21;
              local_2b0 = (float)ppcVar19[1] - (float)ppcVar21[1];
              local_2ac = (float)ppcVar19[2] - (float)ppcVar21[2];
              ppcVar21 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x30) * 3;
              local_254 = (float)*ppcVar21 - (float)*ppcVar19;
              local_250 = (float)ppcVar21[1] - (float)ppcVar19[1];
              local_24c = (float)ppcVar21[2] - (float)ppcVar19[2];
              local_19c = local_2ac * local_254 - local_2b4 * local_24c;
              local_1a0 = local_2b0 * local_24c - local_2ac * local_250;
              local_198 = local_2b4 * local_250 - local_2b0 * local_254;
              in_stack_ffff5e0c =
                   SQRT(local_198 * local_198 + local_1a0 * local_1a0 + local_19c * local_19c);
              if (in_stack_ffff5e0c <= 0.0) {
                local_19c = 0.0;
                local_1a0 = 0.0;
                local_198 = 0.0;
              }
              else {
                fVar31 = 1.0 / in_stack_ffff5e0c;
                local_1a0 = local_1a0 * fVar31;
                local_19c = local_19c * fVar31;
                local_198 = local_198 * fVar31;
              }
              if (pfVar7 != &local_1a0) {
                *pfVar7 = local_1a0;
                pfVar7[1] = local_19c;
                pfVar7[2] = local_198;
              }
            }
            iVar15 = iVar15 + 1;
            pvVar10 = (void *)((int)pvVar10 + 0x3c);
            pfVar7 = pfVar7 + 3;
          } while (iVar15 < (int)local_16c);
        }
        iVar15 = 0;
        if (0 < in_stack_00000004[0x15]) {
          local_80 = 0;
          pfVar7 = local_178;
          do {
            puVar17 = (ushort *)(in_stack_00000004[0x1f] + local_80);
            iVar8 = (uint)puVar17[1] * 0x34;
            iVar20 = (uint)*puVar17 * 0x34;
            iVar5 = in_stack_00000004[0x10];
            iVar18 = (uint)puVar17[2] * 0x34;
            local_2cc = *(float *)(iVar5 + 0x10 + iVar8) - *(float *)(iVar5 + 0x10 + iVar20);
            local_2c8 = *(float *)(iVar5 + 0x14 + iVar8) - *(float *)(iVar5 + 0x14 + iVar20);
            local_2c4 = *(float *)(iVar5 + 0x18 + iVar8) - *(float *)(iVar5 + 0x18 + iVar20);
            local_260 = *(float *)(iVar5 + 0x10 + iVar18) - *(float *)(iVar5 + 0x10 + iVar8);
            local_25c = *(float *)(iVar5 + 0x14 + iVar18) - *(float *)(iVar5 + 0x14 + iVar8);
            local_258 = *(float *)(iVar5 + 0x18 + iVar18) - *(float *)(iVar5 + 0x18 + iVar8);
            local_238 = local_2c4 * local_260 - local_2cc * local_258;
            local_23c = local_2c8 * local_258 - local_2c4 * local_25c;
            local_234 = local_2cc * local_25c - local_2c8 * local_260;
            in_stack_ffff5e08 =
                 SQRT(local_234 * local_234 + local_23c * local_23c + local_238 * local_238);
            if (in_stack_ffff5e08 <= 0.0) {
              local_238 = 0.0;
              local_23c = 0.0;
              local_234 = 0.0;
            }
            else {
              fVar31 = 1.0 / in_stack_ffff5e08;
              local_23c = local_23c * fVar31;
              local_238 = local_238 * fVar31;
              local_234 = local_234 * fVar31;
            }
            if (pfVar7 != &local_23c) {
              *pfVar7 = local_23c;
              pfVar7[1] = local_238;
              pfVar7[2] = local_234;
            }
            pfVar7 = pfVar7 + 3;
            iVar15 = iVar15 + 1;
            local_80 = local_80 + 0x12;
          } while (iVar15 < in_stack_00000004[0x15]);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Matching faces in %s\n");
        if (in_stack_00000004[0x15] <= (int)local_16c) {
          local_174 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (in_stack_00000004[0x15] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_174 == (void *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_15c = local_184;
          iVar15 = 0;
          if (0 < in_stack_00000004[0x1c50]) {
            iVar5 = 0;
            do {
              pvVar10 = local_15c;
              for (iVar8 = 0; iVar8 < *(int *)((int)in_stack_00000004 + iVar5 + 0x7164);
                  iVar8 = iVar8 + 1) {
                *(uint *)((int)pvVar10 + 0xc) = 0xffffffff;
                *(int *)((int)pvVar10 + 8) = iVar15;
                pvVar10 = (void *)((int)pvVar10 + 0x3c);
              }
              local_15c = (void *)((int)local_15c +
                                  *(int *)((int)in_stack_00000004 + iVar5 + 0x7164) * 0x3c);
              iVar5 = iVar5 + 0x60;
              iVar15 = iVar15 + 1;
            } while (iVar15 < in_stack_00000004[0x1c50]);
          }
          local_2c = 0;
          if (0 < in_stack_00000004[0x15]) {
            do {
              local_18 = local_2c;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_2c,(float)in_stack_00000004[0x15]);
              local_124 = local_2c;
              while (-1 < local_124) {
                local_120 = in_stack_00000004[0x1f] + local_124 * 0x12;
                pfVar7 = (float *)(local_124 * 4 + (int)local_174);
                *pfVar7 = 1e+30;
                local_11c = -1;
                local_118 = 0;
                if (0 < (int)local_16c) {
                  local_7c = local_184;
                  local_108 = local_178 + local_124 * 3;
                  local_78 = local_17c;
                  do {
                    local_114 = local_7c;
                    if (*(int *)((int)local_7c + 4) == 3) {
                      local_110 = (float)_DAT_0064bfea -
                                  (local_108[2] * local_78[2] +
                                  *local_108 * *local_78 + local_108[1] * local_78[1]);
                      local_10c = 0;
                      do {
                        iVar5 = 0;
                        local_104 = 0.0;
                        iVar15 = local_10c;
                        pvVar10 = local_7c;
                        do {
                          ppcVar19 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x18) * 3;
                          local_290 = *ppcVar19;
                          local_28c = (float)ppcVar19[1];
                          local_288 = (streambuf *)ppcVar19[2];
                          iVar8 = in_stack_00000004[0x10] +
                                  (uint)*(ushort *)((iVar15 % 3) * 2 + local_120) * 0x34;
                          local_1d0 = *(float *)(iVar8 + 0x10);
                          local_1cc = *(float *)(iVar8 + 0x14);
                          local_20c = local_1d0 - (float)local_290;
                          local_1c8 = *(float *)(iVar8 + 0x18);
                          local_208 = local_1cc - local_28c;
                          local_204 = local_1c8 - (float)local_288;
                          if ((((float)_DAT_0064bfe2 < ABS(local_20c)) ||
                              ((float)_DAT_0064bfe2 < ABS(local_208))) ||
                             ((float)_DAT_0064bfe2 < ABS(local_204))) break;
                          fVar31 = local_204 * local_204 +
                                   local_20c * local_20c + local_208 * local_208;
                          iVar15 = iVar15 + 1;
                          pvVar10 = (void *)((int)pvVar10 + 0xc);
                          local_104 = fVar31 * fVar31 * fVar31 + local_104;
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < 3);
                        if (((2 < iVar5) &&
                            (local_104 = local_104 * local_110, local_104 <= *pfVar7)) &&
                           ((*(int *)((int)local_7c + 0xc) < 0 ||
                            (local_104 <
                             *(float *)(*(int *)((int)local_7c + 0xc) * 4 + (int)local_174))))) {
                          local_11c = local_118;
                          *pfVar7 = local_104;
                        }
                        local_10c = local_10c + 1;
                      } while (local_10c < 3);
                    }
                    local_78 = local_78 + 3;
                    local_118 = local_118 + 1;
                    local_7c = (void *)((int)local_7c + 0x3c);
                    local_fc = pfVar7;
                    local_f8 = pfVar7;
                  } while (local_118 < (int)local_16c);
                }
                if (local_11c == -1) break;
                iVar15 = *(int *)((int)local_184 + local_11c * 0x3c + 0xc);
                *(int *)((int)local_184 + local_11c * 0x3c + 0xc) = local_124;
                local_124 = iVar15;
              }
              local_2c = local_2c + 1;
            } while (local_2c < in_stack_00000004[0x15]);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_17c != (float *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_17c + -1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_17c = (float *)0x0;
          if (local_178 != (float *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_178 + -1);
          }
          local_178 = (float *)0x0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          crt_memory_c_free_FUN_005fe659(local_174);
          iVar15 = 0;
          local_174 = (void *)0x0;
          local_158 = 0;
          piVar28 = in_stack_00000004;
          if (0 < in_stack_00000004[0x1c50]) {
            do {
              piVar28[0x1c5e] = 0;
              piVar28[0x1c59] = 0;
              iVar15 = iVar15 + 1;
              piVar28 = piVar28 + 0x18;
            } while (iVar15 < in_stack_00000004[0x1c50]);
          }
          puVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (in_stack_00000004[0x15] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_170 = puVar9;
          local_f0 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (in_stack_00000004[0x15] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((puVar9 == (uint *)0x0) || (local_f0 == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar15 = 0;
          piVar28 = local_f0;
          puVar9 = local_170;
          if (0 < in_stack_00000004[0x15]) {
            do {
              *piVar28 = 999999;
              iVar15 = iVar15 + 1;
              *puVar9 = 0xffffffff;
              piVar28 = piVar28 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar15 < in_stack_00000004[0x15]);
          }
          iVar15 = 0;
          local_154 = 0;
          pvVar10 = local_184;
          if (0 < (int)local_16c) {
            do {
              if (*(int *)((int)pvVar10 + 4) == 3) {
                iVar5 = *(int *)((int)pvVar10 + 8);
                iVar8 = *(int *)((int)pvVar10 + 0xc);
                if (iVar8 < 0) {
                  local_158 = local_158 + 1;
                  in_stack_00000004[iVar5 * 0x18 + 0x1c5e] =
                       in_stack_00000004[iVar5 * 0x18 + 0x1c5e] + 1;
                }
                else {
                  local_f4 = iVar8 * 4;
                  if (-1 < (int)local_170[iVar8]) {
                    pcVar16 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  local_f0[iVar8] = iVar5;
                  local_170[iVar8] = iVar15;
                  local_154 = local_154 + 1;
                  in_stack_00000004[iVar5 * 0x18 + 0x1c59] =
                       in_stack_00000004[iVar5 * 0x18 + 0x1c59] + 1;
                }
              }
              iVar15 = iVar15 + 1;
              pvVar10 = (void *)((int)pvVar10 + 0x3c);
            } while (iVar15 < (int)local_16c);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          crt_memory_c_free_FUN_005fe659(local_170);
          local_30 = in_stack_00000004[0x15] + -1;
          local_170 = (uint *)0x0;
          piVar28 = local_f0;
          while (local_f0 = piVar28, -1 < local_30) {
            iVar15 = 0;
            if (0 < local_30) {
              local_74 = 0;
              local_70 = 0x12;
              do {
                if (piVar28[1] < *piVar28) {
                  local_18 = iVar15 * 4 + 4;
                  puVar22 = (uint *)(local_18 + in_stack_00000004[0x24]);
                  puVar9 = (uint *)(iVar15 * 4 + in_stack_00000004[0x24]);
                  uVar3 = *puVar9;
                  *puVar9 = *puVar22;
                  *puVar22 = uVar3;
                  puVar22 = (uint *)(local_70 + in_stack_00000004[0x1f]);
                  puVar9 = (uint *)(in_stack_00000004[0x1f] + local_74);
                  local_2e0 = *puVar9;
                  *(ushort *)(auStack_2dc + (uint)bVar29 * -8) =
                       *(ushort *)(puVar9 + (uint)bVar29 * -2 + 1);
                  stack0xfffffd26 = *(uint *)((int)puVar9 + 6);
                  *(ushort *)((int)&uStack_2d8 + (uint)bVar29 * -8 + 2) =
                       *(ushort *)((int)puVar9 + (uint)bVar29 * -8 + 10);
                  local_2d4 = puVar9[3];
                  auStack_2d0[(uint)bVar29 * -4] = *(ushort *)(puVar9 + (uint)bVar29 * -2 + 4);
                  puVar25 = puVar9 + (uint)bVar29 * -2 + 1;
                  puVar27 = puVar22 + (uint)bVar29 * -2 + 1;
                  *puVar9 = *puVar22;
                  puVar26 = puVar25 + (uint)bVar29 * -2 + 1;
                  puVar9 = puVar27 + (uint)bVar29 * -2 + 1;
                  *puVar25 = *puVar27;
                  *puVar26 = *puVar9;
                  puVar26[(uint)bVar29 * -2 + 1] = puVar9[(uint)bVar29 * -2 + 1];
                  *(ushort *)(puVar26 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1) =
                       *(ushort *)(puVar9 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1);
                  puVar27 = puVar22 + (uint)bVar29 * -2 + 1;
                  *puVar22 = local_2e0;
                  puVar22 = puVar27 + (uint)bVar29 * -2 + 1;
                  puVar9 = &uStack_2d8 + (uint)bVar29 * -2 + (uint)bVar29 * -2;
                  *puVar27 = *(uint *)(auStack_2dc + (uint)bVar29 * -8);
                  *puVar22 = *puVar9;
                  puVar22[(uint)bVar29 * -2 + 1] = puVar9[(uint)bVar29 * -2 + 1];
                  *(ushort *)(puVar22 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1) =
                       *(ushort *)(puVar9 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1);
                  iVar5 = *piVar28;
                  *piVar28 = *(int *)((int)local_f0 + local_18);
                  *(int *)((int)local_f0 + local_18) = iVar5;
                }
                iVar15 = iVar15 + 1;
                piVar28 = piVar28 + 1;
                local_74 = local_74 + 0x12;
                local_70 = local_70 + 0x12;
              } while (iVar15 < local_30);
            }
            local_30 = local_30 + -1;
            piVar28 = local_f0;
          }
          iVar15 = 2;
          if (local_154 != in_stack_00000004[0x15]) {
            local_d8 = in_stack_00000004 + 0x1c51;
            do {
              crt_stdio_c_sprintf_FUN_005fdbd0(local_540,"There are %d triangles I couldn't match.");
              if (*(int *)this_ptr->texture_sets[0].textures[8].texture_variants[0].texture_name ==
                  0) {
                shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_bec);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base_strlist,"Get rid of them them, I never want to see them again");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base_strlist,"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base_strlist,"Try best guess");
                do {
                  iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     (&local_bec,local_540,iVar15,0);
                } while (iVar15 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (&local_bec,0,(uint)in_stack_ffff5e08,(uint)in_stack_ffff5e0c,
                           in_stack_ffff5e10,in_stack_ffff5e14,in_stack_ffff5e18);
              }
              iVar5 = local_154;
              if (iVar15 == 0) {
                in_stack_00000004[0x15] = local_154;
              }
              else if (iVar15 == 1) {
                if (0x1d < in_stack_00000004[0x1c50]) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                pcVar16 = "MySpecialTriangles";
                piVar28 = local_d8 + in_stack_00000004[0x1c50] * 0x18;
                do {
                  cVar2 = *pcVar16;
                  *(char *)piVar28 = cVar2;
                  if (cVar2 == '\0') break;
                  cVar2 = pcVar16[1];
                  pcVar16 = pcVar16 + 2;
                  *(char *)((int)piVar28 + 1) = cVar2;
                  piVar28 = (int *)((int)piVar28 + 2);
                } while (cVar2 != '\0');
                in_stack_00000004[in_stack_00000004[0x1c50] * 0x18 + 0x1c59] =
                     in_stack_00000004[0x15] - local_154;
                in_stack_00000004[in_stack_00000004[0x1c50] * 0x18 + 0x1c5e] = 0;
                in_stack_00000004[in_stack_00000004[0x1c50] * 0x18 + 0x1c63] = 0;
                local_154 = in_stack_00000004[0x15];
                in_stack_00000004[0x1c50] = in_stack_00000004[0x1c50] + 1;
              }
              else if (iVar15 == 2) {
                local_d4 = 1;
                local_d0 = local_154;
                local_cc = 0;
                if (0 < in_stack_00000004[0x15]) {
                  local_44 = local_154 * 0x12;
                  local_40 = local_154 * 4;
                  do {
                    if (local_d4 == 0) break;
                    local_d4 = 0;
                    local_34 = iVar5;
                    if (iVar5 < in_stack_00000004[0x15]) {
                      local_5c = local_f0 + iVar5;
                      local_60 = local_44;
                      do {
                        if (0xf423e < *local_5c) {
                          local_c8 = (short *)(local_60 + in_stack_00000004[0x1f]);
                          local_c4 = 0;
                          if (0 < in_stack_00000004[0x15]) {
                            local_64 = 0;
                            local_68 = local_f0;
                            do {
                              if (*local_68 < 999999) {
                                local_c0 = (short *)(local_64 + in_stack_00000004[0x1f]);
                                iVar15 = 0;
                                local_6c = local_c8 + 3;
                                psVar11 = local_c8;
                                do {
                                  local_bc = psVar11;
                                  iVar8 = 0;
                                  psVar14 = local_c0;
                                  if (*psVar11 != *local_c0) {
                                    do {
                                      iVar8 = iVar8 + 1;
                                      psVar14 = psVar14 + 1;
                                      if (2 < iVar8) goto LAB_00591f48;
                                    } while (*psVar14 != *psVar11);
                                  }
                                  iVar15 = iVar15 + 1;
LAB_00591f48:
                                  psVar11 = psVar11 + 1;
                                } while (psVar11 != local_c8 + 3);
                                if (1 < iVar15) {
                                  iVar15 = local_f0[local_c4];
                                  in_stack_00000004[iVar15 * 0x18 + 0x1c59] =
                                       in_stack_00000004[iVar15 * 0x18 + 0x1c59] + 1;
                                  local_154 = local_154 + 1;
                                  *local_5c = local_f0[local_c4];
                                  break;
                                }
                              }
                              local_c4 = local_c4 + 1;
                              local_64 = local_64 + 0x12;
                              local_68 = local_68 + 1;
                            } while (local_c4 < in_stack_00000004[0x15]);
                          }
                          if (0xf423e < *local_5c) {
                            local_d4 = 1;
                          }
                        }
                        local_34 = local_34 + 1;
                        local_5c = local_5c + 1;
                        local_60 = local_60 + 0x12;
                      } while (local_34 < in_stack_00000004[0x15]);
                    }
                    local_cc = local_cc + 1;
                  } while (local_cc < in_stack_00000004[0x15]);
                }
                local_38 = in_stack_00000004[0x15] + -1;
                piVar28 = local_f0;
                while (local_f0 = piVar28, -1 < local_38) {
                  iVar15 = 0;
                  if (0 < local_38) {
                    local_58 = 0;
                    local_54 = 0x12;
                    do {
                      if (piVar28[1] < *piVar28) {
                        local_18 = iVar15 * 4 + 4;
                        puVar22 = (uint *)(local_18 + in_stack_00000004[0x24]);
                        puVar9 = (uint *)(in_stack_00000004[0x24] + iVar15 * 4);
                        uVar3 = *puVar9;
                        *puVar9 = *puVar22;
                        *puVar22 = uVar3;
                        puVar22 = (uint *)(local_54 + in_stack_00000004[0x1f]);
                        puVar9 = (uint *)(in_stack_00000004[0x1f] + local_58);
                        local_2f4 = *puVar9;
                        *(ushort *)(auStack_2f0 + (uint)bVar29 * -8) =
                             *(ushort *)(puVar9 + (uint)bVar29 * -2 + 1);
                        stack0xfffffd12 = *(uint *)((int)puVar9 + 6);
                        *(ushort *)((int)&uStack_2ec + (uint)bVar29 * -8 + 2) =
                             *(ushort *)((int)puVar9 + (uint)bVar29 * -8 + 10);
                        local_2e8 = puVar9[3];
                        auStack_2e4[(uint)bVar29 * -4] =
                             *(ushort *)(puVar9 + (uint)bVar29 * -2 + 4);
                        puVar25 = puVar9 + (uint)bVar29 * -2 + 1;
                        puVar27 = puVar22 + (uint)bVar29 * -2 + 1;
                        *puVar9 = *puVar22;
                        puVar26 = puVar25 + (uint)bVar29 * -2 + 1;
                        puVar9 = puVar27 + (uint)bVar29 * -2 + 1;
                        *puVar25 = *puVar27;
                        *puVar26 = *puVar9;
                        puVar26[(uint)bVar29 * -2 + 1] = puVar9[(uint)bVar29 * -2 + 1];
                        *(ushort *)(puVar26 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1) =
                             *(ushort *)(puVar9 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1)
                        ;
                        puVar27 = puVar22 + (uint)bVar29 * -2 + 1;
                        *puVar22 = local_2f4;
                        puVar22 = puVar27 + (uint)bVar29 * -2 + 1;
                        puVar9 = &uStack_2ec + (uint)bVar29 * -2 + (uint)bVar29 * -2;
                        *puVar27 = *(uint *)(auStack_2f0 + (uint)bVar29 * -8);
                        *puVar22 = *puVar9;
                        puVar22[(uint)bVar29 * -2 + 1] = puVar9[(uint)bVar29 * -2 + 1];
                        *(ushort *)(puVar22 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1) =
                             *(ushort *)(puVar9 + (uint)bVar29 * -2 + 1 + (uint)bVar29 * -2 + 1)
                        ;
                        iVar5 = *piVar28;
                        *piVar28 = *(int *)((int)local_f0 + local_18);
                        *(int *)((int)local_f0 + local_18) = iVar5;
                      }
                      iVar15 = iVar15 + 1;
                      piVar28 = piVar28 + 1;
                      local_58 = local_58 + 0x12;
                      local_54 = local_54 + 0x12;
                    } while (iVar15 < local_38);
                  }
                  local_38 = local_38 + -1;
                  piVar28 = local_f0;
                }
                iVar15 = 1;
              }
            } while (local_154 != in_stack_00000004[0x15]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          crt_memory_c_free_FUN_005fe659(local_f0);
          local_f0 = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          puVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             ((in_stack_00000004[0x15] + local_158) * 0x12,
                              "..\\core\\skeledit.cpp",0xf1a);
          local_150 = puVar9;
          local_14c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                ((in_stack_00000004[0x15] + local_158) * 4,
                                 "..\\core\\skeledit.cpp",0xf1b);
          if ((puVar9 == (uint *)0x0) || (local_14c == (uint *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          puVar9 = local_150;
          iVar15 = in_stack_00000004[0x15];
          puVar22 = (uint *)in_stack_00000004[0x1f];
          puVar27 = local_150;
          for (uVar13 = (uint)(iVar15 * 0x12) >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar27 = *puVar22;
            puVar22 = puVar22 + (uint)bVar29 * -2 + 1;
            puVar27 = puVar27 + (uint)bVar29 * -2 + 1;
          }
          for (uVar13 = iVar15 * 0x12 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(byte *)puVar27 = *(byte *)puVar22;
            puVar22 = (uint *)((int)puVar22 + (uint)bVar29 * -2 + 1);
            puVar27 = (uint *)((int)puVar27 + (uint)bVar29 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0x1f]);
          in_stack_00000004[0x1f] = (int)puVar9;
          puVar9 = (uint *)in_stack_00000004[0x24];
          puVar22 = local_14c;
          for (uVar13 = in_stack_00000004[0x15] & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
            *puVar22 = *puVar9;
            puVar9 = puVar9 + (uint)bVar29 * -2 + 1;
            puVar22 = puVar22 + (uint)bVar29 * -2 + 1;
          }
          for (iVar15 = 0; iVar15 != 0; iVar15 = iVar15 + -1) {
            *(byte *)puVar22 = *(byte *)puVar9;
            puVar9 = (uint *)((int)puVar9 + (uint)bVar29 * -2 + 1);
            puVar22 = (uint *)((int)puVar22 + (uint)bVar29 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf24;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0x24]);
          g_CurrentDebugLine = 0xf28;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          in_stack_00000004[0x24] = (int)local_14c;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0x29]);
          in_stack_00000004[0x29] = 0;
          if (0 < local_158) {
            pvVar10 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (local_158 * 4,"..\\core\\skeledit.cpp",0xf2b);
            in_stack_00000004[0x29] = (int)pvVar10;
            if (pvVar10 == (void *)0x0) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0xf2c;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
            }
          }
          local_3c = 0;
          in_stack_00000004[0x1a] = 0;
          if (0 < in_stack_00000004[0x1c50]) {
            local_a8 = in_stack_00000004 + 0x30;
            local_48 = in_stack_00000004;
            local_a4 = local_a8;
            do {
              if ((0 < local_48[0x1c5e]) && (local_b8 = 0, 0 < (int)local_16c)) {
                local_4c = local_184;
                do {
                  local_b4 = local_4c;
                  if (((*(int *)((int)local_4c + 4) == 3) &&
                      (local_3c == *(int *)((int)local_4c + 8))) &&
                     (*(int *)((int)local_4c + 0xc) < 0)) {
                    local_b0 = (ushort *)
                               (in_stack_00000004[0x1f] +
                               (in_stack_00000004[0x15] + in_stack_00000004[0x1a]) * 0x12);
                    if (local_160 < 0) {
                      iVar15 = *(int *)((int)local_4c + 0x14);
                      if (iVar15 < 0) goto LAB_00591835;
                      iVar5 = 0;
                      if (0 < in_stack_00000004[0x2f]) {
                        piVar28 = local_a8 + 2;
                        do {
                          crt_string_c_splitpath_FUN_005ff178
                                    ((char *)piVar28,(char *)0x0,(char *)0x0,local_740,(char *)0x0);
                          iVar8 = crt_string_c_stricmp_FUN_005fe7f0
                                            (&stack0xffff5e14 + iVar15 * 0x100,local_740);
                          if (iVar8 == 0) break;
                          iVar5 = iVar5 + 1;
                          piVar28 = piVar28 + 0x12;
                        } while (iVar5 < in_stack_00000004[0x2f]);
                      }
                      if (in_stack_00000004[0x2f] <= iVar5) {
                        if (0x4f < in_stack_00000004[0x2f]) {
                          g_CurrentFilename = "..\\core\\skeledit.cpp";
                          g_CurrentLineNumber = 0xf5d;
                          core_main_c_displayErrorAndQuit_FUN_00506f10
                                    ("Too many model textures!");
                        }
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  ((char *)(local_a4 + in_stack_00000004[0x2f] * 0x12 + 2),
                                   "%s.raw");
                        in_stack_00000004[0x2f] = in_stack_00000004[0x2f] + 1;
                      }
                      *(int *)(in_stack_00000004[0x24] +
                              (in_stack_00000004[0x15] + in_stack_00000004[0x1a]) * 4) = iVar5;
                    }
                    else {
                      *(int *)((in_stack_00000004[0x15] + in_stack_00000004[0x1a]) * 4 +
                              in_stack_00000004[0x24]) = local_160;
                    }
                    local_20 = 0;
                    puVar23 = local_b0;
                    pvVar10 = local_b4;
                    do {
                      ppcVar19 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x18) * 3;
                      local_1c4 = *ppcVar19;
                      local_1c0 = (float)ppcVar19[1];
                      local_1bc = (streambuf *)ppcVar19[2];
                      fVar31 = 1e+20;
                      iVar15 = 0;
                      if (0 < in_stack_00000004[0xb]) {
                        iVar5 = 0;
                        do {
                          iVar8 = in_stack_00000004[0x10];
                          local_218 = *(float *)(iVar5 + 0x10 + iVar8) - (float)local_1c4;
                          local_214 = *(float *)(iVar5 + 0x14 + iVar8) - local_1c0;
                          local_210 = *(float *)(iVar5 + 0x18 + iVar8) - (float)local_1bc;
                          local_a0 = local_210 * local_210 +
                                     local_218 * local_218 + local_214 * local_214;
                          if (local_a0 < fVar31) {
                            *puVar23 = (short)iVar15;
                            fVar31 = local_a0;
                          }
                          iVar15 = iVar15 + 1;
                          iVar5 = iVar5 + 0x34;
                        } while (iVar15 < in_stack_00000004[0xb]);
                      }
                      if ((float)_DAT_0064bfe2 < fVar31) {
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  (&DAT_03670650,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        goto LAB_0058f8e7;
                      }
                      iVar15 = *(int *)((int)pvVar10 + 0x1c) >> 8;
                      iVar5 = *(int *)((int)pvVar10 + 0x20) >> 8;
                      if (iVar15 < 0) {
                        iVar15 = 0;
                      }
                      else if (0xffff < iVar15) {
                        iVar15 = 0xffff;
                      }
                      if (iVar5 < 0) {
                        iVar5 = 0;
                      }
                      else if (0xffff < iVar5) {
                        iVar5 = 0xffff;
                      }
                      pvVar10 = (void *)((int)pvVar10 + 0xc);
                      puVar23[6] = (short)iVar5;
                      local_20 = local_20 + 1;
                      puVar23[3] = (short)iVar15;
                      puVar23 = puVar23 + 1;
                    } while (local_20 < 3);
                    local_ac = -1;
                    local_24 = 0;
                    local_1c = 1e+20;
                    if (0 < (int)local_16c) {
                      local_50 = local_184;
                      do {
                        if (((*(int *)((int)local_50 + 4) == 3) &&
                            (local_3c != *(int *)((int)local_50 + 8))) &&
                           (*(int *)((int)local_50 + 0xc) < 0)) {
                          local_9c = 0;
                          do {
                            iVar15 = local_9c + 6;
                            local_98 = 0.0;
                            pvVar10 = local_b4;
                            do {
                              ppcVar19 = &local_188->_ptr + *(int *)((int)pvVar10 + 0x18) * 3;
                              local_248 = *ppcVar19;
                              local_244 = (float)ppcVar19[1];
                              local_18 = 3;
                              local_240 = (streambuf *)ppcVar19[2];
                              ppcVar19 = &local_188->_ptr +
                                         *(int *)((int)local_50 + (iVar15 % 3) * 0xc + 0x18) * 3;
                              local_1ac = *ppcVar19;
                              local_1a8 = (float)ppcVar19[1];
                              local_2c0 = (float)local_248 - (float)local_1ac;
                              local_2bc = local_244 - local_1a8;
                              local_1a4 = (streambuf *)ppcVar19[2];
                              local_2b8 = (float)local_240 - (float)local_1a4;
                              pvVar10 = (void *)((int)pvVar10 + 0xc);
                              iVar15 = iVar15 + -1;
                              local_98 = local_2b8 * local_2b8 +
                                         local_2c0 * local_2c0 + local_2bc * local_2bc + local_98;
                            } while (pvVar10 != (void *)((int)local_b4 + 0x24));
                            if (local_98 < local_1c) {
                              local_ac = *(int *)((int)local_50 + 8);
                              local_1c = local_98;
                            }
                            local_9c = local_9c + 1;
                          } while (local_9c < 3);
                        }
                        local_24 = local_24 + 1;
                        local_50 = (void *)((int)local_50 + 0x3c);
                      } while (local_24 < (int)local_16c);
                    }
                    if (local_ac < 0) {
                      crt_stdio_c_sprintf_FUN_005fdbd0
                                (&DAT_03670650,"Can't find opposing part for capped face!");
                      goto LAB_0058f8e7;
                    }
                    *(int *)(in_stack_00000004[0x1a] * 4 + in_stack_00000004[0x29]) = local_ac;
                    in_stack_00000004[0x1a] = in_stack_00000004[0x1a] + 1;
                  }
LAB_00591835:
                  local_b8 = local_b8 + 1;
                  local_4c = (void *)((int)local_4c + 0x3c);
                } while (local_b8 < (int)local_16c);
              }
              local_3c = local_3c + 1;
              local_48 = local_48 + 0x18;
            } while (local_3c < in_stack_00000004[0x1c50]);
          }
          if (local_158 != in_stack_00000004[0x1a]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s");
          iVar15 = 0;
          piVar28 = in_stack_00000004;
          if (0 < in_stack_00000004[0x1c50]) {
            do {
              piVar28[0x1c63] = 0;
              iVar15 = iVar15 + 1;
              piVar28 = piVar28 + 0x18;
            } while (iVar15 < in_stack_00000004[0x1c50]);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_188 != (FILE *)0x0) {
            crt_memory_c_free_FUN_005fe659(&local_188[-1]._ungotten);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xff6;
          crt_memory_c_free_FUN_005fe659(local_184);
          pFVar6 = local_180;
          if (local_180 != (FILE *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_180,"Determined parts using %s OK!\n");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\skeledit.cpp",0xffc);
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determined parts using %s OK!");
          return 1;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Deformable model has more faces than segmented model!");
        goto LAB_0058f8e7;
      }
      pcVar16 = "Too many parts in %s";
    }
    else {
LAB_00590a70:
      pcVar16 = "%s is corrupt";
    }
  }
LAB_0058f8da:
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,pcVar16);
LAB_0058f8e7:
  if (local_ec != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_ec,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_180 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_180,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_188 != (FILE *)0x0) {
    crt_memory_c_free_FUN_005fe659(&local_188[-1]._ungotten);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  crt_memory_c_free_FUN_005fe659(local_184);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_17c != (float *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_17c + -1);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_178 != (float *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_178 + -1);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe8;
  crt_memory_c_free_FUN_005fe659(local_174);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe9;
  crt_memory_c_free_FUN_005fe659(local_170);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbea;
  crt_memory_c_free_FUN_005fe659(local_f0);
  return 0;
}
