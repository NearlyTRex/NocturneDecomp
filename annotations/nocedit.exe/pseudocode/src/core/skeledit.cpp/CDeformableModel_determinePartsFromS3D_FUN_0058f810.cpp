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
  float fVar6;
  CEditorTools *this_ptr_00;
  int iVar7;
  int iVar8;
  int *piVar9;
  FILE **ppFVar10;
  uint *puVar11;
  void *pvVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  int *piVar16;
  short *psVar17;
  int iVar18;
  float *pfVar19;
  char **ppcVar20;
  int iVar21;
  char *pcVar22;
  FILE *pFVar23;
  ushort *puVar24;
  streambuf *psVar25;
  BADSPACEBASE *in_ESP;
  float *pfVar26;
  int iVar27;
  uint *puVar28;
  ushort *puVar29;
  char *pcVar30;
  float *pfVar31;
  float *pfVar32;
  uint *puVar33;
  byte bVar34;
  double dVar35;
  int *in_stack_0000000c;
  char *in_stack_00000010;
  int iStack00000014;
  int iStack00000024;
  int iStack00000028;
  int iStack0000002c;
  int *piStack00000030;
  int iStack00000034;
  int iStack00000038;
  int *piStack0000003c;
  int iStack00000040;
  int iStack00000044;
  float fStack00000050;
  void *pvStack00000064;
  int *piStack00000070;
  int *piStack00000074;
  int *piStack00000078;
  int iStack00000084;
  int iStack0000009c;
  int iStack000000a0;
  float fStack000000a4;
  int in_stack_00006d68;
  char *in_stack_ffff5e94;
  ulonglong uVar36;
  double dVar37;
  double in_stack_ffff5ea8;
  float fVar38;
  ushort auStack_222c [1018];
  float afStack_1a38 [948];
  byte auStack_b68 [972];
  char acStack_79c [4];
  byte auStack_798 [280];
  char acStack_680 [4];
  char acStack_67c [100];
  char acStack_618 [4];
  char acStack_614 [360];
  char acStack_4ac [4];
  char acStack_4a8 [208];
  int aiStack_3d8 [30];
  char acStack_360 [4];
  char acStack_35c [4];
  uint auStack_358 [31];
  char acStack_2dc [16];
  CBoundingBox3D local_2cc;
  byte local_2b4 [16];
  float local_2a4;
  streambuf *local_2a0;
  float local_264;
  float local_260;
  float local_25c;
  byte local_258 [4];
  uint local_254;
  float local_250;
  float local_24c;
  char *local_248;
  uint local_244;
  ushort local_240;
  ushort uStack_23e;
  float local_23c;
  ushort local_238 [6];
  float local_22c;
  float local_228;
  char *local_224;
  float local_214;
  char *local_210;
  FILE *local_20c;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1d8;
  FILE local_1d4;
  char *local_1a0;
  float local_19c;
  streambuf *local_198;
  float local_190;
  float local_18c;
  char *local_188;
  float local_184;
  streambuf *local_180;
  float local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  FILE *local_168;
  FILE *local_164;
  float local_160;
  char *local_15c;
  FILE *local_158;
  FILE *local_154;
  float local_150;
  float local_14c;
  FILE *local_148;
  int local_144;
  void *local_140;
  int local_13c;
  FILE *local_138;
  FILE *local_134;
  FILE *local_130;
  FILE *local_12c;
  FILE *local_128;
  int local_120;
  int *local_11c;
  int local_118;
  FILE **local_114;
  FILE *local_110;
  int local_10c;
  FILE *local_108;
  char *local_104;
  float *pfStack_100;
  streambuf *local_fc;
  int local_f8;
  int local_f4;
  void *local_f0;
  char *local_ec;
  FILE *local_e8;
  streambuf *local_e4;
  FILE *local_e0;
  uint *local_dc;
  FILE *local_d8;
  int local_d4;
  uint local_d0;
  FILE *local_cc;
  FILE *local_c8;
  int *local_c4;
  FILE *local_c0;
  void *local_bc;
  int local_b8;
  FILE *local_b4;
  FILE *local_b0;
  void *local_ac;
  float local_a8;
  uint *local_a4;
  FILE *local_a0;
  FILE *local_9c;
  FILE *local_98;
  float local_94;
  int local_90;
  void **local_8c;
  float local_88;
  float *local_80;
  float *local_7c;
  void *local_60;
  FILE *local_5c;
  int *local_58;
  uint local_54;
  FILE *local_50;
  int local_4c;
  FILE *local_48;
  FILE *local_40;
  streambuf **local_3c;
  void *local_38;
  FILE *local_34;
  FILE *local_30;
  int local_2c;
  short *local_28;
  int *local_24;
  int local_18;
  
  bVar34 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa228);
  if (*in_stack_0000000c != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  local_168 = (FILE *)0x0;
  local_164 = (FILE *)0x0;
  local_160 = 0.0;
  local_e0 = (FILE *)0x0;
  local_d8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (in_stack_00000010 + 0x200,(char *)0x0,"rt",
                        "..\\core\\skeledit.cpp",0xbde);
  if (local_d8 != (FILE *)0x0) {
    local_168 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("parts.log",(char *)0x0,"wt",
                           "..\\core\\skeledit.cpp",0xbee);
    if (local_168 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0xbef;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create log file!");
    }
    crt_stdio_c_fprintf_FUN_005fe6d0
              (local_164,"Matching skeleton parts for %s\n",in_stack_00000010 + 0x200);
    iVar21 = 1;
    do {
      iVar7 = crt_stdio_c_fgetc_FUN_005fe840(local_cc);
      pFVar23 = local_c8;
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar21 = iVar21 + -1, 0 < iVar21));
    crt_stdio_c_fscanf_FUN_005fe7c0(local_c8,"%d\n",&local_c4);
    if (((int)local_c0 < 0x65) || (0x67 < (int)local_c0)) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_03670650,"%s has incorrect S3D version %d",in_stack_00000010 + 0x200,
                 local_c0);
      goto LAB_0058f8e7;
    }
    iVar21 = 1;
    do {
      iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar23);
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar21 = iVar21 + -1, 0 < iVar21));
    iVar21 = crt_stdio_c_fscanf_FUN_005fe7c0
                       (local_5c,"%d,%d,%d,%d,%d,%d,%d\n",&local_54,&local_dc,&local_d8,&local_50,
                        &local_d4,&local_4c,&local_a8);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar21 == 7) {
      if (local_4c < 0x1f) {
        in_stack_0000000c[0x1c50] = local_4c;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_e8,"Reading part list from %s\n");
        pFVar23 = local_50;
        iVar21 = 1;
        do {
          iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar23);
          if (iVar7 < 0) break;
        } while ((iVar7 != 10) || (iVar21 = iVar21 + -1, 0 < iVar21));
        iVar21 = 0;
        if (0 < in_stack_0000000c[0x1c50]) {
          in_stack_00000010 = acStack_360;
          piVar16 = in_stack_0000000c + 0x1c59;
          do {
            local_a4 = (uint *)((int)local_ac + iVar21 * 0x60);
            local_a8 = (float)(iVar21 * 4);
            iVar7 = crt_stdio_c_fscanf_FUN_005fe7c0(local_50,(char *)0x58fc57);
            if (iVar7 != 4) goto LAB_00590a70;
            aiStack_3d8[iVar21 * 0x18 + 0x1c63] = 0;
            in_stack_ffff5ea8 =
                 (double)CONCAT44 /* combine 2-byte values */(piVar16,*(uint *)((int)auStack_358 + (int)local_9c));
            piVar16 = piVar16 + 0x18;
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_d8,"\t%2d: %s, verts=%d, tris=%d\n",iVar21,local_98,
                       *(uint *)((int)auStack_358 + (int)local_9c));
            iVar21 = iVar21 + 1;
            in_stack_0000000c = aiStack_3d8;
          } while (iVar21 < in_stack_00006d68);
        }
        piVar16 = in_stack_0000000c;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        dVar37 = 3.26110796305131e-317;
        crt_stdio_c_fprintf_FUN_005fe6d0(local_e0,"Reading texture list from %s\n");
        iVar21 = 1;
        do {
          in_stack_ffff5ea8 = (double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)in_stack_ffff5ea8 >> 0x20),local_48)
          ;
          dVar37 = (double)CONCAT44 /* combine 2-byte values */(0x58fd1c,SUB84 /* extract 2-byte value */(dVar37,0));
          iVar7 = crt_stdio_c_fgetc_FUN_005fe840(local_48);
          if (iVar7 < 0) break;
        } while ((iVar7 != 10) || (iVar21 = iVar21 + -1, 0 < iVar21));
        if (0x96 < (int)local_3c) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          in_stack_ffff5ea8 = 9.21949114291619e-307;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar21 = 0;
        if (0 < (int)local_38) {
          pcVar22 = &stack0xffff5ec0;
          do {
            iVar7 = crt_stdio_c_fscanf_FUN_005fe7c0
                              (local_40,"%[^\n]\n",local_40,"%[^\n]\n",auStack_798);
            if (iVar7 != 1) goto LAB_00590a70;
            in_stack_ffff5ea8 = (double)ZEXT48(pcVar22);
            dVar37 = 0.0;
            crt_string_c_splitpath_FUN_005ff178
                      (acStack_79c,(char *)0x0,(char *)0x0,pcVar22,(char *)0x0);
            iVar21 = iVar21 + 1;
            pcVar22 = pcVar22 + 0x100;
          } while (iVar21 < (int)local_38);
        }
        pcVar22 = "gore";
        pcVar30 = acStack_2dc;
        for (iVar21 = 0x19; iVar21 != 0; iVar21 = iVar21 + -1) {
          *(uint *)pcVar30 = *(uint *)pcVar22;
          pcVar22 = pcVar22 + ((uint)bVar34 * -2 + 1) * 4;
          pcVar30 = pcVar30 + ((uint)bVar34 * -2 + 1) * 4;
        }
        if (*(int *)(in_stack_00000010 + 0x308) == 0) {
          in_stack_ffff5ea8 = (double)CONCAT44 /* combine 2-byte values */(100,acStack_2dc);
          dVar37 = (double)CONCAT44 /* combine 2-byte values */("Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",g_CEditorToolsPtr);
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",acStack_2dc,100,1);
        }
        local_138 = (FILE *)0xffffffff;
        if (acStack_360[0] != '\0') {
          pFVar23 = (FILE *)0x0;
          if (0 < in_stack_0000000c[0x2f]) {
            piVar9 = in_stack_0000000c + 0x32;
            do {
              crt_string_c_splitpath_FUN_005ff178
                        ((char *)piVar9,(char *)0x0,(char *)0x0,acStack_618,(char *)0x0);
              iVar21 = crt_string_c_stricmp_FUN_005fe7f0(acStack_35c,acStack_614);
              if (iVar21 == 0) break;
              pFVar23 = (FILE *)((int)&pFVar23->_ptr + 1);
              piVar9 = piVar9 + 0x12;
            } while ((int)pFVar23 < in_stack_0000000c[0x2f]);
          }
          if (in_stack_0000000c[0x2f] <= (int)pFVar23) {
            if (0x4f < in_stack_0000000c[0x2f]) {
              crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Texture list full determining parts");
              goto LAB_0058f8e7;
            }
            crt_stdio_c_sprintf_FUN_005fdbd0
                      ((char *)(in_stack_0000000c + in_stack_0000000c[0x2f] * 0x12 + 0x32),
                       "%s.raw",acStack_360);
            in_stack_0000000c[0x2f] = in_stack_0000000c[0x2f] + 1;
          }
          local_138 = pFVar23;
          crt_stdio_c_fprintf_FUN_005fe6d0(local_158,"Automap capped faces is active\n");
        }
        local_154 = (FILE *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                      ((int)local_140 * 0x3c,"..\\core\\skeledit.cpp",0xc4e);
        if (local_154 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc4f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading faces from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_148,"Reading faces from %s\n",in_stack_00000010 + 0x200);
        pFVar23 = local_b0;
        iVar21 = 1;
        do {
          iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar23);
          if (iVar7 < 0) break;
        } while ((iVar7 != 10) || (iVar21 = iVar21 + -1, 0 < iVar21));
        iVar7 = 0;
        iVar21 = local_144;
        if (0 < (int)local_12c) {
          do {
            iVar8 = crt_stdio_c_fscanf_FUN_005fe7c0(local_b0,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n");
            if (iVar8 != 10) goto LAB_00590a70;
            *(uint *)(iVar21 + 4) = 3;
            iVar18 = 0;
            *(float *)(iVar21 + 0x14) = local_94;
            dVar37 = _DAT_0064bfd2;
            iVar8 = iVar21;
            do {
              *(uint *)(iVar8 + 0x18) = *(uint *)((int)&local_1d4._cnt + iVar18);
              dVar35 = crt_math_c_round_FUN_005fe6b0
                                 ((double)*(float *)((int)&local_ec + iVar18) * dVar37);
              *(int *)(iVar8 + 0x1c) = (int)ROUND(dVar35);
              dVar35 = crt_math_c_round_FUN_005fe6b0
                                 ((double)*(float *)((int)&local_15c + iVar18) * dVar37);
              iVar18 = iVar18 + 4;
              *(int *)(iVar8 + 0x20) = (int)ROUND(dVar35);
              iVar8 = iVar8 + 0xc;
            } while (iVar18 != 0xc);
            in_stack_ffff5ea8 =
                 (double)CONCAT44 /* combine 2-byte values */(*(uint *)(iVar21 + 0x30),*(uint *)(iVar21 + 0x24));
            dVar37 = (double)CONCAT44 /* combine 2-byte values */(*(uint *)(iVar21 + 0x18),iVar7);
            crt_stdio_c_fprintf_FUN_005fe6d0(local_d8,"\t%4d: %4d %4d %4d\n");
            iVar7 = iVar7 + 1;
            iVar21 = iVar21 + 0x3c;
          } while (iVar7 < (int)local_c0);
        }
        pFVar23 = (FILE *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                    ((int)local_12c * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_148 = pFVar23;
        if (pFVar23 != (FILE *)0x0) {
          local_148 = (FILE *)&pFVar23->_cnt;
          pFVar23->_ptr = (char *)local_128;
        }
        if (local_148 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc7d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading vertices from %s");
        crt_stdio_c_fprintf_FUN_005fe6d0(local_138,"Reading vertices from %s\n");
        pFVar23 = local_a0;
        iVar21 = 1;
        do {
          iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar23);
          if (iVar7 < 0) break;
        } while ((iVar7 != 10) || (iVar21 = iVar21 + -1, 0 < iVar21));
        iVar21 = 0;
        if (0 < local_118) {
          local_3c = &local_138->_link;
          do {
            pfVar26 = (float *)(iVar21 * 0xc + local_13c);
            iVar7 = crt_stdio_c_fscanf_FUN_005fe7c0(local_a0,"%f,%f,%f\n");
            if (iVar7 != 3) goto LAB_00590a70;
            in_stack_ffff5ea8 = (double)pfVar26[2];
            dVar37 = (double)pfVar26[1];
            crt_stdio_c_fprintf_FUN_005fe6d0
                      (local_d8,"\t%4d: %7.3f %7.3f %7.3f\n",iVar21,(double)*pfVar26);
            iVar21 = iVar21 + 1;
          } while (iVar21 < (int)local_bc);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_a0,"..\\core\\skeledit.cpp",0xc8c);
        local_9c = (FILE *)0x0;
        crt_stdio_c_fprintf_FUN_005fe6d0(local_130,"Removing duplicate faces\n");
        iStack0000002c = 0;
        if (0 < local_118) {
          local_30 = local_130;
          do {
            local_dc = (uint *)0x0;
            local_d8 = (FILE *)0x0;
            local_e0 = local_30;
            if (0 < iStack0000002c) {
              local_34 = local_130;
              do {
                if ((local_34->_cnt == 3) && (local_34->_bufsize == local_30->_bufsize)) {
                  local_d4 = 0;
                  do {
                    iVar7 = 0;
                    iVar21 = local_d4;
                    pFVar23 = local_30;
                    do {
                      ppcVar20 = &local_134->_ptr + *(int *)&pFVar23->_ungotten * 3;
                      local_248 = *ppcVar20;
                      fVar38 = (float)ppcVar20[1];
                      local_244._0_2_ = SUB42 /* extract 2-byte value */(fVar38,0);
                      local_244._2_2_ = (ushort)((uint)fVar38 >> 0x10);
                      psVar25 = (streambuf *)ppcVar20[2];
                      local_240 = SUB42 /* extract 2-byte value */(psVar25,0);
                      uStack_23e = (ushort)((uint)psVar25 >> 0x10);
                      ppcVar20 = &local_134->_ptr +
                                 *(int *)(&local_34->_ungotten + (iVar21 % 3) * 6) * 3;
                      local_1a0 = *ppcVar20;
                      local_19c = (float)ppcVar20[1];
                      local_1d4._cnt = (int)((float)local_248 - (float)local_1a0);
                      local_198 = (streambuf *)ppcVar20[2];
                      local_1d4._link = (streambuf *)(fVar38 - local_19c);
                      local_1d4._flag = (uint)((float)psVar25 - (float)local_198);
                      if ((((float)_DAT_0064bfda < ABS((float)local_1d4._cnt)) ||
                          ((float)_DAT_0064bfda < ABS((float)local_1d4._link))) ||
                         ((float)_DAT_0064bfda < ABS((float)local_1d4._flag))) break;
                      pFVar23 = (FILE *)&pFVar23->_flag;
                      iVar7 = iVar7 + 1;
                      iVar21 = iVar21 + 1;
                    } while (iVar7 < 3);
                    if (iVar7 == 3) {
                      crt_stdio_c_fprintf_FUN_005fe6d0
                                (local_12c,"Removing face %d, it is dup with face %d\n",
                                 "Removing face %d, it is dup with face %d\n",iStack0000002c,local_d8);
                      local_e0->_cnt = 0;
                      goto LAB_005902c8;
                    }
                    local_d4 = local_d4 + 1;
                  } while (local_d4 < 3);
                }
                local_d8 = (FILE *)((int)&local_d8->_ptr + 1);
                local_34 = (FILE *)&local_34[2]._cnt;
              } while ((int)local_d8 < iStack0000002c);
            }
LAB_005902c8:
            iStack0000002c = iStack0000002c + 1;
            local_30 = (FILE *)&local_30[2]._cnt;
          } while (iStack0000002c < local_118);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing %s");
        if ((FILE *)local_2b4 != local_130) {
          local_2b4._0_4_ = local_130->_ptr;
          local_2b4._4_4_ = local_130->_cnt;
          local_2b4._8_4_ = local_130->_link;
        }
        if ((FILE *)(local_2b4 + 0xc) != local_130) {
          local_2b4._12_4_ = local_130->_ptr;
          local_2a4 = (float)local_130->_cnt;
          local_2a0 = local_130->_link;
        }
        iVar21 = 1;
        pFVar23 = local_130;
        if (1 < (int)local_110) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      ((CBoundingBox3D *)local_2b4,(CVector3f *)&pFVar23->_flag);
            iVar21 = iVar21 + 1;
            pFVar23 = (FILE *)&pFVar23->_flag;
          } while (iVar21 < (int)local_110);
        }
        iVar21 = in_stack_0000000c[0x10];
        pCVar1 = (CBoundingBox3D *)(iVar21 + 0x10);
        if (&local_2cc != pCVar1) {
          local_2cc.min.x = (pCVar1->min).x;
          local_2cc.min.y = *(float *)(iVar21 + 0x14);
          local_2cc.min.z = *(float *)(iVar21 + 0x18);
        }
        if ((CBoundingBox3D *)&local_2cc.max != pCVar1) {
          local_2cc.max.x = (pCVar1->min).x;
          local_2cc.max.y = *(float *)(iVar21 + 0x14);
          local_2cc.max.z = *(float *)(iVar21 + 0x18);
        }
        iVar21 = 1;
        if (1 < in_stack_0000000c[0xb]) {
          iVar7 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_2cc,(CVector3f *)(in_stack_0000000c[0x10] + iVar7 + 0x10));
            iVar21 = iVar21 + 1;
            iVar7 = iVar7 + 0x34;
          } while (iVar21 < in_stack_0000000c[0xb]);
        }
        local_214 = local_2cc.max.x - local_2cc.min.x;
        local_250 = (float)local_2b4._12_4_ - (float)local_2b4._0_4_;
        local_184 = local_214 / local_250;
        local_210 = (char *)(local_2cc.max.y - local_2cc.min.y);
        local_24c = local_2a4 - (float)local_2b4._4_4_;
        local_180 = (streambuf *)((float)local_210 / local_24c);
        local_20c = (FILE *)(local_2cc.max.z - local_2cc.min.z);
        local_248 = (char *)((float)local_2a0 - (float)local_2b4._8_4_);
        local_17c = (float)local_20c / (float)local_248;
        iVar21 = 0;
        pFVar23 = local_130;
        if (0 < (int)local_110) {
          do {
            pFVar23->_ptr =
                 (char *)(((float)pFVar23->_ptr - (float)local_2b4._0_4_) * local_184 +
                         local_2cc.min.x);
            pFVar23->_cnt =
                 (int)(((float)pFVar23->_cnt - (float)local_2b4._4_4_) * (float)local_180 +
                      local_2cc.min.y);
            iVar21 = iVar21 + 1;
            pFVar23->_link =
                 (streambuf *)
                 (((float)pFVar23->_link - (float)local_2b4._8_4_) * local_17c + local_2cc.min.z);
            pFVar23 = (FILE *)&pFVar23->_flag;
          } while (iVar21 < (int)local_110);
        }
        local_22c = local_250;
        local_228 = local_24c;
        local_224 = local_248;
        local_1d8 = local_214;
        local_1d4._ptr = local_210;
        local_1d4._cnt = (int)local_20c;
        local_190 = local_250;
        local_18c = local_24c;
        local_188 = local_248;
        local_160 = local_214;
        local_15c = local_210;
        local_158 = local_20c;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_128,"Scale = %7.3f %7.3f %7.3f\n",(double)local_184,
                   (double)(float)local_180,(double)local_17c);
        piVar9 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                  ((int)local_110 * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_11c = piVar9;
        if (piVar9 != (int *)0x0) {
          local_11c = piVar9 + 1;
          *piVar9 = local_10c;
        }
        pFVar23 = (FILE *)in_stack_0000000c[0x15];
        ppFVar10 = (FILE **)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                      ((int)pFVar23 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
        local_114 = ppFVar10;
        if (ppFVar10 != (FILE **)0x0) {
          local_114 = ppFVar10 + 1;
          *ppFVar10 = pFVar23;
        }
        if ((local_118 == 0) || (local_114 == (FILE **)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar21 = 0;
        piVar9 = local_11c;
        ppFVar10 = local_114;
        if (0 < (int)local_104) {
          do {
            if (piVar9[1] == 3) {
              pfVar14 = (float *)(piVar9[6] * 0xc + local_120);
              pfVar26 = (float *)(piVar9[9] * 0xc + local_120);
              local_24c = *pfVar26 - *pfVar14;
              local_248 = (char *)(pfVar26[1] - pfVar14[1]);
              local_244 = pfVar26[2] - pfVar14[2];
              pfVar14 = (float *)(piVar9[0xc] * 0xc + local_120);
              local_1ec = *pfVar14 - *pfVar26;
              local_1e8 = pfVar14[1] - pfVar26[1];
              local_1e4 = pfVar14[2] - pfVar26[2];
              fVar5 = local_244 * local_1ec - local_24c * local_1e4;
              fVar6 = (float)local_248 * local_1e4 - local_244 * local_1e8;
              fVar38 = local_24c * local_1e8 - (float)local_248 * local_1ec;
              fVar4 = SQRT(fVar38 * fVar38 + fVar6 * fVar6 + fVar5 * fVar5);
              if (fVar4 <= 0.0) {
                local_134 = (FILE *)0x0;
                local_138 = (FILE *)0x0;
                local_130 = (FILE *)0x0;
              }
              else {
                fVar4 = 1.0 / fVar4;
                local_138 = (FILE *)(fVar6 * fVar4);
                local_134 = (FILE *)(fVar5 * fVar4);
                local_130 = (FILE *)(fVar38 * fVar4);
              }
              if (ppFVar10 != &local_138) {
                *ppFVar10 = local_138;
                ppFVar10[1] = local_134;
                ppFVar10[2] = local_130;
              }
            }
            iVar21 = iVar21 + 1;
            piVar9 = piVar9 + 0xf;
            ppFVar10 = ppFVar10 + 3;
          } while (iVar21 < (int)local_104);
        }
        iVar21 = 0;
        if (0 < in_stack_0000000c[0x15]) {
          local_18 = 0;
          pFVar23 = local_110;
          do {
            puVar24 = (ushort *)(in_stack_0000000c[0x1f] + local_18);
            iVar8 = (uint)puVar24[1] * 0x34;
            iVar27 = (uint)*puVar24 * 0x34;
            iVar7 = in_stack_0000000c[0x10];
            iVar18 = (uint)puVar24[2] * 0x34;
            local_264 = *(float *)(iVar7 + 0x10 + iVar8) - *(float *)(iVar7 + 0x10 + iVar27);
            local_260 = *(float *)(iVar7 + 0x14 + iVar8) - *(float *)(iVar7 + 0x14 + iVar27);
            local_25c = *(float *)(iVar7 + 0x18 + iVar8) - *(float *)(iVar7 + 0x18 + iVar27);
            local_1f8 = *(float *)(iVar7 + 0x10 + iVar18) - *(float *)(iVar7 + 0x10 + iVar8);
            local_1f4 = *(float *)(iVar7 + 0x14 + iVar18) - *(float *)(iVar7 + 0x14 + iVar8);
            local_1f0 = *(float *)(iVar7 + 0x18 + iVar18) - *(float *)(iVar7 + 0x18 + iVar8);
            fVar5 = local_25c * local_1f8 - local_264 * local_1f0;
            fVar6 = local_260 * local_1f0 - local_25c * local_1f4;
            fVar38 = local_264 * local_1f4 - local_260 * local_1f8;
            fVar4 = SQRT(fVar38 * fVar38 + fVar6 * fVar6 + fVar5 * fVar5);
            if (fVar4 <= 0.0) {
              local_1d4._cnt = 0;
              local_1d4._ptr = (char *)0x0;
              local_1d4._link = (streambuf *)0x0;
            }
            else {
              fVar4 = 1.0 / fVar4;
              local_1d4._ptr = (char *)(fVar6 * fVar4);
              local_1d4._cnt = (int)(fVar5 * fVar4);
              local_1d4._link = (streambuf *)(fVar38 * fVar4);
            }
            if (pFVar23 != &local_1d4) {
              pFVar23->_ptr = local_1d4._ptr;
              pFVar23->_cnt = local_1d4._cnt;
              pFVar23->_link = local_1d4._link;
            }
            pFVar23 = (FILE *)&pFVar23->_flag;
            iVar21 = iVar21 + 1;
            local_18 = local_18 + 0x12;
          } while (iVar21 < in_stack_0000000c[0x15]);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (local_110,"Matching faces in %s\n",in_stack_00000010 + 0x200);
        if (in_stack_0000000c[0x15] <= local_f8) {
          local_fc = (streambuf *)
                     shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (in_stack_0000000c[0x15] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_fc == (streambuf *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_e0 = local_108;
          psVar25 = (streambuf *)0x0;
          if (0 < in_stack_0000000c[0x1c50]) {
            iVar21 = 0;
            do {
              pFVar23 = local_e0;
              for (iVar7 = 0; iVar7 < *(int *)((int)in_stack_0000000c + iVar21 + 0x7164);
                  iVar7 = iVar7 + 1) {
                pFVar23->_flag = 0xffffffff;
                pFVar23->_link = psVar25;
                pFVar23 = (FILE *)&pFVar23[2]._cnt;
              }
              local_e0 = (FILE *)((int)local_e0 +
                                 *(int *)((int)in_stack_0000000c + iVar21 + 0x7164) * 0x3c);
              iVar21 = iVar21 + 0x60;
              psVar25 = (streambuf *)((int)&psVar25->__b_lock + 1);
            } while ((int)psVar25 < in_stack_0000000c[0x1c50]);
          }
          fStack00000050 = 0.0;
          if (0 < in_stack_0000000c[0x15]) {
            do {
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)(int)fStack00000050,(float)in_stack_0000000c[0x15]
                        );
              local_a8 = fStack00000050;
              while (-1 < (int)local_a8) {
                local_a4 = (uint *)(in_stack_0000000c[0x1f] + (int)local_a8 * 0x12);
                pfVar26 = (float *)((int)local_a8 * 4 + local_f8);
                *pfVar26 = 1e+30;
                local_a0 = (FILE *)0xffffffff;
                local_9c = (FILE *)0x0;
                if (0 < (int)local_f0) {
                  local_8c = &local_fc->__b_lock + (int)local_a8 * 3;
                  pFVar23 = local_108;
                  pfVar14 = pfStack_100;
                  do {
                    local_98 = pFVar23;
                    if (local_98->_cnt == 3) {
                      local_94 = (float)_DAT_0064bfea -
                                 ((float)local_8c[2] * pfVar14[2] +
                                 (float)*local_8c * *pfVar14 + (float)local_8c[1] * pfVar14[1]);
                      local_90 = 0;
                      do {
                        iVar7 = 0;
                        local_88 = 0.0;
                        iVar21 = local_90;
                        pFVar23 = local_98;
                        do {
                          pfVar19 = (float *)(*(int *)&pFVar23->_ungotten * 0xc + local_10c);
                          local_214 = *pfVar19;
                          local_210 = (char *)pfVar19[1];
                          local_20c = (FILE *)pfVar19[2];
                          iVar8 = in_stack_0000000c[0x10] +
                                  (uint)*(ushort *)((iVar21 % 3) * 2 + (int)local_a4) * 0x34;
                          local_154 = *(FILE **)(iVar8 + 0x10);
                          local_150 = *(float *)(iVar8 + 0x14);
                          local_190 = (float)local_154 - local_214;
                          local_14c = *(float *)(iVar8 + 0x18);
                          local_18c = local_150 - (float)local_210;
                          local_188 = (char *)(local_14c - (float)local_20c);
                          if ((((float)_DAT_0064bfe2 < ABS(local_190)) ||
                              ((float)_DAT_0064bfe2 < ABS(local_18c))) ||
                             ((float)_DAT_0064bfe2 < ABS((float)local_188))) break;
                          fVar38 = (float)local_188 * (float)local_188 +
                                   local_190 * local_190 + local_18c * local_18c;
                          iVar21 = iVar21 + 1;
                          pFVar23 = (FILE *)&pFVar23->_flag;
                          local_88 = fVar38 * fVar38 * fVar38 + local_88;
                          iVar7 = iVar7 + 1;
                        } while (iVar7 < 3);
                        if (((2 < iVar7) && (local_88 = local_88 * local_94, local_88 <= *pfVar26))
                           && (((int)local_98->_flag < 0 ||
                               (local_88 < *(float *)(local_98->_flag * 4 + local_f8))))) {
                          local_a0 = local_9c;
                          *pfVar26 = local_88;
                        }
                        local_90 = local_90 + 1;
                      } while (local_90 < 3);
                    }
                    pfVar14 = pfVar14 + 3;
                    local_9c = (FILE *)((int)&local_9c->_ptr + 1);
                    pFVar23 = (FILE *)&local_98[2]._cnt;
                    local_80 = pfVar26;
                    local_7c = pfVar26;
                  } while ((int)local_9c < (int)local_f0);
                }
                if (local_a0 == (FILE *)0xffffffff) break;
                fVar38 = *(float *)((int)local_108 + (int)local_a0 * 0x3c + 0xc);
                *(float *)((int)local_108 + (int)local_a0 * 0x3c + 0xc) = local_a8;
                local_a8 = fVar38;
              }
              fStack00000050 = (float)((int)fStack00000050 + 1);
            } while ((int)fStack00000050 < in_stack_0000000c[0x15]);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_fc != (streambuf *)0x0) {
            crt_memory_c_free_FUN_005fe659(&local_fc[-1].__flags);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_f8 = 0;
          if (local_f4 != 0) {
            crt_memory_c_free_FUN_005fe659((void *)(local_f4 + -4));
          }
          local_f4 = 0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          crt_memory_c_free_FUN_005fe659(local_f0);
          iVar21 = 0;
          local_ec = (char *)0x0;
          local_d0 = 0;
          piVar9 = in_stack_0000000c;
          if (0 < in_stack_0000000c[0x1c50]) {
            do {
              piVar9[0x1c5e] = 0;
              piVar9[0x1c59] = 0;
              iVar21 = iVar21 + 1;
              piVar9 = piVar9 + 0x18;
            } while (iVar21 < in_stack_0000000c[0x1c50]);
          }
          psVar25 = (streambuf *)
                    shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (in_stack_0000000c[0x15] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_e4 = psVar25;
          local_60 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (in_stack_0000000c[0x15] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((psVar25 == (streambuf *)0x0) || (local_60 == (void *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar21 = 0;
          pFVar23 = local_5c;
          puVar11 = local_dc;
          if (0 < in_stack_0000000c[0x15]) {
            do {
              pFVar23->_ptr = (char *)0xf423f;
              iVar21 = iVar21 + 1;
              *puVar11 = 0xffffffff;
              pFVar23 = (FILE *)&pFVar23->_cnt;
              puVar11 = puVar11 + 1;
            } while (iVar21 < in_stack_0000000c[0x15]);
          }
          iVar21 = 0;
          local_c0 = (FILE *)0x0;
          if (0 < (int)local_d8) {
            do {
              if (*(int *)((int)local_f0 + 4) == 3) {
                pcVar22 = *(char **)((int)local_f0 + 8);
                iVar7 = *(int *)((int)local_f0 + 0xc);
                if (iVar7 < 0) {
                  local_c4 = (int *)((int)local_c4 + 1);
                  in_stack_0000000c[(int)pcVar22 * 0x18 + 0x1c5e] =
                       in_stack_0000000c[(int)pcVar22 * 0x18 + 0x1c5e] + 1;
                }
                else {
                  local_60 = (void *)(iVar7 * 4);
                  if (-1 < (int)local_dc[iVar7]) {
                    in_stack_ffff5e94 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  (&local_5c->_ptr)[iVar7] = pcVar22;
                  local_dc[iVar7] = iVar21;
                  local_c0 = (FILE *)((int)&local_c0->_ptr + 1);
                  in_stack_0000000c[(int)pcVar22 * 0x18 + 0x1c59] =
                       in_stack_0000000c[(int)pcVar22 * 0x18 + 0x1c59] + 1;
                }
              }
              iVar21 = iVar21 + 1;
              local_f0 = (void *)((int)local_f0 + 0x3c);
            } while (iVar21 < (int)local_d8);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          crt_memory_c_free_FUN_005fe659(local_dc);
          iVar21 = in_stack_0000000c[0x15];
          local_d8 = (FILE *)0x0;
          while (piVar9 = local_58, iVar21 = iVar21 + -1, local_58 = piVar9, -1 < iVar21) {
            iVar7 = 0;
            if (0 < iVar21) {
              iStack00000024 = 0;
              iStack00000028 = 0x12;
              do {
                if (piVar9[1] < *piVar9) {
                  puVar28 = (uint *)(iVar7 * 4 + 4 + in_stack_0000000c[0x24]);
                  puVar11 = (uint *)(iVar7 * 4 + in_stack_0000000c[0x24]);
                  uVar3 = *puVar11;
                  *puVar11 = *puVar28;
                  *puVar28 = uVar3;
                  pfVar14 = (float *)(iStack00000028 + in_stack_0000000c[0x1f]);
                  pfVar26 = (float *)(in_stack_0000000c[0x1f] + iStack00000024);
                  local_248 = (char *)*pfVar26;
                  *(ushort *)(&local_244 + (uint)bVar34 * -2) =
                       *(ushort *)(pfVar26 + (uint)bVar34 * -2 + 1);
                  local_244._2_2_ = (ushort)*(uint *)((int)pfVar26 + 6);
                  local_240 = (ushort)((uint)*(uint *)((int)pfVar26 + 6) >> 0x10);
                  (&uStack_23e)[(uint)bVar34 * -4] =
                       *(ushort *)((int)pfVar26 + (uint)bVar34 * -8 + 10);
                  local_23c = pfVar26[3];
                  local_238[(uint)bVar34 * -4] = *(ushort *)(pfVar26 + (uint)bVar34 * -2 + 4);
                  pfVar31 = pfVar26 + (uint)bVar34 * -2 + 1;
                  pfVar19 = pfVar14 + (uint)bVar34 * -2 + 1;
                  *pfVar26 = *pfVar14;
                  pfVar32 = pfVar31 + (uint)bVar34 * -2 + 1;
                  pfVar26 = pfVar19 + (uint)bVar34 * -2 + 1;
                  *pfVar31 = *pfVar19;
                  *pfVar32 = *pfVar26;
                  pfVar32[(uint)bVar34 * -2 + 1] = pfVar26[(uint)bVar34 * -2 + 1];
                  *(ushort *)(pfVar32 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1) =
                       *(ushort *)(pfVar26 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1);
                  pfVar19 = pfVar14 + (uint)bVar34 * -2 + 1;
                  *pfVar14 = (float)local_248;
                  pfVar14 = pfVar19 + (uint)bVar34 * -2 + 1;
                  pfVar26 = (float *)(&local_240 + (uint)bVar34 * -4 + (uint)bVar34 * -4);
                  *pfVar19 = (float)(&local_244)[(uint)bVar34 * -2];
                  *pfVar14 = *pfVar26;
                  pfVar14[(uint)bVar34 * -2 + 1] = pfVar26[(uint)bVar34 * -2 + 1];
                  *(ushort *)(pfVar14 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1) =
                       *(ushort *)(pfVar26 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1);
                  iVar8 = *piVar9;
                  *piVar9 = local_58[iVar7 + 1];
                  local_58[iVar7 + 1] = iVar8;
                }
                iVar7 = iVar7 + 1;
                piVar9 = piVar9 + 1;
                iStack00000024 = iStack00000024 + 0x12;
                iStack00000028 = iStack00000028 + 0x12;
              } while (iVar7 < iVar21);
            }
          }
          iVar21 = 2;
          if (local_bc != (void *)in_stack_0000000c[0x15]) {
            local_40 = (FILE *)(in_stack_0000000c + 0x1c51);
            do {
              uVar36 = (ulonglong)(uint)(in_stack_0000000c[0x15] - (int)local_bc) << 0x20;
              crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4a8,"There are %d triangles I couldn't match.");
              if (*(int *)(in_stack_00000010 + 0x308) == 0) {
                shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_b68);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)(auStack_b68 + 4),"Get rid of them them, I never want to see them again");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)(auStack_b68 + 8),"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          ((CStrList *)(auStack_b68 + 0xc),"Try best guess");
                do {
                  uVar36 = uVar36 & 0xffffffff00000000;
                  iVar21 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     ((CPickList *)(auStack_b68 + 0x10),acStack_4ac,iVar21,0);
                } while (iVar21 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                          ((CPickList *)(auStack_b68 + 0x10),0,(uint)(uVar36 >> 0x20),
                           SUB84 /* extract 2-byte value */(dVar37,0),(uint)((ulonglong)dVar37 >> 0x20),
                           SUB84 /* extract 2-byte value */(in_stack_ffff5ea8,0),(uint)((ulonglong)in_stack_ffff5ea8 >> 0x20));
              }
              pvVar12 = local_bc;
              if (iVar21 == 0) {
                in_stack_0000000c[0x15] = (int)local_bc;
              }
              else if (iVar21 == 1) {
                if (0x1d < in_stack_0000000c[0x1c50]) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                pcVar22 = "MySpecialTriangles";
                piVar9 = (int *)(in_stack_0000000c[0x1c50] * 0x60 + (int)local_40);
                do {
                  cVar2 = *pcVar22;
                  *(char *)piVar9 = cVar2;
                  if (cVar2 == '\0') break;
                  cVar2 = pcVar22[1];
                  pcVar22 = pcVar22 + 2;
                  *(char *)((int)piVar9 + 1) = cVar2;
                  piVar9 = (int *)((int)piVar9 + 2);
                } while (cVar2 != '\0');
                in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c59] =
                     in_stack_0000000c[0x15] - (int)local_bc;
                in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c5e] = 0;
                in_stack_0000000c[in_stack_0000000c[0x1c50] * 0x18 + 0x1c63] = 0;
                local_bc = (void *)in_stack_0000000c[0x15];
                in_stack_0000000c[0x1c50] = in_stack_0000000c[0x1c50] + 1;
              }
              else if (iVar21 == 2) {
                local_3c = (streambuf **)&DAT_00000001;
                local_38 = local_bc;
                local_34 = (FILE *)0x0;
                if (0 < in_stack_0000000c[0x15]) {
                  iVar21 = (int)local_bc * 0x12;
                  do {
                    if (local_3c == (streambuf **)0x0) break;
                    local_3c = (streambuf **)0x0;
                    pvStack00000064 = pvVar12;
                    if ((int)pvVar12 < in_stack_0000000c[0x15]) {
                      piStack0000003c = local_58 + (int)pvVar12;
                      iStack00000038 = iVar21;
                      do {
                        if (0xf423e < *piStack0000003c) {
                          local_30 = (FILE *)(iStack00000038 + in_stack_0000000c[0x1f]);
                          local_2c = 0;
                          if (0 < in_stack_0000000c[0x15]) {
                            iStack00000034 = 0;
                            piStack00000030 = local_58;
                            do {
                              if (*piStack00000030 < 999999) {
                                local_28 = (short *)(iStack00000034 + in_stack_0000000c[0x1f]);
                                iVar7 = 0;
                                piVar9 = (int *)local_30;
                                do {
                                  local_24 = piVar9;
                                  iVar8 = 0;
                                  psVar17 = local_28;
                                  if ((short)*piVar9 != *local_28) {
                                    do {
                                      iVar8 = iVar8 + 1;
                                      psVar17 = psVar17 + 1;
                                      if (2 < iVar8) goto LAB_00591f48;
                                    } while (*psVar17 != (short)*piVar9);
                                  }
                                  iVar7 = iVar7 + 1;
LAB_00591f48:
                                  piVar9 = (int *)((int)piVar9 + 2);
                                } while (piVar9 != (int *)((int)local_30 + 6));
                                if (1 < iVar7) {
                                  iVar7 = local_58[local_2c];
                                  in_stack_0000000c[iVar7 * 0x18 + 0x1c59] =
                                       in_stack_0000000c[iVar7 * 0x18 + 0x1c59] + 1;
                                  local_bc = (void *)((int)local_bc + 1);
                                  *piStack0000003c = local_58[local_2c];
                                  break;
                                }
                              }
                              iStack00000034 = iStack00000034 + 0x12;
                              local_2c = local_2c + 1;
                              piStack00000030 = piStack00000030 + 1;
                            } while (local_2c < in_stack_0000000c[0x15]);
                          }
                          if (0xf423e < *piStack0000003c) {
                            local_3c = (streambuf **)&DAT_00000001;
                          }
                        }
                        piStack0000003c = piStack0000003c + 1;
                        pvStack00000064 = (void *)((int)pvStack00000064 + 1);
                        iStack00000038 = iStack00000038 + 0x12;
                      } while ((int)pvStack00000064 < in_stack_0000000c[0x15]);
                    }
                    local_34 = (FILE *)((int)&local_34->_ptr + 1);
                  } while ((int)local_34 < in_stack_0000000c[0x15]);
                }
                iVar21 = in_stack_0000000c[0x15];
                while (piVar9 = local_58, iVar21 = iVar21 + -1, local_58 = piVar9, -1 < iVar21) {
                  iVar7 = 0;
                  if (0 < iVar21) {
                    iStack00000040 = 0;
                    iStack00000044 = 0x12;
                    do {
                      if (piVar9[1] < *piVar9) {
                        puVar28 = (uint *)(iVar7 * 4 + 4 + in_stack_0000000c[0x24]);
                        puVar11 = (uint *)(in_stack_0000000c[0x24] + iVar7 * 4);
                        uVar3 = *puVar11;
                        *puVar11 = *puVar28;
                        *puVar28 = uVar3;
                        pfVar14 = (float *)(iStack00000044 + in_stack_0000000c[0x1f]);
                        pfVar26 = (float *)(in_stack_0000000c[0x1f] + iStack00000040);
                        local_25c = *pfVar26;
                        *(ushort *)(local_258 + (uint)bVar34 * -8) =
                             *(ushort *)(pfVar26 + (uint)bVar34 * -2 + 1);
                        stack0xfffffdaa = *(uint *)((int)pfVar26 + 6);
                        *(ushort *)((int)&local_254 + (uint)bVar34 * -8 + 2) =
                             *(ushort *)((int)pfVar26 + (uint)bVar34 * -8 + 10);
                        local_250 = pfVar26[3];
                        *(ushort *)(&local_24c + (uint)bVar34 * -2) =
                             *(ushort *)(pfVar26 + (uint)bVar34 * -2 + 4);
                        pfVar31 = pfVar26 + (uint)bVar34 * -2 + 1;
                        pfVar19 = pfVar14 + (uint)bVar34 * -2 + 1;
                        *pfVar26 = *pfVar14;
                        pfVar32 = pfVar31 + (uint)bVar34 * -2 + 1;
                        pfVar26 = pfVar19 + (uint)bVar34 * -2 + 1;
                        *pfVar31 = *pfVar19;
                        *pfVar32 = *pfVar26;
                        pfVar32[(uint)bVar34 * -2 + 1] = pfVar26[(uint)bVar34 * -2 + 1];
                        *(ushort *)(pfVar32 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1) =
                             *(ushort *)
                              (pfVar26 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1);
                        pfVar19 = pfVar14 + (uint)bVar34 * -2 + 1;
                        *pfVar14 = local_25c;
                        pfVar14 = pfVar19 + (uint)bVar34 * -2 + 1;
                        pfVar26 = (float *)(&local_254 + (uint)bVar34 * -2 + (uint)bVar34 * -2);
                        *pfVar19 = *(float *)(local_258 + (uint)bVar34 * -8);
                        *pfVar14 = *pfVar26;
                        pfVar14[(uint)bVar34 * -2 + 1] = pfVar26[(uint)bVar34 * -2 + 1];
                        *(ushort *)(pfVar14 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1) =
                             *(ushort *)
                              (pfVar26 + (uint)bVar34 * -2 + 1 + (uint)bVar34 * -2 + 1);
                        iVar8 = *piVar9;
                        *piVar9 = local_58[iVar7 + 1];
                        local_58[iVar7 + 1] = iVar8;
                      }
                      iVar7 = iVar7 + 1;
                      piVar9 = piVar9 + 1;
                      iStack00000040 = iStack00000040 + 0x12;
                      iStack00000044 = iStack00000044 + 0x12;
                    } while (iVar7 < iVar21);
                  }
                }
                iVar21 = 1;
              }
            } while (local_bc != (void *)in_stack_0000000c[0x15]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          crt_memory_c_free_FUN_005fe659(local_58);
          local_54 = 0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          pvVar12 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((in_stack_0000000c[0x15] + local_b8) * 0x12,
                               "..\\core\\skeledit.cpp",0xf1a);
          local_ac = pvVar12;
          local_a4 = (uint *)
                     shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (((int)&local_b4->_ptr + in_stack_0000000c[0x15]) * 4,
                                "..\\core\\skeledit.cpp",0xf1b);
          if ((pvVar12 == (void *)0x0) || (local_a4 == (uint *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          puVar11 = local_a4;
          iVar21 = in_stack_0000000c[0x15];
          puVar28 = (uint *)in_stack_0000000c[0x1f];
          puVar33 = local_a4;
          for (uVar15 = (uint)(iVar21 * 0x12) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
            *puVar33 = *puVar28;
            puVar28 = puVar28 + (uint)bVar34 * -2 + 1;
            puVar33 = puVar33 + (uint)bVar34 * -2 + 1;
          }
          for (uVar15 = iVar21 * 0x12 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
            *(byte *)puVar33 = *(byte *)puVar28;
            puVar28 = (uint *)((int)puVar28 + (uint)bVar34 * -2 + 1);
            puVar33 = (uint *)((int)puVar33 + (uint)bVar34 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x1f]);
          in_stack_0000000c[0x1f] = (int)puVar11;
          puVar11 = (uint *)in_stack_0000000c[0x24];
          pFVar23 = local_9c;
          for (uVar15 = in_stack_0000000c[0x15] & 0x3fffffff; uVar15 != 0; uVar15 = uVar15 - 1) {
            pFVar23->_ptr = (char *)*puVar11;
            puVar11 = puVar11 + (uint)bVar34 * -2 + 1;
            pFVar23 = (FILE *)((int)pFVar23 + (uint)bVar34 * -8 + 4);
          }
          for (iVar21 = 0; iVar21 != 0; iVar21 = iVar21 + -1) {
            *(byte *)&pFVar23->_ptr = *(byte *)puVar11;
            puVar11 = (uint *)((int)puVar11 + (uint)bVar34 * -2 + 1);
            pFVar23 = (FILE *)((int)pFVar23 + (uint)bVar34 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf24;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x24]);
          g_CurrentDebugLine = 0xf28;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          in_stack_0000000c[0x24] = (int)local_98;
          crt_memory_c_free_FUN_005fe659((void *)in_stack_0000000c[0x29]);
          pFVar23 = local_a0;
          in_stack_0000000c[0x29] = 0;
          if (0 < (int)pFVar23) {
            pvVar12 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                ((int)pFVar23 * 4,"..\\core\\skeledit.cpp",0xf2b);
            in_stack_0000000c[0x29] = (int)pvVar12;
            if (pvVar12 == (void *)0x0) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0xf2c;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
            }
          }
          iStack00000084 = 0;
          in_stack_0000000c[0x1a] = 0;
          if (0 < in_stack_0000000c[0x1c50]) {
            piStack00000078 = in_stack_0000000c;
            do {
              if ((0 < piStack00000078[0x1c5e]) &&
                 (this_ptr = (CDeformableModel *)0x0, 0 < (int)local_ac)) {
                piStack00000074 = local_c4;
                do {
                  in_stack_0000000c = piStack00000074;
                  if (((piStack00000074[1] == 3) && (iStack00000084 == piStack00000074[2])) &&
                     (piStack00000074[3] < 0)) {
                    iVar21 = piStack00000074[0x1a];
                    iVar7 = piStack00000074[0x15];
                    iVar8 = piStack00000074[0x1f];
                    if ((int)local_a0 < 0) {
                      iVar18 = piStack00000074[5];
                      if (iVar18 < 0) goto LAB_00591835;
                      iVar27 = 0;
                      if (0 < piStack00000074[0x2f]) {
                        piVar9 = piVar16 + 0x32;
                        do {
                          crt_string_c_splitpath_FUN_005ff178
                                    ((char *)piVar9,(char *)0x0,(char *)0x0,acStack_680,(char *)0x0)
                          ;
                          iVar13 = crt_string_c_stricmp_FUN_005fe7f0
                                             (&stack0xffff5ed4 + iVar18 * 0x100,acStack_67c);
                          if (iVar13 == 0) break;
                          iVar27 = iVar27 + 1;
                          piVar9 = piVar9 + 0x12;
                        } while (iVar27 < piStack00000074[0x2f]);
                      }
                      if (piStack00000074[0x2f] <= iVar27) {
                        if (0x4f < piStack00000074[0x2f]) {
                          g_CurrentFilename = "..\\core\\skeledit.cpp";
                          g_CurrentLineNumber = 0xf5d;
                          core_main_c_displayErrorAndQuit_FUN_00506f10
                                    ("Too many model textures!");
                        }
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  ((char *)(piVar16 + piStack00000074[0x2f] * 0x12 + 0x32),
                                   "%s.raw");
                        piStack00000074[0x2f] = piStack00000074[0x2f] + 1;
                      }
                      *(int *)(piStack00000074[0x24] +
                              (piStack00000074[0x15] + piStack00000074[0x1a]) * 4) = iVar27;
                    }
                    else {
                      *(FILE **)((iVar7 + iVar21) * 4 + piStack00000074[0x24]) = local_a0;
                    }
                    iStack000000a0 = 0;
                    puVar29 = (ushort *)(iVar8 + (iVar7 + iVar21) * 0x12);
                    piVar9 = piStack00000074;
                    do {
                      ppcVar20 = &local_c8->_ptr + piVar9[6] * 3;
                      local_104 = *ppcVar20;
                      pfStack_100 = (float *)ppcVar20[1];
                      local_fc = (streambuf *)ppcVar20[2];
                      fVar38 = 1e+20;
                      iVar21 = 0;
                      if (0 < piStack00000074[0xb]) {
                        iVar7 = 0;
                        do {
                          iVar8 = piStack00000074[0x10];
                          local_158 = (FILE *)(*(float *)(iVar7 + 0x10 + iVar8) - (float)local_104);
                          local_154 = (FILE *)(*(float *)(iVar7 + 0x14 + iVar8) - (float)pfStack_100
                                              );
                          local_150 = *(float *)(iVar7 + 0x18 + iVar8) - (float)local_fc;
                          fVar4 = local_150 * local_150 +
                                  (float)local_158 * (float)local_158 +
                                  (float)local_154 * (float)local_154;
                          if (fVar4 < fVar38) {
                            *puVar29 = (short)iVar21;
                            fVar38 = fVar4;
                          }
                          iVar21 = iVar21 + 1;
                          iVar7 = iVar7 + 0x34;
                        } while (iVar21 < piStack00000074[0xb]);
                      }
                      if ((float)_DAT_0064bfe2 < fVar38) {
                        crt_stdio_c_sprintf_FUN_005fdbd0
                                  (&DAT_03670650,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        goto LAB_0058f8e7;
                      }
                      iVar21 = piVar9[7] >> 8;
                      iVar7 = piVar9[8] >> 8;
                      if (iVar21 < 0) {
                        iVar21 = 0;
                      }
                      else if (0xffff < iVar21) {
                        iVar21 = 0xffff;
                      }
                      if (iVar7 < 0) {
                        iVar7 = 0;
                      }
                      else if (0xffff < iVar7) {
                        iVar7 = 0xffff;
                      }
                      piVar9 = piVar9 + 3;
                      puVar29[6] = (short)iVar7;
                      iStack000000a0 = iStack000000a0 + 1;
                      puVar29[3] = (short)iVar21;
                      puVar29 = puVar29 + 1;
                    } while (iStack000000a0 < 3);
                    iStack00000014 = -1;
                    iStack0000009c = 0;
                    fStack000000a4 = 1e+20;
                    if (0 < (int)local_ac) {
                      piStack00000070 = local_c4;
                      do {
                        if (((piStack00000070[1] == 3) && (iStack00000084 != piStack00000070[2])) &&
                           (piStack00000070[3] < 0)) {
                          iStack00000024 = 0;
                          do {
                            iVar21 = iStack00000024 + 6;
                            fVar38 = 0.0;
                            piVar9 = piStack00000074;
                            do {
                              ppcVar20 = &local_c8->_ptr + piVar9[6] * 3;
                              local_188 = *ppcVar20;
                              local_184 = (float)ppcVar20[1];
                              local_180 = (streambuf *)ppcVar20[2];
                              ppcVar20 = &local_c8->_ptr + piStack00000070[(iVar21 % 3) * 3 + 6] * 3
                              ;
                              local_ec = *ppcVar20;
                              local_e8 = (FILE *)ppcVar20[1];
                              local_200 = (float)local_188 - (float)local_ec;
                              local_1fc = local_184 - (float)local_e8;
                              local_e4 = (streambuf *)ppcVar20[2];
                              local_1f8 = (float)local_180 - (float)local_e4;
                              piVar9 = piVar9 + 3;
                              iVar21 = iVar21 + -1;
                              fVar38 = local_1f8 * local_1f8 +
                                       local_200 * local_200 + local_1fc * local_1fc + fVar38;
                            } while (piVar9 != piStack00000074 + 9);
                            if (fVar38 < fStack000000a4) {
                              iStack00000014 = piStack00000070[2];
                              fStack000000a4 = fVar38;
                            }
                            iStack00000024 = iStack00000024 + 1;
                          } while (iStack00000024 < 3);
                        }
                        iStack0000009c = iStack0000009c + 1;
                        piStack00000070 = piStack00000070 + 0xf;
                      } while (iStack0000009c < (int)local_ac);
                    }
                    if (iStack00000014 < 0) {
                      crt_stdio_c_sprintf_FUN_005fdbd0
                                (&DAT_03670650,"Can't find opposing part for capped face!");
                      goto LAB_0058f8e7;
                    }
                    *(int *)(piStack00000074[0x1a] * 4 + piStack00000074[0x29]) = iStack00000014;
                    piStack00000074[0x1a] = piStack00000074[0x1a] + 1;
                  }
LAB_00591835:
                  this_ptr = (CDeformableModel *)((int)&this_ptr->num_lods + 1);
                  piStack00000074 = piStack00000074 + 0xf;
                } while ((int)this_ptr < (int)local_ac);
              }
              iStack00000084 = iStack00000084 + 1;
              piStack00000078 = piStack00000078 + 0x18;
            } while (iStack00000084 < in_stack_0000000c[0x1c50]);
          }
          if (local_98 != (FILE *)in_stack_0000000c[0x1a]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s");
          iVar21 = 0;
          piVar16 = in_stack_0000000c;
          if (0 < in_stack_0000000c[0x1c50]) {
            do {
              piVar16[0x1c63] = 0;
              iVar21 = iVar21 + 1;
              piVar16 = piVar16 + 0x18;
            } while (iVar21 < in_stack_0000000c[0x1c50]);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_c4 != (int *)0x0) {
            crt_memory_c_free_FUN_005fe659(local_c4 + -1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xff6;
          crt_memory_c_free_FUN_005fe659(local_bc);
          if (local_b4 != (FILE *)0x0) {
            crt_stdio_c_fprintf_FUN_005fe6d0(local_b4,"Determined parts using %s OK!\n");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_b4,"..\\core\\skeledit.cpp",0xffc);
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determined parts using %s OK!");
          return 1;
        }
        crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Deformable model has more faces than segmented model!");
        goto LAB_0058f8e7;
      }
      in_stack_ffff5e94 = "Too many parts in %s";
    }
    else {
LAB_00590a70:
      in_stack_ffff5e94 = "%s is corrupt";
    }
  }
LAB_0058f8da:
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,in_stack_ffff5e94);
LAB_0058f8e7:
  if (local_c0 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_c0,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_154 != (FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_154,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_15c != (char *)0x0) {
    crt_memory_c_free_FUN_005fe659(local_15c + -4);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  crt_memory_c_free_FUN_005fe659(local_158);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_14c != 0.0) {
    crt_memory_c_free_FUN_005fe659((void *)((int)local_14c + -4));
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_144 != 0) {
    crt_memory_c_free_FUN_005fe659((void *)(local_144 + -4));
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe8;
  crt_memory_c_free_FUN_005fe659(local_140);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe9;
  crt_memory_c_free_FUN_005fe659(local_138);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbea;
  crt_memory_c_free_FUN_005fe659(local_b4);
  return 0;
}
