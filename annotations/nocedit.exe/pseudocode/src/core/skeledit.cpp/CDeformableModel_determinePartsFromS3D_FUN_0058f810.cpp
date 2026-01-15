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
  CEditorTools *this_ptr_00;
  FILE *file;
  int iVar4;
  FILE *pFVar5;
  float *pfVar6;
  int iVar7;
  uint *puVar8;
  void *pvVar9;
  short *psVar10;
  void *pvVar11;
  int extraout_ECX;
  void *extraout_ECX_00;
  uint uVar12;
  short *psVar13;
  int extraout_EDX;
  int extraout_EDX_00;
  int iVar14;
  char *pcVar15;
  ushort *puVar16;
  int iVar17;
  char **ppcVar18;
  int iVar19;
  char **ppcVar20;
  uint *puVar21;
  ushort *puVar22;
  char *pcVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  byte bVar28;
  float10 fVar29;
  double dVar30;
  int *in_stack_00000004;
  float in_stack_ffff5e0c;
  float in_stack_ffff5e10;
  uint in_stack_ffff5e14;
  float fVar31;
  uint in_stack_ffff5e18;
  uint in_stack_ffff5e1c;
  ushort auStack_22c0 [1018];
  uint auStack_1acc [953];
  CPickList CStack_be8;
  char acStack_840 [260];
  char acStack_73c [256];
  char acStack_63c [256];
  char acStack_53c [200];
  byte auStack_474 [120];
  uint auStack_3fc [30];
  char acStack_384 [100];
  CBoundingBox3D local_320;
  byte local_308 [16];
  float local_2f8;
  streambuf *local_2f4;
  uint uStack_2f0;
  byte auStack_2ec [4];
  uint local_2e8;
  uint uStack_2e4;
  ushort local_2e0 [2];
  uint uStack_2dc;
  byte auStack_2d8 [4];
  uint local_2d4;
  uint uStack_2d0;
  ushort local_2cc [2];
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
  float local_29c;
  char *local_298;
  float local_294;
  streambuf *local_290;
  char *local_28c;
  float local_288;
  streambuf *local_284;
  float local_280;
  float local_27c;
  float local_278;
  uint local_274;
  byte local_270 [4];
  byte local_26c [4];
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  char *local_244;
  float local_240;
  streambuf *local_23c;
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
  float local_200;
  byte local_1fc [4];
  byte local_1f8 [8];
  char *local_1f0;
  float local_1ec;
  streambuf *local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  char *local_1c0;
  float local_1bc;
  streambuf *local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  char *local_1a8;
  float local_1a4;
  streambuf *local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  byte local_18c [4];
  byte local_188 [4];
  FILE *local_184;
  void *local_180;
  FILE *local_17c;
  float *local_178;
  float *local_174;
  void *local_170;
  uint *local_16c;
  float local_168;
  char *local_164;
  byte local_160 [4];
  int local_15c;
  void *local_158;
  int local_154;
  int local_150;
  uint *local_14c;
  uint *local_148;
  int *local_144;
  int local_140;
  int *local_13c;
  uint local_138 [2];
  void *local_130;
  uint local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  void *local_110;
  float local_10c;
  int local_108;
  float *local_104;
  float fStack_100;
  float *local_f8;
  float *local_f4;
  int local_f0;
  int *local_ec;
  FILE *local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  byte local_d8 [4];
  int *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  short *local_c4;
  int local_c0;
  short *local_bc;
  short *local_b8;
  int local_b4;
  void *local_b0;
  ushort *local_ac;
  int local_a8;
  int *local_a4;
  int *local_a0;
  float local_9c;
  int local_98;
  float local_94;
  byte *local_90;
  uint *local_8c;
  streambuf **local_88;
  void *local_84;
  void *local_80;
  int local_7c;
  void *local_78;
  float *local_74;
  int local_70;
  int local_6c;
  short *local_68;
  int *local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int local_54;
  int local_50;
  void *local_4c;
  void *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int iStack_14;
  
  bVar28 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa228);
  if (*in_stack_00000004 != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_184 = (FILE *)0x0;
  local_180 = (void *)0x0;
  local_17c = (FILE *)0x0;
  local_178 = (float *)0x0;
  local_174 = (float *)0x0;
  local_170 = (void *)0x0;
  local_16c = (uint *)0x0;
  local_ec = (int *)0x0;
  local_e8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (this_ptr->texture_sets[0].textures[4].texture_variants[1].texture_name,
                        (char *)0x0,"rt","..\\core\\skeledit.cpp",0xbde);
  if (local_e8 == (FILE *)0x0) {
    pcVar15 = "Can't open %s";
  }
  else {
    local_17c = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("parts.log",(char *)0x0,"wt",
                           "..\\core\\skeledit.cpp",0xbee);
    if (local_17c == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0xbef;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create log file!");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Matching skeleton parts for %s\n");
    pFVar5 = local_e8;
    iVar14 = 1;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
      file = local_e8;
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
    crt_stdio_c_fscanf_FUN_005fe7c0(local_e8,"%d\n");
    if ((local_e4 < 0x65) || (0x67 < local_e4)) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_03670650,"%s has incorrect S3D version %d",
                 this_ptr->texture_sets[0].textures[4].texture_variants[1].texture_name);
      goto LAB_0058f8e7;
    }
    iVar14 = 1;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
    iVar14 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (local_e8,"%d,%d,%d,%d,%d,%d,%d\n",&local_e0,&local_168,&local_164,&local_dc,
                        local_160,local_d8);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar14 == 7) {
      if (local_dc < 0x1f) {
        in_stack_00000004[0x1c50] = local_dc;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Reading part list from %s\n");
        pFVar5 = local_e8;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        iVar14 = 0;
        if (0 < in_stack_00000004[0x1c50]) {
          local_144 = in_stack_00000004 + 0x1c51;
          local_90 = auStack_474;
          local_8c = auStack_3fc;
          piVar27 = in_stack_00000004 + 0x1c59;
          do {
            local_13c = local_144 + iVar14 * 0x18;
            local_140 = iVar14 * 4;
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_e8,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_90,local_8c,piVar27);
            if (iVar4 != 4) goto LAB_00590a70;
            in_stack_00000004[iVar14 * 0x18 + 0x1c63] = 0;
            piVar27 = piVar27 + 0x18;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_17c,"\t%2d: %s, verts=%d, tris=%d\n",iVar14,local_13c,
                       *(uint *)((int)auStack_3fc + local_140));
            iVar14 = iVar14 + 1;
            local_90 = local_90 + 4;
            local_8c = local_8c + 1;
          } while (iVar14 < in_stack_00000004[0x1c50]);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Reading texture list from %s\n");
        pFVar5 = local_e8;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        if (0x96 < local_e0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar14 = 0;
        if (0 < local_e0) {
          pcVar15 = &stack0xffff5e18;
          do {
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0(local_e8,"%[^\n]\n");
            if (iVar4 != 1) goto LAB_00590a70;
            crt_string_c_splitpath_FUN_005ff178
                      (acStack_840,(char *)0x0,(char *)0x0,pcVar15,(char *)0x0);
            iVar14 = iVar14 + 1;
            pcVar15 = pcVar15 + 0x100;
          } while (iVar14 < local_e0);
        }
        pcVar15 = "gore";
        pcVar23 = acStack_384;
        for (iVar14 = 0x19; iVar14 != 0; iVar14 = iVar14 + -1) {
          *(uint *)pcVar23 = *(uint *)pcVar15;
          pcVar15 = pcVar15 + ((uint)bVar28 * -2 + 1) * 4;
          pcVar23 = pcVar23 + ((uint)bVar28 * -2 + 1) * 4;
        }
        if (*(int *)this_ptr->texture_sets[0].textures[8].texture_variants[0].texture_name == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",acStack_384,100,1);
        }
        local_15c = -1;
        if (acStack_384[0] != '\0') {
          iVar14 = 0;
          if (0 < in_stack_00000004[0x2f]) {
            piVar27 = in_stack_00000004 + 0x32;
            do {
              crt_string_c_splitpath_FUN_005ff178
                        ((char *)piVar27,(char *)0x0,(char *)0x0,acStack_63c,(char *)0x0);
              iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_384,acStack_63c);
              if (iVar4 == 0) break;
              iVar14 = iVar14 + 1;
              piVar27 = piVar27 + 0x12;
            } while (iVar14 < in_stack_00000004[0x2f]);
          }
          if (in_stack_00000004[0x2f] <= iVar14) {
            if (0x4f < in_stack_00000004[0x2f]) {
              crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Texture list full determining parts");
              goto LAB_0058f8e7;
            }
            crt_stdio_c_sprintf_FUN_005fdbd0
                      ((char *)(in_stack_00000004 + in_stack_00000004[0x2f] * 0x12 + 0x32),
                       "%s.raw");
            in_stack_00000004[0x2f] = in_stack_00000004[0x2f] + 1;
          }
          local_15c = iVar14;
          crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Automap capped faces is active\n");
        }
        local_180 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((int)local_168 * 0x3c,"..\\core\\skeledit.cpp",0xc4e);
        if (local_180 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc4f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading faces from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Reading faces from %s\n");
        pFVar5 = local_e8;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        iVar14 = 0;
        pvVar9 = local_180;
        if (0 < (int)local_168) {
          do {
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_e8,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_138,&local_274,
                               &local_190,local_1fc,local_270,local_18c,local_1f8,local_26c,
                               local_188);
            if (iVar4 != 10) goto LAB_00590a70;
            *(uint *)((int)pvVar9 + 4) = 3;
            iVar4 = 0;
            *(uint *)((int)pvVar9 + 0x14) = local_138[0];
            fVar29 = (float10)_DAT_0064bfd2;
            pvVar11 = pvVar9;
            do {
              *(uint *)((int)pvVar11 + 0x18) = *(uint *)((int)&local_274 + iVar4);
              dVar30 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float10)*(float *)((int)&local_190 + iVar4) * fVar29));
              local_18 = (float)(int)ROUND(dVar30);
              *(int *)(extraout_ECX + 0x1c) = (int)ROUND(dVar30);
              in_stack_ffff5e0c = 8.173442e-39;
              dVar30 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float10)*(float *)(local_1fc + extraout_EDX + -4) *
                                          fVar29));
              local_1c = (int)ROUND(dVar30);
              iVar4 = extraout_EDX_00 + 4;
              *(int *)((int)extraout_ECX_00 + 0x14) = (int)ROUND(dVar30);
              pvVar11 = extraout_ECX_00;
            } while (iVar4 != 0xc);
            crt_stdio_c_fprintf_FUN_005fe6d0(local_184,"\t%4d: %4d %4d %4d\n");
            iVar14 = iVar14 + 1;
            pvVar9 = (void *)((int)pvVar9 + 0x3c);
          } while (iVar14 < (int)local_168);
        }
        pFVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)local_164 * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_184 = pFVar5;
        if (pFVar5 != (FILE *)0x0) {
          local_184 = (FILE *)&pFVar5->_cnt;
          pFVar5->_ptr = local_164;
        }
        if (local_184 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc7d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading vertices from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Reading vertices from %s\n");
        pFVar5 = local_e8;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        iVar14 = 0;
        if (0 < (int)local_164) {
          local_88 = &local_184->_link;
          do {
            ppcVar18 = &local_184->_ptr + iVar14 * 3;
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0(local_e8,"%f,%f,%f\n");
            if (iVar4 != 3) goto LAB_00590a70;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_17c,"\t%4d: %7.3f %7.3f %7.3f\n",iVar14,(double)(float)*ppcVar18,
                       (double)(float)ppcVar18[1],(double)(float)ppcVar18[2]);
            iVar14 = iVar14 + 1;
            local_88 = local_88 + 3;
          } while (iVar14 < (int)local_164);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_e8,"..\\core\\skeledit.cpp",0xc8c);
        local_e8 = (FILE *)0x0;
        crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Removing duplicate faces\n");
        local_24 = 0;
        if (0 < (int)local_168) {
          local_80 = local_180;
          do {
            local_12c = 0;
            local_128 = 0;
            local_130 = local_80;
            if (0 < local_24) {
              local_84 = local_180;
              do {
                if ((*(int *)((int)local_84 + 4) == 3) &&
                   (*(int *)((int)local_84 + 0x14) == *(int *)((int)local_80 + 0x14))) {
                  local_124 = 0;
                  do {
                    iVar4 = 0;
                    iVar14 = local_124;
                    pvVar9 = local_80;
                    do {
                      ppcVar18 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x18) * 3;
                      local_298 = *ppcVar18;
                      local_294 = (float)ppcVar18[1];
                      iStack_14 = 3;
                      local_290 = (streambuf *)ppcVar18[2];
                      ppcVar18 = &local_184->_ptr +
                                 *(int *)((iVar14 % 3) * 0xc + 0x18 + (int)local_84) * 3;
                      local_1f0 = *ppcVar18;
                      local_1ec = (float)ppcVar18[1];
                      local_220 = (float)local_298 - (float)local_1f0;
                      local_1e8 = (streambuf *)ppcVar18[2];
                      local_21c = local_294 - local_1ec;
                      local_218 = (float)local_290 - (float)local_1e8;
                      if ((((float)_DAT_0064bfda < ABS(local_220)) ||
                          ((float)_DAT_0064bfda < ABS(local_21c))) ||
                         ((float)_DAT_0064bfda < ABS(local_218))) break;
                      pvVar9 = (void *)((int)pvVar9 + 0xc);
                      iVar4 = iVar4 + 1;
                      iVar14 = iVar14 + 1;
                    } while (iVar4 < 3);
                    if (iVar4 == 3) {
                      crt_stdio_c_fprintf_FUN_005fe6d0
                                (local_17c,"Removing face %d, it is dup with face %d\n",local_24);
                      *(uint *)((int)local_130 + 4) = 0;
                      goto LAB_005902c8;
                    }
                    local_124 = local_124 + 1;
                  } while (local_124 < 3);
                }
                local_128 = local_128 + 1;
                local_84 = (void *)((int)local_84 + 0x3c);
              } while (local_128 < local_24);
            }
LAB_005902c8:
            local_24 = local_24 + 1;
            local_80 = (void *)((int)local_80 + 0x3c);
          } while (local_24 < (int)local_168);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing %s");
        if ((FILE *)local_308 != local_184) {
          local_308._0_4_ = local_184->_ptr;
          local_308._4_4_ = local_184->_cnt;
          local_308._8_4_ = local_184->_link;
        }
        if ((FILE *)(local_308 + 0xc) != local_184) {
          local_308._12_4_ = local_184->_ptr;
          local_2f8 = (float)local_184->_cnt;
          local_2f4 = local_184->_link;
        }
        iVar14 = 1;
        pFVar5 = local_184;
        if (1 < (int)local_164) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      ((CBoundingBox3D *)local_308,(CVector3f *)&pFVar5->_flag);
            iVar14 = iVar14 + 1;
            pFVar5 = (FILE *)&pFVar5->_flag;
          } while (iVar14 < (int)local_164);
        }
        iVar14 = in_stack_00000004[0x10];
        pCVar1 = (CBoundingBox3D *)(iVar14 + 0x10);
        if (&local_320 != pCVar1) {
          local_320.min.x = (pCVar1->min).x;
          local_320.min.y = *(float *)(iVar14 + 0x14);
          local_320.min.z = *(float *)(iVar14 + 0x18);
        }
        if ((CBoundingBox3D *)&local_320.max != pCVar1) {
          local_320.max.x = (pCVar1->min).x;
          local_320.max.y = *(float *)(iVar14 + 0x14);
          local_320.max.z = *(float *)(iVar14 + 0x18);
        }
        iVar14 = 1;
        if (1 < in_stack_00000004[0xb]) {
          iVar4 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_320,(CVector3f *)(in_stack_00000004[0x10] + iVar4 + 0x10));
            iVar14 = iVar14 + 1;
            iVar4 = iVar4 + 0x34;
          } while (iVar14 < in_stack_00000004[0xb]);
        }
        local_268 = local_320.max.x - local_320.min.x;
        local_2a4 = (float)local_308._12_4_ - (float)local_308._0_4_;
        local_1d8 = local_268 / local_2a4;
        local_264 = local_320.max.y - local_320.min.y;
        local_2a0 = local_2f8 - (float)local_308._4_4_;
        local_1d4 = local_264 / local_2a0;
        local_260 = local_320.max.z - local_320.min.z;
        local_29c = (float)local_2f4 - (float)local_308._8_4_;
        local_1d0 = local_260 / local_29c;
        iVar14 = 0;
        pFVar5 = local_184;
        if (0 < (int)local_164) {
          do {
            pFVar5->_ptr = (char *)(((float)pFVar5->_ptr - (float)local_308._0_4_) * local_1d8 +
                                   local_320.min.x);
            pFVar5->_cnt = (int)(((float)pFVar5->_cnt - (float)local_308._4_4_) * local_1d4 +
                                local_320.min.y);
            iVar14 = iVar14 + 1;
            pFVar5->_link =
                 (streambuf *)
                 (((float)pFVar5->_link - (float)local_308._8_4_) * local_1d0 + local_320.min.z);
            pFVar5 = (FILE *)&pFVar5->_flag;
          } while (iVar14 < (int)local_164);
        }
        local_280 = local_2a4;
        local_27c = local_2a0;
        local_278 = local_29c;
        local_22c = local_268;
        local_228 = local_264;
        local_224 = local_260;
        local_1e4 = local_2a4;
        local_1e0 = local_2a0;
        local_1dc = local_29c;
        local_1b4 = local_268;
        local_1b0 = local_264;
        local_1ac = local_260;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_17c,"Scale = %7.3f %7.3f %7.3f\n",(double)local_1d8,(double)local_1d4,
                   (double)local_1d0);
        pfVar6 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)local_168 * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_178 = pfVar6;
        if (pfVar6 != (float *)0x0) {
          local_178 = pfVar6 + 1;
          *pfVar6 = local_168;
        }
        fVar31 = (float)in_stack_00000004[0x15];
        pfVar6 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)fVar31 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
        local_174 = pfVar6;
        if (pfVar6 != (float *)0x0) {
          local_174 = pfVar6 + 1;
          *pfVar6 = fVar31;
        }
        if ((local_178 == (float *)0x0) || (local_174 == (float *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar14 = 0;
        pvVar9 = local_180;
        pfVar6 = local_178;
        if (0 < (int)local_168) {
          do {
            if (*(int *)((int)pvVar9 + 4) == 3) {
              ppcVar20 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x18) * 3;
              ppcVar18 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x24) * 3;
              local_2b0 = (float)*ppcVar18 - (float)*ppcVar20;
              local_2ac = (float)ppcVar18[1] - (float)ppcVar20[1];
              local_2a8 = (float)ppcVar18[2] - (float)ppcVar20[2];
              ppcVar20 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x30) * 3;
              local_250 = (float)*ppcVar20 - (float)*ppcVar18;
              local_24c = (float)ppcVar20[1] - (float)ppcVar18[1];
              local_248 = (float)ppcVar20[2] - (float)ppcVar18[2];
              local_198 = local_2a8 * local_250 - local_2b0 * local_248;
              local_19c = local_2ac * local_248 - local_2a8 * local_24c;
              local_194 = local_2b0 * local_24c - local_2ac * local_250;
              in_stack_ffff5e10 =
                   SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198);
              if (in_stack_ffff5e10 <= 0.0) {
                local_198 = 0.0;
                local_19c = 0.0;
                local_194 = 0.0;
              }
              else {
                fVar31 = 1.0 / in_stack_ffff5e10;
                local_19c = local_19c * fVar31;
                local_198 = local_198 * fVar31;
                local_194 = local_194 * fVar31;
              }
              if (pfVar6 != &local_19c) {
                *pfVar6 = local_19c;
                pfVar6[1] = local_198;
                pfVar6[2] = local_194;
              }
            }
            iVar14 = iVar14 + 1;
            pvVar9 = (void *)((int)pvVar9 + 0x3c);
            pfVar6 = pfVar6 + 3;
          } while (iVar14 < (int)local_168);
        }
        iVar14 = 0;
        if (0 < in_stack_00000004[0x15]) {
          local_7c = 0;
          pfVar6 = local_174;
          do {
            puVar16 = (ushort *)(in_stack_00000004[0x1f] + local_7c);
            iVar7 = (uint)puVar16[1] * 0x34;
            iVar19 = (uint)*puVar16 * 0x34;
            iVar4 = in_stack_00000004[0x10];
            iVar17 = (uint)puVar16[2] * 0x34;
            local_2c8 = *(float *)(iVar4 + 0x10 + iVar7) - *(float *)(iVar4 + 0x10 + iVar19);
            local_2c4 = *(float *)(iVar4 + 0x14 + iVar7) - *(float *)(iVar4 + 0x14 + iVar19);
            local_2c0 = *(float *)(iVar4 + 0x18 + iVar7) - *(float *)(iVar4 + 0x18 + iVar19);
            local_25c = *(float *)(iVar4 + 0x10 + iVar17) - *(float *)(iVar4 + 0x10 + iVar7);
            local_258 = *(float *)(iVar4 + 0x14 + iVar17) - *(float *)(iVar4 + 0x14 + iVar7);
            local_254 = *(float *)(iVar4 + 0x18 + iVar17) - *(float *)(iVar4 + 0x18 + iVar7);
            local_234 = local_2c0 * local_25c - local_2c8 * local_254;
            local_238 = local_2c4 * local_254 - local_2c0 * local_258;
            local_230 = local_2c8 * local_258 - local_2c4 * local_25c;
            in_stack_ffff5e0c =
                 SQRT(local_230 * local_230 + local_238 * local_238 + local_234 * local_234);
            if (in_stack_ffff5e0c <= 0.0) {
              local_234 = 0.0;
              local_238 = 0.0;
              local_230 = 0.0;
            }
            else {
              fVar31 = 1.0 / in_stack_ffff5e0c;
              local_238 = local_238 * fVar31;
              local_234 = local_234 * fVar31;
              local_230 = local_230 * fVar31;
            }
            if (pfVar6 != &local_238) {
              *pfVar6 = local_238;
              pfVar6[1] = local_234;
              pfVar6[2] = local_230;
            }
            pfVar6 = pfVar6 + 3;
            iVar14 = iVar14 + 1;
            local_7c = local_7c + 0x12;
          } while (iVar14 < in_stack_00000004[0x15]);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Matching faces in %s\n");
        if (in_stack_00000004[0x15] <= (int)local_168) {
          local_170 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (in_stack_00000004[0x15] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_170 == (void *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_158 = local_180;
          iVar14 = 0;
          if (0 < in_stack_00000004[0x1c50]) {
            iVar4 = 0;
            do {
              pvVar9 = local_158;
              for (iVar7 = 0; iVar7 < *(int *)((int)in_stack_00000004 + iVar4 + 0x7164);
                  iVar7 = iVar7 + 1) {
                *(uint *)((int)pvVar9 + 0xc) = 0xffffffff;
                *(int *)((int)pvVar9 + 8) = iVar14;
                pvVar9 = (void *)((int)pvVar9 + 0x3c);
              }
              local_158 = (void *)((int)local_158 +
                                  *(int *)((int)in_stack_00000004 + iVar4 + 0x7164) * 0x3c);
              iVar4 = iVar4 + 0x60;
              iVar14 = iVar14 + 1;
            } while (iVar14 < in_stack_00000004[0x1c50]);
          }
          local_28 = 0;
          if (0 < in_stack_00000004[0x15]) {
            do {
              iStack_14 = local_28;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_28,(float)in_stack_00000004[0x15]);
              local_120 = local_28;
              while (-1 < local_120) {
                local_11c = in_stack_00000004[0x1f] + local_120 * 0x12;
                pfVar6 = (float *)(local_120 * 4 + (int)local_170);
                *pfVar6 = 1e+30;
                local_118 = -1;
                local_114 = 0;
                if (0 < (int)local_168) {
                  local_78 = local_180;
                  local_104 = local_174 + local_120 * 3;
                  local_74 = local_178;
                  do {
                    local_110 = local_78;
                    if (*(int *)((int)local_78 + 4) == 3) {
                      local_10c = (float)_DAT_0064bfea -
                                  (local_104[2] * local_74[2] +
                                  *local_104 * *local_74 + local_104[1] * local_74[1]);
                      local_108 = 0;
                      do {
                        iVar4 = 0;
                        fStack_100 = 0.0;
                        iVar14 = local_108;
                        pvVar9 = local_78;
                        do {
                          ppcVar18 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x18) * 3;
                          local_28c = *ppcVar18;
                          local_288 = (float)ppcVar18[1];
                          local_284 = (streambuf *)ppcVar18[2];
                          iVar7 = in_stack_00000004[0x10] +
                                  (uint)*(ushort *)((iVar14 % 3) * 2 + local_11c) * 0x34;
                          local_1cc = *(float *)(iVar7 + 0x10);
                          local_1c8 = *(float *)(iVar7 + 0x14);
                          local_208 = local_1cc - (float)local_28c;
                          local_1c4 = *(float *)(iVar7 + 0x18);
                          local_204 = local_1c8 - local_288;
                          local_200 = local_1c4 - (float)local_284;
                          if ((((float)_DAT_0064bfe2 < ABS(local_208)) ||
                              ((float)_DAT_0064bfe2 < ABS(local_204))) ||
                             ((float)_DAT_0064bfe2 < ABS(local_200))) break;
                          fVar31 = local_200 * local_200 +
                                   local_208 * local_208 + local_204 * local_204;
                          iVar14 = iVar14 + 1;
                          pvVar9 = (void *)((int)pvVar9 + 0xc);
                          fStack_100 = fVar31 * fVar31 * fVar31 + fStack_100;
                          iVar4 = iVar4 + 1;
                        } while (iVar4 < 3);
                        if (((2 < iVar4) &&
                            (fStack_100 = fStack_100 * local_10c, fStack_100 <= *pfVar6)) &&
                           ((*(int *)((int)local_78 + 0xc) < 0 ||
                            (fStack_100 <
                             *(float *)(*(int *)((int)local_78 + 0xc) * 4 + (int)local_170))))) {
                          local_118 = local_114;
                          *pfVar6 = fStack_100;
                        }
                        local_108 = local_108 + 1;
                      } while (local_108 < 3);
                    }
                    local_74 = local_74 + 3;
                    local_114 = local_114 + 1;
                    local_78 = (void *)((int)local_78 + 0x3c);
                    local_f8 = pfVar6;
                    local_f4 = pfVar6;
                  } while (local_114 < (int)local_168);
                }
                if (local_118 == -1) break;
                iVar14 = *(int *)((int)local_180 + local_118 * 0x3c + 0xc);
                *(int *)((int)local_180 + local_118 * 0x3c + 0xc) = local_120;
                local_120 = iVar14;
              }
              local_28 = local_28 + 1;
            } while (local_28 < in_stack_00000004[0x15]);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_178 != (float *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_178 + -1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_178 = (float *)0x0;
          if (local_174 != (float *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_174 + -1);
          }
          local_174 = (float *)0x0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          crt_memory_c_free_FUN_005fe659(local_170);
          iVar14 = 0;
          local_170 = (void *)0x0;
          local_154 = 0;
          piVar27 = in_stack_00000004;
          if (0 < in_stack_00000004[0x1c50]) {
            do {
              piVar27[0x1c5e] = 0;
              piVar27[0x1c59] = 0;
              iVar14 = iVar14 + 1;
              piVar27 = piVar27 + 0x18;
            } while (iVar14 < in_stack_00000004[0x1c50]);
          }
          puVar8 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (in_stack_00000004[0x15] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_16c = puVar8;
          local_ec = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (in_stack_00000004[0x15] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((puVar8 == (uint *)0x0) || (local_ec == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar14 = 0;
          piVar27 = local_ec;
          puVar8 = local_16c;
          if (0 < in_stack_00000004[0x15]) {
            do {
              *piVar27 = 999999;
              iVar14 = iVar14 + 1;
              *puVar8 = 0xffffffff;
              piVar27 = piVar27 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar14 < in_stack_00000004[0x15]);
          }
          iVar14 = 0;
          local_150 = 0;
          pvVar9 = local_180;
          if (0 < (int)local_168) {
            do {
              if (*(int *)((int)pvVar9 + 4) == 3) {
                iVar4 = *(int *)((int)pvVar9 + 8);
                iVar7 = *(int *)((int)pvVar9 + 0xc);
                if (iVar7 < 0) {
                  local_154 = local_154 + 1;
                  in_stack_00000004[iVar4 * 0x18 + 0x1c5e] =
                       in_stack_00000004[iVar4 * 0x18 + 0x1c5e] + 1;
                }
                else {
                  local_f0 = iVar7 * 4;
                  if (-1 < (int)local_16c[iVar7]) {
                    pcVar15 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  local_ec[iVar7] = iVar4;
                  local_16c[iVar7] = iVar14;
                  local_150 = local_150 + 1;
                  in_stack_00000004[iVar4 * 0x18 + 0x1c59] =
                       in_stack_00000004[iVar4 * 0x18 + 0x1c59] + 1;
                }
              }
              iVar14 = iVar14 + 1;
              pvVar9 = (void *)((int)pvVar9 + 0x3c);
            } while (iVar14 < (int)local_168);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          crt_memory_c_free_FUN_005fe659(local_16c);
          local_2c = in_stack_00000004[0x15] + -1;
          local_16c = (uint *)0x0;
          piVar27 = local_ec;
          while (local_ec = piVar27, -1 < local_2c) {
            iVar14 = 0;
            if (0 < local_2c) {
              local_70 = 0;
              local_6c = 0x12;
              do {
                if (piVar27[1] < *piVar27) {
                  iStack_14 = iVar14 * 4 + 4;
                  puVar21 = (uint *)(iStack_14 + in_stack_00000004[0x24]);
                  puVar8 = (uint *)(iVar14 * 4 + in_stack_00000004[0x24]);
                  uVar3 = *puVar8;
                  *puVar8 = *puVar21;
                  *puVar21 = uVar3;
                  puVar21 = (uint *)(local_6c + in_stack_00000004[0x1f]);
                  puVar8 = (uint *)(in_stack_00000004[0x1f] + local_70);
                  uStack_2dc = *puVar8;
                  *(ushort *)(auStack_2d8 + (uint)bVar28 * -8) =
                       *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1);
                  stack0xfffffd2a = *(uint *)((int)puVar8 + 6);
                  *(ushort *)((int)&local_2d4 + (uint)bVar28 * -8 + 2) =
                       *(ushort *)((int)puVar8 + (uint)bVar28 * -8 + 10);
                  uStack_2d0 = puVar8[3];
                  local_2cc[(uint)bVar28 * -4] = *(ushort *)(puVar8 + (uint)bVar28 * -2 + 4);
                  puVar24 = puVar8 + (uint)bVar28 * -2 + 1;
                  puVar26 = puVar21 + (uint)bVar28 * -2 + 1;
                  *puVar8 = *puVar21;
                  puVar25 = puVar24 + (uint)bVar28 * -2 + 1;
                  puVar8 = puVar26 + (uint)bVar28 * -2 + 1;
                  *puVar24 = *puVar26;
                  *puVar25 = *puVar8;
                  puVar25[(uint)bVar28 * -2 + 1] = puVar8[(uint)bVar28 * -2 + 1];
                  *(ushort *)(puVar25 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1) =
                       *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1);
                  puVar26 = puVar21 + (uint)bVar28 * -2 + 1;
                  *puVar21 = uStack_2dc;
                  puVar21 = puVar26 + (uint)bVar28 * -2 + 1;
                  puVar8 = &local_2d4 + (uint)bVar28 * -2 + (uint)bVar28 * -2;
                  *puVar26 = *(uint *)(auStack_2d8 + (uint)bVar28 * -8);
                  *puVar21 = *puVar8;
                  puVar21[(uint)bVar28 * -2 + 1] = puVar8[(uint)bVar28 * -2 + 1];
                  *(ushort *)(puVar21 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1) =
                       *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1);
                  iVar4 = *piVar27;
                  *piVar27 = *(int *)((int)local_ec + iStack_14);
                  *(int *)((int)local_ec + iStack_14) = iVar4;
                }
                iVar14 = iVar14 + 1;
                piVar27 = piVar27 + 1;
                local_70 = local_70 + 0x12;
                local_6c = local_6c + 0x12;
              } while (iVar14 < local_2c);
            }
            local_2c = local_2c + -1;
            piVar27 = local_ec;
          }
          iVar14 = 2;
          if (local_150 != in_stack_00000004[0x15]) {
            local_d4 = in_stack_00000004 + 0x1c51;
            do {
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_53c,"There are %d triangles I couldn't match.");
              if (*(int *)this_ptr->texture_sets[0].textures[8].texture_variants[0].texture_name ==
                  0) {
                shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_be8);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&CStack_be8.base_strlist,"Get rid of them them, I never want to see them again");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&CStack_be8.base_strlist,"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&CStack_be8.base_strlist,"Try best guess");
                do {
                  iVar14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     (&CStack_be8,acStack_53c,iVar14,0);
                } while (iVar14 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (&CStack_be8,0,(uint)in_stack_ffff5e0c,(uint)in_stack_ffff5e10,
                           in_stack_ffff5e14,in_stack_ffff5e18,in_stack_ffff5e1c);
              }
              iVar4 = local_150;
              if (iVar14 == 0) {
                in_stack_00000004[0x15] = local_150;
              }
              else if (iVar14 == 1) {
                if (0x1d < in_stack_00000004[0x1c50]) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                pcVar15 = "MySpecialTriangles";
                piVar27 = local_d4 + in_stack_00000004[0x1c50] * 0x18;
                do {
                  cVar2 = *pcVar15;
                  *(char *)piVar27 = cVar2;
                  if (cVar2 == '\0') break;
                  cVar2 = pcVar15[1];
                  pcVar15 = pcVar15 + 2;
                  *(char *)((int)piVar27 + 1) = cVar2;
                  piVar27 = (int *)((int)piVar27 + 2);
                } while (cVar2 != '\0');
                in_stack_00000004[in_stack_00000004[0x1c50] * 0x18 + 0x1c59] =
                     in_stack_00000004[0x15] - local_150;
                in_stack_00000004[in_stack_00000004[0x1c50] * 0x18 + 0x1c5e] = 0;
                in_stack_00000004[in_stack_00000004[0x1c50] * 0x18 + 0x1c63] = 0;
                local_150 = in_stack_00000004[0x15];
                in_stack_00000004[0x1c50] = in_stack_00000004[0x1c50] + 1;
              }
              else if (iVar14 == 2) {
                local_d0 = 1;
                local_cc = local_150;
                local_c8 = 0;
                if (0 < in_stack_00000004[0x15]) {
                  local_40 = local_150 * 0x12;
                  local_3c = local_150 * 4;
                  do {
                    if (local_d0 == 0) break;
                    local_d0 = 0;
                    local_30 = iVar4;
                    if (iVar4 < in_stack_00000004[0x15]) {
                      local_58 = local_ec + iVar4;
                      local_5c = local_40;
                      do {
                        if (0xf423e < *local_58) {
                          local_c4 = (short *)(local_5c + in_stack_00000004[0x1f]);
                          local_c0 = 0;
                          if (0 < in_stack_00000004[0x15]) {
                            local_60 = 0;
                            local_64 = local_ec;
                            do {
                              if (*local_64 < 999999) {
                                local_bc = (short *)(local_60 + in_stack_00000004[0x1f]);
                                iVar14 = 0;
                                local_68 = local_c4 + 3;
                                psVar10 = local_c4;
                                do {
                                  local_b8 = psVar10;
                                  iVar7 = 0;
                                  psVar13 = local_bc;
                                  if (*psVar10 != *local_bc) {
                                    do {
                                      iVar7 = iVar7 + 1;
                                      psVar13 = psVar13 + 1;
                                      if (2 < iVar7) goto LAB_00591f48;
                                    } while (*psVar13 != *psVar10);
                                  }
                                  iVar14 = iVar14 + 1;
LAB_00591f48:
                                  psVar10 = psVar10 + 1;
                                } while (psVar10 != local_c4 + 3);
                                if (1 < iVar14) {
                                  iVar14 = local_ec[local_c0];
                                  in_stack_00000004[iVar14 * 0x18 + 0x1c59] =
                                       in_stack_00000004[iVar14 * 0x18 + 0x1c59] + 1;
                                  local_150 = local_150 + 1;
                                  *local_58 = local_ec[local_c0];
                                  break;
                                }
                              }
                              local_c0 = local_c0 + 1;
                              local_60 = local_60 + 0x12;
                              local_64 = local_64 + 1;
                            } while (local_c0 < in_stack_00000004[0x15]);
                          }
                          if (0xf423e < *local_58) {
                            local_d0 = 1;
                          }
                        }
                        local_30 = local_30 + 1;
                        local_58 = local_58 + 1;
                        local_5c = local_5c + 0x12;
                      } while (local_30 < in_stack_00000004[0x15]);
                    }
                    local_c8 = local_c8 + 1;
                  } while (local_c8 < in_stack_00000004[0x15]);
                }
                local_34 = in_stack_00000004[0x15] + -1;
                piVar27 = local_ec;
                while (local_ec = piVar27, -1 < local_34) {
                  iVar14 = 0;
                  if (0 < local_34) {
                    local_54 = 0;
                    local_50 = 0x12;
                    do {
                      if (piVar27[1] < *piVar27) {
                        iStack_14 = iVar14 * 4 + 4;
                        puVar21 = (uint *)(iStack_14 + in_stack_00000004[0x24]);
                        puVar8 = (uint *)(in_stack_00000004[0x24] + iVar14 * 4);
                        uVar3 = *puVar8;
                        *puVar8 = *puVar21;
                        *puVar21 = uVar3;
                        puVar21 = (uint *)(local_50 + in_stack_00000004[0x1f]);
                        puVar8 = (uint *)(in_stack_00000004[0x1f] + local_54);
                        uStack_2f0 = *puVar8;
                        *(ushort *)(auStack_2ec + (uint)bVar28 * -8) =
                             *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1);
                        stack0xfffffd16 = *(uint *)((int)puVar8 + 6);
                        *(ushort *)((int)&local_2e8 + (uint)bVar28 * -8 + 2) =
                             *(ushort *)((int)puVar8 + (uint)bVar28 * -8 + 10);
                        uStack_2e4 = puVar8[3];
                        local_2e0[(uint)bVar28 * -4] =
                             *(ushort *)(puVar8 + (uint)bVar28 * -2 + 4);
                        puVar24 = puVar8 + (uint)bVar28 * -2 + 1;
                        puVar26 = puVar21 + (uint)bVar28 * -2 + 1;
                        *puVar8 = *puVar21;
                        puVar25 = puVar24 + (uint)bVar28 * -2 + 1;
                        puVar8 = puVar26 + (uint)bVar28 * -2 + 1;
                        *puVar24 = *puVar26;
                        *puVar25 = *puVar8;
                        puVar25[(uint)bVar28 * -2 + 1] = puVar8[(uint)bVar28 * -2 + 1];
                        *(ushort *)(puVar25 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1) =
                             *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1)
                        ;
                        puVar26 = puVar21 + (uint)bVar28 * -2 + 1;
                        *puVar21 = uStack_2f0;
                        puVar21 = puVar26 + (uint)bVar28 * -2 + 1;
                        puVar8 = &local_2e8 + (uint)bVar28 * -2 + (uint)bVar28 * -2;
                        *puVar26 = *(uint *)(auStack_2ec + (uint)bVar28 * -8);
                        *puVar21 = *puVar8;
                        puVar21[(uint)bVar28 * -2 + 1] = puVar8[(uint)bVar28 * -2 + 1];
                        *(ushort *)(puVar21 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1) =
                             *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1)
                        ;
                        iVar4 = *piVar27;
                        *piVar27 = *(int *)((int)local_ec + iStack_14);
                        *(int *)((int)local_ec + iStack_14) = iVar4;
                      }
                      iVar14 = iVar14 + 1;
                      piVar27 = piVar27 + 1;
                      local_54 = local_54 + 0x12;
                      local_50 = local_50 + 0x12;
                    } while (iVar14 < local_34);
                  }
                  local_34 = local_34 + -1;
                  piVar27 = local_ec;
                }
                iVar14 = 1;
              }
            } while (local_150 != in_stack_00000004[0x15]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          crt_memory_c_free_FUN_005fe659(local_ec);
          local_ec = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          puVar8 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             ((in_stack_00000004[0x15] + local_154) * 0x12,
                              "..\\core\\skeledit.cpp",0xf1a);
          local_14c = puVar8;
          local_148 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                ((in_stack_00000004[0x15] + local_154) * 4,
                                 "..\\core\\skeledit.cpp",0xf1b);
          if ((puVar8 == (uint *)0x0) || (local_148 == (uint *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          puVar8 = local_14c;
          iVar14 = in_stack_00000004[0x15];
          puVar21 = (uint *)in_stack_00000004[0x1f];
          puVar26 = local_14c;
          for (uVar12 = (uint)(iVar14 * 0x12) >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar26 = *puVar21;
            puVar21 = puVar21 + (uint)bVar28 * -2 + 1;
            puVar26 = puVar26 + (uint)bVar28 * -2 + 1;
          }
          for (uVar12 = iVar14 * 0x12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(byte *)puVar26 = *(byte *)puVar21;
            puVar21 = (uint *)((int)puVar21 + (uint)bVar28 * -2 + 1);
            puVar26 = (uint *)((int)puVar26 + (uint)bVar28 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0x1f]);
          in_stack_00000004[0x1f] = (int)puVar8;
          puVar8 = (uint *)in_stack_00000004[0x24];
          puVar21 = local_148;
          for (uVar12 = in_stack_00000004[0x15] & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar21 = *puVar8;
            puVar8 = puVar8 + (uint)bVar28 * -2 + 1;
            puVar21 = puVar21 + (uint)bVar28 * -2 + 1;
          }
          for (iVar14 = 0; iVar14 != 0; iVar14 = iVar14 + -1) {
            *(byte *)puVar21 = *(byte *)puVar8;
            puVar8 = (uint *)((int)puVar8 + (uint)bVar28 * -2 + 1);
            puVar21 = (uint *)((int)puVar21 + (uint)bVar28 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf24;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0x24]);
          g_CurrentDebugLine = 0xf28;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          in_stack_00000004[0x24] = (int)local_148;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_00000004[0x29]);
          in_stack_00000004[0x29] = 0;
          if (0 < local_154) {
            pvVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (local_154 * 4,"..\\core\\skeledit.cpp",0xf2b);
            in_stack_00000004[0x29] = (int)pvVar9;
            if (pvVar9 == (void *)0x0) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0xf2c;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
            }
          }
          local_38 = 0;
          in_stack_00000004[0x1a] = 0;
          if (0 < in_stack_00000004[0x1c50]) {
            local_a4 = in_stack_00000004 + 0x30;
            local_44 = in_stack_00000004;
            local_a0 = local_a4;
            do {
              if ((0 < local_44[0x1c5e]) && (local_b4 = 0, 0 < (int)local_168)) {
                local_48 = local_180;
                do {
                  local_b0 = local_48;
                  if (((*(int *)((int)local_48 + 4) == 3) &&
                      (local_38 == *(int *)((int)local_48 + 8))) &&
                     (*(int *)((int)local_48 + 0xc) < 0)) {
                    local_ac = (ushort *)
                               (in_stack_00000004[0x1f] +
                               (in_stack_00000004[0x15] + in_stack_00000004[0x1a]) * 0x12);
                    if (local_15c < 0) {
                      iVar14 = *(int *)((int)local_48 + 0x14);
                      if (iVar14 < 0) goto LAB_00591835;
                      iVar4 = 0;
                      if (0 < in_stack_00000004[0x2f]) {
                        piVar27 = local_a4 + 2;
                        do {
                          crt_string_c_splitpath_FUN_005ff178
                                    ((char *)piVar27,(char *)0x0,(char *)0x0,acStack_73c,(char *)0x0
                                    );
                          iVar7 = crt_string_c_stricmp_FUN_005fe7f0
                                            (&stack0xffff5e18 + iVar14 * 0x100,acStack_73c);
                          if (iVar7 == 0) break;
                          iVar4 = iVar4 + 1;
                          piVar27 = piVar27 + 0x12;
                        } while (iVar4 < in_stack_00000004[0x2f]);
                      }
                      if (in_stack_00000004[0x2f] <= iVar4) {
                        if (0x4f < in_stack_00000004[0x2f]) {
                          g_CurrentFilename = "..\\core\\skeledit.cpp";
                          g_CurrentLineNumber = 0xf5d;
                          core_main_c_displayErrorAndQuit_FUN_00506f10
                                    ("Too many model textures!");
                        }
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  ((char *)(local_a0 + in_stack_00000004[0x2f] * 0x12 + 2),
                                   "%s.raw");
                        in_stack_00000004[0x2f] = in_stack_00000004[0x2f] + 1;
                      }
                      *(int *)(in_stack_00000004[0x24] +
                              (in_stack_00000004[0x15] + in_stack_00000004[0x1a]) * 4) = iVar4;
                    }
                    else {
                      *(int *)((in_stack_00000004[0x15] + in_stack_00000004[0x1a]) * 4 +
                              in_stack_00000004[0x24]) = local_15c;
                    }
                    local_1c = 0;
                    puVar22 = local_ac;
                    pvVar9 = local_b0;
                    do {
                      ppcVar18 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x18) * 3;
                      local_1c0 = *ppcVar18;
                      local_1bc = (float)ppcVar18[1];
                      local_1b8 = (streambuf *)ppcVar18[2];
                      fVar31 = 1e+20;
                      iVar14 = 0;
                      if (0 < in_stack_00000004[0xb]) {
                        iVar4 = 0;
                        do {
                          iVar7 = in_stack_00000004[0x10];
                          local_214 = *(float *)(iVar4 + 0x10 + iVar7) - (float)local_1c0;
                          local_210 = *(float *)(iVar4 + 0x14 + iVar7) - local_1bc;
                          local_20c = *(float *)(iVar4 + 0x18 + iVar7) - (float)local_1b8;
                          local_9c = local_20c * local_20c +
                                     local_214 * local_214 + local_210 * local_210;
                          if (local_9c < fVar31) {
                            *puVar22 = (short)iVar14;
                            fVar31 = local_9c;
                          }
                          iVar14 = iVar14 + 1;
                          iVar4 = iVar4 + 0x34;
                        } while (iVar14 < in_stack_00000004[0xb]);
                      }
                      if ((float)_DAT_0064bfe2 < fVar31) {
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  (&DAT_03670650,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        goto LAB_0058f8e7;
                      }
                      iVar14 = *(int *)((int)pvVar9 + 0x1c) >> 8;
                      iVar4 = *(int *)((int)pvVar9 + 0x20) >> 8;
                      if (iVar14 < 0) {
                        iVar14 = 0;
                      }
                      else if (0xffff < iVar14) {
                        iVar14 = 0xffff;
                      }
                      if (iVar4 < 0) {
                        iVar4 = 0;
                      }
                      else if (0xffff < iVar4) {
                        iVar4 = 0xffff;
                      }
                      pvVar9 = (void *)((int)pvVar9 + 0xc);
                      puVar22[6] = (short)iVar4;
                      local_1c = local_1c + 1;
                      puVar22[3] = (short)iVar14;
                      puVar22 = puVar22 + 1;
                    } while (local_1c < 3);
                    local_a8 = -1;
                    local_20 = 0;
                    local_18 = 1e+20;
                    if (0 < (int)local_168) {
                      local_4c = local_180;
                      do {
                        if (((*(int *)((int)local_4c + 4) == 3) &&
                            (local_38 != *(int *)((int)local_4c + 8))) &&
                           (*(int *)((int)local_4c + 0xc) < 0)) {
                          local_98 = 0;
                          do {
                            iVar14 = local_98 + 6;
                            local_94 = 0.0;
                            pvVar9 = local_b0;
                            do {
                              ppcVar18 = &local_184->_ptr + *(int *)((int)pvVar9 + 0x18) * 3;
                              local_244 = *ppcVar18;
                              local_240 = (float)ppcVar18[1];
                              iStack_14 = 3;
                              local_23c = (streambuf *)ppcVar18[2];
                              ppcVar18 = &local_184->_ptr +
                                         *(int *)((int)local_4c + (iVar14 % 3) * 0xc + 0x18) * 3;
                              local_1a8 = *ppcVar18;
                              local_1a4 = (float)ppcVar18[1];
                              local_2bc = (float)local_244 - (float)local_1a8;
                              local_2b8 = local_240 - local_1a4;
                              local_1a0 = (streambuf *)ppcVar18[2];
                              local_2b4 = (float)local_23c - (float)local_1a0;
                              pvVar9 = (void *)((int)pvVar9 + 0xc);
                              iVar14 = iVar14 + -1;
                              local_94 = local_2b4 * local_2b4 +
                                         local_2bc * local_2bc + local_2b8 * local_2b8 + local_94;
                            } while (pvVar9 != (void *)((int)local_b0 + 0x24));
                            if (local_94 < local_18) {
                              local_a8 = *(int *)((int)local_4c + 8);
                              local_18 = local_94;
                            }
                            local_98 = local_98 + 1;
                          } while (local_98 < 3);
                        }
                        local_20 = local_20 + 1;
                        local_4c = (void *)((int)local_4c + 0x3c);
                      } while (local_20 < (int)local_168);
                    }
                    if (local_a8 < 0) {
                      crt_stdio_c_sprintf_FUN_005fdbd0
                                (&DAT_03670650,"Can't find opposing part for capped face!");
                      goto LAB_0058f8e7;
                    }
                    *(int *)(in_stack_00000004[0x1a] * 4 + in_stack_00000004[0x29]) = local_a8;
                    in_stack_00000004[0x1a] = in_stack_00000004[0x1a] + 1;
                  }
LAB_00591835:
                  local_b4 = local_b4 + 1;
                  local_48 = (void *)((int)local_48 + 0x3c);
                } while (local_b4 < (int)local_168);
              }
              local_38 = local_38 + 1;
              local_44 = local_44 + 0x18;
            } while (local_38 < in_stack_00000004[0x1c50]);
          }
          if (local_154 != in_stack_00000004[0x1a]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s");
          iVar14 = 0;
          piVar27 = in_stack_00000004;
          if (0 < in_stack_00000004[0x1c50]) {
            do {
              piVar27[0x1c63] = 0;
              iVar14 = iVar14 + 1;
              piVar27 = piVar27 + 0x18;
            } while (iVar14 < in_stack_00000004[0x1c50]);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_184 != (FILE *)0x0) {
            crt_memory_c_free_FUN_005fe659(&local_184[-1]._ungotten);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xff6;
          crt_memory_c_free_FUN_005fe659(local_180);
          pFVar5 = local_17c;
          if (local_17c != (FILE *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_17c,"Determined parts using %s OK!\n");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\skeledit.cpp",0xffc);
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determined parts using %s OK!");
          return 1;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Deformable model has more faces than segmented model!");
        goto LAB_0058f8e7;
      }
      pcVar15 = "Too many parts in %s";
    }
    else {
LAB_00590a70:
      pcVar15 = "%s is corrupt";
    }
  }
LAB_0058f8da:
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,pcVar15);
LAB_0058f8e7:
  if (local_e8 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_e8,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_17c != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_17c,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_184 != (FILE *)0x0) {
    crt_memory_c_free_FUN_005fe659(&local_184[-1]._ungotten);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  crt_memory_c_free_FUN_005fe659(local_180);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_178 != (float *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_178 + -1);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_174 != (float *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_174 + -1);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe8;
  crt_memory_c_free_FUN_005fe659(local_170);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe9;
  crt_memory_c_free_FUN_005fe659(local_16c);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbea;
  crt_memory_c_free_FUN_005fe659(local_ec);
  return 0;
}
