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
  float fVar4;
  float fVar5;
  CEditorTools *this_ptr_00;
  int iVar6;
  uint *puVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  int iVar10;
  streambuf *psVar11;
  uint d2;
  FILE *pFVar12;
  int extraout_ECX;
  uint *extraout_ECX_00;
  float *pfVar13;
  short *psVar14;
  int extraout_EDX;
  int extraout_EDX_00;
  float *pfVar15;
  int iVar16;
  char *pcVar17;
  void *pvVar18;
  ushort *puVar19;
  int iVar20;
  BADSPACEBASE *in_ESP;
  int iVar21;
  uint *puVar22;
  float *pfVar23;
  char *pcVar24;
  uint *puVar25;
  uint *puVar26;
  uint *puVar27;
  int *piVar28;
  float *pfVar29;
  float *pfVar30;
  byte bVar31;
  float10 fVar32;
  double dVar33;
  int *in_stack_0000000c;
  int in_stack_00000010;
  char *pcVar34;
  uint uVar35;
  uint d6;
  float fVar36;
  ushort auStack_22d8 [1018];
  float afStack_1ae4 [949];
  byte auStack_c10 [8];
  byte auStack_c08 [40];
  CPickList CStack_be0;
  char acStack_838 [260];
  char acStack_734 [4];
  char acStack_730 [244];
  char acStack_63c [4];
  char acStack_638 [224];
  char acStack_558 [4];
  char acStack_554 [232];
  byte auStack_46c [120];
  uint auStack_3f4 [28];
  char acStack_384 [4];
  char acStack_380 [108];
  CBoundingBox3D local_314;
  byte local_2fc [14];
  ushort local_2ee;
  ushort uStack_2ec;
  ushort uStack_2ea;
  streambuf *local_2e8;
  ushort auStack_2e4 [18];
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_274;
  float local_270;
  float local_26c;
  byte local_268 [12];
  float *local_25c;
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
  byte local_230 [28];
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_1fc;
  float local_1f8 [2];
  byte local_1f0 [8];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1b8;
  float local_1b4;
  uint *local_1b0;
  float *local_1a8;
  float local_1a4;
  void *local_1a0;
  float local_19c;
  void *local_198;
  byte local_194 [28];
  FILE *local_178;
  FILE *local_174;
  FILE *local_170;
  FILE *local_16c;
  FILE *local_168;
  char *local_164;
  int local_160;
  void *local_15c;
  void *local_158;
  uint *local_154;
  int *local_150;
  uint *local_14c;
  int local_148;
  int local_144;
  uint *local_140;
  int *local_13c;
  int local_138;
  byte local_134 [24];
  int local_11c;
  int local_10c;
  uint *local_108;
  FILE *local_104;
  uint uStack_100;
  int *local_ec;
  int local_e8;
  FILE *local_e4;
  FILE *local_e0;
  FILE *local_dc;
  int local_d8;
  short *local_d4;
  FILE *local_d0;
  byte local_cc [32];
  int local_ac;
  FILE *local_a8;
  float *local_a4;
  streambuf *local_a0;
  int *local_9c;
  int *local_98;
  float local_94;
  int local_90;
  float local_8c;
  byte *local_88;
  uint *local_84;
  FILE *local_80;
  FILE *local_7c;
  FILE *local_78;
  int *local_74;
  char **local_70;
  int local_6c;
  int local_68;
  int *local_58;
  int local_54;
  int local_4c;
  FILE *local_48;
  FILE *local_44;
  FILE *local_40;
  int *local_3c;
  streambuf *local_30;
  int local_2c;
  int local_1c;
  int local_18;
  int iStack_14;
  float fStack_10;
  int iStack_c;
  
  bVar31 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa228);
  if (*in_stack_0000000c != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_1a4 = 0.0;
  local_1a0 = (void *)0x0;
  local_19c = 0.0;
  local_198 = (void *)0x0;
  local_194._0_4_ = (FILE *)0x0;
  local_194._4_4_ = 0.0;
  local_194._8_4_ = (streambuf *)0x0;
  local_10c = 0;
  local_104 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                        ((char *)(in_stack_00000010 + 0x200),(char *)0x0,"rt",
                         "..\\core\\skeledit.cpp",0xbde);
  if (local_104 == (FILE *)0x0) {
    pcVar34 = "Can't open %s";
  }
  else {
    local_194._0_4_ =
         shape_memdbg_cpp_openFile_FUN_0050f7a0
                   ("parts.log",(char *)0x0,"wt","..\\core\\skeledit.cpp",
                    0xbee);
    if ((FILE *)local_194._0_4_ == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0xbef;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create log file!");
    }
    pcVar34 = (char *)local_194._0_4_;
    crt_stdio_c_fprintf_FUN_005fe6d0
              ((FILE *)local_194._0_4_,"Matching skeleton parts for %s\n",in_stack_00000010 + 0x200
              );
    pFVar8 = local_e0;
    iVar16 = 1;
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      pFVar9 = local_dc;
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar16 = iVar16 + -1, 0 < iVar16));
    crt_stdio_c_fscanf_FUN_005fe7c0(local_dc,"%d\n",&local_d8);
    if (((int)local_dc < 0x65) || (0x67 < (int)local_dc)) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_03670650,"%s has incorrect S3D version %d",in_stack_00000010 + 0x200,
                 local_dc);
      goto LAB_0058f8e7;
    }
    iVar16 = 1;
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar9);
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar16 = iVar16 + -1, 0 < iVar16));
    iVar16 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (local_dc,"%d,%d,%d,%d,%d,%d,%d\n",&local_d4,&local_15c,&local_158,&local_d0,
                        &local_154,local_cc,local_134 + 0xc);
    this_ptr_00 = g_CEditorToolsPtr;
    if ((iVar16 == 7) && ((int)local_d4 < 0x1f)) {
      in_stack_0000000c[0x1c50] = (int)local_d4;
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (this_ptr_00,"Reading part list from %s");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_170,"Reading part list from %s\n",in_stack_00000010 + 0x200);
      pFVar8 = local_e0;
      iVar16 = 1;
      do {
        iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (iVar6 < 0) break;
      } while ((iVar6 != 10) || (iVar16 = iVar16 + -1, 0 < iVar16));
      iVar16 = 0;
      if (0 < in_stack_0000000c[0x1c50]) {
        local_13c = in_stack_0000000c + 0x1c51;
        local_88 = auStack_46c;
        local_84 = auStack_3f4;
        piVar28 = in_stack_0000000c + 0x1c59;
        do {
          local_134._0_4_ = local_13c + iVar16 * 0x18;
          local_138 = iVar16 * 4;
          iVar6 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (local_e0,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_88,local_84,piVar28,local_134._0_4_);
          if (iVar6 != 4) goto LAB_0058f8da;
          in_stack_0000000c[iVar16 * 0x18 + 0x1c63] = 0;
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (local_174,"\t%2d: %s, verts=%d, tris=%d\n",iVar16,local_134._0_4_,
                     *(uint *)((int)auStack_3f4 + local_138),piVar28);
          iVar16 = iVar16 + 1;
          local_88 = local_88 + 4;
          local_84 = local_84 + 1;
          piVar28 = piVar28 + 0x18;
        } while (iVar16 < in_stack_0000000c[0x1c50]);
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading texture list from %s");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_170,"Reading texture list from %s\n",in_stack_00000010 + 0x200);
      pFVar8 = local_e0;
      iVar16 = 1;
      do {
        iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (iVar6 < 0) break;
      } while ((iVar6 != 10) || (iVar16 = iVar16 + -1, 0 < iVar16));
      if (0x96 < (int)local_dc) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0xc24;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
      }
      iVar16 = 0;
      if (0 < (int)local_dc) {
        pcVar17 = &stack0xffff5e1c;
        do {
          iVar6 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (local_e4,"%[^\n]\n",&CStack_be0.selection_state);
          if (iVar6 != 1) goto LAB_0058f8da;
          crt_string_c_splitpath_FUN_005ff178
                    (acStack_838,(char *)0x0,(char *)0x0,pcVar17,(char *)0x0);
          iVar16 = iVar16 + 1;
          pcVar17 = pcVar17 + 0x100;
        } while (iVar16 < (int)local_dc);
      }
      pcVar17 = "gore";
      pcVar24 = acStack_380;
      for (iVar16 = 0x19; iVar16 != 0; iVar16 = iVar16 + -1) {
        *(uint *)pcVar24 = *(uint *)pcVar17;
        pcVar17 = pcVar17 + ((uint)bVar31 * -2 + 1) * 4;
        pcVar24 = pcVar24 + ((uint)bVar31 * -2 + 1) * 4;
      }
      if (*(int *)(in_stack_00000010 + 0x308) == 0) {
        shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                  (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",acStack_380,100,1);
      }
      local_158 = (void *)0xffffffff;
      if (acStack_380[0] != '\0') {
        pvVar18 = (void *)0x0;
        if (0 < in_stack_0000000c[0x2f]) {
          piVar28 = in_stack_0000000c + 0x32;
          do {
            crt_string_c_splitpath_FUN_005ff178
                      ((char *)piVar28,(char *)0x0,(char *)0x0,acStack_638,(char *)0x0);
            iVar16 = crt_string_c_stricmp_FUN_005fe7f0(acStack_384,acStack_63c);
            if (iVar16 == 0) break;
            pvVar18 = (void *)((int)pvVar18 + 1);
            piVar28 = piVar28 + 0x12;
          } while ((int)pvVar18 < in_stack_0000000c[0x2f]);
        }
        if (in_stack_0000000c[0x2f] <= (int)pvVar18) {
          if (0x4f < in_stack_0000000c[0x2f]) {
            crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Texture list full determining parts");
            goto LAB_0058f8e7;
          }
          crt_stdio_c_sprintf_FUN_005fdbd0
                    ((char *)(in_stack_0000000c + in_stack_0000000c[0x2f] * 0x12 + 0x32),
                     "%s.raw",acStack_380);
          in_stack_0000000c[0x2f] = in_stack_0000000c[0x2f] + 1;
        }
        local_158 = pvVar18;
        crt_stdio_c_fprintf_FUN_005fe6d0(local_178,"Automap capped faces is active\n");
      }
      local_178 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)local_164 * 0x3c,"..\\core\\skeledit.cpp",0xc4e);
      if (local_178 == (FILE *)0x0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0xc4f;
        core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading faces from %s");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_170,"Reading faces from %s\n",in_stack_00000010 + 0x200);
      pFVar8 = local_e0;
      iVar16 = 1;
      do {
        iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (iVar6 < 0) break;
      } while ((iVar6 != 10) || (iVar16 = iVar16 + -1, 0 < iVar16));
      iVar16 = 0;
      puVar7 = (uint *)local_194._24_4_;
      if (0 < (int)local_164) {
        do {
          pcVar34 = local_134;
          iVar6 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (local_e4,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",pcVar34,&local_270,
                             local_194 + 8,local_1f8,&local_26c,local_194 + 0xc,local_1f8 + 1,
                             local_268,local_194 + 0x10,local_1f0);
          if (iVar6 != 10) goto LAB_0058f8da;
          puVar7[1] = 3;
          iVar6 = 0;
          puVar7[5] = local_134._4_4_;
          fVar32 = (float10)_DAT_0064bfd2;
          puVar22 = puVar7;
          do {
            puVar22[6] = *(uint *)(local_268 + iVar6 + -4);
            dVar33 = crt_math_c_round_FUN_005fe6b0
                               ((double)((float10)*(float *)(local_194 + iVar6 + 0xc) * fVar32));
            fStack_10 = (float)(int)ROUND(dVar33);
            *(int *)(extraout_ECX + 0x1c) = (int)ROUND(dVar33);
            dVar33 = crt_math_c_round_FUN_005fe6b0
                               ((double)((float10)*(float *)((int)local_1f8 + extraout_EDX) * fVar32
                                        ));
            iStack_c = (int)ROUND(dVar33);
            iVar6 = extraout_EDX_00 + 4;
            extraout_ECX_00[5] = (int)ROUND(dVar33);
            puVar22 = extraout_ECX_00;
          } while (iVar6 != 0xc);
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (local_174,"\t%4d: %4d %4d %4d\n",iVar16,puVar7[6],puVar7[9],puVar7[0xc]);
          iVar16 = iVar16 + 1;
          puVar7 = puVar7 + 0xf;
        } while (iVar16 < local_160);
      }
      puVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (local_160 * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
      local_194._24_4_ = puVar7;
      if (puVar7 != (uint *)0x0) {
        local_194._24_4_ = puVar7 + 1;
        *puVar7 = local_15c;
      }
      if ((uint *)local_194._24_4_ == (uint *)0x0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0xc7d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading vertices from %s");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_170,"Reading vertices from %s\n",in_stack_00000010 + 0x200);
      pFVar8 = local_e0;
      iVar16 = 1;
      do {
        iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (iVar6 < 0) break;
      } while ((iVar6 != 10) || (iVar16 = iVar16 + -1, 0 < iVar16));
      iVar16 = 0;
      if (0 < (int)local_15c) {
        local_80 = (FILE *)(local_194._24_4_ + 8);
        puVar7 = (uint *)(local_194._24_4_ + 4);
        do {
          pfVar15 = (float *)(local_194._24_4_ + iVar16 * 3 * 4);
          iVar6 = crt_stdio_c_fscanf_FUN_005fe7c0(local_e0,"%f,%f,%f\n",pfVar15,puVar7,local_80)
          ;
          if (iVar6 != 3) goto LAB_0058f8da;
          crt_stdio_c_fprintf_FUN_005fe6d0
                    (local_174,"\t%4d: %7.3f %7.3f %7.3f\n",iVar16,SUB84 /* extract 2-byte value */((double)*pfVar15,0),
                     (int)((ulonglong)(double)*pfVar15 >> 0x20),SUB84 /* extract 2-byte value */((double)pfVar15[1],0),
                     (int)((ulonglong)(double)pfVar15[1] >> 0x20),SUB84 /* extract 2-byte value */((double)pfVar15[2],0),
                     (int)((ulonglong)(double)pfVar15[2] >> 0x20));
          puVar7 = puVar7 + 3;
          iVar16 = iVar16 + 1;
          local_80 = (FILE *)&local_80->_flag;
        } while (iVar16 < (int)local_15c);
      }
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_e0,"..\\core\\skeledit.cpp",0xc8c);
      local_dc = (FILE *)0x0;
      crt_stdio_c_fprintf_FUN_005fe6d0(local_170,"Removing duplicate faces\n");
      local_1c = 0;
      if (0 < local_160) {
        local_78 = local_178;
        do {
          local_134._16_4_ = (FILE *)0x0;
          local_134._20_4_ = 0;
          local_134._12_4_ = local_78;
          if (0 < local_1c) {
            local_7c = local_178;
            do {
              if ((local_7c->_cnt == 3) && (local_7c->_bufsize == local_78->_bufsize)) {
                local_11c = 0;
                do {
                  iVar6 = 0;
                  iVar16 = local_11c;
                  pFVar8 = local_78;
                  do {
                    pfVar15 = (float *)(local_194._24_4_ + *(int *)&pFVar8->_ungotten * 3 * 4);
                    local_290 = *pfVar15;
                    local_28c = pfVar15[1];
                    iStack_c = 3;
                    local_288 = pfVar15[2];
                    pfVar15 = (float *)(local_194._24_4_ +
                                       *(int *)(&local_7c->_ungotten + (iVar16 % 3) * 6) * 3 * 4);
                    local_1e8 = *pfVar15;
                    local_1e4 = pfVar15[1];
                    local_230._24_4_ = local_290 - local_1e8;
                    local_1e0 = pfVar15[2];
                    local_214 = local_28c - local_1e4;
                    local_210 = local_288 - local_1e0;
                    if ((((float)_DAT_0064bfda < ABS((float)local_230._24_4_)) ||
                        ((float)_DAT_0064bfda < ABS(local_214))) ||
                       ((float)_DAT_0064bfda < ABS(local_210))) break;
                    pFVar8 = (FILE *)&pFVar8->_flag;
                    iVar6 = iVar6 + 1;
                    iVar16 = iVar16 + 1;
                  } while (iVar6 < 3);
                  if (iVar6 == 3) {
                    crt_stdio_c_fprintf_FUN_005fe6d0
                              (local_174,"Removing face %d, it is dup with face %d\n",local_1c,
                               local_134._20_4_);
                    *(int *)(local_134._12_4_ + 4) = 0;
                    goto LAB_005902c8;
                  }
                  local_11c = local_11c + 1;
                } while (local_11c < 3);
              }
              local_134._20_4_ = local_134._20_4_ + 1;
              local_7c = (FILE *)&local_7c[2]._cnt;
            } while ((int)local_134._20_4_ < local_1c);
          }
LAB_005902c8:
          local_1c = local_1c + 1;
          local_78 = (FILE *)&local_78[2]._cnt;
        } while (local_1c < local_160);
      }
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Biasing %s");
      if ((FILE *)local_2fc != local_178) {
        local_2fc._0_4_ = local_178->_ptr;
        local_2fc._4_4_ = local_178->_cnt;
        local_2fc._8_4_ = local_178->_link;
      }
      if ((FILE *)(local_2fc + 0xc) != local_178) {
        local_2fc._12_2_ = SUB42 /* extract 2-byte value */(local_178->_ptr,0);
        local_2ee = (ushort)((uint)local_178->_ptr >> 0x10);
        uStack_2ec = (ushort)local_178->_cnt;
        uStack_2ea = (ushort)((uint)local_178->_cnt >> 0x10);
        local_2e8 = local_178->_link;
      }
      iVar16 = 1;
      pFVar8 = local_178;
      if (1 < (int)local_158) {
        do {
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                    ((CBoundingBox3D *)local_2fc,(CVector3f *)&pFVar8->_flag);
          iVar16 = iVar16 + 1;
          pFVar8 = (FILE *)&pFVar8->_flag;
        } while (iVar16 < (int)local_158);
      }
      iVar16 = in_stack_0000000c[0x10];
      pCVar1 = (CBoundingBox3D *)(iVar16 + 0x10);
      if (&local_314 != pCVar1) {
        local_314.min.x = (pCVar1->min).x;
        local_314.min.y = *(float *)(iVar16 + 0x14);
        local_314.min.z = *(float *)(iVar16 + 0x18);
      }
      if ((CBoundingBox3D *)&local_314.max != pCVar1) {
        local_314.max.x = (pCVar1->min).x;
        local_314.max.y._0_2_ = (ushort)*(uint *)(iVar16 + 0x14);
        local_314.max.y._2_2_ = (ushort)((uint)*(uint *)(iVar16 + 0x14) >> 0x10);
        local_314.max.z._0_2_ = (ushort)*(uint *)(iVar16 + 0x18);
        local_314.max.z._2_2_ = (ushort)((uint)*(uint *)(iVar16 + 0x18) >> 0x10);
      }
      iVar16 = 1;
      if (1 < in_stack_0000000c[0xb]) {
        iVar6 = 0x34;
        do {
          core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                    (&local_314,(CVector3f *)(in_stack_0000000c[0x10] + iVar6 + 0x10));
          iVar16 = iVar16 + 1;
          iVar6 = iVar6 + 0x34;
        } while (iVar16 < in_stack_0000000c[0xb]);
      }
      local_25c = (float *)(local_314.max.x - local_314.min.x);
      local_298 = (float)CONCAT22 /* combine 2-byte values */(local_2ee,local_2fc._12_2_) - (float)local_2fc._0_4_;
      local_1cc = (float)local_25c / local_298;
      local_258 = (float)CONCAT22 /* combine 2-byte values */(local_314.max.y._2_2_,local_314.max.y._0_2_) - local_314.min.y;
      local_294 = (float)CONCAT22 /* combine 2-byte values */(uStack_2ea,uStack_2ec) - (float)local_2fc._4_4_;
      local_1c8 = local_258 / local_294;
      local_254 = (float)CONCAT22 /* combine 2-byte values */(local_314.max.z._2_2_,local_314.max.z._0_2_) - local_314.min.z;
      local_290 = (float)local_2e8 - (float)local_2fc._8_4_;
      local_1c4 = local_254 / local_290;
      iVar16 = 0;
      pFVar8 = local_178;
      if (0 < (int)local_158) {
        do {
          pFVar8->_ptr = (char *)(((float)pFVar8->_ptr - (float)local_2fc._0_4_) * local_1cc +
                                 local_314.min.x);
          pFVar8->_cnt = (int)(((float)pFVar8->_cnt - (float)local_2fc._4_4_) * local_1c8 +
                              local_314.min.y);
          iVar16 = iVar16 + 1;
          pFVar8->_link =
               (streambuf *)
               (((float)pFVar8->_link - (float)local_2fc._8_4_) * local_1c4 + local_314.min.z);
          pFVar8 = (FILE *)&pFVar8->_flag;
        } while (iVar16 < (int)local_158);
      }
      pcVar34 = "Scale = %7.3f %7.3f %7.3f\n";
      uVar35 = 0x590679;
      pFVar8 = local_170;
      local_274 = local_298;
      local_270 = local_294;
      local_26c = local_290;
      local_230._16_4_ = local_25c;
      local_230._20_4_ = local_258;
      local_230._24_4_ = local_254;
      local_1d8 = local_298;
      local_1d4 = local_294;
      local_1d0 = local_290;
      local_1a8 = local_25c;
      local_1a4 = local_258;
      local_1a0 = (void *)local_254;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_170,"Scale = %7.3f %7.3f %7.3f\n",SUB84 /* extract 2-byte value */((double)local_1cc,0),
                 (int)((ulonglong)(double)local_1cc >> 0x20),SUB84 /* extract 2-byte value */((double)local_1c8,0),
                 (int)((ulonglong)(double)local_1c8 >> 0x20),SUB84 /* extract 2-byte value */((double)local_1c4,0),
                 (int)((ulonglong)(double)local_1c4 >> 0x20));
      pFVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         (local_160 * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
      local_174 = pFVar9;
      if (pFVar9 != (FILE *)0x0) {
        local_174 = (FILE *)&pFVar9->_cnt;
        pFVar9->_ptr = local_164;
      }
      pcVar17 = (char *)in_stack_0000000c[0x15];
      d6 = 0x5906e4;
      pFVar9 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                         ((int)pcVar17 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
      local_16c = pFVar9;
      if (pFVar9 != (FILE *)0x0) {
        local_16c = (FILE *)&pFVar9->_cnt;
        pFVar9->_ptr = pcVar17;
      }
      if ((local_170 == (FILE *)0x0) || (local_16c == (FILE *)0x0)) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0xd11;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
      }
      iVar16 = 0;
      pFVar9 = local_178;
      pFVar12 = local_170;
      if (0 < local_160) {
        do {
          if (pFVar9->_cnt == 3) {
            pfVar13 = (float *)(local_194._24_4_ + *(int *)&pFVar9->_ungotten * 3 * 4);
            pfVar15 = (float *)(local_194._24_4_ + (int)pFVar9[1]._link * 3 * 4);
            local_2a8 = *pfVar15 - *pfVar13;
            local_2a4 = pfVar15[1] - pfVar13[1];
            local_2a0 = pfVar15[2] - pfVar13[2];
            pfVar13 = (float *)(local_194._24_4_ + pFVar9[1]._bufsize * 3 * 4);
            local_248 = *pfVar13 - *pfVar15;
            local_244 = pfVar13[1] - pfVar15[1];
            local_240 = pfVar13[2] - pfVar15[2];
            local_194._4_4_ = local_2a0 * local_248 - local_2a8 * local_240;
            fVar5 = local_2a4 * local_240 - local_2a0 * local_244;
            fVar36 = local_2a8 * local_244 - local_2a4 * local_248;
            fVar4 = SQRT(fVar36 * fVar36 +
                         fVar5 * fVar5 + (float)local_194._4_4_ * (float)local_194._4_4_);
            if (fVar4 <= 0.0) {
              local_194._4_4_ = 0.0;
              local_194._0_4_ = (FILE *)0x0;
              local_194._8_4_ = (streambuf *)0x0;
            }
            else {
              fVar4 = 1.0 / fVar4;
              local_194._0_4_ = fVar5 * fVar4;
              local_194._4_4_ = (float)local_194._4_4_ * fVar4;
              local_194._8_4_ = fVar36 * fVar4;
            }
            if (pFVar12 != (FILE *)local_194) {
              pFVar12->_ptr = (char *)local_194._0_4_;
              pFVar12->_cnt = local_194._4_4_;
              pFVar12->_link = (streambuf *)local_194._8_4_;
            }
          }
          iVar16 = iVar16 + 1;
          pFVar9 = (FILE *)&pFVar9[2]._cnt;
          pFVar12 = (FILE *)&pFVar12->_flag;
        } while (iVar16 < local_160);
      }
      iVar16 = 0;
      if (0 < in_stack_0000000c[0x15]) {
        local_74 = (int *)0x0;
        pFVar9 = local_16c;
        do {
          puVar19 = (ushort *)((int)local_74 + in_stack_0000000c[0x1f]);
          iVar10 = (uint)puVar19[1] * 0x34;
          iVar21 = (uint)*puVar19 * 0x34;
          iVar6 = in_stack_0000000c[0x10];
          iVar20 = (uint)puVar19[2] * 0x34;
          local_2c0 = *(float *)(iVar6 + 0x10 + iVar10) - *(float *)(iVar6 + 0x10 + iVar21);
          local_2bc = *(float *)(iVar6 + 0x14 + iVar10) - *(float *)(iVar6 + 0x14 + iVar21);
          local_2b8 = *(float *)(iVar6 + 0x18 + iVar10) - *(float *)(iVar6 + 0x18 + iVar21);
          local_254 = *(float *)(iVar6 + 0x10 + iVar20) - *(float *)(iVar6 + 0x10 + iVar10);
          local_250 = *(float *)(iVar6 + 0x14 + iVar20) - *(float *)(iVar6 + 0x14 + iVar10);
          local_24c = *(float *)(iVar6 + 0x18 + iVar20) - *(float *)(iVar6 + 0x18 + iVar10);
          local_230._4_4_ = local_2b8 * local_254 - local_2c0 * local_24c;
          fVar5 = local_2bc * local_24c - local_2b8 * local_250;
          fVar36 = local_2c0 * local_250 - local_2bc * local_254;
          fVar4 = SQRT(fVar36 * fVar36 +
                       fVar5 * fVar5 + (float)local_230._4_4_ * (float)local_230._4_4_);
          if (fVar4 <= 0.0) {
            local_230._4_4_ = 0.0;
            local_230._0_4_ = (char *)0x0;
            local_230._8_4_ = (streambuf *)0x0;
          }
          else {
            fVar4 = 1.0 / fVar4;
            local_230._0_4_ = fVar5 * fVar4;
            local_230._4_4_ = (float)local_230._4_4_ * fVar4;
            local_230._8_4_ = fVar36 * fVar4;
          }
          if (pFVar9 != (FILE *)local_230) {
            pFVar9->_ptr = (char *)local_230._0_4_;
            pFVar9->_cnt = local_230._4_4_;
            pFVar9->_link = (streambuf *)local_230._8_4_;
          }
          pFVar9 = (FILE *)&pFVar9->_flag;
          iVar16 = iVar16 + 1;
          local_74 = (int *)((int)local_74 + 0x12);
        } while (iVar16 < in_stack_0000000c[0x15]);
      }
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Matching faces");
      crt_stdio_c_fprintf_FUN_005fe6d0
                (local_16c,"Matching faces in %s\n",in_stack_00000010 + 0x200);
      if (in_stack_0000000c[0x15] <= local_160) {
        local_1a0 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (in_stack_0000000c[0x15] * 4,"..\\core\\skeledit.cpp",0xd42);
        if (local_1a0 == (void *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd43;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        local_194._12_4_ = local_1b0;
        iVar16 = 0;
        if (0 < in_stack_0000000c[0x1c50]) {
          iVar6 = 0;
          do {
            puVar7 = (uint *)local_194._12_4_;
            for (iVar10 = 0; iVar10 < *(int *)((int)in_stack_0000000c + iVar6 + 0x7164);
                iVar10 = iVar10 + 1) {
              puVar7[3] = 0xffffffff;
              puVar7[2] = iVar16;
              puVar7 = puVar7 + 0xf;
            }
            local_194._12_4_ =
                 local_194._12_4_ + *(int *)((int)in_stack_0000000c + iVar6 + 0x7164) * 0xf * 4;
            iVar6 = iVar6 + 0x60;
            iVar16 = iVar16 + 1;
          } while (iVar16 < in_stack_0000000c[0x1c50]);
        }
        local_58 = (int *)0x0;
        if (0 < in_stack_0000000c[0x15]) {
          do {
            local_44 = (FILE *)local_58;
            shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                      (g_CEditorToolsPtr,(float)(int)local_58,(float)in_stack_0000000c[0x15]);
            local_150 = local_58;
            while (-1 < (int)local_150) {
              local_14c = (uint *)(in_stack_0000000c[0x1f] + (int)local_150 * 0x12);
              pFVar9 = (FILE *)((int)local_150 * 4 + (int)local_1a0);
              pFVar9->_ptr = (char *)0x7149f2ca;
              local_148 = -1;
              local_144 = 0;
              if (0 < (int)local_198) {
                local_a8 = (FILE *)local_1b0;
                local_134._0_4_ = (int)local_1a4 + (int)local_150 * 0xc;
                local_a4 = local_1a8;
                do {
                  local_140 = &local_a8->_ptr;
                  if (*(uint *)((int)local_a8 + 4) == 3) {
                    local_13c = (int *)((float)_DAT_0064bfea -
                                       (*(float *)(local_134._0_4_ + 8) * local_a4[2] +
                                       *(float *)local_134._0_4_ * *local_a4 +
                                       *(float *)(local_134._0_4_ + 4) * local_a4[1]));
                    local_138 = 0;
                    do {
                      iVar6 = 0;
                      local_134._4_4_ = (char *)0x0;
                      iVar16 = local_138;
                      pFVar12 = local_a8;
                      do {
                        pfVar15 = (float *)(*(uint *)((int)pFVar12 + 0x18) * 0xc +
                                           (int)local_1b4);
                        local_2bc = *pfVar15;
                        local_2b8 = pfVar15[1];
                        local_2b4 = pfVar15[2];
                        iVar10 = in_stack_0000000c[0x10] +
                                 (uint)*(ushort *)((iVar16 % 3) * 2 + (int)local_14c) * 0x34;
                        local_1fc = *(float *)(iVar10 + 0x10);
                        local_1f8[0] = *(float *)(iVar10 + 0x14);
                        local_238 = local_1fc - local_2bc;
                        local_1f8[1] = *(float *)(iVar10 + 0x18);
                        local_234 = local_1f8[0] - local_2b8;
                        local_230._0_4_ = local_1f8[1] - local_2b4;
                        if ((((float)_DAT_0064bfe2 < ABS(local_238)) ||
                            ((float)_DAT_0064bfe2 < ABS(local_234))) ||
                           ((float)_DAT_0064bfe2 < ABS((float)local_230._0_4_))) break;
                        fVar36 = (float)local_230._0_4_ * (float)local_230._0_4_ +
                                 local_238 * local_238 + local_234 * local_234;
                        iVar16 = iVar16 + 1;
                        pFVar12 = (FILE *)((int)pFVar12 + 0xc);
                        local_134._4_4_ = fVar36 * fVar36 * fVar36 + (float)local_134._4_4_;
                        iVar6 = iVar6 + 1;
                      } while (iVar6 < 3);
                      if (((2 < iVar6) &&
                          (local_134._4_4_ = (float)local_134._4_4_ * (float)local_13c,
                          (float)local_134._4_4_ <= (float)pFVar9->_ptr)) &&
                         (((int)*(uint *)((int)local_a8 + 0xc) < 0 ||
                          ((float)local_134._4_4_ <
                           *(float *)(*(uint *)((int)local_a8 + 0xc) * 4 + (int)local_1a0)))))
                      {
                        local_148 = local_144;
                        pFVar9->_ptr = (char *)local_134._4_4_;
                      }
                      local_138 = local_138 + 1;
                    } while (local_138 < 3);
                  }
                  local_a4 = local_a4 + 3;
                  local_144 = local_144 + 1;
                  local_a8 = (FILE *)((int)local_a8 + 0x3c);
                  local_134._12_4_ = pFVar9;
                  local_134._16_4_ = pFVar9;
                } while (local_144 < (int)local_198);
              }
              if (local_148 == -1) break;
              piVar28 = (int *)local_1b0[local_148 * 0xf + 3];
              local_1b0[local_148 * 0xf + 3] = local_150;
              local_150 = piVar28;
            }
            local_58 = (int *)((int)local_58 + 1);
          } while ((int)local_58 < in_stack_0000000c[0x15]);
        }
        shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xdd1;
        if (local_1a4 != 0.0) {
          crt_memory_c_free_FUN_005fe659((void *)((int)local_1a4 + -4));
        }
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xdd2;
        local_1a0 = (void *)0x0;
        if (local_19c != 0.0) {
          crt_memory_c_free_FUN_005fe659((void *)((int)local_19c + -4));
        }
        local_19c = 0.0;
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xdd3;
        crt_memory_c_free_FUN_005fe659(local_198);
        iVar16 = 0;
        local_194._0_4_ = (FILE *)0x0;
        local_178 = (FILE *)0x0;
        piVar28 = in_stack_0000000c;
        if (0 < in_stack_0000000c[0x1c50]) {
          do {
            piVar28[0x1c5e] = 0;
            piVar28[0x1c59] = 0;
            iVar16 = iVar16 + 1;
            piVar28 = piVar28 + 0x18;
          } while (iVar16 < in_stack_0000000c[0x1c50]);
        }
        psVar11 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            (in_stack_0000000c[0x15] << 2,"..\\core\\skeledit.cpp",0xe56);
        local_194._8_4_ = psVar11;
        local_108 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (in_stack_0000000c[0x15] << 2,"..\\core\\skeledit.cpp",0xe57);
        if ((psVar11 == (streambuf *)0x0) || (local_108 == (uint *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xe58;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar16 = 0;
        puVar7 = local_108;
        puVar22 = (uint *)local_194._12_4_;
        if (0 < in_stack_0000000c[0x15]) {
          do {
            *puVar7 = 999999;
            iVar16 = iVar16 + 1;
            *puVar22 = 0xffffffff;
            puVar7 = puVar7 + 1;
            puVar22 = puVar22 + 1;
          } while (iVar16 < in_stack_0000000c[0x15]);
        }
        iVar16 = 0;
        local_16c = (FILE *)0x0;
        fVar36 = local_19c;
        if (0 < (int)local_194._16_4_) {
          do {
            if (*(int *)((int)fVar36 + 4) == 3) {
              iVar6 = *(int *)((int)fVar36 + 8);
              iVar10 = *(int *)((int)fVar36 + 0xc);
              if (iVar10 < 0) {
                local_170 = (FILE *)((int)&local_170->_ptr + 1);
                in_stack_0000000c[iVar6 * 0x18 + 0x1c5e] =
                     in_stack_0000000c[iVar6 * 0x18 + 0x1c5e] + 1;
              }
              else {
                local_10c = iVar10 * 4;
                if (-1 < *(int *)(local_194._12_4_ + iVar10 * 4)) {
                  pcVar34 = "Unable to generate one-to-one polygon matching from %s";
                  goto LAB_0058f8da;
                }
                local_108[iVar10] = iVar6;
                *(int *)(local_194._12_4_ + iVar10 * 4) = iVar16;
                local_16c = (FILE *)((int)&local_16c->_ptr + 1);
                in_stack_0000000c[iVar6 * 0x18 + 0x1c59] =
                     in_stack_0000000c[iVar6 * 0x18 + 0x1c59] + 1;
              }
            }
            iVar16 = iVar16 + 1;
            fVar36 = (float)((int)fVar36 + 0x3c);
          } while (iVar16 < (int)local_194._16_4_);
        }
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xe86;
        crt_memory_c_free_FUN_005fe659((void *)local_194._12_4_);
        local_44 = (FILE *)(in_stack_0000000c[0x15] + -1);
        local_194._16_4_ = 0;
        pFVar9 = local_104;
        while (local_104 = pFVar9, -1 < (int)local_44) {
          iVar16 = 0;
          if (0 < (int)local_44) {
            local_88 = (byte *)0x0;
            local_84 = (uint *)0x12;
            do {
              if (pFVar9->_cnt < (int)pFVar9->_ptr) {
                local_2c = iVar16 * 4 + 4;
                puVar22 = (uint *)(local_2c + in_stack_0000000c[0x24]);
                puVar7 = (uint *)(iVar16 * 4 + in_stack_0000000c[0x24]);
                uVar3 = *puVar7;
                *puVar7 = *puVar22;
                *puVar22 = uVar3;
                puVar22 = (uint *)((int)local_84 + in_stack_0000000c[0x1f]);
                puVar7 = (uint *)(local_88 + in_stack_0000000c[0x1f]);
                local_2fc._8_4_ = *puVar7;
                *(ushort *)(local_2fc + (uint)bVar31 * -8 + 0xc) =
                     *(ushort *)(puVar7 + (uint)bVar31 * -2 + 1);
                local_2ee = (ushort)*(uint *)((int)puVar7 + 6);
                uStack_2ec = (ushort)((uint)*(uint *)((int)puVar7 + 6) >> 0x10);
                (&uStack_2ea)[(uint)bVar31 * -4] =
                     *(ushort *)((int)puVar7 + (uint)bVar31 * -8 + 10);
                local_2e8 = (streambuf *)puVar7[3];
                auStack_2e4[(uint)bVar31 * -4] = *(ushort *)(puVar7 + (uint)bVar31 * -2 + 4);
                puVar25 = puVar7 + (uint)bVar31 * -2 + 1;
                puVar27 = puVar22 + (uint)bVar31 * -2 + 1;
                *puVar7 = *puVar22;
                puVar26 = puVar25 + (uint)bVar31 * -2 + 1;
                puVar7 = puVar27 + (uint)bVar31 * -2 + 1;
                *puVar25 = *puVar27;
                *puVar26 = *puVar7;
                puVar26[(uint)bVar31 * -2 + 1] = puVar7[(uint)bVar31 * -2 + 1];
                *(ushort *)(puVar26 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1) =
                     *(ushort *)(puVar7 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1);
                puVar27 = puVar22 + (uint)bVar31 * -2 + 1;
                *puVar22 = local_2fc._8_4_;
                puVar22 = puVar27 + (uint)bVar31 * -2 + 1;
                puVar7 = (uint *)(&uStack_2ec + (uint)bVar31 * -4 + (uint)bVar31 * -4);
                *puVar27 = *(uint *)(local_2fc + (uint)bVar31 * -8 + 0xc);
                *puVar22 = *puVar7;
                puVar22[(uint)bVar31 * -2 + 1] = puVar7[(uint)bVar31 * -2 + 1];
                *(ushort *)(puVar22 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1) =
                     *(ushort *)(puVar7 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1);
                puVar7 = (uint *)((int)&local_104->_ptr + local_2c);
                pcVar17 = pFVar9->_ptr;
                pFVar9->_ptr = (char *)*puVar7;
                *puVar7 = pcVar17;
              }
              iVar16 = iVar16 + 1;
              pFVar9 = (FILE *)&pFVar9->_cnt;
              local_88 = local_88 + 0x12;
              local_84 = (uint *)((int)local_84 + 0x12);
            } while (iVar16 < (int)local_44);
          }
          local_44 = (FILE *)((int)local_44 + -1);
          pFVar9 = local_104;
        }
        iVar16 = 2;
        if (local_168 != (FILE *)in_stack_0000000c[0x15]) {
          local_ec = in_stack_0000000c + 0x1c51;
          do {
            d2 = in_stack_0000000c[0x15] - (int)local_168;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_554,"There are %d triangles I couldn't match.");
            if (*(int *)(in_stack_00000010 + 0x308) == 0) {
              shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&CStack_be0);
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)auStack_c10,"Get rid of them them, I never want to see them again");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)(auStack_c10 + 4),"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
              shape_edittool_cpp_CStrList_add_FUN_004a2b80
                        ((CStrList *)auStack_c08,"Try best guess");
              do {
                iVar16 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                   ((CPickList *)(auStack_c08 + 4),acStack_558,iVar16,0);
              } while (iVar16 < 0);
              shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                        ((CPickList *)(auStack_c08 + 4),0,d2,uVar35,(uint)pFVar8,(uint)pcVar34,d6);
            }
            pFVar9 = local_168;
            if (iVar16 == 0) {
              in_stack_0000000c[0x15] = (int)local_168;
            }
            else if (iVar16 == 1) {
              if (0x1d < in_stack_0000000c[0x1c50]) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0xeaf;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
              }
              pcVar17 = "MySpecialTriangles";
              piVar28 = local_ec + in_stack_0000000c[0x1c50] * 0x18;
              do {
                cVar2 = *pcVar17;
                *(char *)piVar28 = cVar2;
                if (cVar2 == '\0') break;
                cVar2 = pcVar17[1];
                pcVar17 = pcVar17 + 2;
                *(char *)((int)piVar28 + 1) = cVar2;
                piVar28 = (int *)((int)piVar28 + 2);
              } while (cVar2 != '\0');
              in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c59] =
                   in_stack_0000000c[0x15] - (int)local_168;
              in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c5e] = 0;
              in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c63] = 0;
              local_168 = (FILE *)in_stack_0000000c[0x15];
              in_stack_0000000c[0x1c50] = in_stack_0000000c[0x1c50] + 1;
            }
            else if (iVar16 == 2) {
              local_e8 = 1;
              local_e4 = local_168;
              local_e0 = (FILE *)0x0;
              if (0 < in_stack_0000000c[0x15]) {
                local_58 = (int *)((int)local_168 * 0x12);
                local_54 = (int)local_168 * 4;
                do {
                  if (local_e8 == 0) break;
                  local_e8 = 0;
                  local_48 = pFVar9;
                  if ((int)pFVar9 < in_stack_0000000c[0x15]) {
                    local_70 = &local_104->_ptr + (int)pFVar9;
                    local_74 = local_58;
                    do {
                      if (0xf423e < (int)*local_70) {
                        local_dc = (FILE *)((int)local_74 + in_stack_0000000c[0x1f]);
                        local_d8 = 0;
                        if (0 < in_stack_0000000c[0x15]) {
                          local_78 = (FILE *)0x0;
                          local_7c = local_104;
                          do {
                            if ((int)local_7c->_ptr < 999999) {
                              local_d4 = (short *)((int)local_78 + in_stack_0000000c[0x1f]);
                              local_80 = (FILE *)((int)&local_dc->_cnt + 2);
                              iVar16 = 0;
                              pFVar12 = local_dc;
                              do {
                                local_d0 = pFVar12;
                                iVar6 = 0;
                                psVar14 = local_d4;
                                if (*(short *)&pFVar12->_ptr != *local_d4) {
                                  do {
                                    iVar6 = iVar6 + 1;
                                    psVar14 = psVar14 + 1;
                                    if (2 < iVar6) goto LAB_00591f48;
                                  } while (*psVar14 != *(short *)&pFVar12->_ptr);
                                }
                                iVar16 = iVar16 + 1;
LAB_00591f48:
                                pFVar12 = (FILE *)((int)&pFVar12->_ptr + 2);
                              } while (pFVar12 != local_80);
                              if (1 < iVar16) {
                                pcVar17 = (&local_104->_ptr)[local_d8];
                                in_stack_0000000c[(int)pcVar17 * 0x18 + 0x1c59] =
                                     in_stack_0000000c[(int)pcVar17 * 0x18 + 0x1c59] + 1;
                                local_168 = (FILE *)((int)&local_168->_ptr + 1);
                                *local_70 = (&local_104->_ptr)[local_d8];
                                break;
                              }
                            }
                            local_d8 = local_d8 + 1;
                            local_78 = (FILE *)((int)local_78 + 0x12);
                            local_7c = (FILE *)&local_7c->_cnt;
                          } while (local_d8 < in_stack_0000000c[0x15]);
                        }
                        if (0xf423e < (int)*local_70) {
                          local_e8 = 1;
                        }
                      }
                      local_48 = (FILE *)((int)&local_48->_ptr + 1);
                      local_70 = local_70 + 1;
                      local_74 = (int *)((int)local_74 + 0x12);
                    } while ((int)local_48 < in_stack_0000000c[0x15]);
                  }
                  local_e0 = (FILE *)((int)&local_e0->_ptr + 1);
                } while ((int)local_e0 < in_stack_0000000c[0x15]);
              }
              local_4c = in_stack_0000000c[0x15] + -1;
              pFVar9 = local_104;
              while (local_104 = pFVar9, -1 < local_4c) {
                iVar16 = 0;
                if (0 < local_4c) {
                  local_6c = 0;
                  local_68 = 0x12;
                  do {
                    if (pFVar9->_cnt < (int)pFVar9->_ptr) {
                      local_2c = iVar16 * 4 + 4;
                      puVar22 = (uint *)(local_2c + in_stack_0000000c[0x24]);
                      puVar7 = (uint *)(in_stack_0000000c[0x24] + iVar16 * 4);
                      uVar3 = *puVar7;
                      *puVar7 = *puVar22;
                      *puVar22 = uVar3;
                      pfVar13 = (float *)(local_68 + in_stack_0000000c[0x1f]);
                      pfVar15 = (float *)(in_stack_0000000c[0x1f] + local_6c);
                      local_314.max.x = *pfVar15;
                      *(ushort *)(local_2fc + (uint)bVar31 * -8 + -8) =
                           *(ushort *)(pfVar15 + (uint)bVar31 * -2 + 1);
                      local_314.max.y._2_2_ = (ushort)*(uint *)((int)pfVar15 + 6);
                      local_314.max.z._0_2_ =
                           (ushort)((uint)*(uint *)((int)pfVar15 + 6) >> 0x10);
                      *(ushort *)(local_2fc + (uint)bVar31 * -8 + -2) =
                           *(ushort *)((int)pfVar15 + (uint)bVar31 * -8 + 10);
                      local_2fc._0_4_ = (char *)pfVar15[3];
                      *(ushort *)(local_2fc + (uint)bVar31 * -8 + 4) =
                           *(ushort *)(pfVar15 + (uint)bVar31 * -2 + 4);
                      pfVar29 = pfVar15 + (uint)bVar31 * -2 + 1;
                      pfVar23 = pfVar13 + (uint)bVar31 * -2 + 1;
                      *pfVar15 = *pfVar13;
                      pfVar30 = pfVar29 + (uint)bVar31 * -2 + 1;
                      pfVar15 = pfVar23 + (uint)bVar31 * -2 + 1;
                      *pfVar29 = *pfVar23;
                      *pfVar30 = *pfVar15;
                      pfVar30[(uint)bVar31 * -2 + 1] = pfVar15[(uint)bVar31 * -2 + 1];
                      *(ushort *)(pfVar30 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1) =
                           *(ushort *)(pfVar15 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1);
                      pfVar23 = pfVar13 + (uint)bVar31 * -2 + 1;
                      *pfVar13 = local_314.max.x;
                      pfVar13 = pfVar23 + (uint)bVar31 * -2 + 1;
                      pfVar15 = (float *)(local_2fc + (uint)bVar31 * -8 + (uint)bVar31 * -8 + -4);
                      *pfVar23 = *(float *)(local_2fc + (uint)bVar31 * -8 + -8);
                      *pfVar13 = *pfVar15;
                      pfVar13[(uint)bVar31 * -2 + 1] = pfVar15[(uint)bVar31 * -2 + 1];
                      *(ushort *)(pfVar13 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1) =
                           *(ushort *)(pfVar15 + (uint)bVar31 * -2 + 1 + (uint)bVar31 * -2 + 1);
                      puVar7 = (uint *)((int)&local_104->_ptr + local_2c);
                      pcVar17 = pFVar9->_ptr;
                      pFVar9->_ptr = (char *)*puVar7;
                      *puVar7 = pcVar17;
                    }
                    iVar16 = iVar16 + 1;
                    pFVar9 = (FILE *)&pFVar9->_cnt;
                    local_6c = local_6c + 0x12;
                    local_68 = local_68 + 0x12;
                  } while (iVar16 < local_4c);
                }
                local_4c = local_4c + -1;
                pFVar9 = local_104;
              }
              iVar16 = 1;
            }
          } while (local_168 != (FILE *)in_stack_0000000c[0x15]);
        }
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xf0c;
        crt_memory_c_free_FUN_005fe659(local_104);
        uStack_100 = 0;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Finding capped faces in %s");
        pvVar18 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)(local_164 + in_stack_0000000c[0x15]) * 0x12,
                             "..\\core\\skeledit.cpp",0xf1a);
        local_158 = pvVar18;
        local_150 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((in_stack_0000000c[0x15] + local_160) * 4,
                               "..\\core\\skeledit.cpp",0xf1b);
        if ((pvVar18 == (void *)0x0) || (local_150 == (int *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xf1c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        puVar7 = local_154;
        iVar16 = in_stack_0000000c[0x15];
        puVar22 = (uint *)in_stack_0000000c[0x1f];
        puVar27 = local_154;
        for (uVar35 = (uint)(iVar16 * 0x12) >> 2; uVar35 != 0; uVar35 = uVar35 - 1) {
          *puVar27 = *puVar22;
          puVar22 = puVar22 + (uint)bVar31 * -2 + 1;
          puVar27 = puVar27 + (uint)bVar31 * -2 + 1;
        }
        for (uVar35 = iVar16 * 0x12 & 3; uVar35 != 0; uVar35 = uVar35 - 1) {
          *(byte *)puVar27 = *(byte *)puVar22;
          puVar22 = (uint *)((int)puVar22 + (uint)bVar31 * -2 + 1);
          puVar27 = (uint *)((int)puVar27 + (uint)bVar31 * -2 + 1);
        }
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xf1f;
        crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x1f]);
        in_stack_0000000c[0x1f] = (int)puVar7;
        puVar7 = (uint *)in_stack_0000000c[0x24];
        puVar22 = local_14c;
        for (uVar35 = in_stack_0000000c[0x15] & 0x3fffffff; uVar35 != 0; uVar35 = uVar35 - 1) {
          *puVar22 = *puVar7;
          puVar7 = puVar7 + (uint)bVar31 * -2 + 1;
          puVar22 = puVar22 + (uint)bVar31 * -2 + 1;
        }
        for (iVar16 = 0; iVar16 != 0; iVar16 = iVar16 + -1) {
          *(byte *)puVar22 = *(byte *)puVar7;
          puVar7 = (uint *)((int)puVar7 + (uint)bVar31 * -2 + 1);
          puVar22 = (uint *)((int)puVar22 + (uint)bVar31 * -2 + 1);
        }
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xf24;
        crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x24]);
        g_CurrentDebugLine = 0xf28;
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        in_stack_0000000c[0x24] = local_148;
        crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x29]);
        in_stack_0000000c[0x29] = 0;
        if (0 < (int)local_150) {
          pvVar18 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((int)local_150 * 4,"..\\core\\skeledit.cpp",0xf2b);
          in_stack_0000000c[0x29] = (int)pvVar18;
          if (pvVar18 == (void *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf2c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
          }
        }
        local_30 = (streambuf *)0x0;
        in_stack_0000000c[0x1a] = 0;
        if (0 < in_stack_0000000c[0x1c50]) {
          local_9c = in_stack_0000000c + 0x30;
          local_3c = in_stack_0000000c;
          local_98 = local_9c;
          do {
            if ((0 < local_3c[0x1c5e]) && (local_ac = 0, 0 < local_160)) {
              local_40 = local_178;
              do {
                local_a8 = local_40;
                if (((local_40->_cnt == 3) && (local_30 == local_40->_link)) &&
                   ((int)local_40->_flag < 0)) {
                  local_a4 = (float *)(in_stack_0000000c[0x1f] +
                                      (in_stack_0000000c[0x15] + in_stack_0000000c[0x1a]) * 0x12);
                  if ((int)local_154 < 0) {
                    uVar35 = local_40->_bufsize;
                    if ((int)uVar35 < 0) goto LAB_00591835;
                    iVar16 = 0;
                    if (0 < in_stack_0000000c[0x2f]) {
                      piVar28 = local_9c + 2;
                      do {
                        crt_string_c_splitpath_FUN_005ff178
                                  ((char *)piVar28,(char *)0x0,(char *)0x0,acStack_734,(char *)0x0);
                        iVar6 = crt_string_c_stricmp_FUN_005fe7f0
                                          (&stack0xffff5e20 + uVar35 * 0x100,acStack_730);
                        if (iVar6 == 0) break;
                        iVar16 = iVar16 + 1;
                        piVar28 = piVar28 + 0x12;
                      } while (iVar16 < in_stack_0000000c[0x2f]);
                    }
                    if (in_stack_0000000c[0x2f] <= iVar16) {
                      if (0x4f < in_stack_0000000c[0x2f]) {
                        g_CurrentFilename = "..\\core\\skeledit.cpp";
                        g_CurrentLineNumber = 0xf5d;
                        core_main_c_displayErrorAndQuit_FUN_00506f10
                                  ("Too many model textures!");
                      }
                      crt_stdio_c_sprintf_FUN_005fdbd0
                                ((char *)(local_98 + in_stack_0000000c[0x2f] * 0x12 + 2),
                                 "%s.raw",&stack0xffff5e20 + uVar35 * 0x100);
                      in_stack_0000000c[0x2f] = in_stack_0000000c[0x2f] + 1;
                    }
                    *(int *)(in_stack_0000000c[0x24] +
                            (in_stack_0000000c[0x15] + in_stack_0000000c[0x1a]) * 4) = iVar16;
                  }
                  else {
                    *(uint **)
                     ((in_stack_0000000c[0x15] + in_stack_0000000c[0x1a]) * 4 +
                     in_stack_0000000c[0x24]) = local_154;
                  }
                  iStack_14 = 0;
                  pfVar15 = local_a4;
                  pFVar8 = local_a8;
                  do {
                    pfVar13 = (float *)(local_194._24_4_ + *(int *)&pFVar8->_ungotten * 3 * 4);
                    local_1b8 = *pfVar13;
                    local_1b4 = pfVar13[1];
                    local_1b0 = (uint *)pfVar13[2];
                    fVar36 = 1e+20;
                    iVar16 = 0;
                    if (0 < in_stack_0000000c[0xb]) {
                      iVar6 = 0;
                      do {
                        iVar10 = in_stack_0000000c[0x10];
                        local_20c = *(float *)(iVar6 + 0x10 + iVar10) - local_1b8;
                        local_208 = *(float *)(iVar6 + 0x14 + iVar10) - local_1b4;
                        local_204 = *(float *)(iVar6 + 0x18 + iVar10) - (float)local_1b0;
                        local_94 = local_204 * local_204 +
                                   local_20c * local_20c + local_208 * local_208;
                        if (local_94 < fVar36) {
                          *(short *)pfVar15 = (short)iVar16;
                          fVar36 = local_94;
                        }
                        iVar16 = iVar16 + 1;
                        iVar6 = iVar6 + 0x34;
                      } while (iVar16 < in_stack_0000000c[0xb]);
                    }
                    if ((float)_DAT_0064bfe2 < fVar36) {
                      crt_stdio_c_sprintf_FUN_005fdbd0
                                (&DAT_03670650,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                      goto LAB_0058f8e7;
                    }
                    iVar16 = (int)pFVar8[1]._ptr >> 8;
                    iVar6 = pFVar8[1]._cnt >> 8;
                    if (iVar16 < 0) {
                      iVar16 = 0;
                    }
                    else if (0xffff < iVar16) {
                      iVar16 = 0xffff;
                    }
                    if (iVar6 < 0) {
                      iVar6 = 0;
                    }
                    else if (0xffff < iVar6) {
                      iVar6 = 0xffff;
                    }
                    pFVar8 = (FILE *)&pFVar8->_flag;
                    *(short *)(pfVar15 + 3) = (short)iVar6;
                    iStack_14 = iStack_14 + 1;
                    *(short *)((int)pfVar15 + 6) = (short)iVar16;
                    pfVar15 = (float *)((int)pfVar15 + 2);
                  } while (iStack_14 < 3);
                  local_a0 = (streambuf *)0xffffffff;
                  local_18 = 0;
                  fStack_10 = 1e+20;
                  if (0 < local_160) {
                    local_44 = local_178;
                    do {
                      if (((local_44->_cnt == 3) && (local_30 != local_44->_link)) &&
                         ((int)local_44->_flag < 0)) {
                        local_90 = 0;
                        do {
                          iVar16 = local_90 + 6;
                          local_8c = 0.0;
                          pFVar8 = local_a8;
                          do {
                            pfVar15 = (float *)(local_194._24_4_ +
                                               *(int *)&pFVar8->_ungotten * 3 * 4);
                            local_23c = *pfVar15;
                            local_238 = pfVar15[1];
                            iStack_c = 3;
                            local_234 = pfVar15[2];
                            pfVar15 = (float *)(local_194._24_4_ +
                                               *(int *)(&local_44->_ungotten + (iVar16 % 3) * 6) * 3
                                               * 4);
                            local_1a0 = (void *)*pfVar15;
                            local_19c = pfVar15[1];
                            local_2b4 = local_23c - (float)local_1a0;
                            local_2b0 = local_238 - local_19c;
                            local_198 = (void *)pfVar15[2];
                            local_2ac = local_234 - (float)local_198;
                            pFVar8 = (FILE *)&pFVar8->_flag;
                            iVar16 = iVar16 + -1;
                            local_8c = local_2ac * local_2ac +
                                       local_2b4 * local_2b4 + local_2b0 * local_2b0 + local_8c;
                          } while (pFVar8 != (FILE *)&local_a8[1]._link);
                          if (local_8c < fStack_10) {
                            local_a0 = local_44->_link;
                            fStack_10 = local_8c;
                          }
                          local_90 = local_90 + 1;
                        } while (local_90 < 3);
                      }
                      local_18 = local_18 + 1;
                      local_44 = (FILE *)&local_44[2]._cnt;
                    } while (local_18 < local_160);
                  }
                  if ((int)local_a0 < 0) {
                    crt_stdio_c_sprintf_FUN_005fdbd0
                              (&DAT_03670650,"Can't find opposing part for capped face!");
                    goto LAB_0058f8e7;
                  }
                  *(streambuf **)(in_stack_0000000c[0x1a] * 4 + in_stack_0000000c[0x29]) = local_a0;
                  in_stack_0000000c[0x1a] = in_stack_0000000c[0x1a] + 1;
                }
LAB_00591835:
                local_ac = local_ac + 1;
                local_40 = (FILE *)&local_40[2]._cnt;
              } while (local_ac < local_160);
            }
            local_30 = (streambuf *)((int)&local_30->__b_lock + 1);
            local_3c = local_3c + 0x18;
          } while ((int)local_30 < in_stack_0000000c[0x1c50]);
        }
        if (local_14c != (uint *)in_stack_0000000c[0x1a]) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xfbe;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Determining adjacent parts from %s");
        iVar16 = 0;
        piVar28 = in_stack_0000000c;
        if (0 < in_stack_0000000c[0x1c50]) {
          do {
            piVar28[0x1c63] = 0;
            iVar16 = iVar16 + 1;
            piVar28 = piVar28 + 0x18;
          } while (iVar16 < in_stack_0000000c[0x1c50]);
        }
        g_CurrentDebugLine = 0xff5;
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        if (local_178 != (FILE *)0x0) {
          crt_memory_c_free_FUN_005fe659(&local_178[-1]._ungotten);
        }
        g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
        g_CurrentDebugLine = 0xff6;
        crt_memory_c_free_FUN_005fe659(local_170);
        pFVar8 = local_168;
        if (local_168 != (FILE *)0x0) {
          crt_stdio_c_fprintf_FUN_005fe6d0(local_168,"Determined parts using %s OK!\n");
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar8,"..\\core\\skeledit.cpp",0xffc);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Determined parts using %s OK!");
        return 1;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Deformable model has more faces than segmented model!");
      goto LAB_0058f8e7;
    }
  }
LAB_0058f8da:
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,pcVar34);
LAB_0058f8e7:
  if (local_e0 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_e0,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_170 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_170,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_178 != (FILE *)0x0) {
    crt_memory_c_free_FUN_005fe659(&local_178[-1]._ungotten);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  crt_memory_c_free_FUN_005fe659(local_174);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_168 != (FILE *)0x0) {
    crt_memory_c_free_FUN_005fe659(&local_168[-1]._ungotten);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_160 != 0) {
    crt_memory_c_free_FUN_005fe659((void *)(local_160 + -4));
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe8;
  crt_memory_c_free_FUN_005fe659(local_15c);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe9;
  crt_memory_c_free_FUN_005fe659(local_154);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbea;
  crt_memory_c_free_FUN_005fe659(local_d0);
  return 0;
}
