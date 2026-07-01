// Name: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
// Address: 0058f810
// MANUAL RECONSTRUCTION
// Address Range: [[0058f810, 0059251f] [00605656, 006056e1] [0060c98e, 0060ca21]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)

{
  ushort uVar7;
  float fVar8;
  SVert *pSVar9;
  float fVar12;
  float fVar13;
  float fVar14;
  _FILE *p_Var16;
  short *psVar17;
  int iVar9;
  int iVar18;
  float *pfVar10;
  CVector3f *pCVar19;
  float *pfVar20;
  uint *puVar13;
  SS3DFaceMatch *pSVar21;
  int *piVar22;
  SInputFace *pSVar14;
  int *piVar15;
  short *psVar16;
  int iVar24;
  SMRGLVertex *pvVar17;
  short *psVar20;
  int iVar21;
  CVector3f *pCVar28;
  int *piVar29;
  int iVar22;
  int iVar30;
  char *pcVar23;
  ushort *puVar24;
  CVector3f *pCVar31;
  uint *puVar34;
  SMRGLVertex *pvVar35;
  CVector3f *pCVar25;
  CVector3f *pCVar26;
  int *piVar27;
  int *piVar36;
  SInputFace *pSVar37;
  char *pcVar38;
  SMRGLVertex *pvVar37;
  SInputFace local_swap;
  float local_a1f0;
  char local_a1ec [32552];
  CPickList local_bec;
  char local_844 [260];
  char local_740 [256];
  char local_640 [256];
  char local_540 [200];
  uint local_478 [30];
  uint local_400 [30];
  char local_388 [100];
  CBoundingBox3D local_324;
  CBoundingBox3D local_30c;
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
  CVector3f *local_188;
  SS3DFaceMatch *local_184;
  _FILE *local_180;
  CVector3f *local_17c;
  CVector3f *local_178;
  float *local_174;
  uint *local_170;
  int local_16c;
  int local_168;
  byte local_164 [4];
  int local_160;
  SS3DFaceMatch *local_15c;
  int local_158;
  int local_154;
  SInputFace *local_150;
  int *local_14c;
  SPart *local_148;
  SPart *local_140;
  int local_13c [2];
  SS3DFaceMatch *local_134;
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
  SS3DFaceMatch *local_b4;
  SInputFace *local_b0;
  int local_ac;
  STextureSet *local_a8;
  STextureSet *local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  uint *local_94;
  uint *local_90;
  float *local_8c;
  SS3DFaceMatch *local_88;
  SS3DFaceMatch *local_84;
  SS3DFaceMatch *local_7c;
  float *local_78;
  short *local_6c;
  int *local_68;
  int *local_5c;
  SS3DFaceMatch *local_50;
  SS3DFaceMatch *local_4c;
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
  float fVar6;
  SVert *pSVar5;
  ushort uVar4;
  ushort uVar3;
  _FILE *file;
  _FILE *p_Var8;
  CEditorTools *this_ptr_00;
  double dVar7;

  if (this_ptr->num_lods != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s",entry->s3d_filename);
  local_188 = (CVector3f *)0x0;
  local_184 = (SS3DFaceMatch *)0x0;
  local_180 = (_FILE *)0x0;
  local_17c = (CVector3f *)0x0;
  local_178 = (CVector3f *)0x0;
  local_174 = (float *)0x0;
  local_170 = (uint *)0x0;
  local_f0 = (int *)0x0;
  local_ec = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (entry->s3d_filename,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                        0xbde);
  if (local_ec == (_FILE *)0x0) {
    pcVar38 = "Can't open %s";
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
    _fprintf(local_180,"Matching skeleton parts for %s\n",entry->s3d_filename);
    p_Var16 = local_ec;
    iVar22 = 1;
    do {
      iVar9 = _fgetc(p_Var16);
      file = local_ec;
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
    _fscanf(local_ec,"%d\n",&local_e8);
    if ((local_e8 < 0x65) || (0x67 < local_e8)) {
      _sprintf(g_SkeleditStatusMessage,"%s has incorrect S3D version %d",entry->s3d_filename,local_e8);
      goto LAB_0058f8e7;
    }
    iVar30 = 1;
    do {
      iVar18 = _fgetc(file);
      if (iVar18 < 0) break;
    } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
    iVar30 = _fscanf(local_ec,"%d,%d,%d,%d,%d,%d,%d\n",&local_e4,&local_16c,&local_168,&local_e0,
                        (int *)local_164,(int *)local_dc,&local_d4);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar30 == 7) {
      if (local_e0 < 0x1f) {
        this_ptr->num_parts = local_e0;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s",entry->s3d_filename);
        _fprintf(local_180,"Reading part list from %s\n",entry->s3d_filename);
        p_Var16 = local_ec;
        iVar30 = 1;
        do {
          iVar18 = _fgetc(p_Var16);
          if (iVar18 < 0) break;
        } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
        iVar30 = 0;
        if (0 < this_ptr->num_parts) {
          local_148 = this_ptr->parts;
          local_94 = local_478;
          local_90 = local_400;
          piVar29 = this_ptr->parts[0].tri_counts;
          do {
            local_140 = local_148 + iVar30;
            iVar18 = _fscanf(local_ec,"%d,%d,%*d,%d,\"%[^\"]\"\n",(int *)local_94,(int *)local_90,
                                piVar29,local_140->part_name);
            if (iVar18 != 4) goto LAB_00590a70;
            this_ptr->parts[iVar30].adj_part_count = 0;
            piVar29 = piVar29 + 0x18;
            _fprintf(local_180,"\t%2d: %s, verts=%d, tris=%d\n",iVar30,local_140->part_name,
                       local_478[iVar30],
                       local_400[iVar30]);
            iVar30 = iVar30 + 1;
            local_94 = local_94 + 1;
            local_90 = local_90 + 1;
          } while (iVar30 < this_ptr->num_parts);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s",entry->s3d_filename);
        _fprintf(local_180,"Reading texture list from %s\n",entry->s3d_filename);
        p_Var16 = local_ec;
        iVar30 = 1;
        do {
          iVar18 = _fgetc(p_Var16);
          if (iVar18 < 0) break;
        } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
        if (0x96 < local_e4) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc24;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures in parts .S3D!");
        }
        iVar30 = 0;
        if (0 < local_e4) {
          pcVar23 = local_a1ec;
          do {
            iVar18 = _fscanf(local_ec,"%[^\n]\n",local_844);
            if (iVar18 != 1) goto LAB_00590a70;
            splitpath
                      (local_844,(char *)0x0,(char *)0x0,pcVar23,(char *)0x0);
            iVar30 = iVar30 + 1;
            pcVar23 = pcVar23 + 0x100;
          } while (iVar30 < local_e4);
        }
        memcpy(local_388,g_GoreBuffer,100);
        if (entry->skip_generation == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",local_388,100,1);
        }
        local_160 = -1;
        if (local_388[0] != '\0') {
          iVar30 = 0;
          if (0 < this_ptr->num_textures) {
            pcVar38 = this_ptr->texture_sets[0].textures[0].textures[0].texture_name;
            do {
              splitpath
                        (pcVar38,(char *)0x0,(char *)0x0,local_640,(char *)0x0);
              iVar18 = _stricmp(local_388,local_640);
              if (iVar18 == 0) break;
              iVar30 = iVar30 + 1;
              pcVar38 = pcVar38 + 0x48;
            } while (iVar30 < this_ptr->num_textures);
          }
          if (this_ptr->num_textures <= iVar30) {
            if (0x4f < this_ptr->num_textures) {
              _sprintf(g_SkeleditStatusMessage,"Texture list full determining parts");
              goto LAB_0058f8e7;
            }
            _sprintf(this_ptr->texture_sets[0].textures[this_ptr->num_textures].textures[0].
                       texture_name,"%s.raw",local_388);
            this_ptr->num_textures = this_ptr->num_textures + 1;
          }
          local_160 = iVar30;
          _fprintf(local_180,"Automap capped faces is active\n");
        }
        local_184 = (SS3DFaceMatch *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                              ((int)local_16c * sizeof(SS3DFaceMatch),"..\\core\\skeledit.cpp",0xc4e);
        if (local_184 == (SS3DFaceMatch *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc4f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading faces from %s",entry->s3d_filename);
        _fprintf(local_180,"Reading faces from %s\n",entry->s3d_filename);
        p_Var16 = local_ec;
        iVar30 = 1;
        do {
          iVar18 = _fgetc(p_Var16);
          if (iVar18 < 0) break;
        } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
        iVar30 = 0;
        pSVar21 = local_184;
        if (0 < (int)local_16c) {
          do {
            iVar18 = _fscanf(local_ec,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_13c,&local_278,
                                &local_194,&local_200,(int *)local_274,(float *)local_190,
                                (float *)local_1fc,(int *)local_270,(float *)local_18c,
                                (float *)(local_1fc + 4));
            if (iVar18 != 10) goto LAB_00590a70;
            pSVar21->edge_count = 3;
            iVar18 = 0;
            pSVar21->texture_index = local_13c[0];
            dVar7 = 65536;
            pvVar17 = pSVar21->vertices;
            do {
              pvVar17->vertex_index = *(uint *)(local_274 + iVar18 + -4);
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_190 + iVar18 + -4) * dVar7));
              pvVar17->texture_u = local_18;
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_1fc + iVar18 + -4) * dVar7));
              iVar18 = iVar18 + 4;
              pvVar17->texture_v = local_18;
              pvVar17 = pvVar17 + 1;
            } while (iVar18 != 0xc);
            _fprintf(local_180,"\t%4d: %4d %4d %4d\n",iVar30,pSVar21->vertices[0].vertex_index,
                       pSVar21->vertices[1].vertex_index,pSVar21->vertices[2].vertex_index);
            iVar30 = iVar30 + 1;
            pSVar21 = pSVar21 + 1;
          } while (iVar30 < (int)local_16c);
        }
        pfVar10 = (float *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                            ((int)local_168 * 0xc + 4,"..\\core\\skeledit.cpp",0xc7c);
        local_188 = (CVector3f *)pfVar10;
        if (pfVar10 != (float *)0x0) {
          local_188 = (CVector3f *)(pfVar10 + 1);
          *pfVar10 = local_168;
        }
        if (local_188 == (CVector3f *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc7d;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading vertices from %s",entry->s3d_filename);
        _fprintf(local_180,"Reading vertices from %s\n",entry->s3d_filename);
        p_Var16 = local_ec;
        iVar30 = 1;
        do {
          iVar18 = _fgetc(p_Var16);
          if (iVar18 < 0) break;
        } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
        iVar30 = 0;
        if (0 < (int)local_168) {
          local_8c = &local_188->z;
          do {
            pCVar25 = local_188 + iVar30;
            iVar18 = _fscanf(local_ec,"%f,%f,%f\n",&pCVar25->x,&pCVar25->y,&pCVar25->z);
            if (iVar18 != 3) goto LAB_00590a70;
            _fprintf(local_180,"\t%4d: %7.3f %7.3f %7.3f\n",iVar30,(double)pCVar25->x,
                       (double)pCVar25->y,(double)pCVar25->z);
            iVar30 = iVar30 + 1;
            local_8c = local_8c + 3;
          } while (iVar30 < (int)local_168);
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
                if ((local_88->edge_count == 3) &&
                   (local_88->texture_index == local_84->texture_index)) {
                  local_128 = 0;
                  do {
                    iVar18 = 0;
                    iVar30 = local_128;
                    pvVar35 = local_84->vertices;
                    do {
                      pCVar19 = local_188 + pvVar35->vertex_index;
                      local_18 = 3;
                      pCVar28 = local_188 + local_88->vertices[iVar30 % 3].vertex_index;
                      local_1f4 = pCVar28->x;
                      local_1f0 = pCVar28->y;
                      local_224 = pCVar19->x - local_1f4;
                      local_1ec = pCVar28->z;
                      local_220 = pCVar19->y - local_1f0;
                      local_21c = pCVar19->z - local_1ec;
                      if ((((float)0.02 < ABS(local_224)) ||
                          ((float)0.02 < ABS(local_220))) ||
                         ((float)0.02 < ABS(local_21c))) break;
                      pvVar35 = pvVar35 + 1;
                      iVar18 = iVar18 + 1;
                      iVar30 = iVar30 + 1;
                    } while (iVar18 < 3);
                    if (iVar18 == 3) {
                      _fprintf(local_180,"Removing face %d, it is dup with face %d\n",local_28,local_12c);
                      local_134->edge_count = 0;
                      goto LAB_005902c8;
                    }
                    local_128 = local_128 + 1;
                  } while (local_128 < 3);
                }
                local_12c = local_12c + 1;
                local_88 = local_88 + 1;
              } while (local_12c < local_28);
            }
LAB_005902c8:
            local_28 = local_28 + 1;
            local_84 = local_84 + 1;
          } while (local_28 < (int)local_16c);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing %s",entry->s3d_filename);
        if (&local_30c != (CBoundingBox3D *)local_188) {
          local_30c.min = *local_188;
        }
        if (&local_30c.max != local_188) {
          local_30c.max = *local_188;
        }
        iVar30 = 1;
        pCVar19 = local_188;
        if (1 < (int)local_168) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_30c,pCVar19 + 1);
            iVar30 = iVar30 + 1;
            pCVar19 = pCVar19 + 1;
          } while (iVar30 < (int)local_168);
        }
        pSVar5 = this_ptr->vertex_data_ptr[0];
        pCVar19 = &pSVar5->position;
        if (&local_324 != (CBoundingBox3D *)pCVar19) {
          local_324.min = *pCVar19;
        }
        if (&local_324.max != pCVar19) {
          local_324.max = *pCVar19;
        }
        iVar30 = 1;
        if (1 < this_ptr->vertex_count[0]) {
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_324,&this_ptr->vertex_data_ptr[0][iVar30].position);
            iVar30 = iVar30 + 1;
          } while (iVar30 < this_ptr->vertex_count[0]);
        }
        local_26c = local_324.max.x - local_324.min.x;
        local_1e8 = local_30c.max.x - local_30c.min.x;
        local_1dc = local_26c / local_1e8;
        local_268 = local_324.max.y - local_324.min.y;
        local_1e4 = local_30c.max.y - local_30c.min.y;
        local_1d8 = local_268 / local_1e4;
        local_264 = local_324.max.z - local_324.min.z;
        local_1e0 = local_30c.max.z - local_30c.min.z;
        local_1d4 = local_264 / local_1e0;
        iVar30 = 0;
        if (0 < (int)local_168) {
          do {
            local_188[iVar30].x = (local_188[iVar30].x - local_30c.min.x) * local_1dc + local_324.min.x;
            local_188[iVar30].y = (local_188[iVar30].y - local_30c.min.y) * local_1d8 + local_324.min.y;
            local_188[iVar30].z = (local_188[iVar30].z - local_30c.min.z) * local_1d4 + local_324.min.z;
            iVar30 = iVar30 + 1;
          } while (iVar30 < (int)local_168);
        }
        local_230 = local_26c;
        local_22c = local_268;
        local_228 = local_264;
        local_1b8 = local_26c;
        local_1b4 = local_268;
        local_1b0 = local_264;
        _fprintf(local_180,"Scale = %7.3f %7.3f %7.3f\n",(double)local_1dc,(double)local_1d8,
                   (double)local_1d4);
        pCVar19 = (CVector3f *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                            ((int)local_16c * sizeof(CVector3f) + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_17c = pCVar19;
        if (pCVar19 != (CVector3f *)0x0) {
          local_17c = (CVector3f *)&pCVar19->y;
          pCVar19->x = local_16c;
        }
        fVar8 = (float)this_ptr->tri_count[0];
        pCVar19 = (CVector3f *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                            ((int)fVar8 * sizeof(CVector3f) + 4,"..\\core\\skeledit.cpp",0xd10);
        local_178 = pCVar19;
        if (pCVar19 != (CVector3f *)0x0) {
          local_178 = (CVector3f *)&pCVar19->y;
          pCVar19->x = fVar8;
        }
        if ((local_17c == (CVector3f *)0x0) || (local_178 == (CVector3f *)0x0)) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xd11;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
        }
        iVar30 = 0;
        pSVar21 = local_184;
        pCVar19 = local_17c;
        if (0 < (int)local_16c) {
          do {
            if (pSVar21->edge_count == 3) {
              pCVar26 = local_188 + pSVar21->vertices[0].vertex_index;
              pCVar28 = local_188 + pSVar21->vertices[1].vertex_index;
              fVar8 = pCVar28->x - pCVar26->x;
              fVar12 = pCVar28->y - pCVar26->y;
              fVar13 = pCVar28->z - pCVar26->z;
              pCVar31 = local_188 + pSVar21->vertices[2].vertex_index;
              local_254 = pCVar31->x - pCVar28->x;
              local_250 = pCVar31->y - pCVar28->y;
              local_24c = pCVar31->z - pCVar28->z;
              fVar14 = fVar13 * local_254 - fVar8 * local_24c;
              fVar13 = fVar12 * local_24c - fVar13 * local_250;
              fVar8 = fVar8 * local_250 - fVar12 * local_254;
              fVar12 = SQRT(fVar8 * fVar8 + fVar13 * fVar13 + fVar14 * fVar14);
              if (fVar12 <= 0.0) {
                local_19c = 0.0;
                local_1a0 = 0.0;
                local_198 = 0.0;
              }
              else {
                fVar12 = 1.0 / fVar12;
                local_1a0 = fVar13 * fVar12;
                local_19c = fVar14 * fVar12;
                local_198 = fVar8 * fVar12;
              }
              if (pCVar19 != (CVector3f *)&local_1a0) {
                pCVar19->x = local_1a0;
                pCVar19->y = local_19c;
                pCVar19->z = local_198;
              }
            }
            iVar30 = iVar30 + 1;
            pSVar21 = pSVar21 + 1;
            pCVar19 = pCVar19 + 1;
          } while (iVar30 < (int)local_16c);
        }
        iVar30 = 0;
        if (0 < this_ptr->tri_count[0]) {
          pCVar19 = local_178;
          do {
            puVar24 = &(this_ptr->tri_data_ptr[0][iVar30].vertex_indices).vertex_index_0;
            uVar2 = puVar24[1];
            uVar3 = *puVar24;
            pSVar9 = this_ptr->vertex_data_ptr[0];
            uVar4 = puVar24[2];
            fVar8 = pSVar9[uVar2].position.x - pSVar9[uVar3].position.x;
            fVar12 = pSVar9[uVar2].position.y - pSVar9[uVar3].position.y;
            fVar13 = pSVar9[uVar2].position.z - pSVar9[uVar3].position.z;
            local_260 = pSVar9[uVar4].position.x - pSVar9[uVar2].position.x;
            local_25c = pSVar9[uVar4].position.y - pSVar9[uVar2].position.y;
            local_258 = pSVar9[uVar4].position.z - pSVar9[uVar2].position.z;
            fVar14 = fVar13 * local_260 - fVar8 * local_258;
            fVar13 = fVar12 * local_258 - fVar13 * local_25c;
            fVar8 = fVar8 * local_25c - fVar12 * local_260;
            fVar6 = SQRT(fVar8 * fVar8 + fVar13 * fVar13 + fVar14 * fVar14);
            if (fVar6 <= 0.0) {
              local_238 = 0.0;
              local_23c = 0.0;
              local_234 = 0.0;
            }
            else {
              fVar12 = 1.0 / fVar6;
              local_23c = fVar13 * fVar12;
              local_238 = fVar14 * fVar12;
              local_234 = fVar8 * fVar12;
            }
            if (pCVar19 != (CVector3f *)&local_23c) {
              pCVar19->x = local_23c;
              pCVar19->y = local_238;
              pCVar19->z = local_234;
            }
            pCVar19 = pCVar19 + 1;
            iVar30 = iVar30 + 1;
          } while (iVar30 < this_ptr->tri_count[0]);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        _fprintf(local_180,"Matching faces in %s\n",entry->s3d_filename);
        if (this_ptr->tri_count[0] <= (int)local_16c) {
          local_174 = (float *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                                (this_ptr->tri_count[0] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_174 == (float *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_15c = local_184;
          iVar30 = 0;
          if (0 < this_ptr->num_parts) {
            do {
              for (iVar21 = 0; iVar21 < this_ptr->parts[iVar30].tri_counts[0];
                  iVar21 = iVar21 + 1) {
                local_15c[iVar21].match_index = 0xffffffff;
                local_15c[iVar21].part_index = iVar30;
              }
              local_15c = local_15c + this_ptr->parts[iVar30].tri_counts[0];
              iVar30 = iVar30 + 1;
            } while (iVar30 < this_ptr->num_parts);
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
                pfVar20 = local_174 + local_124;
                *pfVar20 = 1e+30;
                local_11c = -1;
                local_118 = 0;
                if (0 < (int)local_16c) {
                  local_7c = local_184;
                  local_108 = &local_178[local_124].x;
                  local_78 = &local_17c->x;
                  do {
                    local_114 = local_7c;
                    if (local_7c->edge_count == 3) {
                      local_110 = (float)4 -
                                  (((CVector3f *)local_108)->z * local_78[2] +
                                  ((CVector3f *)local_108)->x * *local_78 +
                                  ((CVector3f *)local_108)->y * local_78[1]);
                      local_10c = 0;
                      do {
                        iVar18 = 0;
                        local_104 = 0.0;
                        iVar30 = local_10c;
                        pvVar35 = local_7c->vertices;
                        do {
                          pCVar19 = local_188 + pvVar35->vertex_index;
                          uVar7 = (&(local_120->vertex_indices).vertex_index_0)[iVar30 % 3];
                          pSVar9 = this_ptr->vertex_data_ptr[0];
                          local_1d0 = pSVar9[uVar7].position.x;
                          local_1cc = pSVar9[uVar7].position.y;
                          local_20c = local_1d0 - pCVar19->x;
                          local_1c8 = pSVar9[uVar7].position.z;
                          local_208 = local_1cc - pCVar19->y;
                          local_204 = local_1c8 - pCVar19->z;
                          if ((((float)0.20000000000000001 < ABS(local_20c)) ||
                              ((float)0.20000000000000001 < ABS(local_208))) ||
                             ((float)0.20000000000000001 < ABS(local_204))) break;
                          fVar8 = local_204 * local_204 +
                                  local_20c * local_20c + local_208 * local_208;
                          iVar30 = iVar30 + 1;
                          pvVar35 = pvVar35 + 1;
                          local_104 = fVar8 * fVar8 * fVar8 + local_104;
                          iVar18 = iVar18 + 1;
                        } while (iVar18 < 3);
                        if (((2 < iVar18) &&
                            (local_104 = local_104 * local_110, local_104 <= *pfVar20)) &&
                           ((local_7c->match_index < 0 ||
                            (local_104 < local_174[local_7c->match_index])))) {
                          local_11c = local_118;
                          *pfVar20 = local_104;
                        }
                        local_10c = local_10c + 1;
                      } while (local_10c < 3);
                    }
                    local_78 = local_78 + 3;
                    local_118 = local_118 + 1;
                    local_7c = local_7c + 1;
                    local_fc = pfVar20;
                    local_f8 = pfVar20;
                  } while (local_118 < (int)local_16c);
                }
                if (local_11c == -1) break;
                iVar30 = local_184[local_11c].match_index;
                local_184[local_11c].match_index = local_124;
                local_124 = iVar30;
              }
              local_2c = local_2c + 1;
            } while (local_2c < this_ptr->tri_count[0]);
          }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_17c != (CVector3f *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659((float *)local_17c - 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_17c = (CVector3f *)0x0;
          if (local_178 != (CVector3f *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659((float *)local_178 - 1);
          }
          local_178 = (CVector3f *)0x0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          shape_memdbg_cpp_free_FUN_005fe659(local_174);
          iVar30 = 0;
          local_174 = (float *)0x0;
          local_158 = 0;
          if (0 < this_ptr->num_parts) {
            do {
              this_ptr->parts[iVar30].cap_tri_counts[0] = 0;
              this_ptr->parts[iVar30].tri_counts[0] = 0;
              iVar30 = iVar30 + 1;
            } while (iVar30 < this_ptr->num_parts);
          }
          puVar13 = (uint *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                              (this_ptr->tri_count[0] << 2,"..\\core\\skeledit.cpp",0xe56);
          local_170 = puVar13;
          local_f0 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                               (this_ptr->tri_count[0] << 2,"..\\core\\skeledit.cpp",0xe57);
          if ((puVar13 == (uint *)0x0) || (local_f0 == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xe58;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          iVar30 = 0;
          piVar29 = local_f0;
          puVar34 = local_170;
          if (0 < this_ptr->tri_count[0]) {
            do {
              *piVar29 = 999999;
              iVar30 = iVar30 + 1;
              *puVar34 = 0xffffffff;
              piVar29 = piVar29 + 1;
              puVar34 = puVar34 + 1;
            } while (iVar30 < this_ptr->tri_count[0]);
          }
          iVar30 = 0;
          local_154 = 0;
          pSVar21 = local_184;
          if (0 < (int)local_16c) {
            do {
              if (pSVar21->edge_count == 3) {
                iVar18 = pSVar21->part_index;
                iVar24 = pSVar21->match_index;
                if (iVar24 < 0) {
                  local_158 = local_158 + 1;
                  this_ptr->parts[iVar18].cap_tri_counts[0] =
                       this_ptr->parts[iVar18].cap_tri_counts[0] + 1;
                }
                else {
                  local_f4 = iVar24 * 4;
                  if (-1 < (int)local_170[iVar24]) {
                    pcVar38 = "Unable to generate one-to-one polygon matching from %s";
                    goto LAB_0058f8da;
                  }
                  local_f0[iVar24] = iVar18;
                  local_170[iVar24] = iVar30;
                  local_154 = local_154 + 1;
                  this_ptr->parts[iVar18].tri_counts[0] = this_ptr->parts[iVar18].tri_counts[0] + 1;
                }
              }
              iVar30 = iVar30 + 1;
              pSVar21 = pSVar21 + 1;
            } while (iVar30 < (int)local_16c);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          shape_memdbg_cpp_free_FUN_005fe659(local_170);
          local_30 = this_ptr->tri_count[0];
          local_170 = (uint *)0x0;
          while (local_30 = local_30 + -1, -1 < local_30) {
            iVar30 = 0;
            if (0 < local_30) {
              piVar29 = local_f0;
              do {
                if (piVar29[1] < *piVar29) {
                  piVar27 = this_ptr->index_data_ptr[0] + iVar30 + 1;
                  piVar22 = this_ptr->index_data_ptr[0] + iVar30;
                  iVar18 = *piVar22;
                  *piVar22 = *piVar27;
                  *piVar27 = iVar18;
                  local_swap = this_ptr->tri_data_ptr[0][iVar30];
                  this_ptr->tri_data_ptr[0][iVar30] = this_ptr->tri_data_ptr[0][iVar30 + 1];
                  this_ptr->tri_data_ptr[0][iVar30 + 1] = local_swap;
                  iVar18 = *piVar29;
                  *piVar29 = local_f0[iVar30 + 1];
                  local_f0[iVar30 + 1] = iVar18;
                }
                iVar30 = iVar30 + 1;
                piVar29 = piVar29 + 1;
              } while (iVar30 < local_30);
            }
          }
          iVar30 = 2;
          if (local_154 != this_ptr->tri_count[0]) {
            local_d8 = this_ptr->parts;
            do {
              _sprintf(local_540,"There are %d triangles I couldn't match.",
                       this_ptr->tri_count[0] - local_154);
              if (entry->skip_generation == 0) {
                shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_bec);
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base,"Get rid of them them, I never want to see them again");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base,"They are special to me, put them in a seperate part called \"MySpecialTriangles\"");
                shape_edittool_cpp_CStrList_add_FUN_004a2b80
                          (&local_bec.base,"Try best guess");
                do {
                  iVar30 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                                     (&local_bec,local_540,iVar30,0);
                } while (iVar30 < 0);
                shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_bec,0);
              }
              iVar18 = local_154;
              if (iVar30 == 0) {
                this_ptr->tri_count[0] = local_154;
              }
              else if (iVar30 == 1) {
                if (0x1d < this_ptr->num_parts) {
                  g_CurrentFilename = "..\\core\\skeledit.cpp";
                  g_CurrentLineNumber = 0xeaf;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts");
                }
                strcpy(local_d8[this_ptr->num_parts].part_name,"MySpecialTriangles");
                this_ptr->parts[this_ptr->num_parts].tri_counts[0] =
                     this_ptr->tri_count[0] - local_154;
                this_ptr->parts[this_ptr->num_parts].cap_tri_counts[0] = 0;
                this_ptr->parts[this_ptr->num_parts].adj_part_count = 0;
                local_154 = this_ptr->tri_count[0];
                this_ptr->num_parts = this_ptr->num_parts + 1;
              }
              else if (iVar30 == 2) {
                local_d4 = 1;
                local_d0 = local_154;
                local_cc = 0;
                if (0 < this_ptr->tri_count[0]) {
                  do {
                    if (local_d4 == 0) break;
                    local_d4 = 0;
                    local_34 = iVar18;
                    if (iVar18 < this_ptr->tri_count[0]) {
                      local_5c = local_f0 + iVar18;
                      do {
                        if (0xf423e < *local_5c) {
                          local_c8 = (short *)&(this_ptr->tri_data_ptr[0][local_34].vertex_indices).
                                                     vertex_index_0;
                          local_c4 = 0;
                          if (0 < this_ptr->tri_count[0]) {
                            local_68 = local_f0;
                            do {
                              if (*local_68 < 999999) {
                                local_c0 = (short *)&(this_ptr->tri_data_ptr[0][local_c4].
                                                           vertex_indices).vertex_index_0;
                                local_6c = local_c8 + 3;
                                iVar30 = 0;
                                psVar17 = local_c8;
                                do {
                                  psVar16 = psVar17;
                                  iVar24 = 0;
                                  psVar20 = local_c0;
                                  if (*psVar16 != *local_c0) {
                                    do {
                                      iVar24 = iVar24 + 1;
                                      psVar20 = psVar20 + 1;
                                      if (2 < iVar24) goto LAB_00591f48;
                                    } while (*psVar20 != *psVar16);
                                  }
                                  iVar30 = iVar30 + 1;
LAB_00591f48:
                                  psVar17 = psVar16 + 1;
                                } while (psVar16 + 1 != local_6c);
                                local_bc = psVar16;
                                if (1 < iVar30) {
                                  iVar30 = local_f0[local_c4];
                                  this_ptr->parts[iVar30].tri_counts[0] =
                                       this_ptr->parts[iVar30].tri_counts[0] + 1;
                                  local_154 = local_154 + 1;
                                  *local_5c = local_f0[local_c4];
                                  break;
                                }
                              }
                              local_c4 = local_c4 + 1;
                              local_68 = local_68 + 1;
                            } while (local_c4 < this_ptr->tri_count[0]);
                          }
                          if (0xf423e < *local_5c) {
                            local_d4 = 1;
                          }
                        }
                        local_5c = local_5c + 1;
                        local_34 = local_34 + 1;
                      } while (local_34 < this_ptr->tri_count[0]);
                    }
                    local_cc = local_cc + 1;
                  } while (local_cc < this_ptr->tri_count[0]);
                }
                local_38 = this_ptr->tri_count[0];
                while (local_38 = local_38 + -1, -1 < local_38) {
                  iVar30 = 0;
                  if (0 < local_38) {
                    piVar29 = local_f0;
                    do {
                      if (piVar29[1] < *piVar29) {
                        piVar36 = this_ptr->index_data_ptr[0] + iVar30 + 1;
                        piVar22 = this_ptr->index_data_ptr[0] + iVar30;
                        iVar18 = *piVar22;
                        *piVar22 = *piVar36;
                        *piVar36 = iVar18;
                        local_swap = this_ptr->tri_data_ptr[0][iVar30];
                        this_ptr->tri_data_ptr[0][iVar30] = this_ptr->tri_data_ptr[0][iVar30 + 1];
                        this_ptr->tri_data_ptr[0][iVar30 + 1] = local_swap;
                        iVar18 = *piVar29;
                        *piVar29 = local_f0[iVar30 + 1];
                        local_f0[iVar30 + 1] = iVar18;
                      }
                      iVar30 = iVar30 + 1;
                      piVar29 = piVar29 + 1;
                    } while (iVar30 < local_38);
                  }
                }
                iVar30 = 1;
              }
            } while (local_154 != this_ptr->tri_count[0]);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          shape_memdbg_cpp_free_FUN_005fe659(local_f0);
          local_f0 = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s",entry->s3d_filename);
          pSVar14 = (SInputFace *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                              ((this_ptr->tri_count[0] + local_158) * sizeof(SInputFace),
                               "..\\core\\skeledit.cpp",0xf1a);
          local_150 = pSVar14;
          local_14c = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                                ((this_ptr->tri_count[0] + local_158) * 4,
                                 "..\\core\\skeledit.cpp",0xf1b);
          if ((pSVar14 == (SInputFace *)0x0) || (local_14c == (int *)0x0)) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xf1c;
            core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
          }
          pSVar37 = local_150;
          memcpy(local_150,this_ptr->tri_data_ptr[0],this_ptr->tri_count[0] * 0x12);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->tri_data_ptr[0]);
          this_ptr->tri_data_ptr[0] = pSVar37;
          memcpy(local_14c,this_ptr->index_data_ptr[0],this_ptr->tri_count[0] * 4);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf24;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->index_data_ptr[0]);
          g_CurrentDebugLine = 0xf28;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          this_ptr->index_data_ptr[0] = local_14c;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->cap_index_ptr[0]);
          this_ptr->cap_index_ptr[0] = (int *)0x0;
          if (0 < local_158) {
            piVar15 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
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
            local_a4 = local_a8;
            do {
              if ((0 < this_ptr->parts[local_3c].cap_tri_counts[0]) && (local_b8 = 0, 0 < (int)local_16c))
              {
                local_4c = local_184;
                do {
                  local_b4 = local_4c;
                  if (((local_4c->edge_count == 3) &&
                      (local_3c == local_4c->part_index)) &&
                     (local_4c->match_index < 0)) {
                    iVar30 = this_ptr->tri_count[0] + this_ptr->cap_tri_count[0];
                    local_b0 = this_ptr->tri_data_ptr[0] + iVar30;
                    if (local_160 < 0) {
                      iVar30 = local_4c->texture_index;
                      if (iVar30 < 0) goto LAB_00591835;
                      iVar18 = 0;
                      if (0 < this_ptr->num_textures) {
                        pcVar38 = local_a8->textures[0].textures[0].texture_name;
                        do {
                          splitpath
                                    (pcVar38,(char *)0x0,(char *)0x0,local_740,(char *)0x0);
                          iVar24 = _stricmp
                                             (local_a1ec + iVar30 * 0x100,local_740);
                          if (iVar24 == 0) break;
                          iVar18 = iVar18 + 1;
                          pcVar38 = pcVar38 + 0x48;
                        } while (iVar18 < this_ptr->num_textures);
                      }
                      if (this_ptr->num_textures <= iVar18) {
                        if (0x4f < this_ptr->num_textures) {
                          g_CurrentFilename = "..\\core\\skeledit.cpp";
                          g_CurrentLineNumber = 0xf5d;
                          core_main_c_displayErrorAndQuit_FUN_00506f10
                                    ("Too many model textures!");
                        }
                        _sprintf(local_a4->textures[this_ptr->num_textures].textures[0].
                                   texture_name,"%s.raw",local_a1ec + iVar30 * 0x100);
                        this_ptr->num_textures = this_ptr->num_textures + 1;
                      }
                      this_ptr->index_data_ptr[0]
                      [this_ptr->tri_count[0] + this_ptr->cap_tri_count[0]] = iVar18;
                    }
                    else {
                      this_ptr->index_data_ptr[0][iVar30] = local_160;
                    }
                    local_20 = 0;
                    pvVar37 = local_b4->vertices;
                    do {
                      pCVar19 = local_188 + pvVar37->vertex_index;
                      local_1c4 = pCVar19->x;
                      local_1c0 = pCVar19->y;
                      local_1bc = pCVar19->z;
                      local_a1f0 = 1e+20;
                      iVar30 = 0;
                      if (0 < this_ptr->vertex_count[0]) {
                        do {
                          pSVar9 = this_ptr->vertex_data_ptr[0];
                          local_218 = pSVar9[iVar30].position.x - local_1c4;
                          local_214 = pSVar9[iVar30].position.y - local_1c0;
                          local_210 = pSVar9[iVar30].position.z - local_1bc;
                          local_a0 = local_210 * local_210 +
                                     local_218 * local_218 + local_214 * local_214;
                          if (local_a0 < local_a1f0) {
                            (&(local_b0->vertex_indices).vertex_index_0)[local_20] = (ushort)iVar30;
                            local_a1f0 = local_a0;
                          }
                          iVar30 = iVar30 + 1;
                        } while (iVar30 < this_ptr->vertex_count[0]);
                      }
                      if ((float)0.20000000000000001 < local_a1f0) {
                        _sprintf(g_SkeleditStatusMessage,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        goto LAB_0058f8e7;
                      }
                      iVar30 = pvVar37->texture_u >> 8;
                      iVar18 = pvVar37->texture_v >> 8;
                      if (iVar30 < 0) {
                        iVar30 = 0;
                      }
                      else if (0xffff < iVar30) {
                        iVar30 = 0xffff;
                      }
                      if (iVar18 < 0) {
                        iVar18 = 0;
                      }
                      else if (0xffff < iVar18) {
                        iVar18 = 0xffff;
                      }
                      pvVar37 = pvVar37 + 1;
                      (&local_b0->v_coord_0)[local_20] = (ushort)iVar18;
                      (&local_b0->u_coord_0)[local_20] = (ushort)iVar30;
                      local_20 = local_20 + 1;
                    } while (local_20 < 3);
                    local_ac = -1;
                    local_24 = 0;
                    local_1c = 1e+20;
                    if (0 < (int)local_16c) {
                      local_50 = local_184;
                      do {
                        if (((local_50->edge_count == 3) &&
                            (local_3c != local_50->part_index)) &&
                           (local_50->match_index < 0)) {
                          local_9c = 0;
                          do {
                            iVar30 = local_9c + 6;
                            local_98 = 0.0;
                            pvVar35 = local_b4->vertices;
                            do {
                              pCVar19 = local_188 + pvVar35->vertex_index;
                              local_248 = pCVar19->x;
                              local_244 = pCVar19->y;
                              local_18 = 3;
                              local_240 = pCVar19->z;
                              pCVar19 = local_188 +
                                        local_50->vertices[iVar30 % 3].vertex_index;
                              local_1ac = pCVar19->x;
                              local_1a8 = pCVar19->y;
                              local_1a4 = pCVar19->z;
                              pvVar35 = pvVar35 + 1;
                              iVar30 = iVar30 + -1;
                              local_98 = (local_240 - local_1a4) * (local_240 - local_1a4) +
                                         (local_248 - local_1ac) * (local_248 - local_1ac) +
                                         (local_244 - local_1a8) * (local_244 - local_1a8) +
                                         local_98;
                            } while (pvVar35 != local_b4->vertices + 3);
                            if (local_98 < local_1c) {
                              local_ac = local_50->part_index;
                              local_1c = local_98;
                            }
                            local_9c = local_9c + 1;
                          } while (local_9c < 3);
                        }
                        local_24 = local_24 + 1;
                        local_50 = local_50 + 1;
                      } while (local_24 < (int)local_16c);
                    }
                    if (local_ac < 0) {
                      _sprintf(g_SkeleditStatusMessage,"Can't find opposing part for capped face!");
                      goto LAB_0058f8e7;
                    }
                    this_ptr->cap_index_ptr[0][this_ptr->cap_tri_count[0]] = local_ac;
                    this_ptr->cap_tri_count[0] = this_ptr->cap_tri_count[0] + 1;
                  }
LAB_00591835:
                  local_b8 = local_b8 + 1;
                  local_4c = local_4c + 1;
                } while (local_b8 < (int)local_16c);
              }
              local_3c = local_3c + 1;
            } while (local_3c < this_ptr->num_parts);
          }
          if (local_158 != this_ptr->cap_tri_count[0]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s",entry->s3d_filename);
          iVar30 = 0;
          if (0 < this_ptr->num_parts) {
            do {
              this_ptr->parts[iVar30].adj_part_count = 0;
              iVar30 = iVar30 + 1;
            } while (iVar30 < this_ptr->num_parts);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_188 != (CVector3f *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659((float *)local_188 - 1);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xff6;
          shape_memdbg_cpp_free_FUN_005fe659(local_184);
          p_Var8 = local_180;
          if (local_180 != (_FILE *)0x0) {
            _fprintf(local_180,"Determined parts using %s OK!\n",entry->s3d_filename);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var8,"..\\core\\skeledit.cpp",0xffc);
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determined parts using %s OK!",entry->s3d_filename);
          return 1;
        }
        _sprintf(g_SkeleditStatusMessage,"Deformable model has more faces than segmented model!");
        goto LAB_0058f8e7;
      }
      pcVar38 = "Too many parts in %s";
    }
    else {
LAB_00590a70:
      pcVar38 = "%s is corrupt";
    }
  }
LAB_0058f8da:
  _sprintf(g_SkeleditStatusMessage,pcVar38);
LAB_0058f8e7:
  if (local_ec != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_ec,"..\\core\\skeledit.cpp",0xbe2);
  }
  if (local_180 != (_FILE *)0x0) {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_180,"..\\core\\skeledit.cpp",0xbe3);
  }
  g_CurrentDebugLine = 0xbe4;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_188 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659((float *)local_188 - 1);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  shape_memdbg_cpp_free_FUN_005fe659(local_184);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_17c != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659((float *)local_17c - 1);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_178 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659((float *)local_178 - 1);
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
