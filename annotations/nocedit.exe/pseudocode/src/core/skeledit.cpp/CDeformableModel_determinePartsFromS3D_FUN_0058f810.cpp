// Name: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
// Address: 0058f810
// Address Range: [[0058f810, 0059251f]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,char *filename)

{
  uint uVar1;
  char cVar2;
  ushort uVar5;
  float fVar7;
  SVert *pSVar8;
  CBoundingBox3D *pCVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _FILE *p_Var13;
  int iVar9;
  int iVar14;
  float *pfVar10;
  CBoundingBox3D *pCVar11;
  float *pfVar15;
  CDeformableModel *pCVar12;
  uint *puVar13;
  int *piVar16;
  SInputFace *pSVar14;
  int *piVar15;
  short *psVar16;
  int iVar17;
  void *pvVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  CDeformableModel *pCVar21;
  short *psVar20;
  int iVar21;
  CVector3f *pCVar22;
  int *piVar23;
  int iVar22;
  int iVar24;
  char *pcVar23;
  ushort *puVar24;
  CVector3f *pCVar27;
  uint *puVar29;
  void *pvVar30;
  CVector3f *pCVar25;
  CVector3f *pCVar26;
  int *piVar27;
  uint *puVar28;
  SInputFace *pSVar29;
  int *piVar31;
  uint *puVar34;
  SInputFace *pSVar35;
  char *pcVar36;
  char *pcVar30;
  uint *puVar31;
  uint *puVar32;
  uint *puVar33;
  SInputFace *pSVar34;
  int *piVar35;
  SPart *pSVar36;
  uint *puVar37;
  uint *puVar38;
  uint *puVar39;
  void *pvVar37;
  byte bVar38;
  byte bVar40;
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
  ushort uVar2;
  char cVar1;
  float fVar6;
  SVert *pSVar5;
  ushort uVar4;
  ushort uVar3;
  _FILE *file;
  _FILE *p_Var8;
  CEditorTools *this_ptr_00;
  double dVar7;
  
  bVar40 = 0;
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
    pcVar36 = "Can't open %s";
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
    p_Var13 = local_ec;
    iVar22 = 1;
    do {
      iVar9 = _fgetc(p_Var13);
      file = local_ec;
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
    _fscanf(local_ec,"%d\n");
    if ((local_e8 < 0x65) || (0x67 < local_e8)) {
      _sprintf
                (g_SkeleditStatusMessage,"%s has incorrect S3D version %d",filename + 0x200);
      goto LAB_0058f8e7;
    }
    iVar24 = 1;
    do {
      iVar14 = _fgetc(file);
      if (iVar14 < 0) break;
    } while ((iVar14 != 10) || (iVar24 = iVar24 + -1, 0 < iVar24));
    iVar24 = _fscanf(local_ec,"%d,%d,%d,%d,%d,%d,%d\n",&local_e4,&local_16c,&local_168,&local_e0,
                        local_164,local_dc);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar24 == 7) {
      if (local_e0 < 0x1f) {
        this_ptr->num_parts = local_e0;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        _fprintf(local_180,"Reading part list from %s\n");
        p_Var13 = local_ec;
        iVar24 = 1;
        do {
          iVar14 = _fgetc(p_Var13);
          if (iVar14 < 0) break;
        } while ((iVar14 != 10) || (iVar24 = iVar24 + -1, 0 < iVar24));
        iVar24 = 0;
        if (0 < this_ptr->num_parts) {
          local_148 = this_ptr->parts;
          local_94 = local_478;
          local_90 = local_400;
          piVar23 = this_ptr->parts[0].tri_counts;
          do {
            local_140 = local_148 + iVar24;
            local_144 = iVar24 * 4;
            iVar14 = _fscanf(local_ec,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_94,local_90,piVar23);
            if (iVar14 != 4) goto LAB_00590a70;
            this_ptr->parts[iVar24].adj_part_count = 0;
            piVar23 = piVar23 + 0x18;
            _fprintf(local_180,"\t%2d: %s, verts=%d, tris=%d\n",iVar24,local_140,
                       *(uint *)((int)local_400 + local_144));
            iVar24 = iVar24 + 1;
            local_94 = local_94 + 4;
            local_90 = local_90 + 1;
          } while (iVar24 < this_ptr->num_parts);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        _fprintf(local_180,"Reading texture list from %s\n");
        p_Var13 = local_ec;
        iVar24 = 1;
        do {
          iVar14 = _fgetc(p_Var13);
          if (iVar14 < 0) break;
        } while ((iVar14 != 10) || (iVar24 = iVar24 + -1, 0 < iVar24));
        if (0x96 < local_e4) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar24 = 0;
        if (0 < local_e4) {
          pcVar23 = local_a1ec;
          do {
            iVar14 = _fscanf(local_ec,"%[^\n]\n");
            if (iVar14 != 1) goto LAB_00590a70;
            splitpath
                      (local_844,(char *)0x0,(char *)0x0,pcVar23,(char *)0x0);
            iVar24 = iVar24 + 1;
            pcVar23 = pcVar23 + 0x100;
          } while (iVar24 < local_e4);
        }
        pcVar36 = "gore";
        pcVar30 = local_388;
        for (iVar24 = 0x19; iVar24 != 0; iVar24 = iVar24 + -1) {
          pcVar30 = pcVar30 + (uint)bVar40 * -8 + 4;
          *(uint *)pcVar30 = *(uint *)pcVar36;
          pcVar36 = pcVar36 + ((uint)bVar40 * -2 + 1) * 4;
          pcVar30 = pcVar30;
        }
        if (*(int *)(filename + 0x308) == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",local_388,100,1);
        }
        local_160 = -1;
        if (local_388[0] != '\0') {
          iVar24 = 0;
          if (0 < this_ptr->num_textures) {
            pcVar36 = this_ptr->texture_sets[0].textures[0].textures[0].texture_name;
            do {
              splitpath
                        (pcVar36,(char *)0x0,(char *)0x0,local_640,(char *)0x0);
              iVar14 = _stricmp(local_388,local_640);
              if (iVar14 == 0) break;
              iVar24 = iVar24 + 1;
              pcVar36 = pcVar36 + 0x48;
            } while (iVar24 < this_ptr->num_textures);
          }
          if (this_ptr->num_textures <= iVar24) {
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
          local_160 = iVar24;
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
        p_Var13 = local_ec;
        iVar24 = 1;
        do {
          iVar14 = _fgetc(p_Var13);
          if (iVar14 < 0) break;
        } while ((iVar14 != 10) || (iVar24 = iVar24 + -1, 0 < iVar24));
        iVar24 = 0;
        pvVar30 = local_184;
        if (0 < (int)local_16c) {
          do {
            iVar14 = _fscanf(local_ec,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_13c,&local_278,
                                &local_194,&local_200,local_274,local_190,local_1fc,local_270,
                                local_18c);
            if (iVar14 != 10) goto LAB_00590a70;
            *(uint *)((int)pvVar30 + 4) = 3;
            iVar14 = 0;
            *(uint *)((int)pvVar30 + 0x14) = local_13c[0];
            dVar7 = 65536;
            pvVar17 = pvVar30;
            do {
              *(uint *)((int)pvVar17 + 0x18) = *(uint *)(local_274 + iVar14 + -4);
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_190 + iVar14 + -4) * dVar7));
              *(int *)((int)pvVar17 + 0x1c) = local_18;
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_1fc + iVar14 + -4) * dVar7));
              iVar14 = iVar14 + 4;
              *(int *)((int)pvVar17 + 0x20) = local_18;
              pvVar17 = (void *)((int)pvVar17 + 0xc);
            } while (iVar14 != 0xc);
            _fprintf(local_180,"\t%4d: %4d %4d %4d\n",iVar24,
                       *(uint *)((int)pvVar30 + 0x18),*(uint *)((int)pvVar30 + 0x24));
            iVar24 = iVar24 + 1;
            pvVar30 = (void *)((int)pvVar30 + 0x3c);
          } while (iVar24 < (int)local_16c);
        }
        pfVar10 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)local_168 * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_188 = (CBoundingBox3D *)pfVar10;
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
        p_Var13 = local_ec;
        iVar24 = 1;
        do {
          iVar14 = _fgetc(p_Var13);
          if (iVar14 < 0) break;
        } while ((iVar14 != 10) || (iVar24 = iVar24 + -1, 0 < iVar24));
        iVar24 = 0;
        if (0 < (int)local_168) {
          local_8c = &(local_188->min).z;
          do {
            pCVar25 = &local_188->min + iVar24;
            iVar14 = _fscanf(local_ec,"%f,%f,%f\n");
            if (iVar14 != 3) goto LAB_00590a70;
            _fprintf(local_180,"\t%4d: %7.3f %7.3f %7.3f\n",iVar24,(double)pCVar25->x,
                       (double)pCVar25->y,(double)pCVar25->z);
            iVar24 = iVar24 + 1;
            local_8c = local_8c + 3;
          } while (iVar24 < (int)local_168);
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
                    iVar14 = 0;
                    iVar24 = local_128;
                    pvVar30 = local_84;
                    do {
                      pCVar22 = &local_188->min + *(int *)((int)pvVar30 + 0x18);
                      local_29c = pCVar22->x;
                      local_298 = pCVar22->y;
                      local_18 = 3;
                      local_294 = pCVar22->z;
                      pCVar22 = &local_188->min +
                                *(int *)((iVar24 % 3) * 0xc + 0x18 + (int)local_88);
                      local_1f4 = pCVar22->x;
                      local_1f0 = pCVar22->y;
                      local_224 = local_29c - local_1f4;
                      local_1ec = pCVar22->z;
                      local_220 = local_298 - local_1f0;
                      local_21c = local_294 - local_1ec;
                      if ((((float)0.02 < ABS(local_224)) ||
                          ((float)0.02 < ABS(local_220))) ||
                         ((float)0.02 < ABS(local_21c))) break;
                      pvVar30 = (void *)((int)pvVar30 + 0xc);
                      iVar14 = iVar14 + 1;
                      iVar24 = iVar24 + 1;
                    } while (iVar14 < 3);
                    if (iVar14 == 3) {
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
        iVar24 = 1;
        pCVar9 = local_188;
        if (1 < (int)local_168) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_30c,&pCVar9->max);
            iVar24 = iVar24 + 1;
            pCVar9 = (CBoundingBox3D *)&pCVar9->max;
          } while (iVar24 < (int)local_168);
        }
        pSVar5 = this_ptr->vertex_data_ptr[0];
        pCVar22 = &pSVar5->position;
        if (&local_324 != (CBoundingBox3D *)pCVar22) {
          local_324.min.x = pCVar22->x;
          local_324.min.y = (pSVar5->position).y;
          local_324.min.z = (pSVar5->position).z;
        }
        if (&local_324.max != pCVar22) {
          local_324.max.x = pCVar22->x;
          local_324.max.y = (pSVar5->position).y;
          local_324.max.z = (pSVar5->position).z;
        }
        iVar24 = 1;
        if (1 < this_ptr->vertex_count[0]) {
          iVar14 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_324,
                       (CVector3f *)((int)this_ptr->vertex_data_ptr[0]->bone_weights + iVar14 + 0xc)
                      );
            iVar24 = iVar24 + 1;
            iVar14 = iVar14 + 0x34;
          } while (iVar24 < this_ptr->vertex_count[0]);
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
        iVar24 = 0;
        pCVar11 = local_188;
        if (0 < (int)local_168) {
          do {
            (pCVar11->min).x = ((pCVar11->min).x - local_30c.min.x) * local_1dc + local_324.min.x;
            (pCVar11->min).y = ((pCVar11->min).y - local_30c.min.y) * local_1d8 + local_324.min.y;
            iVar24 = iVar24 + 1;
            (pCVar11->min).z = ((pCVar11->min).z - local_30c.min.z) * local_1d4 + local_324.min.z;
            pCVar11 = (CBoundingBox3D *)&pCVar11->max;
          } while (iVar24 < (int)local_168);
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
        pfVar15 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)local_16c * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_17c = pfVar15;
        if (pfVar15 != (float *)0x0) {
          local_17c = pfVar15 + 1;
          *pfVar15 = local_16c;
        }
        fVar7 = (float)this_ptr->tri_count[0];
        pfVar15 = (float *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            ((int)fVar7 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
        local_178 = pfVar15;
        if (pfVar15 != (float *)0x0) {
          local_178 = pfVar15 + 1;
          *pfVar15 = fVar7;
        }
        if ((local_17c == (float *)0x0) || (local_178 == (float *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar24 = 0;
        pvVar30 = local_184;
        pfVar15 = local_17c;
        if (0 < (int)local_16c) {
          do {
            if (*(int *)((int)pvVar30 + 4) == 3) {
              pCVar26 = &local_188->min + *(int *)((int)pvVar30 + 0x18);
              pCVar22 = &local_188->min + *(int *)((int)pvVar30 + 0x24);
              local_2b4 = pCVar22->x - pCVar26->x;
              local_2b0 = pCVar22->y - pCVar26->y;
              local_2ac = pCVar22->z - pCVar26->z;
              pCVar27 = &local_188->min + *(int *)((int)pvVar30 + 0x30);
              local_254 = pCVar27->x - pCVar22->x;
              local_250 = pCVar27->y - pCVar22->y;
              local_24c = pCVar27->z - pCVar22->z;
              fVar11 = local_2ac * local_254 - local_2b4 * local_24c;
              fVar12 = local_2b0 * local_24c - local_2ac * local_250;
              fVar7 = local_2b4 * local_250 - local_2b0 * local_254;
              fVar10 = SQRT(fVar7 * fVar7 + fVar12 * fVar12 + fVar11 * fVar11);
              if (fVar10 <= 0.0) {
                local_19c = 0.0;
                local_1a0 = 0.0;
                local_198 = 0.0;
              }
              else {
                fVar10 = 1.0 / fVar10;
                local_1a0 = fVar12 * fVar10;
                local_19c = fVar11 * fVar10;
                local_198 = fVar7 * fVar10;
              }
              if (pfVar15 != &local_1a0) {
                *pfVar15 = local_1a0;
                pfVar15[1] = local_19c;
                pfVar15[2] = local_198;
              }
            }
            iVar24 = iVar24 + 1;
            pvVar30 = (void *)((int)pvVar30 + 0x3c);
            pfVar15 = pfVar15 + 3;
          } while (iVar24 < (int)local_16c);
        }
        iVar24 = 0;
        if (0 < this_ptr->tri_count[0]) {
          local_80 = 0;
          pfVar15 = local_178;
          do {
            puVar24 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_80);
            uVar2 = puVar24[1];
            uVar3 = *puVar24;
            pSVar8 = this_ptr->vertex_data_ptr[0];
            uVar4 = puVar24[2];
            local_2cc = pSVar8[uVar2].position.x - pSVar8[uVar3].position.x;
            local_2c8 = pSVar8[uVar2].position.y - pSVar8[uVar3].position.y;
            local_2c4 = pSVar8[uVar2].position.z - pSVar8[uVar3].position.z;
            local_260 = pSVar8[uVar4].position.x - pSVar8[uVar2].position.x;
            local_25c = pSVar8[uVar4].position.y - pSVar8[uVar2].position.y;
            local_258 = pSVar8[uVar4].position.z - pSVar8[uVar2].position.z;
            fVar10 = local_2c4 * local_260 - local_2cc * local_258;
            fVar11 = local_2c8 * local_258 - local_2c4 * local_25c;
            fVar7 = local_2cc * local_25c - local_2c8 * local_260;
            fVar6 = SQRT(fVar7 * fVar7 + fVar11 * fVar11 + fVar10 * fVar10);
            if (fVar6 <= 0.0) {
              local_238 = 0.0;
              local_23c = 0.0;
              local_234 = 0.0;
            }
            else {
              fVar12 = 1.0 / fVar6;
              local_23c = fVar11 * fVar12;
              local_238 = fVar10 * fVar12;
              local_234 = fVar7 * fVar12;
            }
            if (pfVar15 != &local_23c) {
              *pfVar15 = local_23c;
              pfVar15[1] = local_238;
              pfVar15[2] = local_234;
            }
            pfVar15 = pfVar15 + 3;
            iVar24 = iVar24 + 1;
            local_80 = local_80 + 0x12;
          } while (iVar24 < this_ptr->tri_count[0]);
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
          iVar24 = 0;
          if (0 < this_ptr->num_parts) {
            iVar14 = 0;
            do {
              pvVar30 = local_15c;
              for (iVar21 = 0; iVar21 < *(int *)((int)this_ptr->parts[0].tri_counts + iVar14);
                  iVar21 = iVar21 + 1) {
                *(uint *)((int)pvVar30 + 0xc) = 0xffffffff;
                *(int *)((int)pvVar30 + 8) = iVar24;
                pvVar30 = (void *)((int)pvVar30 + 0x3c);
              }
              local_15c = (void *)((int)local_15c +
                                  *(int *)((int)this_ptr->parts[0].tri_counts + iVar14) * 0x3c);
              iVar14 = iVar14 + 0x60;
              iVar24 = iVar24 + 1;
            } while (iVar24 < this_ptr->num_parts);
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
                pfVar15 = (float *)(local_124 * 4 + (int)local_174);
                *pfVar15 = 1e+30;
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
                        iVar14 = 0;
                        local_104 = 0.0;
                        iVar24 = local_10c;
                        pvVar30 = local_7c;
                        do {
                          pCVar22 = &local_188->min + *(int *)((int)pvVar30 + 0x18);
                          local_290 = pCVar22->x;
                          local_28c = pCVar22->y;
                          local_288 = pCVar22->z;
                          uVar5 = (&(local_120->vertex_indices).vertex_index_0)[iVar24 % 3];
                          pSVar8 = this_ptr->vertex_data_ptr[0];
                          local_1d0 = pSVar8[uVar5].position.x;
                          local_1cc = pSVar8[uVar5].position.y;
                          local_20c = local_1d0 - local_290;
                          local_1c8 = pSVar8[uVar5].position.z;
                          local_208 = local_1cc - local_28c;
                          local_204 = local_1c8 - local_288;
                          if ((((float)0.20000000000000001 < ABS(local_20c)) ||
                              ((float)0.20000000000000001 < ABS(local_208))) ||
                             ((float)0.20000000000000001 < ABS(local_204))) break;
                          fVar7 = local_204 * local_204 +
                                  local_20c * local_20c + local_208 * local_208;
                          iVar24 = iVar24 + 1;
                          pvVar30 = (void *)((int)pvVar30 + 0xc);
                          local_104 = fVar7 * fVar7 * fVar7 + local_104;
                          iVar14 = iVar14 + 1;
                        } while (iVar14 < 3);
                        if (((2 < iVar14) &&
                            (local_104 = local_104 * local_110, local_104 <= *pfVar15)) &&
                           ((*(int *)((int)local_7c + 0xc) < 0 ||
                            (local_104 <
                             *(float *)(*(int *)((int)local_7c + 0xc) * 4 + (int)local_174))))) {
                          local_11c = local_118;
                          *pfVar15 = local_104;
                        }
                        local_10c = local_10c + 1;
                      } while (local_10c < 3);
                    }
                    local_78 = local_78 + 3;
                    local_118 = local_118 + 1;
                    local_7c = (void *)((int)local_7c + 0x3c);
                    local_fc = pfVar15;
                    local_f8 = pfVar15;
                  } while (local_118 < (int)local_16c);
                }
                if (local_11c == -1) break;
                iVar24 = *(int *)((int)local_184 + local_11c * 0x3c + 0xc);
                *(int *)((int)local_184 + local_11c * 0x3c + 0xc) = local_124;
                local_124 = iVar24;
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
          iVar24 = 0;
          local_174 = (void *)0x0;
          local_158 = 0;
          pCVar12 = this_ptr;
          if (0 < this_ptr->num_parts) {
            do {
              pCVar12->parts[0].cap_tri_counts[0] = 0;
              pCVar12->parts[0].tri_counts[0] = 0;
              iVar24 = iVar24 + 1;
              pCVar12 = (CDeformableModel *)(pCVar12->tri_count + 3);
            } while (iVar24 < this_ptr->num_parts);
          }
          puVar13 = (uint *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (this_ptr->tri_count[0] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_170 = puVar13;
          local_f0 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                               (this_ptr->tri_count[0] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((puVar13 == (uint *)0x0) || (local_f0 == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar24 = 0;
          piVar23 = local_f0;
          puVar29 = local_170;
          if (0 < this_ptr->tri_count[0]) {
            do {
              *piVar23 = 999999;
              iVar24 = iVar24 + 1;
              *puVar29 = 0xffffffff;
              piVar23 = piVar23 + 1;
              puVar29 = puVar29 + 1;
            } while (iVar24 < this_ptr->tri_count[0]);
          }
          iVar24 = 0;
          local_154 = 0;
          pvVar30 = local_184;
          if (0 < (int)local_16c) {
            do {
              if (*(int *)((int)pvVar30 + 4) == 3) {
                iVar14 = *(int *)((int)pvVar30 + 8);
                iVar17 = *(int *)((int)pvVar30 + 0xc);
                if (iVar17 < 0) {
                  local_158 = local_158 + 1;
                  this_ptr->parts[iVar14].cap_tri_counts[0] =
                       this_ptr->parts[iVar14].cap_tri_counts[0] + 1;
                }
                else {
                  local_f4 = iVar17 * 4;
                  if (-1 < (int)local_170[iVar17]) {
                    pcVar36 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  local_f0[iVar17] = iVar14;
                  local_170[iVar17] = iVar24;
                  local_154 = local_154 + 1;
                  this_ptr->parts[iVar14].tri_counts[0] = this_ptr->parts[iVar14].tri_counts[0] + 1;
                }
              }
              iVar24 = iVar24 + 1;
              pvVar30 = (void *)((int)pvVar30 + 0x3c);
            } while (iVar24 < (int)local_16c);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          shape_memdbg_cpp_free_FUN_005fe659(local_170);
          local_30 = this_ptr->tri_count[0] + -1;
          local_170 = (uint *)0x0;
          piVar23 = local_f0;
          while (local_f0 = piVar23, -1 < local_30) {
            iVar24 = 0;
            if (0 < local_30) {
              local_74 = 0;
              local_70 = 0x12;
              do {
                if (piVar23[1] < *piVar23) {
                  local_18 = iVar24 * 4 + 4;
                  piVar27 = this_ptr->index_data_ptr[0] + iVar24 + 1;
                  piVar16 = this_ptr->index_data_ptr[0] + iVar24;
                  iVar14 = *piVar16;
                  *piVar16 = *piVar27;
                  *piVar27 = iVar14;
                  puVar39 = (uint *)
                            ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                            local_70);
                  puVar29 = (uint *)
                            ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                            local_74);
                  local_2e0 = *puVar29;
                  *(ushort *)(auStack_2dc + (uint)bVar40 * -8) =
                       *(ushort *)(puVar29 + (uint)bVar40 * -2 + 1);
                  stack0xfffffd26 = *(uint *)((int)puVar29 + 6);
                  *(ushort *)((int)&uStack_2d8 + (uint)bVar40 * -8 + 2) =
                       *(ushort *)((int)puVar29 + (uint)bVar40 * -8 + 10);
                  local_2d4 = puVar29[3];
                  auStack_2d0[(uint)bVar40 * -4] = *(ushort *)(puVar29 + (uint)bVar40 * -2 + 4);
                  puVar31 = puVar29 + (uint)bVar40 * -2 + 1;
                  puVar28 = puVar39 + (uint)bVar40 * -2 + 1;
                  *puVar29 = *puVar39;
                  puVar32 = puVar31 + (uint)bVar40 * -2 + 1;
                  puVar29 = puVar28 + (uint)bVar40 * -2 + 1;
                  *puVar31 = *puVar28;
                  *puVar32 = *puVar29;
                  puVar32[(uint)bVar40 * -2 + 1] = puVar29[(uint)bVar40 * -2 + 1];
                  *(ushort *)(puVar32 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1) =
                       *(ushort *)(puVar29 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1);
                  *puVar39 = local_2e0;
                  puVar33 = puVar39 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1;
                  puVar29 = &uStack_2d8 + (uint)bVar40 * -2 + (uint)bVar40 * -2;
                  puVar39[(uint)bVar40 * -2 + 1] = *(uint *)(auStack_2dc + (uint)bVar40 * -8);
                  *puVar33 = *puVar29;
                  puVar33[(uint)bVar40 * -2 + 1] = puVar29[(uint)bVar40 * -2 + 1];
                  *(ushort *)(puVar33 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1) =
                       *(ushort *)(puVar29 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1);
                  iVar14 = *piVar23;
                  *piVar23 = *(int *)((int)local_f0 + local_18);
                  *(int *)((int)local_f0 + local_18) = iVar14;
                }
                iVar24 = iVar24 + 1;
                piVar23 = piVar23 + 1;
                local_74 = local_74 + 0x12;
                local_70 = local_70 + 0x12;
              } while (iVar24 < local_30);
            }
            local_30 = local_30 + -1;
            piVar23 = local_f0;
          }
          iVar24 = 2;
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
                  iVar24 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     (&local_bec,local_540,iVar24,0);
                } while (iVar24 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_bec,0);
              }
              iVar14 = local_154;
              if (iVar24 == 0) {
                this_ptr->tri_count[0] = local_154;
              }
              else if (iVar24 == 1) {
                if (0x1d < this_ptr->num_parts) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                pcVar36 = "MySpecialTriangles";
                pSVar36 = local_d8 + this_ptr->num_parts;
                do {
                  cVar1 = *pcVar36;
                  pSVar36->part_name[0] = cVar1;
                  if (cVar1 == '\0') break;
                  cVar2 = pcVar36[1];
                  pcVar36 = pcVar36 + 2;
                  pSVar36->part_name[1] = cVar2;
                  pSVar36 = (SPart *)(pSVar36->part_name + 2);
                } while (cVar2 != '\0');
                this_ptr->parts[this_ptr->num_parts].tri_counts[0] =
                     this_ptr->tri_count[0] - local_154;
                this_ptr->parts[this_ptr->num_parts].cap_tri_counts[0] = 0;
                this_ptr->parts[this_ptr->num_parts].adj_part_count = 0;
                local_154 = this_ptr->tri_count[0];
                this_ptr->num_parts = this_ptr->num_parts + 1;
              }
              else if (iVar24 == 2) {
                local_d4 = 1;
                local_d0 = local_154;
                local_cc = 0;
                if (0 < this_ptr->tri_count[0]) {
                  local_44 = local_154 * 0x12;
                  local_40 = local_154 * 4;
                  do {
                    if (local_d4 == 0) break;
                    local_d4 = 0;
                    local_34 = iVar14;
                    if (iVar14 < this_ptr->tri_count[0]) {
                      local_5c = local_f0 + iVar14;
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
                                iVar24 = 0;
                                local_6c = local_c8 + 3;
                                psVar16 = local_c8;
                                do {
                                  local_bc = psVar16;
                                  iVar17 = 0;
                                  psVar20 = local_c0;
                                  if (*psVar16 != *local_c0) {
                                    do {
                                      iVar17 = iVar17 + 1;
                                      psVar20 = psVar20 + 1;
                                      if (2 < iVar17) goto LAB_00591f48;
                                    } while (*psVar20 != *psVar16);
                                  }
                                  iVar24 = iVar24 + 1;
LAB_00591f48:
                                  psVar16 = psVar16 + 1;
                                } while (psVar16 != local_c8 + 3);
                                if (1 < iVar24) {
                                  iVar24 = local_f0[local_c4];
                                  this_ptr->parts[iVar24].tri_counts[0] =
                                       this_ptr->parts[iVar24].tri_counts[0] + 1;
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
                piVar23 = local_f0;
                while (local_f0 = piVar23, -1 < local_38) {
                  iVar24 = 0;
                  if (0 < local_38) {
                    local_58 = 0;
                    local_54 = 0x12;
                    do {
                      if (piVar23[1] < *piVar23) {
                        local_18 = iVar24 * 4 + 4;
                        piVar31 = this_ptr->index_data_ptr[0] + iVar24 + 1;
                        piVar16 = this_ptr->index_data_ptr[0] + iVar24;
                        iVar14 = *piVar16;
                        *piVar16 = *piVar31;
                        *piVar31 = iVar14;
                        puVar39 = (uint *)
                                  ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0
                                  + local_54);
                        puVar29 = (uint *)
                                  ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0
                                  + local_58);
                        uVar1 = *puVar29;
                        *(ushort *)(auStack_2f0 + (uint)bVar40 * -8) =
                             *(ushort *)(puVar29 + (uint)bVar40 * -2 + 1);
                        stack0xfffffd12 = *(uint *)((int)puVar29 + 6);
                        *(ushort *)((int)&uStack_2ec + (uint)bVar40 * -8 + 2) =
                             *(ushort *)((int)puVar29 + (uint)bVar40 * -8 + 10);
                        local_2e8 = puVar29[3];
                        auStack_2e4[(uint)bVar40 * -4] =
                             *(ushort *)(puVar29 + (uint)bVar40 * -2 + 4);
                        puVar37 = puVar29 + (uint)bVar40 * -2 + 1;
                        puVar34 = puVar39 + (uint)bVar40 * -2 + 1;
                        *puVar29 = *puVar39;
                        puVar38 = puVar37 + (uint)bVar40 * -2 + 1;
                        puVar29 = puVar34 + (uint)bVar40 * -2 + 1;
                        *puVar37 = *puVar34;
                        *puVar38 = *puVar29;
                        puVar38[(uint)bVar40 * -2 + 1] = puVar29[(uint)bVar40 * -2 + 1];
                        *(ushort *)(puVar38 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1) =
                             *(ushort *)
                              (puVar29 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1);
                        puVar34 = puVar39 + (uint)bVar40 * -2 + 1;
                        *puVar39 = uVar1;
                        puVar39 = puVar34 + (uint)bVar40 * -2 + 1;
                        puVar29 = &uStack_2ec + (uint)bVar40 * -2 + (uint)bVar40 * -2;
                        *puVar34 = *(uint *)(auStack_2f0 + (uint)bVar40 * -8);
                        *puVar39 = *puVar29;
                        puVar39[(uint)bVar40 * -2 + 1] = puVar29[(uint)bVar40 * -2 + 1];
                        *(ushort *)(puVar39 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1) =
                             *(ushort *)
                              (puVar29 + (uint)bVar40 * -2 + 1 + (uint)bVar40 * -2 + 1);
                        iVar14 = *piVar23;
                        *piVar23 = *(int *)((int)local_f0 + local_18);
                        *(int *)((int)local_f0 + local_18) = iVar14;
                      }
                      iVar24 = iVar24 + 1;
                      piVar23 = piVar23 + 1;
                      local_58 = local_58 + 0x12;
                      local_54 = local_54 + 0x12;
                    } while (iVar24 < local_38);
                  }
                  local_38 = local_38 + -1;
                  piVar23 = local_f0;
                }
                iVar24 = 1;
              }
            } while (local_154 != this_ptr->tri_count[0]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          shape_memdbg_cpp_free_FUN_005fe659(local_f0);
          local_f0 = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          pSVar14 = (SInputFace *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              ((this_ptr->tri_count[0] + local_158) * 0x12,
                               "..\\core\\skeledit.cpp",0xf1a);
          local_150 = pSVar14;
          local_14c = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                ((this_ptr->tri_count[0] + local_158) * 4,
                                 "..\\core\\skeledit.cpp",0xf1b);
          if ((pSVar14 == (SInputFace *)0x0) || (local_14c == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          pSVar35 = local_150;
          uVar20 = this_ptr->tri_count[0] * 0x12;
          pSVar29 = this_ptr->tri_data_ptr[0];
          pSVar34 = local_150;
          for (uVar18 = uVar20 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            uVar5 = (pSVar29->vertex_indices).vertex_index_1;
            (pSVar34->vertex_indices).vertex_index_0 = (pSVar29->vertex_indices).vertex_index_0;
            (pSVar34->vertex_indices).vertex_index_1 = uVar5;
            pSVar29 = (SInputFace *)((int)pSVar29 + (uint)bVar40 * -8 + 4);
            pSVar34 = (SInputFace *)((int)pSVar34 + (uint)bVar40 * -8 + 4);
          }
          for (uVar19 = uVar20 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            pSVar34 = (SInputFace *)((int)pSVar34 + (uint)bVar40 * -2 + 1);
            pSVar29 = (SInputFace *)((int)pSVar29 + (uint)bVar40 * -2 + 1);
            *(char *)&(pSVar34->vertex_indices).vertex_index_0 =
                 (char)(pSVar29->vertex_indices).vertex_index_0;
            pSVar29 = pSVar29;
            pSVar34 = pSVar34;
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->tri_data_ptr[0]);
          this_ptr->tri_data_ptr[0] = pSVar35;
          piVar23 = this_ptr->index_data_ptr[0];
          piVar35 = local_14c;
          for (uVar20 = this_ptr->tri_count[0] & 0x3fffffff; uVar20 != 0; uVar20 = uVar20 - 1) {
            *piVar35 = *piVar23;
            piVar23 = piVar23 + (uint)bVar40 * -2 + 1;
            piVar35 = piVar35 + (uint)bVar40 * -2 + 1;
          }
          for (iVar24 = 0; iVar24 != 0; iVar24 = iVar24 + -1) {
            piVar35 = (int *)((int)piVar35 + (uint)bVar40 * -2 + 1);
            *(char *)piVar35 = (char)*piVar23;
            piVar23 = (int *)((int)piVar23 + (uint)bVar40 * -2 + 1);
            piVar35 = piVar35;
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
            piVar15 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
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
                    iVar24 = this_ptr->tri_count[0] + this_ptr->cap_tri_count[0];
                    local_b0 = this_ptr->tri_data_ptr[0] + iVar24;
                    if (local_160 < 0) {
                      iVar24 = *(int *)((int)local_4c + 0x14);
                      if (iVar24 < 0) goto LAB_00591835;
                      iVar14 = 0;
                      if (0 < this_ptr->num_textures) {
                        pcVar36 = local_a8->textures[0].textures[0].texture_name;
                        do {
                          splitpath
                                    (pcVar36,(char *)0x0,(char *)0x0,local_740,(char *)0x0);
                          iVar17 = _stricmp
                                             (local_a1ec + iVar24 * 0x100,local_740);
                          if (iVar17 == 0) break;
                          iVar14 = iVar14 + 1;
                          pcVar36 = pcVar36 + 0x48;
                        } while (iVar14 < this_ptr->num_textures);
                      }
                      if (this_ptr->num_textures <= iVar14) {
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
                      [this_ptr->tri_count[0] + this_ptr->cap_tri_count[0]] = iVar14;
                    }
                    else {
                      this_ptr->index_data_ptr[0][iVar24] = local_160;
                    }
                    local_20 = 0;
                    pSVar35 = local_b0;
                    pvVar37 = local_b4;
                    do {
                      pCVar22 = &local_188->min + *(int *)((int)pvVar37 + 0x18);
                      local_1c4 = pCVar22->x;
                      local_1c0 = pCVar22->y;
                      local_1bc = pCVar22->z;
                      local_a1f0 = 1e+20;
                      iVar24 = 0;
                      if (0 < this_ptr->vertex_count[0]) {
                        iVar14 = 0;
                        do {
                          pSVar8 = this_ptr->vertex_data_ptr[0];
                          local_218 = *(float *)((int)pSVar8->bone_weights + iVar14 + 0xc) -
                                      local_1c4;
                          local_214 = *(float *)((int)pSVar8->bone_weights + iVar14 + 0x10) -
                                      local_1c0;
                          local_210 = *(float *)((int)pSVar8->bone_weights + iVar14 + 0x14) -
                                      local_1bc;
                          local_a0 = local_210 * local_210 +
                                     local_218 * local_218 + local_214 * local_214;
                          if (local_a0 < local_a1f0) {
                            (pSVar35->vertex_indices).vertex_index_0 = (ushort)iVar24;
                            local_a1f0 = local_a0;
                          }
                          iVar24 = iVar24 + 1;
                          iVar14 = iVar14 + 0x34;
                        } while (iVar24 < this_ptr->vertex_count[0]);
                      }
                      if ((float)0.20000000000000001 < local_a1f0) {
                        _sprintf
                                  (g_SkeleditStatusMessage,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        goto LAB_0058f8e7;
                      }
                      iVar24 = *(int *)((int)pvVar37 + 0x1c) >> 8;
                      iVar14 = *(int *)((int)pvVar37 + 0x20) >> 8;
                      if (iVar24 < 0) {
                        iVar24 = 0;
                      }
                      else if (0xffff < iVar24) {
                        iVar24 = 0xffff;
                      }
                      if (iVar14 < 0) {
                        iVar14 = 0;
                      }
                      else if (0xffff < iVar14) {
                        iVar14 = 0xffff;
                      }
                      pvVar37 = (void *)((int)pvVar37 + 0xc);
                      pSVar35->v_coord_0 = (ushort)iVar14;
                      local_20 = local_20 + 1;
                      pSVar35->u_coord_0 = (ushort)iVar24;
                      pSVar35 = (SInputFace *)&(pSVar35->vertex_indices).vertex_index_1;
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
                            iVar24 = local_9c + 6;
                            local_98 = 0.0;
                            pvVar30 = local_b4;
                            do {
                              pCVar22 = &local_188->min + *(int *)((int)pvVar30 + 0x18);
                              local_248 = pCVar22->x;
                              local_244 = pCVar22->y;
                              local_18 = 3;
                              local_240 = pCVar22->z;
                              pCVar22 = &local_188->min +
                                        *(int *)((int)local_50 + (iVar24 % 3) * 0xc + 0x18);
                              local_1ac = pCVar22->x;
                              local_1a8 = pCVar22->y;
                              local_2c0 = local_248 - local_1ac;
                              local_2bc = local_244 - local_1a8;
                              local_1a4 = pCVar22->z;
                              local_2b8 = local_240 - local_1a4;
                              pvVar30 = (void *)((int)pvVar30 + 0xc);
                              iVar24 = iVar24 + -1;
                              local_98 = local_2b8 * local_2b8 +
                                         local_2c0 * local_2c0 + local_2bc * local_2bc + local_98;
                            } while (pvVar30 != (void *)((int)local_b4 + 0x24));
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
          iVar24 = 0;
          pCVar21 = this_ptr;
          if (0 < this_ptr->num_parts) {
            do {
              pCVar21->parts[0].adj_part_count = 0;
              iVar24 = iVar24 + 1;
              pCVar21 = (CDeformableModel *)(pCVar21->tri_count + 3);
            } while (iVar24 < this_ptr->num_parts);
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
      pcVar36 = "Too many parts in %s";
    }
    else {
LAB_00590a70:
      pcVar36 = "%s is corrupt";
    }
  }
LAB_0058f8da:
  _sprintf(g_SkeleditStatusMessage,pcVar36);
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
