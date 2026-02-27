// Name: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
// Address: 0058f810
// Address Range: [[0058f810, 0059251f]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */
/* WARNING: Type propagation algorithm not settling */

int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,char *filename)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  SVert *pSVar5;
  float fVar6;
  double dVar7;
  CEditorTools *this_ptr_00;
  _FILE *p_Var8;
  _FILE *file;
  int iVar9;
  float *pfVar10;
  CBoundingBox3D *pCVar11;
  CDeformableModel *pCVar12;
  uint *puVar13;
  SInputFace *pSVar14;
  int *piVar15;
  short *psVar16;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  short *psVar20;
  int iVar21;
  int iVar22;
  char *pcVar23;
  ushort *puVar24;
  CVector3f *pCVar25;
  CVector3f *pCVar26;
  int *piVar27;
  uint *puVar28;
  SInputFace *pSVar29;
  char *pcVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  SInputFace *pSVar34;
  int *piVar35;
  SPart *pSVar36;
  void *pvVar37;
  byte bVar38;
  float local_a1f0;
  char local_a1ec [32552];
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
  CBoundingBox3D local_30c;
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
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
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
  byte local_1fc [8];
  float local_1f4;
  float local_1f0;
  float local_1ec;
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
  byte local_190 [4];
  byte local_18c [4];
  CBoundingBox3D *local_188;
  void *local_184;
  _FILE *local_180;
  float *local_17c;
  float *local_178;
  void *local_174;
  uint *local_170;
  float local_16c;
  float local_168;
  byte local_164 [4];
  int local_160;
  void *local_15c;
  int local_158;
  int local_154;
  SInputFace *local_150;
  int *local_14c;
  SPart *local_148;
  int local_144;
  SPart *local_140;
  uint local_13c [2];
  void *local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  SInputFace *local_120;
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
  _FILE *local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  byte local_dc [4];
  SPart *local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  short *local_c8;
  int local_c4;
  short *local_c0;
  short *local_bc;
  int local_b8;
  void *local_b4;
  SInputFace *local_b0;
  int local_ac;
  STextureSet *local_a8;
  STextureSet *local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  byte *local_94;
  uint *local_90;
  float *local_8c;
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
  CDeformableModel *local_48;
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
  
  bVar38 = 0;
  __STK();
  if (this_ptr->num_lods != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_188 = (CBoundingBox3D *)0x0;
  local_184 = (void *)0x0;
  local_180 = (_FILE *)0x0;
  local_17c = (float *)0x0;
  local_178 = (float *)0x0;
  local_174 = (void *)0x0;
  local_170 = (uint *)0x0;
  local_f0 = (int *)0x0;
  local_ec = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (filename + 0x200,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                        0xbde);
  if (local_ec == (_FILE *)0x0) {
    pcVar23 = "Can't open %s";
  }
  else {
    local_180 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          ("parts.log",(char *)0x0,"wt",
                           "..\\core\\skeledit.cpp",0xbee);
    if (local_180 == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0xbef;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create log file!");
    }
    _fprintf(local_180,"Matching skeleton parts for %s\n");
    p_Var8 = local_ec;
    iVar22 = 1;
    do {
      iVar9 = _fgetc(p_Var8);
      file = local_ec;
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
    _fscanf(local_ec,"%d\n");
    if ((local_e8 < 0x65) || (0x67 < local_e8)) {
      _sprintf
                (g_SkeleditStatusMessage,"%s has incorrect S3D version %d",filename + 0x200);
      goto LAB_0058f8e7;
    }
    iVar22 = 1;
    do {
      iVar9 = _fgetc(file);
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
    iVar22 = _fscanf(local_ec,"%d,%d,%d,%d,%d,%d,%d\n",&local_e4,&local_16c,&local_168,&local_e0,
                        local_164,local_dc);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar22 == 7) {
      if (local_e0 < 0x1f) {
        this_ptr->num_parts = local_e0;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        _fprintf(local_180,"Reading part list from %s\n");
        p_Var8 = local_ec;
        iVar22 = 1;
        do {
          iVar9 = _fgetc(p_Var8);
          if (iVar9 < 0) break;
        } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
        iVar22 = 0;
        if (0 < this_ptr->num_parts) {
          local_148 = this_ptr->parts;
          local_94 = local_478;
          local_90 = local_400;
          piVar15 = this_ptr->parts[0].tri_counts;
          do {
            local_140 = local_148 + iVar22;
            local_144 = iVar22 * 4;
            iVar9 = _fscanf(local_ec,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_94,local_90,piVar15);
            if (iVar9 != 4) goto LAB_00590a70;
            this_ptr->parts[iVar22].adj_part_count = 0;
            piVar15 = piVar15 + 0x18;
            _fprintf(local_180,"\t%2d: %s, verts=%d, tris=%d\n",iVar22,local_140,
                       *(uint *)((int)local_400 + local_144));
            iVar22 = iVar22 + 1;
            local_94 = local_94 + 4;
            local_90 = local_90 + 1;
          } while (iVar22 < this_ptr->num_parts);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        _fprintf(local_180,"Reading texture list from %s\n");
        p_Var8 = local_ec;
        iVar22 = 1;
        do {
          iVar9 = _fgetc(p_Var8);
          if (iVar9 < 0) break;
        } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
        if (0x96 < local_e4) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar22 = 0;
        if (0 < local_e4) {
          pcVar23 = local_a1ec;
          do {
            iVar9 = _fscanf(local_ec,"%[^\n]\n");
            if (iVar9 != 1) goto LAB_00590a70;
            splitpath
                      (local_844,(char *)0x0,(char *)0x0,pcVar23,(char *)0x0);
            iVar22 = iVar22 + 1;
            pcVar23 = pcVar23 + 0x100;
          } while (iVar22 < local_e4);
        }
        pcVar23 = "gore";
        pcVar30 = local_388;
        for (iVar22 = 0x19; iVar22 != 0; iVar22 = iVar22 + -1) {
          *(uint *)pcVar30 = *(uint *)pcVar23;
          pcVar23 = pcVar23 + ((uint)bVar38 * -2 + 1) * 4;
          pcVar30 = pcVar30 + ((uint)bVar38 * -2 + 1) * 4;
        }
        if (*(int *)(filename + 0x308) == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",local_388,100,1);
        }
        local_160 = -1;
        if (local_388[0] != '\0') {
          iVar22 = 0;
          if (0 < this_ptr->num_textures) {
            pcVar23 = this_ptr->texture_sets[0].textures[0].textures[0].texture_name;
            do {
              splitpath
                        (pcVar23,(char *)0x0,(char *)0x0,local_640,(char *)0x0);
              iVar9 = stricmp(local_388,local_640);
              if (iVar9 == 0) break;
              iVar22 = iVar22 + 1;
              pcVar23 = pcVar23 + 0x48;
            } while (iVar22 < this_ptr->num_textures);
          }
          if (this_ptr->num_textures <= iVar22) {
            if (0x4f < this_ptr->num_textures) {
              _sprintf
                        (g_SkeleditStatusMessage,"Texture list full determining parts");
              goto LAB_0058f8e7;
            }
            _sprintf
                      (this_ptr->texture_sets[0].textures[this_ptr->num_textures].textures[0].
                       texture_name,"%s.raw");
            this_ptr->num_textures = this_ptr->num_textures + 1;
          }
          local_160 = iVar22;
          _fprintf(local_180,"Automap capped faces is active\n");
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
        _fprintf(local_180,"Reading faces from %s\n");
        p_Var8 = local_ec;
        iVar22 = 1;
        do {
          iVar9 = _fgetc(p_Var8);
          if (iVar9 < 0) break;
        } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
        iVar22 = 0;
        pvVar37 = local_184;
        if (0 < (int)local_16c) {
          do {
            iVar9 = _fscanf(local_ec,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_13c,&local_278,
                               &local_194,&local_200,local_274,local_190,local_1fc,local_270,
                               local_18c);
            if (iVar9 != 10) goto LAB_00590a70;
            *(uint *)((int)pvVar37 + 4) = 3;
            iVar9 = 0;
            *(uint *)((int)pvVar37 + 0x14) = local_13c[0];
            dVar7 = 65536;
            pvVar17 = pvVar37;
            do {
              *(uint *)((int)pvVar17 + 0x18) = *(uint *)(local_274 + iVar9 + -4);
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_190 + iVar9 + -4) * dVar7));
              *(int *)((int)pvVar17 + 0x1c) = local_18;
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_1fc + iVar9 + -4) * dVar7));
              iVar9 = iVar9 + 4;
              *(int *)((int)pvVar17 + 0x20) = local_18;
              pvVar17 = (void *)((int)pvVar17 + 0xc);
            } while (iVar9 != 0xc);
            _fprintf(local_180,"\t%4d: %4d %4d %4d\n",iVar22,
                       *(uint *)((int)pvVar37 + 0x18),*(uint *)((int)pvVar37 + 0x24));
            iVar22 = iVar22 + 1;
            pvVar37 = (void *)((int)pvVar37 + 0x3c);
          } while (iVar22 < (int)local_16c);
        }
        pfVar10 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)local_168 * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_188 = (CBoundingBox3D *)0x0;
        if (pfVar10 != (float *)0x0) {
          local_188 = (CBoundingBox3D *)(pfVar10 + 1);
          *pfVar10 = local_168;
        }
        if (local_188 == (CBoundingBox3D *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc7d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading vertices from %s");
        _fprintf(local_180,"Reading vertices from %s\n");
        p_Var8 = local_ec;
        iVar22 = 1;
        do {
          iVar9 = _fgetc(p_Var8);
          if (iVar9 < 0) break;
        } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
        iVar22 = 0;
        if (0 < (int)local_168) {
          local_8c = &(local_188->min).z;
          do {
            pCVar25 = &local_188->min + iVar22;
            iVar9 = _fscanf(local_ec,"%f,%f,%f\n");
            if (iVar9 != 3) goto LAB_00590a70;
            _fprintf(local_180,"\t%4d: %7.3f %7.3f %7.3f\n",iVar22,(double)pCVar25->x,
                       (double)pCVar25->y,(double)pCVar25->z);
            iVar22 = iVar22 + 1;
            local_8c = local_8c + 3;
          } while (iVar22 < (int)local_168);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_ec,"..\\core\\skeledit.cpp",0xc8c);
        local_ec = (_FILE *)0x0;
        _fprintf(local_180,"Removing duplicate faces\n");
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
                    iVar9 = 0;
                    iVar22 = local_128;
                    pvVar37 = local_84;
                    do {
                      pCVar25 = &local_188->min + *(int *)((int)pvVar37 + 0x18);
                      local_29c = pCVar25->x;
                      local_298 = pCVar25->y;
                      local_18 = 3;
                      local_294 = pCVar25->z;
                      pCVar25 = &local_188->min +
                                *(int *)((iVar22 % 3) * 0xc + 0x18 + (int)local_88);
                      local_1f4 = pCVar25->x;
                      local_1f0 = pCVar25->y;
                      local_224 = local_29c - local_1f4;
                      local_1ec = pCVar25->z;
                      local_220 = local_298 - local_1f0;
                      local_21c = local_294 - local_1ec;
                      if ((((float)0.02 < ABS(local_224)) ||
                          ((float)0.02 < ABS(local_220))) ||
                         ((float)0.02 < ABS(local_21c))) break;
                      pvVar37 = (void *)((int)pvVar37 + 0xc);
                      iVar9 = iVar9 + 1;
                      iVar22 = iVar22 + 1;
                    } while (iVar9 < 3);
                    if (iVar9 == 3) {
                      _fprintf(local_180,"Removing face %d, it is dup with face %d\n",local_28);
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
        if (&local_30c != local_188) {
          local_30c.min.x = (local_188->min).x;
          local_30c.min.y = (local_188->min).y;
          local_30c.min.z = (local_188->min).z;
        }
        if ((CBoundingBox3D *)&local_30c.max != local_188) {
          local_30c.max.x = (local_188->min).x;
          local_30c.max.y = (local_188->min).y;
          local_30c.max.z = (local_188->min).z;
        }
        iVar22 = 1;
        pCVar11 = local_188;
        if (1 < (int)local_168) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_30c,&pCVar11->max);
            iVar22 = iVar22 + 1;
            pCVar11 = (CBoundingBox3D *)&pCVar11->max;
          } while (iVar22 < (int)local_168);
        }
        pSVar5 = this_ptr->vertex_data_ptr[0];
        pCVar25 = &pSVar5->position;
        if (&local_324 != (CBoundingBox3D *)pCVar25) {
          local_324.min.x = pCVar25->x;
          local_324.min.y = (pSVar5->position).y;
          local_324.min.z = (pSVar5->position).z;
        }
        if (&local_324.max != pCVar25) {
          local_324.max.x = pCVar25->x;
          local_324.max.y = (pSVar5->position).y;
          local_324.max.z = (pSVar5->position).z;
        }
        iVar22 = 1;
        if (1 < this_ptr->vertex_count[0]) {
          iVar9 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_324,
                       (CVector3f *)((int)this_ptr->vertex_data_ptr[0]->bone_weights + iVar9 + 0xc))
            ;
            iVar22 = iVar22 + 1;
            iVar9 = iVar9 + 0x34;
          } while (iVar22 < this_ptr->vertex_count[0]);
        }
        local_26c = local_324.max.x - local_324.min.x;
        local_2a8 = local_30c.max.x - local_30c.min.x;
        local_1dc = local_26c / local_2a8;
        local_268 = local_324.max.y - local_324.min.y;
        local_2a4 = local_30c.max.y - local_30c.min.y;
        local_1d8 = local_268 / local_2a4;
        local_264 = local_324.max.z - local_324.min.z;
        local_2a0 = local_30c.max.z - local_30c.min.z;
        local_1d4 = local_264 / local_2a0;
        iVar22 = 0;
        pCVar11 = local_188;
        if (0 < (int)local_168) {
          do {
            (pCVar11->min).x = ((pCVar11->min).x - local_30c.min.x) * local_1dc + local_324.min.x;
            (pCVar11->min).y = ((pCVar11->min).y - local_30c.min.y) * local_1d8 + local_324.min.y;
            iVar22 = iVar22 + 1;
            (pCVar11->min).z = ((pCVar11->min).z - local_30c.min.z) * local_1d4 + local_324.min.z;
            pCVar11 = (CBoundingBox3D *)&pCVar11->max;
          } while (iVar22 < (int)local_168);
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
        _fprintf(local_180,"Scale = %7.3f %7.3f %7.3f\n",(double)local_1dc,(double)local_1d8,
                   (double)local_1d4);
        pfVar10 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)local_16c * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_17c = pfVar10;
        if (pfVar10 != (float *)0x0) {
          local_17c = pfVar10 + 1;
          *pfVar10 = local_16c;
        }
        fVar6 = (float)this_ptr->tri_count[0];
        pfVar10 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)fVar6 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
        local_178 = pfVar10;
        if (pfVar10 != (float *)0x0) {
          local_178 = pfVar10 + 1;
          *pfVar10 = fVar6;
        }
        if ((local_17c == (float *)0x0) || (local_178 == (float *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar22 = 0;
        pvVar37 = local_184;
        pfVar10 = local_17c;
        if (0 < (int)local_16c) {
          do {
            if (*(int *)((int)pvVar37 + 4) == 3) {
              pCVar26 = &local_188->min + *(int *)((int)pvVar37 + 0x18);
              pCVar25 = &local_188->min + *(int *)((int)pvVar37 + 0x24);
              local_2b4 = pCVar25->x - pCVar26->x;
              local_2b0 = pCVar25->y - pCVar26->y;
              local_2ac = pCVar25->z - pCVar26->z;
              pCVar26 = &local_188->min + *(int *)((int)pvVar37 + 0x30);
              local_254 = pCVar26->x - pCVar25->x;
              local_250 = pCVar26->y - pCVar25->y;
              local_24c = pCVar26->z - pCVar25->z;
              local_19c = local_2ac * local_254 - local_2b4 * local_24c;
              local_1a0 = local_2b0 * local_24c - local_2ac * local_250;
              local_198 = local_2b4 * local_250 - local_2b0 * local_254;
              fVar6 = SQRT(local_198 * local_198 + local_1a0 * local_1a0 + local_19c * local_19c);
              if (fVar6 <= 0.0) {
                local_19c = 0.0;
                local_1a0 = 0.0;
                local_198 = 0.0;
              }
              else {
                fVar6 = 1.0 / fVar6;
                local_1a0 = local_1a0 * fVar6;
                local_19c = local_19c * fVar6;
                local_198 = local_198 * fVar6;
              }
              if (pfVar10 != &local_1a0) {
                *pfVar10 = local_1a0;
                pfVar10[1] = local_19c;
                pfVar10[2] = local_198;
              }
            }
            iVar22 = iVar22 + 1;
            pvVar37 = (void *)((int)pvVar37 + 0x3c);
            pfVar10 = pfVar10 + 3;
          } while (iVar22 < (int)local_16c);
        }
        iVar22 = 0;
        if (0 < this_ptr->tri_count[0]) {
          local_80 = 0;
          pfVar10 = local_178;
          do {
            puVar24 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_80);
            uVar2 = puVar24[1];
            uVar3 = *puVar24;
            pSVar5 = this_ptr->vertex_data_ptr[0];
            uVar4 = puVar24[2];
            local_2cc = pSVar5[uVar2].position.x - pSVar5[uVar3].position.x;
            local_2c8 = pSVar5[uVar2].position.y - pSVar5[uVar3].position.y;
            local_2c4 = pSVar5[uVar2].position.z - pSVar5[uVar3].position.z;
            local_260 = pSVar5[uVar4].position.x - pSVar5[uVar2].position.x;
            local_25c = pSVar5[uVar4].position.y - pSVar5[uVar2].position.y;
            local_258 = pSVar5[uVar4].position.z - pSVar5[uVar2].position.z;
            local_238 = local_2c4 * local_260 - local_2cc * local_258;
            local_23c = local_2c8 * local_258 - local_2c4 * local_25c;
            local_234 = local_2cc * local_25c - local_2c8 * local_260;
            fVar6 = SQRT(local_234 * local_234 + local_23c * local_23c + local_238 * local_238);
            if (fVar6 <= 0.0) {
              local_238 = 0.0;
              local_23c = 0.0;
              local_234 = 0.0;
            }
            else {
              fVar6 = 1.0 / fVar6;
              local_23c = local_23c * fVar6;
              local_238 = local_238 * fVar6;
              local_234 = local_234 * fVar6;
            }
            if (pfVar10 != &local_23c) {
              *pfVar10 = local_23c;
              pfVar10[1] = local_238;
              pfVar10[2] = local_234;
            }
            pfVar10 = pfVar10 + 3;
            iVar22 = iVar22 + 1;
            local_80 = local_80 + 0x12;
          } while (iVar22 < this_ptr->tri_count[0]);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        _fprintf(local_180,"Matching faces in %s\n");
        if (this_ptr->tri_count[0] <= (int)local_16c) {
          local_174 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (this_ptr->tri_count[0] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_174 == (void *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_15c = local_184;
          iVar22 = 0;
          if (0 < this_ptr->num_parts) {
            iVar9 = 0;
            do {
              pvVar37 = local_15c;
              for (iVar21 = 0; iVar21 < *(int *)((int)this_ptr->parts[0].tri_counts + iVar9);
                  iVar21 = iVar21 + 1) {
                *(uint *)((int)pvVar37 + 0xc) = 0xffffffff;
                *(int *)((int)pvVar37 + 8) = iVar22;
                pvVar37 = (void *)((int)pvVar37 + 0x3c);
              }
              local_15c = (void *)((int)local_15c +
                                  *(int *)((int)this_ptr->parts[0].tri_counts + iVar9) * 0x3c);
              iVar9 = iVar9 + 0x60;
              iVar22 = iVar22 + 1;
            } while (iVar22 < this_ptr->num_parts);
          }
          local_2c = 0;
          if (0 < this_ptr->tri_count[0]) {
            do {
              local_18 = local_2c;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_2c,(float)this_ptr->tri_count[0]);
              local_124 = local_2c;
              while (-1 < local_124) {
                local_120 = this_ptr->tri_data_ptr[0] + local_124;
                pfVar10 = (float *)(local_124 * 4 + (int)local_174);
                *pfVar10 = 1e+30;
                local_11c = -1;
                local_118 = 0;
                if (0 < (int)local_16c) {
                  local_7c = local_184;
                  local_108 = local_178 + local_124 * 3;
                  local_78 = local_17c;
                  do {
                    local_114 = local_7c;
                    if (*(int *)((int)local_7c + 4) == 3) {
                      local_110 = (float)4 -
                                  (local_108[2] * local_78[2] +
                                  *local_108 * *local_78 + local_108[1] * local_78[1]);
                      local_10c = 0;
                      do {
                        iVar9 = 0;
                        local_104 = 0.0;
                        iVar22 = local_10c;
                        pvVar37 = local_7c;
                        do {
                          pCVar25 = &local_188->min + *(int *)((int)pvVar37 + 0x18);
                          local_290 = pCVar25->x;
                          local_28c = pCVar25->y;
                          local_288 = pCVar25->z;
                          uVar2 = (&(local_120->vertex_indices).vertex_index_0)[iVar22 % 3];
                          pSVar5 = this_ptr->vertex_data_ptr[0];
                          local_1d0 = pSVar5[uVar2].position.x;
                          local_1cc = pSVar5[uVar2].position.y;
                          local_20c = local_1d0 - local_290;
                          local_1c8 = pSVar5[uVar2].position.z;
                          local_208 = local_1cc - local_28c;
                          local_204 = local_1c8 - local_288;
                          if ((((float)0.20000000000000001 < ABS(local_20c)) ||
                              ((float)0.20000000000000001 < ABS(local_208))) ||
                             ((float)0.20000000000000001 < ABS(local_204))) break;
                          fVar6 = local_204 * local_204 +
                                  local_20c * local_20c + local_208 * local_208;
                          iVar22 = iVar22 + 1;
                          pvVar37 = (void *)((int)pvVar37 + 0xc);
                          local_104 = fVar6 * fVar6 * fVar6 + local_104;
                          iVar9 = iVar9 + 1;
                        } while (iVar9 < 3);
                        if (((2 < iVar9) &&
                            (local_104 = local_104 * local_110, local_104 <= *pfVar10)) &&
                           ((*(int *)((int)local_7c + 0xc) < 0 ||
                            (local_104 <
                             *(float *)(*(int *)((int)local_7c + 0xc) * 4 + (int)local_174))))) {
                          local_11c = local_118;
                          *pfVar10 = local_104;
                        }
                        local_10c = local_10c + 1;
                      } while (local_10c < 3);
                    }
                    local_78 = local_78 + 3;
                    local_118 = local_118 + 1;
                    local_7c = (void *)((int)local_7c + 0x3c);
                    local_fc = pfVar10;
                    local_f8 = pfVar10;
                  } while (local_118 < (int)local_16c);
                }
                if (local_11c == -1) break;
                iVar22 = *(int *)((int)local_184 + local_11c * 0x3c + 0xc);
                *(int *)((int)local_184 + local_11c * 0x3c + 0xc) = local_124;
                local_124 = iVar22;
              }
              local_2c = local_2c + 1;
            } while (local_2c < this_ptr->tri_count[0]);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_17c != (float *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659(local_17c + -1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_17c = (float *)0x0;
          if (local_178 != (float *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659(local_178 + -1);
          }
          local_178 = (float *)0x0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          shape_memdbg_cpp_free_FUN_005fe659(local_174);
          iVar22 = 0;
          local_174 = (void *)0x0;
          local_158 = 0;
          pCVar12 = this_ptr;
          if (0 < this_ptr->num_parts) {
            do {
              pCVar12->parts[0].cap_tri_counts[0] = 0;
              pCVar12->parts[0].tri_counts[0] = 0;
              iVar22 = iVar22 + 1;
              pCVar12 = (CDeformableModel *)(pCVar12->tri_count + 3);
            } while (iVar22 < this_ptr->num_parts);
          }
          puVar13 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (this_ptr->tri_count[0] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_170 = puVar13;
          local_f0 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (this_ptr->tri_count[0] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((puVar13 == (uint *)0x0) || (local_f0 == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar22 = 0;
          piVar15 = local_f0;
          puVar13 = local_170;
          if (0 < this_ptr->tri_count[0]) {
            do {
              *piVar15 = 999999;
              iVar22 = iVar22 + 1;
              *puVar13 = 0xffffffff;
              piVar15 = piVar15 + 1;
              puVar13 = puVar13 + 1;
            } while (iVar22 < this_ptr->tri_count[0]);
          }
          iVar22 = 0;
          local_154 = 0;
          pvVar37 = local_184;
          if (0 < (int)local_16c) {
            do {
              if (*(int *)((int)pvVar37 + 4) == 3) {
                iVar9 = *(int *)((int)pvVar37 + 8);
                iVar21 = *(int *)((int)pvVar37 + 0xc);
                if (iVar21 < 0) {
                  local_158 = local_158 + 1;
                  this_ptr->parts[iVar9].cap_tri_counts[0] =
                       this_ptr->parts[iVar9].cap_tri_counts[0] + 1;
                }
                else {
                  local_f4 = iVar21 * 4;
                  if (-1 < (int)local_170[iVar21]) {
                    pcVar23 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  local_f0[iVar21] = iVar9;
                  local_170[iVar21] = iVar22;
                  local_154 = local_154 + 1;
                  this_ptr->parts[iVar9].tri_counts[0] = this_ptr->parts[iVar9].tri_counts[0] + 1;
                }
              }
              iVar22 = iVar22 + 1;
              pvVar37 = (void *)((int)pvVar37 + 0x3c);
            } while (iVar22 < (int)local_16c);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          shape_memdbg_cpp_free_FUN_005fe659(local_170);
          local_30 = this_ptr->tri_count[0] + -1;
          local_170 = (uint *)0x0;
          piVar15 = local_f0;
          while (local_f0 = piVar15, -1 < local_30) {
            iVar22 = 0;
            if (0 < local_30) {
              local_74 = 0;
              local_70 = 0x12;
              do {
                if (piVar15[1] < *piVar15) {
                  local_18 = iVar22 * 4 + 4;
                  piVar27 = this_ptr->index_data_ptr[0] + iVar22 + 1;
                  piVar35 = this_ptr->index_data_ptr[0] + iVar22;
                  iVar9 = *piVar35;
                  *piVar35 = *piVar27;
                  *piVar27 = iVar9;
                  puVar33 = (uint *)
                            ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                            local_70);
                  puVar13 = (uint *)
                            ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                            local_74);
                  local_2e0 = *puVar13;
                  *(ushort *)(auStack_2dc + (uint)bVar38 * -8) =
                       *(ushort *)(puVar13 + (uint)bVar38 * -2 + 1);
                  stack0xfffffd26 = *(uint *)((int)puVar13 + 6);
                  *(ushort *)((int)&uStack_2d8 + (uint)bVar38 * -8 + 2) =
                       *(ushort *)((int)puVar13 + (uint)bVar38 * -8 + 10);
                  local_2d4 = puVar13[3];
                  auStack_2d0[(uint)bVar38 * -4] = *(ushort *)(puVar13 + (uint)bVar38 * -2 + 4);
                  puVar31 = puVar13 + (uint)bVar38 * -2 + 1;
                  puVar28 = puVar33 + (uint)bVar38 * -2 + 1;
                  *puVar13 = *puVar33;
                  puVar32 = puVar31 + (uint)bVar38 * -2 + 1;
                  puVar13 = puVar28 + (uint)bVar38 * -2 + 1;
                  *puVar31 = *puVar28;
                  *puVar32 = *puVar13;
                  puVar32[(uint)bVar38 * -2 + 1] = puVar13[(uint)bVar38 * -2 + 1];
                  *(ushort *)(puVar32 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1) =
                       *(ushort *)(puVar13 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1);
                  puVar28 = puVar33 + (uint)bVar38 * -2 + 1;
                  *puVar33 = local_2e0;
                  puVar33 = puVar28 + (uint)bVar38 * -2 + 1;
                  puVar13 = &uStack_2d8 + (uint)bVar38 * -2 + (uint)bVar38 * -2;
                  *puVar28 = *(uint *)(auStack_2dc + (uint)bVar38 * -8);
                  *puVar33 = *puVar13;
                  puVar33[(uint)bVar38 * -2 + 1] = puVar13[(uint)bVar38 * -2 + 1];
                  *(ushort *)(puVar33 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1) =
                       *(ushort *)(puVar13 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1);
                  iVar9 = *piVar15;
                  *piVar15 = *(int *)((int)local_f0 + local_18);
                  *(int *)((int)local_f0 + local_18) = iVar9;
                }
                iVar22 = iVar22 + 1;
                piVar15 = piVar15 + 1;
                local_74 = local_74 + 0x12;
                local_70 = local_70 + 0x12;
              } while (iVar22 < local_30);
            }
            local_30 = local_30 + -1;
            piVar15 = local_f0;
          }
          iVar22 = 2;
          if (local_154 != this_ptr->tri_count[0]) {
            local_d8 = this_ptr->parts;
            do {
              _sprintf(local_540,"There are %d triangles I couldn't match.");
              if (*(int *)(filename + 0x308) == 0) {
                shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_bec);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base,"Get rid of them them, I never want to see them again");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base,"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base,"Try best guess");
                do {
                  iVar22 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     (&local_bec,local_540,iVar22,0);
                } while (iVar22 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_bec,0);
              }
              iVar9 = local_154;
              if (iVar22 == 0) {
                this_ptr->tri_count[0] = local_154;
              }
              else if (iVar22 == 1) {
                if (0x1d < this_ptr->num_parts) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                pcVar23 = "MySpecialTriangles";
                pSVar36 = local_d8 + this_ptr->num_parts;
                do {
                  cVar1 = *pcVar23;
                  pSVar36->part_name[0] = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar23[1];
                  pcVar23 = pcVar23 + 2;
                  pSVar36->part_name[1] = cVar1;
                  pSVar36 = (SPart *)(pSVar36->part_name + 2);
                } while (cVar1 != '\0');
                this_ptr->parts[this_ptr->num_parts].tri_counts[0] =
                     this_ptr->tri_count[0] - local_154;
                this_ptr->parts[this_ptr->num_parts].cap_tri_counts[0] = 0;
                this_ptr->parts[this_ptr->num_parts].adj_part_count = 0;
                local_154 = this_ptr->tri_count[0];
                this_ptr->num_parts = this_ptr->num_parts + 1;
              }
              else if (iVar22 == 2) {
                local_d4 = 1;
                local_d0 = local_154;
                local_cc = 0;
                if (0 < this_ptr->tri_count[0]) {
                  local_44 = local_154 * 0x12;
                  local_40 = local_154 * 4;
                  do {
                    if (local_d4 == 0) break;
                    local_d4 = 0;
                    local_34 = iVar9;
                    if (iVar9 < this_ptr->tri_count[0]) {
                      local_5c = local_f0 + iVar9;
                      local_60 = local_44;
                      do {
                        if (0xf423e < *local_5c) {
                          local_c8 = (short *)((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).
                                                     vertex_index_0 + local_60);
                          local_c4 = 0;
                          if (0 < this_ptr->tri_count[0]) {
                            local_64 = 0;
                            local_68 = local_f0;
                            do {
                              if (*local_68 < 999999) {
                                local_c0 = (short *)((int)&(this_ptr->tri_data_ptr[0]->
                                                           vertex_indices).vertex_index_0 + local_64
                                                    );
                                iVar22 = 0;
                                local_6c = local_c8 + 3;
                                psVar16 = local_c8;
                                do {
                                  local_bc = psVar16;
                                  iVar21 = 0;
                                  psVar20 = local_c0;
                                  if (*psVar16 != *local_c0) {
                                    do {
                                      iVar21 = iVar21 + 1;
                                      psVar20 = psVar20 + 1;
                                      if (2 < iVar21) goto LAB_00591f48;
                                    } while (*psVar20 != *psVar16);
                                  }
                                  iVar22 = iVar22 + 1;
LAB_00591f48:
                                  psVar16 = psVar16 + 1;
                                } while (psVar16 != local_c8 + 3);
                                if (1 < iVar22) {
                                  iVar22 = local_f0[local_c4];
                                  this_ptr->parts[iVar22].tri_counts[0] =
                                       this_ptr->parts[iVar22].tri_counts[0] + 1;
                                  local_154 = local_154 + 1;
                                  *local_5c = local_f0[local_c4];
                                  break;
                                }
                              }
                              local_c4 = local_c4 + 1;
                              local_64 = local_64 + 0x12;
                              local_68 = local_68 + 1;
                            } while (local_c4 < this_ptr->tri_count[0]);
                          }
                          if (0xf423e < *local_5c) {
                            local_d4 = 1;
                          }
                        }
                        local_34 = local_34 + 1;
                        local_5c = local_5c + 1;
                        local_60 = local_60 + 0x12;
                      } while (local_34 < this_ptr->tri_count[0]);
                    }
                    local_cc = local_cc + 1;
                  } while (local_cc < this_ptr->tri_count[0]);
                }
                local_38 = this_ptr->tri_count[0] + -1;
                piVar15 = local_f0;
                while (local_f0 = piVar15, -1 < local_38) {
                  iVar22 = 0;
                  if (0 < local_38) {
                    local_58 = 0;
                    local_54 = 0x12;
                    do {
                      if (piVar15[1] < *piVar15) {
                        local_18 = iVar22 * 4 + 4;
                        piVar27 = this_ptr->index_data_ptr[0] + iVar22 + 1;
                        piVar35 = this_ptr->index_data_ptr[0] + iVar22;
                        iVar9 = *piVar35;
                        *piVar35 = *piVar27;
                        *piVar27 = iVar9;
                        puVar33 = (uint *)
                                  ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0
                                  + local_54);
                        puVar13 = (uint *)
                                  ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0
                                  + local_58);
                        local_2f4 = *puVar13;
                        *(ushort *)(auStack_2f0 + (uint)bVar38 * -8) =
                             *(ushort *)(puVar13 + (uint)bVar38 * -2 + 1);
                        stack0xfffffd12 = *(uint *)((int)puVar13 + 6);
                        *(ushort *)((int)&uStack_2ec + (uint)bVar38 * -8 + 2) =
                             *(ushort *)((int)puVar13 + (uint)bVar38 * -8 + 10);
                        local_2e8 = puVar13[3];
                        auStack_2e4[(uint)bVar38 * -4] =
                             *(ushort *)(puVar13 + (uint)bVar38 * -2 + 4);
                        puVar31 = puVar13 + (uint)bVar38 * -2 + 1;
                        puVar28 = puVar33 + (uint)bVar38 * -2 + 1;
                        *puVar13 = *puVar33;
                        puVar32 = puVar31 + (uint)bVar38 * -2 + 1;
                        puVar13 = puVar28 + (uint)bVar38 * -2 + 1;
                        *puVar31 = *puVar28;
                        *puVar32 = *puVar13;
                        puVar32[(uint)bVar38 * -2 + 1] = puVar13[(uint)bVar38 * -2 + 1];
                        *(ushort *)(puVar32 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1) =
                             *(ushort *)
                              (puVar13 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1);
                        puVar28 = puVar33 + (uint)bVar38 * -2 + 1;
                        *puVar33 = local_2f4;
                        puVar33 = puVar28 + (uint)bVar38 * -2 + 1;
                        puVar13 = &uStack_2ec + (uint)bVar38 * -2 + (uint)bVar38 * -2;
                        *puVar28 = *(uint *)(auStack_2f0 + (uint)bVar38 * -8);
                        *puVar33 = *puVar13;
                        puVar33[(uint)bVar38 * -2 + 1] = puVar13[(uint)bVar38 * -2 + 1];
                        *(ushort *)(puVar33 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1) =
                             *(ushort *)
                              (puVar13 + (uint)bVar38 * -2 + 1 + (uint)bVar38 * -2 + 1);
                        iVar9 = *piVar15;
                        *piVar15 = *(int *)((int)local_f0 + local_18);
                        *(int *)((int)local_f0 + local_18) = iVar9;
                      }
                      iVar22 = iVar22 + 1;
                      piVar15 = piVar15 + 1;
                      local_58 = local_58 + 0x12;
                      local_54 = local_54 + 0x12;
                    } while (iVar22 < local_38);
                  }
                  local_38 = local_38 + -1;
                  piVar15 = local_f0;
                }
                iVar22 = 1;
              }
            } while (local_154 != this_ptr->tri_count[0]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          shape_memdbg_cpp_free_FUN_005fe659(local_f0);
          local_f0 = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          pSVar14 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((this_ptr->tri_count[0] + local_158) * 0x12,
                               "..\\core\\skeledit.cpp",0xf1a);
          local_150 = pSVar14;
          local_14c = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                ((this_ptr->tri_count[0] + local_158) * 4,
                                 "..\\core\\skeledit.cpp",0xf1b);
          if ((pSVar14 == (SInputFace *)0x0) || (local_14c == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          pSVar14 = local_150;
          uVar19 = this_ptr->tri_count[0] * 0x12;
          pSVar29 = this_ptr->tri_data_ptr[0];
          pSVar34 = local_150;
          for (uVar18 = uVar19 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            uVar2 = (pSVar29->vertex_indices).vertex_index_1;
            (pSVar34->vertex_indices).vertex_index_0 = (pSVar29->vertex_indices).vertex_index_0;
            (pSVar34->vertex_indices).vertex_index_1 = uVar2;
            pSVar29 = (SInputFace *)((int)pSVar29 + (uint)bVar38 * -8 + 4);
            pSVar34 = (SInputFace *)((int)pSVar34 + (uint)bVar38 * -8 + 4);
          }
          for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            *(char *)&(pSVar34->vertex_indices).vertex_index_0 =
                 (char)(pSVar29->vertex_indices).vertex_index_0;
            pSVar29 = (SInputFace *)((int)pSVar29 + (uint)bVar38 * -2 + 1);
            pSVar34 = (SInputFace *)((int)pSVar34 + (uint)bVar38 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->tri_data_ptr[0]);
          this_ptr->tri_data_ptr[0] = pSVar14;
          piVar15 = this_ptr->index_data_ptr[0];
          piVar35 = local_14c;
          for (uVar19 = this_ptr->tri_count[0] & 0x3fffffff; uVar19 != 0; uVar19 = uVar19 - 1) {
            *piVar35 = *piVar15;
            piVar15 = piVar15 + (uint)bVar38 * -2 + 1;
            piVar35 = piVar35 + (uint)bVar38 * -2 + 1;
          }
          for (iVar22 = 0; iVar22 != 0; iVar22 = iVar22 + -1) {
            *(char *)piVar35 = (char)*piVar15;
            piVar15 = (int *)((int)piVar15 + (uint)bVar38 * -2 + 1);
            piVar35 = (int *)((int)piVar35 + (uint)bVar38 * -2 + 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf24;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->index_data_ptr[0]);
          g_CurrentDebugLine = 0xf28;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          this_ptr->index_data_ptr[0] = local_14c;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->cap_index_ptr[0]);
          this_ptr->cap_index_ptr[0] = (int *)0x0;
          if (0 < local_158) {
            piVar15 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (local_158 * 4,"..\\core\\skeledit.cpp",0xf2b);
            this_ptr->cap_index_ptr[0] = piVar15;
            if (piVar15 == (int *)0x0) {
              g_CurrentFilename = "..\\core\\skeledit.cpp";
              g_CurrentLineNumber = 0xf2c;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
            }
          }
          local_3c = 0;
          this_ptr->cap_tri_count[0] = 0;
          if (0 < this_ptr->num_parts) {
            local_a8 = this_ptr->texture_sets;
            local_48 = this_ptr;
            local_a4 = local_a8;
            do {
              if ((0 < local_48->parts[0].cap_tri_counts[0]) && (local_b8 = 0, 0 < (int)local_16c))
              {
                local_4c = local_184;
                do {
                  local_b4 = local_4c;
                  if (((*(int *)((int)local_4c + 4) == 3) &&
                      (local_3c == *(int *)((int)local_4c + 8))) &&
                     (*(int *)((int)local_4c + 0xc) < 0)) {
                    iVar22 = this_ptr->tri_count[0] + this_ptr->cap_tri_count[0];
                    local_b0 = this_ptr->tri_data_ptr[0] + iVar22;
                    if (local_160 < 0) {
                      iVar22 = *(int *)((int)local_4c + 0x14);
                      if (iVar22 < 0) goto LAB_00591835;
                      iVar9 = 0;
                      if (0 < this_ptr->num_textures) {
                        pcVar23 = local_a8->textures[0].textures[0].texture_name;
                        do {
                          splitpath
                                    (pcVar23,(char *)0x0,(char *)0x0,local_740,(char *)0x0);
                          iVar21 = stricmp
                                             (local_a1ec + iVar22 * 0x100,local_740);
                          if (iVar21 == 0) break;
                          iVar9 = iVar9 + 1;
                          pcVar23 = pcVar23 + 0x48;
                        } while (iVar9 < this_ptr->num_textures);
                      }
                      if (this_ptr->num_textures <= iVar9) {
                        if (0x4f < this_ptr->num_textures) {
                          g_CurrentFilename = "..\\core\\skeledit.cpp";
                          g_CurrentLineNumber = 0xf5d;
                          core_main_c_displayErrorAndQuit_FUN_00506f10
                                    ("Too many model textures!");
                        }
                        _sprintf
                                  (local_a4->textures[this_ptr->num_textures].textures[0].
                                   texture_name,"%s.raw");
                        this_ptr->num_textures = this_ptr->num_textures + 1;
                      }
                      this_ptr->index_data_ptr[0]
                      [this_ptr->tri_count[0] + this_ptr->cap_tri_count[0]] = iVar9;
                    }
                    else {
                      this_ptr->index_data_ptr[0][iVar22] = local_160;
                    }
                    local_20 = 0;
                    pSVar14 = local_b0;
                    pvVar37 = local_b4;
                    do {
                      pCVar25 = &local_188->min + *(int *)((int)pvVar37 + 0x18);
                      local_1c4 = pCVar25->x;
                      local_1c0 = pCVar25->y;
                      local_1bc = pCVar25->z;
                      local_a1f0 = 1e+20;
                      iVar22 = 0;
                      if (0 < this_ptr->vertex_count[0]) {
                        iVar9 = 0;
                        do {
                          pSVar5 = this_ptr->vertex_data_ptr[0];
                          local_218 = *(float *)((int)pSVar5->bone_weights + iVar9 + 0xc) -
                                      local_1c4;
                          local_214 = *(float *)((int)pSVar5->bone_weights + iVar9 + 0x10) -
                                      local_1c0;
                          local_210 = *(float *)((int)pSVar5->bone_weights + iVar9 + 0x14) -
                                      local_1bc;
                          local_a0 = local_210 * local_210 +
                                     local_218 * local_218 + local_214 * local_214;
                          if (local_a0 < local_a1f0) {
                            (pSVar14->vertex_indices).vertex_index_0 = (ushort)iVar22;
                            local_a1f0 = local_a0;
                          }
                          iVar22 = iVar22 + 1;
                          iVar9 = iVar9 + 0x34;
                        } while (iVar22 < this_ptr->vertex_count[0]);
                      }
                      if ((float)0.20000000000000001 < local_a1f0) {
                        _sprintf
                                  (g_SkeleditStatusMessage,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        goto LAB_0058f8e7;
                      }
                      iVar22 = *(int *)((int)pvVar37 + 0x1c) >> 8;
                      iVar9 = *(int *)((int)pvVar37 + 0x20) >> 8;
                      if (iVar22 < 0) {
                        iVar22 = 0;
                      }
                      else if (0xffff < iVar22) {
                        iVar22 = 0xffff;
                      }
                      if (iVar9 < 0) {
                        iVar9 = 0;
                      }
                      else if (0xffff < iVar9) {
                        iVar9 = 0xffff;
                      }
                      pvVar37 = (void *)((int)pvVar37 + 0xc);
                      pSVar14->v_coord_0 = (ushort)iVar9;
                      local_20 = local_20 + 1;
                      pSVar14->u_coord_0 = (ushort)iVar22;
                      pSVar14 = (SInputFace *)&(pSVar14->vertex_indices).vertex_index_1;
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
                            iVar22 = local_9c + 6;
                            local_98 = 0.0;
                            pvVar37 = local_b4;
                            do {
                              pCVar25 = &local_188->min + *(int *)((int)pvVar37 + 0x18);
                              local_248 = pCVar25->x;
                              local_244 = pCVar25->y;
                              local_18 = 3;
                              local_240 = pCVar25->z;
                              pCVar25 = &local_188->min +
                                        *(int *)((int)local_50 + (iVar22 % 3) * 0xc + 0x18);
                              local_1ac = pCVar25->x;
                              local_1a8 = pCVar25->y;
                              local_2c0 = local_248 - local_1ac;
                              local_2bc = local_244 - local_1a8;
                              local_1a4 = pCVar25->z;
                              local_2b8 = local_240 - local_1a4;
                              pvVar37 = (void *)((int)pvVar37 + 0xc);
                              iVar22 = iVar22 + -1;
                              local_98 = local_2b8 * local_2b8 +
                                         local_2c0 * local_2c0 + local_2bc * local_2bc + local_98;
                            } while (pvVar37 != (void *)((int)local_b4 + 0x24));
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
                      _sprintf
                                (g_SkeleditStatusMessage,"Can't find opposing part for capped face!");
                      goto LAB_0058f8e7;
                    }
                    this_ptr->cap_index_ptr[0][this_ptr->cap_tri_count[0]] = local_ac;
                    this_ptr->cap_tri_count[0] = this_ptr->cap_tri_count[0] + 1;
                  }
LAB_00591835:
                  local_b8 = local_b8 + 1;
                  local_4c = (void *)((int)local_4c + 0x3c);
                } while (local_b8 < (int)local_16c);
              }
              local_3c = local_3c + 1;
              local_48 = (CDeformableModel *)(local_48->tri_count + 3);
            } while (local_3c < this_ptr->num_parts);
          }
          if (local_158 != this_ptr->cap_tri_count[0]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s");
          iVar22 = 0;
          pCVar12 = this_ptr;
          if (0 < this_ptr->num_parts) {
            do {
              pCVar12->parts[0].adj_part_count = 0;
              iVar22 = iVar22 + 1;
              pCVar12 = (CDeformableModel *)(pCVar12->tri_count + 3);
            } while (iVar22 < this_ptr->num_parts);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_188 != (CBoundingBox3D *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659(&local_188[-1].max.z);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xff6;
          shape_memdbg_cpp_free_FUN_005fe659(local_184);
          p_Var8 = local_180;
          if (local_180 != (_FILE *)0x0) {
            _fprintf(local_180,"Determined parts using %s OK!\n");
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var8,"..\\core\\skeledit.cpp",0xffc);
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determined parts using %s OK!");
          return 1;
        }
        _sprintf
                  (g_SkeleditStatusMessage,"Deformable model has more faces than segmented model!");
        goto LAB_0058f8e7;
      }
      pcVar23 = "Too many parts in %s";
    }
    else {
LAB_00590a70:
      pcVar23 = "%s is corrupt";
    }
  }
LAB_0058f8da:
  _sprintf(g_SkeleditStatusMessage,pcVar23);
LAB_0058f8e7:
  if (local_ec != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_ec,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_180 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_180,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_188 != (CBoundingBox3D *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&local_188[-1].max.z);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  shape_memdbg_cpp_free_FUN_005fe659(local_184);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_17c != (float *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(local_17c + -1);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_178 != (float *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(local_178 + -1);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe8;
  shape_memdbg_cpp_free_FUN_005fe659(local_174);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe9;
  shape_memdbg_cpp_free_FUN_005fe659(local_170);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbea;
  shape_memdbg_cpp_free_FUN_005fe659(local_f0);
  return 0;
}
