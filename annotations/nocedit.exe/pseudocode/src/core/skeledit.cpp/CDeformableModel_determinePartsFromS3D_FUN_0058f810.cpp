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
  char cVar1;
  uint uVar2;
  CEditorTools *this_ptr_00;
  FILE *pFVar3;
  FILE *file;
  int iVar4;
  float *pfVar5;
  CBoundingBox3D *pCVar6;
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
  BADSPACEBASE *in_ESP;
  CVector3f *pCVar18;
  int iVar19;
  CVector3f *pCVar20;
  uint *puVar21;
  char *pcVar22;
  ushort *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int *piVar27;
  byte bVar28;
  float10 fVar29;
  double dVar30;
  int *in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_ffff5e18;
  uint in_stack_ffff5e1c;
  float fVar31;
  uint in_stack_ffff5e20;
  uint in_stack_ffff5e24;
  ushort auStack_22b8 [1018];
  uint auStack_1ac4 [953];
  CPickList CStack_be0;
  char acStack_838 [260];
  char acStack_734 [256];
  char acStack_634 [256];
  char acStack_534 [200];
  byte auStack_46c [120];
  uint auStack_3f4 [30];
  char acStack_37c [100];
  CBoundingBox3D local_318;
  CBoundingBox3D local_300;
  uint local_2e8;
  byte auStack_2e4 [4];
  uint local_2e0;
  uint uStack_2dc;
  ushort auStack_2d8 [2];
  uint local_2d4;
  byte auStack_2d0 [4];
  uint local_2cc;
  uint local_2c8;
  ushort local_2c4 [2];
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
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  uint local_26c;
  byte local_268 [4];
  byte local_264 [4];
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
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
  float local_200;
  float local_1fc;
  float local_1f8;
  byte local_1f4 [4];
  byte local_1f0 [8];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  byte local_184 [4];
  byte local_180 [4];
  CBoundingBox3D *local_17c;
  void *local_178;
  FILE *local_174;
  float *local_170;
  float *local_16c;
  void *local_168;
  uint *local_164;
  float local_160;
  float local_15c;
  byte local_158 [4];
  int local_154;
  void *local_150;
  int local_14c;
  int local_148;
  uint *local_144;
  uint *local_140;
  int *local_13c;
  int local_138;
  int *local_134;
  uint local_130 [2];
  void *local_128;
  uint local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  void *local_108;
  float local_104;
  int iStack_100;
  float *local_fc;
  float local_f8;
  float *local_f0;
  float *local_ec;
  int local_e8;
  int *local_e4;
  FILE *local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  byte local_d0 [4];
  int *local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  short *local_bc;
  int local_b8;
  short *local_b4;
  short *local_b0;
  int local_ac;
  void *local_a8;
  ushort *local_a4;
  int local_a0;
  int *local_9c;
  int *local_98;
  float local_94;
  int local_90;
  float local_8c;
  byte *local_88;
  uint *local_84;
  float *local_80;
  void *local_7c;
  void *local_78;
  int local_74;
  void *local_70;
  float *local_6c;
  int local_68;
  int local_64;
  short *local_60;
  int *local_5c;
  int local_58;
  int local_54;
  int *local_50;
  int local_4c;
  int local_48;
  void *local_44;
  void *local_40;
  int *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  float fStack_10;
  int iStack_c;
  
  bVar28 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa228);
  if (*in_stack_0000000c != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_17c = (CBoundingBox3D *)0x0;
  local_178 = (void *)0x0;
  local_174 = (FILE *)0x0;
  local_170 = (float *)0x0;
  local_16c = (float *)0x0;
  local_168 = (void *)0x0;
  local_164 = (uint *)0x0;
  local_e4 = (int *)0x0;
  local_e0 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ((char *)(in_stack_00000010 + 0x200),(char *)0x0,"rt",
                        "..\\core\\skeledit.cpp",0xbde);
  if (local_e0 == (FILE *)0x0) {
    pcVar15 = "Can't open %s";
  }
  else {
    local_174 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("parts.log",(char *)0x0,"wt",
                           "..\\core\\skeledit.cpp",0xbee);
    if (local_174 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0xbef;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create log file!");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Matching skeleton parts for %s\n");
    pFVar3 = local_e0;
    iVar14 = 1;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
      file = local_e0;
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
    crt_stdio_c_fscanf_FUN_005fe7c0(local_e0,"%d\n");
    if ((local_dc < 0x65) || (0x67 < local_dc)) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_03670650,"%s has incorrect S3D version %d",in_stack_00000010 + 0x200);
      goto LAB_0058f8e7;
    }
    iVar14 = 1;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(file);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
    iVar14 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (local_e0,"%d,%d,%d,%d,%d,%d,%d\n",&local_d8,&local_160,&local_15c,&local_d4,
                        local_158,local_d0);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar14 == 7) {
      if (local_d4 < 0x1f) {
        in_stack_0000000c[0x1c50] = local_d4;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Reading part list from %s\n");
        pFVar3 = local_e0;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        iVar14 = 0;
        if (0 < in_stack_0000000c[0x1c50]) {
          local_13c = in_stack_0000000c + 0x1c51;
          local_88 = auStack_46c;
          local_84 = auStack_3f4;
          piVar27 = in_stack_0000000c + 0x1c59;
          do {
            local_134 = local_13c + iVar14 * 0x18;
            local_138 = iVar14 * 4;
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_e0,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_88,local_84,piVar27);
            if (iVar4 != 4) goto LAB_00590a70;
            in_stack_0000000c[iVar14 * 0x18 + 0x1c63] = 0;
            piVar27 = piVar27 + 0x18;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_174,"\t%2d: %s, verts=%d, tris=%d\n",iVar14,local_134,
                       *(uint *)((int)auStack_3f4 + local_138));
            iVar14 = iVar14 + 1;
            local_88 = local_88 + 4;
            local_84 = local_84 + 1;
          } while (iVar14 < in_stack_0000000c[0x1c50]);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Reading texture list from %s\n");
        pFVar3 = local_e0;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        if (0x96 < local_d8) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar14 = 0;
        if (0 < local_d8) {
          pcVar15 = &stack0xffff5e20;
          do {
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0(local_e0,"%[^\n]\n");
            if (iVar4 != 1) goto LAB_00590a70;
            crt_string_c_splitpath_FUN_005ff178
                      (acStack_838,(char *)0x0,(char *)0x0,pcVar15,(char *)0x0);
            iVar14 = iVar14 + 1;
            pcVar15 = pcVar15 + 0x100;
          } while (iVar14 < local_d8);
        }
        pcVar15 = "gore";
        pcVar22 = acStack_37c;
        for (iVar14 = 0x19; iVar14 != 0; iVar14 = iVar14 + -1) {
          *(uint *)pcVar22 = *(uint *)pcVar15;
          pcVar15 = pcVar15 + ((uint)bVar28 * -2 + 1) * 4;
          pcVar22 = pcVar22 + ((uint)bVar28 * -2 + 1) * 4;
        }
        if (*(int *)(in_stack_00000010 + 0x308) == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",acStack_37c,100,1);
        }
        local_154 = -1;
        if (acStack_37c[0] != '\0') {
          iVar14 = 0;
          if (0 < in_stack_0000000c[0x2f]) {
            piVar27 = in_stack_0000000c + 0x32;
            do {
              crt_string_c_splitpath_FUN_005ff178
                        ((char *)piVar27,(char *)0x0,(char *)0x0,acStack_634,(char *)0x0);
              iVar4 = crt_string_c_stricmp_FUN_005fe7f0(acStack_37c,acStack_634);
              if (iVar4 == 0) break;
              iVar14 = iVar14 + 1;
              piVar27 = piVar27 + 0x12;
            } while (iVar14 < in_stack_0000000c[0x2f]);
          }
          if (in_stack_0000000c[0x2f] <= iVar14) {
            if (0x4f < in_stack_0000000c[0x2f]) {
              crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Texture list full determining parts");
              goto LAB_0058f8e7;
            }
            crt_stdio_c_sprintf_FUN_005fdbd0
                      ((char *)(in_stack_0000000c + in_stack_0000000c[0x2f] * 0x12 + 0x32),
                       "%s.raw");
            in_stack_0000000c[0x2f] = in_stack_0000000c[0x2f] + 1;
          }
          local_154 = iVar14;
          crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Automap capped faces is active\n");
        }
        local_178 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((int)local_160 * 0x3c,"..\\core\\skeledit.cpp",0xc4e);
        if (local_178 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc4f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading faces from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Reading faces from %s\n");
        pFVar3 = local_e0;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        iVar14 = 0;
        pvVar9 = local_178;
        if (0 < (int)local_160) {
          do {
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_e0,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_130,&local_26c,
                               &local_188,local_1f4,local_268,local_184,local_1f0,local_264,
                               local_180);
            if (iVar4 != 10) goto LAB_00590a70;
            *(uint *)((int)pvVar9 + 4) = 3;
            iVar4 = 0;
            *(uint *)((int)pvVar9 + 0x14) = local_130[0];
            fVar29 = (float10)_DAT_0064bfd2;
            pvVar11 = pvVar9;
            do {
              *(uint *)((int)pvVar11 + 0x18) = *(uint *)((int)&local_26c + iVar4);
              dVar30 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float10)*(float *)((int)&local_188 + iVar4) * fVar29));
              fStack_10 = (float)(int)ROUND(dVar30);
              *(int *)(extraout_ECX + 0x1c) = (int)ROUND(dVar30);
              dVar30 = crt_math_c_round_FUN_005fe6b0
                                 ((double)((float10)*(float *)(local_1f4 + extraout_EDX + -4) *
                                          fVar29));
              iStack_c = (int)ROUND(dVar30);
              iVar4 = extraout_EDX_00 + 4;
              *(int *)((int)extraout_ECX_00 + 0x14) = (int)ROUND(dVar30);
              pvVar11 = extraout_ECX_00;
            } while (iVar4 != 0xc);
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_174,"\t%4d: %4d %4d %4d\n",iVar14,*(uint *)((int)pvVar9 + 0x18)
                       ,*(uint *)((int)pvVar9 + 0x24));
            iVar14 = iVar14 + 1;
            pvVar9 = (void *)((int)pvVar9 + 0x3c);
          } while (iVar14 < (int)local_160);
        }
        pfVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)local_15c * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_17c = (CBoundingBox3D *)0x0;
        if (pfVar5 != (float *)0x0) {
          local_17c = (CBoundingBox3D *)(pfVar5 + 1);
          *pfVar5 = local_15c;
        }
        if (local_17c == (CBoundingBox3D *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc7d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading vertices from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Reading vertices from %s\n");
        pFVar3 = local_e0;
        iVar14 = 1;
        do {
          iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar3);
          if (iVar4 < 0) break;
        } while ((iVar4 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
        iVar14 = 0;
        if (0 < (int)local_15c) {
          local_80 = &(local_17c->min).z;
          do {
            pCVar18 = &local_17c->min + iVar14;
            iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0(local_e0,"%f,%f,%f\n");
            if (iVar4 != 3) goto LAB_00590a70;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_174,"\t%4d: %7.3f %7.3f %7.3f\n",iVar14,(double)pCVar18->x,
                       (double)pCVar18->y,(double)pCVar18->z);
            iVar14 = iVar14 + 1;
            local_80 = local_80 + 3;
          } while (iVar14 < (int)local_15c);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_e0,"..\\core\\skeledit.cpp",0xc8c);
        local_e0 = (FILE *)0x0;
        crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Removing duplicate faces\n");
        local_1c = 0;
        if (0 < (int)local_160) {
          local_78 = local_178;
          do {
            local_124 = 0;
            local_120 = 0;
            local_128 = local_78;
            if (0 < local_1c) {
              local_7c = local_178;
              do {
                if ((*(int *)((int)local_7c + 4) == 3) &&
                   (*(int *)((int)local_7c + 0x14) == *(int *)((int)local_78 + 0x14))) {
                  local_11c = 0;
                  do {
                    iVar4 = 0;
                    iVar14 = local_11c;
                    pvVar9 = local_78;
                    do {
                      pCVar18 = &local_17c->min + *(int *)((int)pvVar9 + 0x18);
                      local_290 = pCVar18->x;
                      local_28c = pCVar18->y;
                      iStack_c = 3;
                      local_288 = pCVar18->z;
                      pCVar18 = &local_17c->min +
                                *(int *)((iVar14 % 3) * 0xc + 0x18 + (int)local_7c);
                      local_1e8 = pCVar18->x;
                      local_1e4 = pCVar18->y;
                      local_218 = local_290 - local_1e8;
                      local_1e0 = pCVar18->z;
                      local_214 = local_28c - local_1e4;
                      local_210 = local_288 - local_1e0;
                      if ((((float)_DAT_0064bfda < ABS(local_218)) ||
                          ((float)_DAT_0064bfda < ABS(local_214))) ||
                         ((float)_DAT_0064bfda < ABS(local_210))) break;
                      pvVar9 = (void *)((int)pvVar9 + 0xc);
                      iVar4 = iVar4 + 1;
                      iVar14 = iVar14 + 1;
                    } while (iVar4 < 3);
                    if (iVar4 == 3) {
                      crt_stdio_c_fprintf_FUN_005fe6d0
                                (local_174,"Removing face %d, it is dup with face %d\n",local_1c);
                      *(uint *)((int)local_128 + 4) = 0;
                      goto LAB_005902c8;
                    }
                    local_11c = local_11c + 1;
                  } while (local_11c < 3);
                }
                local_120 = local_120 + 1;
                local_7c = (void *)((int)local_7c + 0x3c);
              } while (local_120 < local_1c);
            }
LAB_005902c8:
            local_1c = local_1c + 1;
            local_78 = (void *)((int)local_78 + 0x3c);
          } while (local_1c < (int)local_160);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing %s");
        if (&local_300 != local_17c) {
          local_300.min.x = (local_17c->min).x;
          local_300.min.y = (local_17c->min).y;
          local_300.min.z = (local_17c->min).z;
        }
        if ((CBoundingBox3D *)&local_300.max != local_17c) {
          local_300.max.x = (local_17c->min).x;
          local_300.max.y = (local_17c->min).y;
          local_300.max.z = (local_17c->min).z;
        }
        iVar14 = 1;
        pCVar6 = local_17c;
        if (1 < (int)local_15c) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_300,&pCVar6->max);
            iVar14 = iVar14 + 1;
            pCVar6 = (CBoundingBox3D *)&pCVar6->max;
          } while (iVar14 < (int)local_15c);
        }
        iVar14 = in_stack_0000000c[0x10];
        pCVar6 = (CBoundingBox3D *)(iVar14 + 0x10);
        if (&local_318 != pCVar6) {
          local_318.min.x = (pCVar6->min).x;
          local_318.min.y = *(float *)(iVar14 + 0x14);
          local_318.min.z = *(float *)(iVar14 + 0x18);
        }
        if ((CBoundingBox3D *)&local_318.max != pCVar6) {
          local_318.max.x = (pCVar6->min).x;
          local_318.max.y = *(float *)(iVar14 + 0x14);
          local_318.max.z = *(float *)(iVar14 + 0x18);
        }
        iVar14 = 1;
        if (1 < in_stack_0000000c[0xb]) {
          iVar4 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_318,(CVector3f *)(in_stack_0000000c[0x10] + iVar4 + 0x10));
            iVar14 = iVar14 + 1;
            iVar4 = iVar4 + 0x34;
          } while (iVar14 < in_stack_0000000c[0xb]);
        }
        local_260 = local_318.max.x - local_318.min.x;
        local_29c = local_300.max.x - local_300.min.x;
        local_1d0 = local_260 / local_29c;
        local_25c = local_318.max.y - local_318.min.y;
        local_298 = local_300.max.y - local_300.min.y;
        local_1cc = local_25c / local_298;
        local_258 = local_318.max.z - local_318.min.z;
        local_294 = local_300.max.z - local_300.min.z;
        local_1c8 = local_258 / local_294;
        iVar14 = 0;
        pCVar6 = local_17c;
        if (0 < (int)local_15c) {
          do {
            (pCVar6->min).x = ((pCVar6->min).x - local_300.min.x) * local_1d0 + local_318.min.x;
            (pCVar6->min).y = ((pCVar6->min).y - local_300.min.y) * local_1cc + local_318.min.y;
            iVar14 = iVar14 + 1;
            (pCVar6->min).z = ((pCVar6->min).z - local_300.min.z) * local_1c8 + local_318.min.z;
            pCVar6 = (CBoundingBox3D *)&pCVar6->max;
          } while (iVar14 < (int)local_15c);
        }
        local_278 = local_29c;
        local_274 = local_298;
        local_270 = local_294;
        local_224 = local_260;
        local_220 = local_25c;
        local_21c = local_258;
        local_1dc = local_29c;
        local_1d8 = local_298;
        local_1d4 = local_294;
        local_1ac = local_260;
        local_1a8 = local_25c;
        local_1a4 = local_258;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_174,"Scale = %7.3f %7.3f %7.3f\n",(double)local_1d0,(double)local_1cc,
                   (double)local_1c8);
        pfVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)local_160 * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_170 = pfVar5;
        if (pfVar5 != (float *)0x0) {
          local_170 = pfVar5 + 1;
          *pfVar5 = local_160;
        }
        fVar31 = (float)in_stack_0000000c[0x15];
        pfVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                           ((int)fVar31 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
        local_16c = pfVar5;
        if (pfVar5 != (float *)0x0) {
          local_16c = pfVar5 + 1;
          *pfVar5 = fVar31;
        }
        if ((local_170 == (float *)0x0) || (local_16c == (float *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar14 = 0;
        pvVar9 = local_178;
        pfVar5 = local_170;
        if (0 < (int)local_160) {
          do {
            if (*(int *)((int)pvVar9 + 4) == 3) {
              pCVar20 = &local_17c->min + *(int *)((int)pvVar9 + 0x18);
              pCVar18 = &local_17c->min + *(int *)((int)pvVar9 + 0x24);
              local_2a8 = pCVar18->x - pCVar20->x;
              local_2a4 = pCVar18->y - pCVar20->y;
              local_2a0 = pCVar18->z - pCVar20->z;
              pCVar20 = &local_17c->min + *(int *)((int)pvVar9 + 0x30);
              local_248 = pCVar20->x - pCVar18->x;
              local_244 = pCVar20->y - pCVar18->y;
              local_240 = pCVar20->z - pCVar18->z;
              local_190 = local_2a0 * local_248 - local_2a8 * local_240;
              local_194 = local_2a4 * local_240 - local_2a0 * local_244;
              local_18c = local_2a8 * local_244 - local_2a4 * local_248;
              in_stack_ffff5e18 =
                   SQRT(local_18c * local_18c + local_194 * local_194 + local_190 * local_190);
              if (in_stack_ffff5e18 <= 0.0) {
                local_190 = 0.0;
                local_194 = 0.0;
                local_18c = 0.0;
              }
              else {
                fVar31 = 1.0 / in_stack_ffff5e18;
                local_194 = local_194 * fVar31;
                local_190 = local_190 * fVar31;
                local_18c = local_18c * fVar31;
              }
              if (pfVar5 != &local_194) {
                *pfVar5 = local_194;
                pfVar5[1] = local_190;
                pfVar5[2] = local_18c;
              }
            }
            iVar14 = iVar14 + 1;
            pvVar9 = (void *)((int)pvVar9 + 0x3c);
            pfVar5 = pfVar5 + 3;
          } while (iVar14 < (int)local_160);
        }
        iVar14 = 0;
        if (0 < in_stack_0000000c[0x15]) {
          local_74 = 0;
          pfVar5 = local_16c;
          do {
            puVar16 = (ushort *)(in_stack_0000000c[0x1f] + local_74);
            iVar7 = (uint)puVar16[1] * 0x34;
            iVar19 = (uint)*puVar16 * 0x34;
            iVar4 = in_stack_0000000c[0x10];
            iVar17 = (uint)puVar16[2] * 0x34;
            local_2c0 = *(float *)(iVar4 + 0x10 + iVar7) - *(float *)(iVar4 + 0x10 + iVar19);
            local_2bc = *(float *)(iVar4 + 0x14 + iVar7) - *(float *)(iVar4 + 0x14 + iVar19);
            local_2b8 = *(float *)(iVar4 + 0x18 + iVar7) - *(float *)(iVar4 + 0x18 + iVar19);
            local_254 = *(float *)(iVar4 + 0x10 + iVar17) - *(float *)(iVar4 + 0x10 + iVar7);
            local_250 = *(float *)(iVar4 + 0x14 + iVar17) - *(float *)(iVar4 + 0x14 + iVar7);
            local_24c = *(float *)(iVar4 + 0x18 + iVar17) - *(float *)(iVar4 + 0x18 + iVar7);
            local_22c = local_2b8 * local_254 - local_2c0 * local_24c;
            local_230 = local_2bc * local_24c - local_2b8 * local_250;
            local_228 = local_2c0 * local_250 - local_2bc * local_254;
            fVar31 = SQRT(local_228 * local_228 + local_230 * local_230 + local_22c * local_22c);
            if (fVar31 <= 0.0) {
              local_22c = 0.0;
              local_230 = 0.0;
              local_228 = 0.0;
            }
            else {
              fVar31 = 1.0 / fVar31;
              local_230 = local_230 * fVar31;
              local_22c = local_22c * fVar31;
              local_228 = local_228 * fVar31;
            }
            if (pfVar5 != &local_230) {
              *pfVar5 = local_230;
              pfVar5[1] = local_22c;
              pfVar5[2] = local_228;
            }
            pfVar5 = pfVar5 + 3;
            iVar14 = iVar14 + 1;
            local_74 = local_74 + 0x12;
          } while (iVar14 < in_stack_0000000c[0x15]);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        pcVar15 = "Matching faces";
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Matching faces in %s\n");
        if (in_stack_0000000c[0x15] <= (int)local_160) {
          local_168 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (in_stack_0000000c[0x15] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_168 == (void *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_150 = local_178;
          iVar14 = 0;
          if (0 < in_stack_0000000c[0x1c50]) {
            iVar4 = 0;
            do {
              pvVar9 = local_150;
              for (iVar7 = 0; iVar7 < *(int *)((int)in_stack_0000000c + iVar4 + 0x7164);
                  iVar7 = iVar7 + 1) {
                *(uint *)((int)pvVar9 + 0xc) = 0xffffffff;
                *(int *)((int)pvVar9 + 8) = iVar14;
                pvVar9 = (void *)((int)pvVar9 + 0x3c);
              }
              local_150 = (void *)((int)local_150 +
                                  *(int *)((int)in_stack_0000000c + iVar4 + 0x7164) * 0x3c);
              iVar4 = iVar4 + 0x60;
              iVar14 = iVar14 + 1;
            } while (iVar14 < in_stack_0000000c[0x1c50]);
          }
          local_20 = 0;
          if (0 < in_stack_0000000c[0x15]) {
            do {
              iStack_c = local_20;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_20,(float)in_stack_0000000c[0x15]);
              local_118 = local_20;
              while (-1 < local_118) {
                local_114 = in_stack_0000000c[0x1f] + local_118 * 0x12;
                pfVar5 = (float *)(local_118 * 4 + (int)local_168);
                *pfVar5 = 1e+30;
                local_110 = -1;
                local_10c = 0;
                if (0 < (int)local_160) {
                  local_70 = local_178;
                  local_fc = local_16c + local_118 * 3;
                  local_6c = local_170;
                  do {
                    local_108 = local_70;
                    if (*(int *)((int)local_70 + 4) == 3) {
                      local_104 = (float)_DAT_0064bfea -
                                  (local_fc[2] * local_6c[2] +
                                  *local_fc * *local_6c + local_fc[1] * local_6c[1]);
                      iStack_100 = 0;
                      do {
                        iVar4 = 0;
                        local_f8 = 0.0;
                        iVar14 = iStack_100;
                        pvVar9 = local_70;
                        do {
                          pCVar18 = &local_17c->min + *(int *)((int)pvVar9 + 0x18);
                          local_284 = pCVar18->x;
                          local_280 = pCVar18->y;
                          local_27c = pCVar18->z;
                          iVar7 = in_stack_0000000c[0x10] +
                                  (uint)*(ushort *)((iVar14 % 3) * 2 + local_114) * 0x34;
                          local_1c4 = *(float *)(iVar7 + 0x10);
                          local_1c0 = *(float *)(iVar7 + 0x14);
                          local_200 = local_1c4 - local_284;
                          local_1bc = *(float *)(iVar7 + 0x18);
                          local_1fc = local_1c0 - local_280;
                          local_1f8 = local_1bc - local_27c;
                          if ((((float)_DAT_0064bfe2 < ABS(local_200)) ||
                              ((float)_DAT_0064bfe2 < ABS(local_1fc))) ||
                             ((float)_DAT_0064bfe2 < ABS(local_1f8))) break;
                          fVar31 = local_1f8 * local_1f8 +
                                   local_200 * local_200 + local_1fc * local_1fc;
                          iVar14 = iVar14 + 1;
                          pvVar9 = (void *)((int)pvVar9 + 0xc);
                          local_f8 = fVar31 * fVar31 * fVar31 + local_f8;
                          iVar4 = iVar4 + 1;
                        } while (iVar4 < 3);
                        if (((2 < iVar4) && (local_f8 = local_f8 * local_104, local_f8 <= *pfVar5))
                           && ((*(int *)((int)local_70 + 0xc) < 0 ||
                               (local_f8 <
                                *(float *)(*(int *)((int)local_70 + 0xc) * 4 + (int)local_168))))) {
                          local_110 = local_10c;
                          *pfVar5 = local_f8;
                        }
                        iStack_100 = iStack_100 + 1;
                      } while (iStack_100 < 3);
                    }
                    local_6c = local_6c + 3;
                    local_10c = local_10c + 1;
                    local_70 = (void *)((int)local_70 + 0x3c);
                    local_f0 = pfVar5;
                    local_ec = pfVar5;
                  } while (local_10c < (int)local_160);
                }
                if (local_110 == -1) break;
                iVar14 = *(int *)((int)local_178 + local_110 * 0x3c + 0xc);
                *(int *)((int)local_178 + local_110 * 0x3c + 0xc) = local_118;
                local_118 = iVar14;
              }
              local_20 = local_20 + 1;
            } while (local_20 < in_stack_0000000c[0x15]);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_170 != (float *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_170 + -1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_170 = (float *)0x0;
          if (local_16c != (float *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_16c + -1);
          }
          local_16c = (float *)0x0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          crt_memory_c_free_FUN_005fe659(local_168);
          iVar14 = 0;
          local_168 = (void *)0x0;
          local_14c = 0;
          piVar27 = in_stack_0000000c;
          if (0 < in_stack_0000000c[0x1c50]) {
            do {
              piVar27[0x1c5e] = 0;
              piVar27[0x1c59] = 0;
              iVar14 = iVar14 + 1;
              piVar27 = piVar27 + 0x18;
            } while (iVar14 < in_stack_0000000c[0x1c50]);
          }
          puVar8 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             (in_stack_0000000c[0x15] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_164 = puVar8;
          local_e4 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (in_stack_0000000c[0x15] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((puVar8 == (uint *)0x0) || (local_e4 == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar14 = 0;
          piVar27 = local_e4;
          puVar8 = local_164;
          if (0 < in_stack_0000000c[0x15]) {
            do {
              *piVar27 = 999999;
              iVar14 = iVar14 + 1;
              *puVar8 = 0xffffffff;
              piVar27 = piVar27 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar14 < in_stack_0000000c[0x15]);
          }
          iVar14 = 0;
          local_148 = 0;
          pvVar9 = local_178;
          if (0 < (int)local_160) {
            do {
              if (*(int *)((int)pvVar9 + 4) == 3) {
                iVar4 = *(int *)((int)pvVar9 + 8);
                iVar7 = *(int *)((int)pvVar9 + 0xc);
                if (iVar7 < 0) {
                  local_14c = local_14c + 1;
                  in_stack_0000000c[iVar4 * 0x18 + 0x1c5e] =
                       in_stack_0000000c[iVar4 * 0x18 + 0x1c5e] + 1;
                }
                else {
                  local_e8 = iVar7 * 4;
                  if (-1 < (int)local_164[iVar7]) {
                    pcVar15 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  local_e4[iVar7] = iVar4;
                  local_164[iVar7] = iVar14;
                  local_148 = local_148 + 1;
                  in_stack_0000000c[iVar4 * 0x18 + 0x1c59] =
                       in_stack_0000000c[iVar4 * 0x18 + 0x1c59] + 1;
                }
              }
              iVar14 = iVar14 + 1;
              pvVar9 = (void *)((int)pvVar9 + 0x3c);
            } while (iVar14 < (int)local_160);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          crt_memory_c_free_FUN_005fe659(local_164);
          local_24 = in_stack_0000000c[0x15] + -1;
          local_164 = (uint *)0x0;
          piVar27 = local_e4;
          while (local_e4 = piVar27, -1 < local_24) {
            iVar14 = 0;
            if (0 < local_24) {
              local_68 = 0;
              local_64 = 0x12;
              do {
                if (piVar27[1] < *piVar27) {
                  iStack_c = iVar14 * 4 + 4;
                  puVar21 = (uint *)(iStack_c + in_stack_0000000c[0x24]);
                  puVar8 = (uint *)(iVar14 * 4 + in_stack_0000000c[0x24]);
                  uVar2 = *puVar8;
                  *puVar8 = *puVar21;
                  *puVar21 = uVar2;
                  puVar21 = (uint *)(local_64 + in_stack_0000000c[0x1f]);
                  puVar8 = (uint *)(in_stack_0000000c[0x1f] + local_68);
                  local_2d4 = *puVar8;
                  *(ushort *)(auStack_2d0 + (uint)bVar28 * -8) =
                       *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1);
                  stack0xfffffd32 = *(uint *)((int)puVar8 + 6);
                  *(ushort *)((int)&local_2cc + (uint)bVar28 * -8 + 2) =
                       *(ushort *)((int)puVar8 + (uint)bVar28 * -8 + 10);
                  local_2c8 = puVar8[3];
                  local_2c4[(uint)bVar28 * -4] = *(ushort *)(puVar8 + (uint)bVar28 * -2 + 4);
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
                  *puVar21 = local_2d4;
                  puVar21 = puVar26 + (uint)bVar28 * -2 + 1;
                  puVar8 = &local_2cc + (uint)bVar28 * -2 + (uint)bVar28 * -2;
                  *puVar26 = *(uint *)(auStack_2d0 + (uint)bVar28 * -8);
                  *puVar21 = *puVar8;
                  puVar21[(uint)bVar28 * -2 + 1] = puVar8[(uint)bVar28 * -2 + 1];
                  *(ushort *)(puVar21 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1) =
                       *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1);
                  iVar4 = *piVar27;
                  *piVar27 = *(int *)((int)local_e4 + iStack_c);
                  *(int *)((int)local_e4 + iStack_c) = iVar4;
                }
                iVar14 = iVar14 + 1;
                piVar27 = piVar27 + 1;
                local_68 = local_68 + 0x12;
                local_64 = local_64 + 0x12;
              } while (iVar14 < local_24);
            }
            local_24 = local_24 + -1;
            piVar27 = local_e4;
          }
          iVar14 = 2;
          if (local_148 != in_stack_0000000c[0x15]) {
            local_cc = in_stack_0000000c + 0x1c51;
            do {
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_534,"There are %d triangles I couldn't match.");
              if (*(int *)(in_stack_00000010 + 0x308) == 0) {
                shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_be0);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&CStack_be0.base_strlist,"Get rid of them them, I never want to see them again");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&CStack_be0.base_strlist,"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&CStack_be0.base_strlist,"Try best guess");
                do {
                  iVar14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     (&CStack_be0,acStack_534,iVar14,0);
                } while (iVar14 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          (&CStack_be0,0,(uint)pcVar15,(uint)in_stack_ffff5e18,in_stack_ffff5e1c,
                           in_stack_ffff5e20,in_stack_ffff5e24);
              }
              iVar4 = local_148;
              if (iVar14 == 0) {
                in_stack_0000000c[0x15] = local_148;
              }
              else if (iVar14 == 1) {
                if (0x1d < in_stack_0000000c[0x1c50]) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                pcVar22 = "MySpecialTriangles";
                piVar27 = local_cc + in_stack_0000000c[0x1c50] * 0x18;
                do {
                  cVar1 = *pcVar22;
                  *(char *)piVar27 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar22[1];
                  pcVar22 = pcVar22 + 2;
                  *(char *)((int)piVar27 + 1) = cVar1;
                  piVar27 = (int *)((int)piVar27 + 2);
                } while (cVar1 != '\0');
                in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c59] =
                     in_stack_0000000c[0x15] - local_148;
                in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c5e] = 0;
                in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c63] = 0;
                local_148 = in_stack_0000000c[0x15];
                in_stack_0000000c[0x1c50] = in_stack_0000000c[0x1c50] + 1;
              }
              else if (iVar14 == 2) {
                local_c8 = 1;
                local_c4 = local_148;
                local_c0 = 0;
                if (0 < in_stack_0000000c[0x15]) {
                  local_38 = local_148 * 0x12;
                  local_34 = local_148 * 4;
                  do {
                    if (local_c8 == 0) break;
                    local_c8 = 0;
                    local_28 = iVar4;
                    if (iVar4 < in_stack_0000000c[0x15]) {
                      local_50 = local_e4 + iVar4;
                      local_54 = local_38;
                      do {
                        if (0xf423e < *local_50) {
                          local_bc = (short *)(local_54 + in_stack_0000000c[0x1f]);
                          local_b8 = 0;
                          if (0 < in_stack_0000000c[0x15]) {
                            local_58 = 0;
                            local_5c = local_e4;
                            do {
                              if (*local_5c < 999999) {
                                local_b4 = (short *)(local_58 + in_stack_0000000c[0x1f]);
                                iVar14 = 0;
                                local_60 = local_bc + 3;
                                psVar10 = local_bc;
                                do {
                                  local_b0 = psVar10;
                                  iVar7 = 0;
                                  psVar13 = local_b4;
                                  if (*psVar10 != *local_b4) {
                                    do {
                                      iVar7 = iVar7 + 1;
                                      psVar13 = psVar13 + 1;
                                      if (2 < iVar7) goto LAB_00591f48;
                                    } while (*psVar13 != *psVar10);
                                  }
                                  iVar14 = iVar14 + 1;
LAB_00591f48:
                                  psVar10 = psVar10 + 1;
                                } while (psVar10 != local_bc + 3);
                                if (1 < iVar14) {
                                  iVar14 = local_e4[local_b8];
                                  in_stack_0000000c[iVar14 * 0x18 + 0x1c59] =
                                       in_stack_0000000c[iVar14 * 0x18 + 0x1c59] + 1;
                                  local_148 = local_148 + 1;
                                  *local_50 = local_e4[local_b8];
                                  break;
                                }
                              }
                              local_b8 = local_b8 + 1;
                              local_58 = local_58 + 0x12;
                              local_5c = local_5c + 1;
                            } while (local_b8 < in_stack_0000000c[0x15]);
                          }
                          if (0xf423e < *local_50) {
                            local_c8 = 1;
                          }
                        }
                        local_28 = local_28 + 1;
                        local_50 = local_50 + 1;
                        local_54 = local_54 + 0x12;
                      } while (local_28 < in_stack_0000000c[0x15]);
                    }
                    local_c0 = local_c0 + 1;
                  } while (local_c0 < in_stack_0000000c[0x15]);
                }
                local_2c = in_stack_0000000c[0x15] + -1;
                piVar27 = local_e4;
                while (local_e4 = piVar27, -1 < local_2c) {
                  iVar14 = 0;
                  if (0 < local_2c) {
                    local_4c = 0;
                    local_48 = 0x12;
                    do {
                      if (piVar27[1] < *piVar27) {
                        iStack_c = iVar14 * 4 + 4;
                        puVar21 = (uint *)(iStack_c + in_stack_0000000c[0x24]);
                        puVar8 = (uint *)(in_stack_0000000c[0x24] + iVar14 * 4);
                        uVar2 = *puVar8;
                        *puVar8 = *puVar21;
                        *puVar21 = uVar2;
                        puVar21 = (uint *)(local_48 + in_stack_0000000c[0x1f]);
                        puVar8 = (uint *)(in_stack_0000000c[0x1f] + local_4c);
                        local_2e8 = *puVar8;
                        *(ushort *)(auStack_2e4 + (uint)bVar28 * -8) =
                             *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1);
                        stack0xfffffd1e = *(uint *)((int)puVar8 + 6);
                        *(ushort *)((int)&local_2e0 + (uint)bVar28 * -8 + 2) =
                             *(ushort *)((int)puVar8 + (uint)bVar28 * -8 + 10);
                        uStack_2dc = puVar8[3];
                        auStack_2d8[(uint)bVar28 * -4] =
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
                        *puVar21 = local_2e8;
                        puVar21 = puVar26 + (uint)bVar28 * -2 + 1;
                        puVar8 = &local_2e0 + (uint)bVar28 * -2 + (uint)bVar28 * -2;
                        *puVar26 = *(uint *)(auStack_2e4 + (uint)bVar28 * -8);
                        *puVar21 = *puVar8;
                        puVar21[(uint)bVar28 * -2 + 1] = puVar8[(uint)bVar28 * -2 + 1];
                        *(ushort *)(puVar21 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1) =
                             *(ushort *)(puVar8 + (uint)bVar28 * -2 + 1 + (uint)bVar28 * -2 + 1)
                        ;
                        iVar4 = *piVar27;
                        *piVar27 = *(int *)((int)local_e4 + iStack_c);
                        *(int *)((int)local_e4 + iStack_c) = iVar4;
                      }
                      iVar14 = iVar14 + 1;
                      piVar27 = piVar27 + 1;
                      local_4c = local_4c + 0x12;
                      local_48 = local_48 + 0x12;
                    } while (iVar14 < local_2c);
                  }
                  local_2c = local_2c + -1;
                  piVar27 = local_e4;
                }
                iVar14 = 1;
              }
            } while (local_148 != in_stack_0000000c[0x15]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          crt_memory_c_free_FUN_005fe659(local_e4);
          local_e4 = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          puVar8 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                             ((in_stack_0000000c[0x15] + local_14c) * 0x12,
                              "..\\core\\skeledit.cpp",0xf1a);
          local_144 = puVar8;
          local_140 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                ((in_stack_0000000c[0x15] + local_14c) * 4,
                                 "..\\core\\skeledit.cpp",0xf1b);
          if ((puVar8 == (uint *)0x0) || (local_140 == (uint *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          puVar8 = local_144;
          iVar14 = in_stack_0000000c[0x15];
          puVar21 = (uint *)in_stack_0000000c[0x1f];
          puVar26 = local_144;
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
          crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x1f]);
          in_stack_0000000c[0x1f] = (int)puVar8;
          puVar8 = (uint *)in_stack_0000000c[0x24];
          puVar21 = local_140;
          for (uVar12 = in_stack_0000000c[0x15] & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
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
          crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x24]);
          g_CurrentDebugLine = 0xf28;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          in_stack_0000000c[0x24] = (int)local_140;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x29]);
          in_stack_0000000c[0x29] = 0;
          if (0 < local_14c) {
            pvVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (local_14c * 4,"..\\core\\skeledit.cpp",0xf2b);
            in_stack_0000000c[0x29] = (int)pvVar9;
            if (pvVar9 == (void *)0x0) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0xf2c;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
            }
          }
          local_30 = 0;
          in_stack_0000000c[0x1a] = 0;
          if (0 < in_stack_0000000c[0x1c50]) {
            local_9c = in_stack_0000000c + 0x30;
            local_3c = in_stack_0000000c;
            local_98 = local_9c;
            do {
              if ((0 < local_3c[0x1c5e]) && (local_ac = 0, 0 < (int)local_160)) {
                local_40 = local_178;
                do {
                  local_a8 = local_40;
                  if (((*(int *)((int)local_40 + 4) == 3) &&
                      (local_30 == *(int *)((int)local_40 + 8))) &&
                     (*(int *)((int)local_40 + 0xc) < 0)) {
                    local_a4 = (ushort *)
                               (in_stack_0000000c[0x1f] +
                               (in_stack_0000000c[0x15] + in_stack_0000000c[0x1a]) * 0x12);
                    if (local_154 < 0) {
                      iVar14 = *(int *)((int)local_40 + 0x14);
                      if (iVar14 < 0) goto LAB_00591835;
                      iVar4 = 0;
                      if (0 < in_stack_0000000c[0x2f]) {
                        piVar27 = local_9c + 2;
                        do {
                          crt_string_c_splitpath_FUN_005ff178
                                    ((char *)piVar27,(char *)0x0,(char *)0x0,acStack_734,(char *)0x0
                                    );
                          iVar7 = crt_string_c_stricmp_FUN_005fe7f0
                                            (&stack0xffff5e20 + iVar14 * 0x100,acStack_734);
                          if (iVar7 == 0) break;
                          iVar4 = iVar4 + 1;
                          piVar27 = piVar27 + 0x12;
                        } while (iVar4 < in_stack_0000000c[0x2f]);
                      }
                      if (in_stack_0000000c[0x2f] <= iVar4) {
                        if (0x4f < in_stack_0000000c[0x2f]) {
                          g_CurrentFilename = "..\\core\\skeledit.cpp";
                          g_CurrentLineNumber = 0xf5d;
                          core_main_c_displayErrorAndQuit_FUN_00506f10
                                    ("Too many model textures!");
                        }
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  ((char *)(local_98 + in_stack_0000000c[0x2f] * 0x12 + 2),
                                   "%s.raw");
                        in_stack_0000000c[0x2f] = in_stack_0000000c[0x2f] + 1;
                      }
                      *(int *)(in_stack_0000000c[0x24] +
                              (in_stack_0000000c[0x15] + in_stack_0000000c[0x1a]) * 4) = iVar4;
                    }
                    else {
                      *(int *)((in_stack_0000000c[0x15] + in_stack_0000000c[0x1a]) * 4 +
                              in_stack_0000000c[0x24]) = local_154;
                    }
                    iStack_14 = 0;
                    puVar23 = local_a4;
                    pvVar9 = local_a8;
                    do {
                      pCVar18 = &local_17c->min + *(int *)((int)pvVar9 + 0x18);
                      local_1b8 = pCVar18->x;
                      local_1b4 = pCVar18->y;
                      local_1b0 = pCVar18->z;
                      fVar31 = 1e+20;
                      iVar14 = 0;
                      if (0 < in_stack_0000000c[0xb]) {
                        iVar4 = 0;
                        do {
                          iVar7 = in_stack_0000000c[0x10];
                          local_20c = *(float *)(iVar4 + 0x10 + iVar7) - local_1b8;
                          local_208 = *(float *)(iVar4 + 0x14 + iVar7) - local_1b4;
                          local_204 = *(float *)(iVar4 + 0x18 + iVar7) - local_1b0;
                          local_94 = local_204 * local_204 +
                                     local_20c * local_20c + local_208 * local_208;
                          if (local_94 < fVar31) {
                            *puVar23 = (short)iVar14;
                            fVar31 = local_94;
                          }
                          iVar14 = iVar14 + 1;
                          iVar4 = iVar4 + 0x34;
                        } while (iVar14 < in_stack_0000000c[0xb]);
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
                      puVar23[6] = (short)iVar4;
                      iStack_14 = iStack_14 + 1;
                      puVar23[3] = (short)iVar14;
                      puVar23 = puVar23 + 1;
                    } while (iStack_14 < 3);
                    local_a0 = -1;
                    local_18 = 0;
                    fStack_10 = 1e+20;
                    if (0 < (int)local_160) {
                      local_44 = local_178;
                      do {
                        if (((*(int *)((int)local_44 + 4) == 3) &&
                            (local_30 != *(int *)((int)local_44 + 8))) &&
                           (*(int *)((int)local_44 + 0xc) < 0)) {
                          local_90 = 0;
                          do {
                            iVar14 = local_90 + 6;
                            local_8c = 0.0;
                            pvVar9 = local_a8;
                            do {
                              pCVar18 = &local_17c->min + *(int *)((int)pvVar9 + 0x18);
                              local_23c = pCVar18->x;
                              local_238 = pCVar18->y;
                              iStack_c = 3;
                              local_234 = pCVar18->z;
                              pCVar18 = &local_17c->min +
                                        *(int *)((int)local_44 + (iVar14 % 3) * 0xc + 0x18);
                              local_1a0 = pCVar18->x;
                              local_19c = pCVar18->y;
                              local_2b4 = local_23c - local_1a0;
                              local_2b0 = local_238 - local_19c;
                              local_198 = pCVar18->z;
                              local_2ac = local_234 - local_198;
                              pvVar9 = (void *)((int)pvVar9 + 0xc);
                              iVar14 = iVar14 + -1;
                              local_8c = local_2ac * local_2ac +
                                         local_2b4 * local_2b4 + local_2b0 * local_2b0 + local_8c;
                            } while (pvVar9 != (void *)((int)local_a8 + 0x24));
                            if (local_8c < fStack_10) {
                              local_a0 = *(int *)((int)local_44 + 8);
                              fStack_10 = local_8c;
                            }
                            local_90 = local_90 + 1;
                          } while (local_90 < 3);
                        }
                        local_18 = local_18 + 1;
                        local_44 = (void *)((int)local_44 + 0x3c);
                      } while (local_18 < (int)local_160);
                    }
                    if (local_a0 < 0) {
                      crt_stdio_c_sprintf_FUN_005fdbd0
                                (&DAT_03670650,"Can't find opposing part for capped face!");
                      goto LAB_0058f8e7;
                    }
                    *(int *)(in_stack_0000000c[0x1a] * 4 + in_stack_0000000c[0x29]) = local_a0;
                    in_stack_0000000c[0x1a] = in_stack_0000000c[0x1a] + 1;
                  }
LAB_00591835:
                  local_ac = local_ac + 1;
                  local_40 = (void *)((int)local_40 + 0x3c);
                } while (local_ac < (int)local_160);
              }
              local_30 = local_30 + 1;
              local_3c = local_3c + 0x18;
            } while (local_30 < in_stack_0000000c[0x1c50]);
          }
          if (local_14c != in_stack_0000000c[0x1a]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s");
          iVar14 = 0;
          piVar27 = in_stack_0000000c;
          if (0 < in_stack_0000000c[0x1c50]) {
            do {
              piVar27[0x1c63] = 0;
              iVar14 = iVar14 + 1;
              piVar27 = piVar27 + 0x18;
            } while (iVar14 < in_stack_0000000c[0x1c50]);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_17c != (CBoundingBox3D *)0x0) {
            crt_memory_c_free_FUN_005fe659(&local_17c[-1].max.z);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xff6;
          crt_memory_c_free_FUN_005fe659(local_178);
          pFVar3 = local_174;
          if (local_174 != (FILE *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_174,"Determined parts using %s OK!\n");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\core\\skeledit.cpp",0xffc);
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
  if (local_e0 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_e0,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_174 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_174,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_17c != (CBoundingBox3D *)0x0) {
    crt_memory_c_free_FUN_005fe659(&local_17c[-1].max.z);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  crt_memory_c_free_FUN_005fe659(local_178);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_170 != (float *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_170 + -1);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_16c != (float *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_16c + -1);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe8;
  crt_memory_c_free_FUN_005fe659(local_168);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe9;
  crt_memory_c_free_FUN_005fe659(local_164);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbea;
  crt_memory_c_free_FUN_005fe659(local_e4);
  return 0;
}
