// Name: core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
// Address: 0058f810
// Address Range: [[0058f810, 0059251f] [00605656, 006056e1] [0060c98e, 0060ca21]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)

#include "nocturne.h"
/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

typedef struct CDeformableModel_determinePartsFromS3D_Ctx {
    CDeformableModel *this_ptr;
    CLodMeshPrecomputeEntry *entry;
    ushort uVar1;
    ushort uVar5;
    char cVar6;
    ushort uVar7;
    float fVar8;
    SVert *pSVar9;
    uint uVar10;
    uint *puVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    uint uVar15;
    _FILE *p_Var16;
    short *psVar17;
    int iVar9;
    int iVar18;
    float *pfVar10;
    CBoundingBox3D *pCVar11;
    CVector3f *pCVar19;
    float *pfVar20;
    CDeformableModel *pCVar12;
    uint *puVar13;
    SS3DFaceMatch *pSVar21;
    int *piVar22;
    uint *puVar23;
    SInputFace *pSVar14;
    int *piVar15;
    short *psVar16;
    int iVar24;
    void *pvVar17;
    uint uVar18;
    uint uVar19;
    uint uVar25;
    CDeformableModel *pCVar27;
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
    void *pvVar35;
    CVector3f *pCVar25;
    CVector3f *pCVar26;
    int *piVar27;
    uint *puVar28;
    SInputFace *pSVar29;
    int *piVar36;
    SInputFace *pSVar37;
    char *pcVar38;
    char *pcVar30;
    uint *puVar31;
    uint *puVar32;
    uint *puVar33;
    SInputFace *pSVar34;
    int *piVar35;
    SPart *pSVar36;
    void *pvVar37;
    byte bVar38;
    byte bVar39;
    float local_a1f0;
    char local_a1ec[32552];
    CPickList local_bec;
    char local_844[260];
    char local_740[256];
    char local_640[256];
    char local_540[200];
    byte local_478[120];
    uint local_400[30];
    char local_388[100];
    CBoundingBox3D local_324;
    CBoundingBox3D local_30c;
    ushort uStack_2ec;
    ushort uStack_2d8;
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
    byte local_274[4];
    byte local_270[4];
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
    byte local_1fc[8];
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
    byte local_190[4];
    byte local_18c[4];
    CVector3f *local_188;
    SS3DFaceMatch *local_184;
    _FILE *local_180;
    CVector3f *local_17c;
    CVector3f *local_178;
    void *local_174;
    uint *local_170;
    float local_16c;
    float local_168;
    byte local_164[4];
    int local_160;
    void *local_15c;
    int local_158;
    int local_154;
    SInputFace *local_150;
    int *local_14c;
    SPart *local_148;
    int local_144;
    SPart *local_140;
    int local_13c[2];
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
    byte local_dc[4];
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
} CDeformableModel_determinePartsFromS3D_Ctx;

// Chunk return codes for cross-boundary gotos
// 0 = normal continuation
#define GOTO_LAB_0058f8e7 1
#define GOTO_LAB_00590a70 2
#define GOTO_LAB_0058f8da 3

// Chunk: else_0_check_local_388_0 (lines 123-148 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_local_388_0(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    CDeformableModel *&this_ptr = ctx->this_ptr;
    int &iVar18 = ctx->iVar18;
    int &iVar30 = ctx->iVar30;
    char *&pcVar38 = ctx->pcVar38;
    auto &local_640 = ctx->local_640;
    auto &local_388 = ctx->local_388;
    _FILE *&local_180 = ctx->local_180;
    int &local_160 = ctx->local_160;

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
              return GOTO_LAB_0058f8e7;
            }
            _sprintf(this_ptr->texture_sets[0].textures[this_ptr->num_textures].textures[0].
                       texture_name,"%s.raw");
            this_ptr->num_textures = this_ptr->num_textures + 1;
          }
          local_160 = iVar30;
          _fprintf(local_180,"Automap capped faces is active\n");
    return 0;
}

// Chunk: else_0_check_0_1 (lines 166-192 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_0_1(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    int &iVar18 = ctx->iVar18;
    SS3DFaceMatch *&pSVar21 = ctx->pSVar21;
    void *&pvVar17 = ctx->pvVar17;
    int &iVar30 = ctx->iVar30;
    uint &local_278 = ctx->local_278;
    auto &local_274 = ctx->local_274;
    auto &local_270 = ctx->local_270;
    float &local_200 = ctx->local_200;
    auto &local_1fc = ctx->local_1fc;
    float &local_194 = ctx->local_194;
    auto &local_190 = ctx->local_190;
    auto &local_18c = ctx->local_18c;
    _FILE *&local_180 = ctx->local_180;
    float &local_16c = ctx->local_16c;
    auto &local_13c = ctx->local_13c;
    _FILE *&local_ec = ctx->local_ec;
    int &local_18 = ctx->local_18;
    double &dVar7 = ctx->dVar7;

          do {
            iVar18 = _fscanf(local_ec,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",local_13c,&local_278,
                                &local_194,&local_200,local_274,local_190,local_1fc,local_270,
                                local_18c);
 return GOTO_LAB_00590a70;
            pSVar21->edge_count = 3;
            iVar18 = 0;
            pSVar21->texture_index = local_13c[0];
            dVar7 = 65536;
            pvVar17 = pSVar21;
            do {
              *(uint *)((int)pvVar17 + 0x18) = *(uint *)(local_274 + iVar18 + -4);
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_190 + iVar18 + -4) * dVar7));
              *(int *)((int)pvVar17 + 0x1c) = local_18;
              local_18 = (int)ROUND(ROUND((double)*(float *)(local_1fc + iVar18 + -4) * dVar7));
              iVar18 = iVar18 + 4;
              *(int *)((int)pvVar17 + 0x20) = local_18;
              pvVar17 = (void *)((int)pvVar17 + 0xc);
            } while (iVar18 != 0xc);
            _fprintf(local_180,"\t%4d: %4d %4d %4d\n",iVar30,pSVar21->vertices[0].vertex_index,
                       pSVar21->vertices[1].vertex_index);
            iVar30 = iVar30 + 1;
            pSVar21 = pSVar21 + 1;
          } while (iVar30 < (int)local_16c);
    return 0;
}

// Chunk: else_0_check_0_2 (lines 230-280 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_0_2(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    int &iVar18 = ctx->iVar18;
    CVector3f *&pCVar19 = ctx->pCVar19;
    CVector3f *&pCVar28 = ctx->pCVar28;
    int &iVar30 = ctx->iVar30;
    void *&pvVar35 = ctx->pvVar35;
    float &local_224 = ctx->local_224;
    float &local_220 = ctx->local_220;
    float &local_21c = ctx->local_21c;
    float &local_1f4 = ctx->local_1f4;
    float &local_1f0 = ctx->local_1f0;
    float &local_1ec = ctx->local_1ec;
    CVector3f *&local_188 = ctx->local_188;
    SS3DFaceMatch *&local_184 = ctx->local_184;
    _FILE *&local_180 = ctx->local_180;
    float &local_16c = ctx->local_16c;
    void *&local_134 = ctx->local_134;
    uint &local_130 = ctx->local_130;
    int &local_12c = ctx->local_12c;
    int &local_128 = ctx->local_128;
    void *&local_88 = ctx->local_88;
    void *&local_84 = ctx->local_84;
    int &local_28 = ctx->local_28;
    int &local_18 = ctx->local_18;

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
                    iVar18 = 0;
                    iVar30 = local_128;
                    pvVar35 = local_84;
                    do {
                      pCVar19 = local_188 + *(int *)((int)pvVar35 + 0x18);
                      local_18 = 3;
                      pCVar28 = local_188 + *(int *)((iVar30 % 3) * 0xc + 0x18 + (int)local_88);
                      local_1f4 = pCVar28->x;
                      local_1f0 = pCVar28->y;
                      local_224 = pCVar19->x - local_1f4;
                      local_1ec = pCVar28->z;
                      local_220 = pCVar19->y - local_1f0;
                      local_21c = pCVar19->z - local_1ec;
                      if ((((float)0.02 < ABS(local_224)) ||
                          ((float)0.02 < ABS(local_220))) ||
                         ((float)0.02 < ABS(local_21c))) break;
                      pvVar35 = (void *)((int)pvVar35 + 0xc);
                      iVar18 = iVar18 + 1;
                      iVar30 = iVar30 + 1;
                    } while (iVar18 < 3);
                    if (iVar18 == 3) {
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
    return 0;
}

// Chunk: else_0_check_0_3 (lines 376-414 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_0_3(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    float &fVar8 = ctx->fVar8;
    float &fVar12 = ctx->fVar12;
    float &fVar13 = ctx->fVar13;
    float &fVar14 = ctx->fVar14;
    CVector3f *&pCVar19 = ctx->pCVar19;
    SS3DFaceMatch *&pSVar21 = ctx->pSVar21;
    CVector3f *&pCVar28 = ctx->pCVar28;
    int &iVar30 = ctx->iVar30;
    CVector3f *&pCVar31 = ctx->pCVar31;
    CVector3f *&pCVar26 = ctx->pCVar26;
    float &local_254 = ctx->local_254;
    float &local_250 = ctx->local_250;
    float &local_24c = ctx->local_24c;
    float &local_1a0 = ctx->local_1a0;
    float &local_19c = ctx->local_19c;
    float &local_198 = ctx->local_198;
    CVector3f *&local_188 = ctx->local_188;
    float &local_16c = ctx->local_16c;

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
    return 0;
}

// Chunk: else_0_check_0_4 (lines 415-456 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_0_4(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    CDeformableModel *&this_ptr = ctx->this_ptr;
    float &fVar8 = ctx->fVar8;
    SVert *&pSVar9 = ctx->pSVar9;
    float &fVar12 = ctx->fVar12;
    float &fVar13 = ctx->fVar13;
    float &fVar14 = ctx->fVar14;
    CVector3f *&pCVar19 = ctx->pCVar19;
    int &iVar30 = ctx->iVar30;
    ushort *&puVar24 = ctx->puVar24;
    float &local_260 = ctx->local_260;
    float &local_25c = ctx->local_25c;
    float &local_258 = ctx->local_258;
    float &local_23c = ctx->local_23c;
    float &local_238 = ctx->local_238;
    float &local_234 = ctx->local_234;
    CVector3f *&local_178 = ctx->local_178;
    int &local_80 = ctx->local_80;
    ushort &uVar2 = ctx->uVar2;
    float &fVar6 = ctx->fVar6;
    ushort &uVar4 = ctx->uVar4;
    ushort &uVar3 = ctx->uVar3;

          local_80 = 0;
          pCVar19 = local_178;
          do {
            puVar24 = (ushort *)
                      ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 + local_80);
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
            local_80 = local_80 + 0x12;
          } while (iVar30 < this_ptr->tri_count[0]);
    return 0;
}

// Chunk: else_0_check_this_ptr_5_check_0_0 (lines 487-562 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_0_0(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    CDeformableModel *&this_ptr = ctx->this_ptr;
    ushort &uVar7 = ctx->uVar7;
    float &fVar8 = ctx->fVar8;
    SVert *&pSVar9 = ctx->pSVar9;
    int &iVar18 = ctx->iVar18;
    CVector3f *&pCVar19 = ctx->pCVar19;
    float *&pfVar20 = ctx->pfVar20;
    int &iVar30 = ctx->iVar30;
    void *&pvVar35 = ctx->pvVar35;
    float &local_20c = ctx->local_20c;
    float &local_208 = ctx->local_208;
    float &local_204 = ctx->local_204;
    float &local_1d0 = ctx->local_1d0;
    float &local_1cc = ctx->local_1cc;
    float &local_1c8 = ctx->local_1c8;
    CVector3f *&local_188 = ctx->local_188;
    SS3DFaceMatch *&local_184 = ctx->local_184;
    CVector3f *&local_17c = ctx->local_17c;
    CVector3f *&local_178 = ctx->local_178;
    void *&local_174 = ctx->local_174;
    float &local_16c = ctx->local_16c;
    int &local_124 = ctx->local_124;
    SInputFace *&local_120 = ctx->local_120;
    int &local_11c = ctx->local_11c;
    int &local_118 = ctx->local_118;
    void *&local_114 = ctx->local_114;
    float &local_110 = ctx->local_110;
    int &local_10c = ctx->local_10c;
    float *&local_108 = ctx->local_108;
    float &local_104 = ctx->local_104;
    float *&local_fc = ctx->local_fc;
    float *&local_f8 = ctx->local_f8;
    void *&local_7c = ctx->local_7c;
    float *&local_78 = ctx->local_78;
    int &local_2c = ctx->local_2c;
    int &local_18 = ctx->local_18;

            do {
              local_18 = local_2c;
              shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                        (g_CEditorToolsPtr,(float)local_2c,(float)this_ptr->tri_count[0]);
              local_124 = local_2c;
              while (-1 < local_124) {
                local_120 = this_ptr->tri_data_ptr[0] + local_124;
                pfVar20 = (float *)(local_124 * 4 + (int)local_174);
                *pfVar20 = 1e+30;
                local_11c = -1;
                local_118 = 0;
                if (0 < (int)local_16c) {
                  local_7c = local_184;
                  local_108 = &local_178[local_124].x;
                  local_78 = &local_17c->x;
                  do {
                    local_114 = local_7c;
                    if (*(int *)((int)local_7c + 4) == 3) {
                      local_110 = (float)4 -
                                  (((CVector3f *)local_108)->z * local_78[2] +
                                  ((CVector3f *)local_108)->x * *local_78 +
                                  ((CVector3f *)local_108)->y * local_78[1]);
                      local_10c = 0;
                      do {
                        iVar18 = 0;
                        local_104 = 0.0;
                        iVar30 = local_10c;
                        pvVar35 = local_7c;
                        do {
                          pCVar19 = local_188 + *(int *)((int)pvVar35 + 0x18);
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
                          pvVar35 = (void *)((int)pvVar35 + 0xc);
                          local_104 = fVar8 * fVar8 * fVar8 + local_104;
                          iVar18 = iVar18 + 1;
                        } while (iVar18 < 3);
                        if (((2 < iVar18) &&
                            (local_104 = local_104 * local_110, local_104 <= *pfVar20)) &&
                           ((*(int *)((int)local_7c + 0xc) < 0 ||
                            (local_104 <
                             *(float *)(*(int *)((int)local_7c + 0xc) * 4 + (int)local_174))))) {
                          local_11c = local_118;
                          *pfVar20 = local_104;
                        }
                        local_10c = local_10c + 1;
                      } while (local_10c < 3);
                    }
                    local_78 = local_78 + 3;
                    local_118 = local_118 + 1;
                    local_7c = (void *)((int)local_7c + 0x3c);
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
    return 0;
}

// Chunk: else_0_check_this_ptr_5_check_0_1 (lines 615-641 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_0_1(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    CDeformableModel *&this_ptr = ctx->this_ptr;
    int &iVar18 = ctx->iVar18;
    SS3DFaceMatch *&pSVar21 = ctx->pSVar21;
    int &iVar24 = ctx->iVar24;
    int &iVar30 = ctx->iVar30;
    char *&pcVar38 = ctx->pcVar38;
    uint *&local_170 = ctx->local_170;
    float &local_16c = ctx->local_16c;
    int &local_158 = ctx->local_158;
    int &local_154 = ctx->local_154;
    int &local_f4 = ctx->local_f4;
    int *&local_f0 = ctx->local_f0;

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
                    return GOTO_LAB_0058f8da;
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
    return 0;
}

// Chunk: else_0_check_this_ptr_5_check_local_154_2 (lines 692-860 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_local_154_2(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    CDeformableModel *&this_ptr = ctx->this_ptr;
    CLodMeshPrecomputeEntry *&entry = ctx->entry;
    ushort &uVar1 = ctx->uVar1;
    ushort &uVar5 = ctx->uVar5;
    char &cVar6 = ctx->cVar6;
    uint &uVar10 = ctx->uVar10;
    uint *&puVar11 = ctx->puVar11;
    uint &uVar15 = ctx->uVar15;
    short *&psVar17 = ctx->psVar17;
    int &iVar18 = ctx->iVar18;
    int *&piVar22 = ctx->piVar22;
    uint *&puVar23 = ctx->puVar23;
    short *&psVar16 = ctx->psVar16;
    int &iVar24 = ctx->iVar24;
    short *&psVar20 = ctx->psVar20;
    int *&piVar29 = ctx->piVar29;
    int &iVar30 = ctx->iVar30;
    uint *&puVar34 = ctx->puVar34;
    int *&piVar36 = ctx->piVar36;
    char *&pcVar38 = ctx->pcVar38;
    SPart *&pSVar36 = ctx->pSVar36;
    CPickList &local_bec = ctx->local_bec;
    auto &local_540 = ctx->local_540;
    ushort &uStack_2ec = ctx->uStack_2ec;
    int &local_154 = ctx->local_154;
    int *&local_f0 = ctx->local_f0;
    SPart *&local_d8 = ctx->local_d8;
    int &local_d4 = ctx->local_d4;
    int &local_d0 = ctx->local_d0;
    int &local_cc = ctx->local_cc;
    short *&local_c8 = ctx->local_c8;
    int &local_c4 = ctx->local_c4;
    short *&local_c0 = ctx->local_c0;
    short *&local_bc = ctx->local_bc;
    short *&local_6c = ctx->local_6c;
    int *&local_68 = ctx->local_68;
    int &local_64 = ctx->local_64;
    int &local_60 = ctx->local_60;
    int *&local_5c = ctx->local_5c;
    int &local_58 = ctx->local_58;
    int &local_54 = ctx->local_54;
    int &local_44 = ctx->local_44;
    int &local_40 = ctx->local_40;
    int &local_38 = ctx->local_38;
    int &local_34 = ctx->local_34;
    int &local_18 = ctx->local_18;
    char &cVar1 = ctx->cVar1;

            local_d8 = this_ptr->parts;
            do {
              _sprintf(local_540,"There are %d triangles I couldn't match.");
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
                pcVar38 = "MySpecialTriangles";
                pSVar36 = local_d8 + this_ptr->num_parts;
                do {
                  cVar1 = *pcVar38;
                  pSVar36->part_name[0] = cVar1;
                  if (cVar1 == '\0') break;
                  cVar6 = pcVar38[1];
                  pcVar38 = pcVar38 + 2;
                  pSVar36->part_name[1] = cVar6;
                  pSVar36 = (SPart *)(pSVar36->part_name + 2);
                } while (cVar6 != '\0');
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
                  local_44 = local_154 * 0x12;
                  local_40 = local_154 * 4;
                  do {
                    if (local_d4 == 0) break;
                    local_d4 = 0;
                    local_34 = iVar18;
                    if (iVar18 < this_ptr->tri_count[0]) {
                      local_5c = local_f0 + iVar18;
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
                              local_64 = local_64 + 0x12;
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
                        local_60 = local_60 + 0x12;
                      } while (local_34 < this_ptr->tri_count[0]);
                    }
                    local_cc = local_cc + 1;
                  } while (local_cc < this_ptr->tri_count[0]);
                }
                local_38 = this_ptr->tri_count[0];
                while (local_38 = local_38 + -1, -1 < local_38) {
                  iVar30 = 0;
                  if (0 < local_38) {
                    local_58 = 0;
                    local_54 = 0x12;
                    piVar29 = local_f0;
                    do {
                      if (piVar29[1] < *piVar29) {
                        local_18 = iVar30 * 4 + 4;
                        piVar36 = this_ptr->index_data_ptr[0] + iVar30 + 1;
                        piVar22 = this_ptr->index_data_ptr[0] + iVar30;
                        iVar18 = *piVar22;
                        *piVar22 = *piVar36;
                        *piVar36 = iVar18;
                        puVar23 = (uint *)
                                  ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0
                                  + local_58);
                        uVar10 = *puVar23;
                        uVar15 = puVar23[1];
                        uStack_2ec = (ushort)((uint)*(uint *)((int)puVar23 + 6) >> 0x10);
                        uVar1 = *(ushort *)((int)puVar23 + 10);
                        puVar11 = (uint *)puVar23[3];
                        uVar5 = *(ushort *)(puVar23 + 4);
                        *puVar23 = *puVar11;
                        puVar23[1] = puVar11[1];
                        puVar23[2] = puVar11[2];
                        puVar34 = (uint *)puVar11[3];
                        puVar23[3] = puVar34;
                        *(ushort *)(puVar23 + 4) = *(ushort *)(puVar11 + 4);
                        *puVar34 = uVar10;
                        puVar34[1] = uVar15;
                        puVar34[2] = CONCAT22(uVar1,uStack_2ec);
                        puVar34[3] = puVar11;
                        *(ushort *)(puVar34 + 4) = uVar5;
                        iVar18 = *piVar29;
                        *piVar29 = local_f0[iVar30 + 1];
                        local_f0[iVar30 + 1] = iVar18;
                      }
                      iVar30 = iVar30 + 1;
                      piVar29 = piVar29 + 1;
                      local_58 = local_58 + 0x12;
                      local_54 = local_54 + 0x12;
                    } while (iVar30 < local_38);
                  }
                }
                iVar30 = 1;
              }
            } while (local_154 != this_ptr->tri_count[0]);
    return 0;
}

// Chunk: else_0_check_this_ptr_5_check_0_3 (lines 934-1095 of original)
static int CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_0_3(CDeformableModel_determinePartsFromS3D_Ctx *ctx) {
    CDeformableModel *&this_ptr = ctx->this_ptr;
    SVert *&pSVar9 = ctx->pSVar9;
    int &iVar18 = ctx->iVar18;
    CVector3f *&pCVar19 = ctx->pCVar19;
    int &iVar24 = ctx->iVar24;
    int &iVar30 = ctx->iVar30;
    void *&pvVar35 = ctx->pvVar35;
    SInputFace *&pSVar37 = ctx->pSVar37;
    char *&pcVar38 = ctx->pcVar38;
    void *&pvVar37 = ctx->pvVar37;
    float &local_a1f0 = ctx->local_a1f0;
    auto &local_a1ec = ctx->local_a1ec;
    auto &local_740 = ctx->local_740;
    float &local_248 = ctx->local_248;
    float &local_244 = ctx->local_244;
    float &local_240 = ctx->local_240;
    float &local_218 = ctx->local_218;
    float &local_214 = ctx->local_214;
    float &local_210 = ctx->local_210;
    float &local_1c4 = ctx->local_1c4;
    float &local_1c0 = ctx->local_1c0;
    float &local_1bc = ctx->local_1bc;
    float &local_1ac = ctx->local_1ac;
    float &local_1a8 = ctx->local_1a8;
    float &local_1a4 = ctx->local_1a4;
    CVector3f *&local_188 = ctx->local_188;
    SS3DFaceMatch *&local_184 = ctx->local_184;
    float &local_16c = ctx->local_16c;
    int &local_160 = ctx->local_160;
    int &local_b8 = ctx->local_b8;
    void *&local_b4 = ctx->local_b4;
    SInputFace *&local_b0 = ctx->local_b0;
    int &local_ac = ctx->local_ac;
    STextureSet *&local_a8 = ctx->local_a8;
    STextureSet *&local_a4 = ctx->local_a4;
    float &local_a0 = ctx->local_a0;
    int &local_9c = ctx->local_9c;
    float &local_98 = ctx->local_98;
    void *&local_50 = ctx->local_50;
    void *&local_4c = ctx->local_4c;
    CDeformableModel *&local_48 = ctx->local_48;
    int &local_3c = ctx->local_3c;
    int &local_24 = ctx->local_24;
    int &local_20 = ctx->local_20;
    float &local_1c = ctx->local_1c;
    int &local_18 = ctx->local_18;

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
                    iVar30 = this_ptr->tri_count[0] + this_ptr->cap_tri_count[0];
                    local_b0 = this_ptr->tri_data_ptr[0] + iVar30;
                    if (local_160 < 0) {
                      iVar30 = *(int *)((int)local_4c + 0x14);
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
                                   texture_name,"%s.raw");
                        this_ptr->num_textures = this_ptr->num_textures + 1;
                      }
                      this_ptr->index_data_ptr[0]
                      [this_ptr->tri_count[0] + this_ptr->cap_tri_count[0]] = iVar18;
                    }
                    else {
                      this_ptr->index_data_ptr[0][iVar30] = local_160;
                    }
                    local_20 = 0;
                    pSVar37 = local_b0;
                    pvVar37 = local_b4;
                    do {
                      pCVar19 = local_188 + *(int *)((int)pvVar37 + 0x18);
                      local_1c4 = pCVar19->x;
                      local_1c0 = pCVar19->y;
                      local_1bc = pCVar19->z;
                      local_a1f0 = 1e+20;
                      iVar30 = 0;
                      if (0 < this_ptr->vertex_count[0]) {
                        iVar18 = 0;
                        do {
                          pSVar9 = this_ptr->vertex_data_ptr[0];
                          local_218 = *(float *)((int)pSVar9->bone_weights + iVar18 + 0xc) -
                                      local_1c4;
                          local_214 = *(float *)((int)pSVar9->bone_weights + iVar18 + 0x10) -
                                      local_1c0;
                          local_210 = *(float *)((int)pSVar9->bone_weights + iVar18 + 0x14) -
                                      local_1bc;
                          local_a0 = local_210 * local_210 +
                                     local_218 * local_218 + local_214 * local_214;
                          if (local_a0 < local_a1f0) {
                            (pSVar37->vertex_indices).vertex_index_0 = (ushort)iVar30;
                            local_a1f0 = local_a0;
                          }
                          iVar30 = iVar30 + 1;
                          iVar18 = iVar18 + 0x34;
                        } while (iVar30 < this_ptr->vertex_count[0]);
                      }
                      if ((float)0.20000000000000001 < local_a1f0) {
                        _sprintf(g_SkeleditStatusMessage,"Can't find good match for capped face vertex, probably because there was a new vertex created only for a capped face");
                        return GOTO_LAB_0058f8e7;
                      }
                      iVar30 = *(int *)((int)pvVar37 + 0x1c) >> 8;
                      iVar18 = *(int *)((int)pvVar37 + 0x20) >> 8;
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
                      pvVar37 = (void *)((int)pvVar37 + 0xc);
                      pSVar37->v_coord_0 = (ushort)iVar18;
                      local_20 = local_20 + 1;
                      pSVar37->u_coord_0 = (ushort)iVar30;
                      pSVar37 = (SInputFace *)&(pSVar37->vertex_indices).vertex_index_1;
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
                            iVar30 = local_9c + 6;
                            local_98 = 0.0;
                            pvVar35 = local_b4;
                            do {
                              pCVar19 = local_188 + *(int *)((int)pvVar35 + 0x18);
                              local_248 = pCVar19->x;
                              local_244 = pCVar19->y;
                              local_18 = 3;
                              local_240 = pCVar19->z;
                              pCVar19 = local_188 +
                                        *(int *)((int)local_50 + (iVar30 % 3) * 0xc + 0x18);
                              local_1ac = pCVar19->x;
                              local_1a8 = pCVar19->y;
                              local_1a4 = pCVar19->z;
                              pvVar35 = (void *)((int)pvVar35 + 0xc);
                              iVar30 = iVar30 + -1;
                              local_98 = (local_240 - local_1a4) * (local_240 - local_1a4) +
                                         (local_248 - local_1ac) * (local_248 - local_1ac) +
                                         (local_244 - local_1a8) * (local_244 - local_1a8) +
                                         local_98;
                            } while (pvVar35 != (void *)((int)local_b4 + 0x24));
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
                      _sprintf(g_SkeleditStatusMessage,"Can't find opposing part for capped face!");
                      return GOTO_LAB_0058f8e7;
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
    return 0;
}

int __cdecl core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)

{
  CDeformableModel_determinePartsFromS3D_Ctx _ctx_storage = {};
  CDeformableModel_determinePartsFromS3D_Ctx *ctx = &_ctx_storage;
  ctx->this_ptr = this_ptr;
  ctx->entry = entry;

    ushort &uVar1 = ctx->uVar1;
    ushort &uVar5 = ctx->uVar5;
    char &cVar6 = ctx->cVar6;
    ushort &uVar7 = ctx->uVar7;
    float &fVar8 = ctx->fVar8;
    SVert *&pSVar9 = ctx->pSVar9;
    uint &uVar10 = ctx->uVar10;
    uint *&puVar11 = ctx->puVar11;
    float &fVar12 = ctx->fVar12;
    float &fVar13 = ctx->fVar13;
    float &fVar14 = ctx->fVar14;
    uint &uVar15 = ctx->uVar15;
    _FILE *&p_Var16 = ctx->p_Var16;
    short *&psVar17 = ctx->psVar17;
    int &iVar9 = ctx->iVar9;
    int &iVar18 = ctx->iVar18;
    float *&pfVar10 = ctx->pfVar10;
    CBoundingBox3D *&pCVar11 = ctx->pCVar11;
    CVector3f *&pCVar19 = ctx->pCVar19;
    float *&pfVar20 = ctx->pfVar20;
    CDeformableModel *&pCVar12 = ctx->pCVar12;
    uint *&puVar13 = ctx->puVar13;
    SS3DFaceMatch *&pSVar21 = ctx->pSVar21;
    int *&piVar22 = ctx->piVar22;
    uint *&puVar23 = ctx->puVar23;
    SInputFace *&pSVar14 = ctx->pSVar14;
    int *&piVar15 = ctx->piVar15;
    short *&psVar16 = ctx->psVar16;
    int &iVar24 = ctx->iVar24;
    void *&pvVar17 = ctx->pvVar17;
    uint &uVar18 = ctx->uVar18;
    uint &uVar19 = ctx->uVar19;
    uint &uVar25 = ctx->uVar25;
    CDeformableModel *&pCVar27 = ctx->pCVar27;
    short *&psVar20 = ctx->psVar20;
    int &iVar21 = ctx->iVar21;
    CVector3f *&pCVar28 = ctx->pCVar28;
    int *&piVar29 = ctx->piVar29;
    int &iVar22 = ctx->iVar22;
    int &iVar30 = ctx->iVar30;
    char *&pcVar23 = ctx->pcVar23;
    ushort *&puVar24 = ctx->puVar24;
    CVector3f *&pCVar31 = ctx->pCVar31;
    uint *&puVar34 = ctx->puVar34;
    void *&pvVar35 = ctx->pvVar35;
    CVector3f *&pCVar25 = ctx->pCVar25;
    CVector3f *&pCVar26 = ctx->pCVar26;
    int *&piVar27 = ctx->piVar27;
    uint *&puVar28 = ctx->puVar28;
    SInputFace *&pSVar29 = ctx->pSVar29;
    int *&piVar36 = ctx->piVar36;
    SInputFace *&pSVar37 = ctx->pSVar37;
    char *&pcVar38 = ctx->pcVar38;
    char *&pcVar30 = ctx->pcVar30;
    uint *&puVar31 = ctx->puVar31;
    uint *&puVar32 = ctx->puVar32;
    uint *&puVar33 = ctx->puVar33;
    SInputFace *&pSVar34 = ctx->pSVar34;
    int *&piVar35 = ctx->piVar35;
    SPart *&pSVar36 = ctx->pSVar36;
    void *&pvVar37 = ctx->pvVar37;
    byte &bVar38 = ctx->bVar38;
    byte &bVar39 = ctx->bVar39;
    float &local_a1f0 = ctx->local_a1f0;
    auto &local_a1ec = ctx->local_a1ec;
    CPickList &local_bec = ctx->local_bec;
    auto &local_844 = ctx->local_844;
    auto &local_740 = ctx->local_740;
    auto &local_640 = ctx->local_640;
    auto &local_540 = ctx->local_540;
    auto &local_478 = ctx->local_478;
    auto &local_400 = ctx->local_400;
    auto &local_388 = ctx->local_388;
    CBoundingBox3D &local_324 = ctx->local_324;
    CBoundingBox3D &local_30c = ctx->local_30c;
    ushort &uStack_2ec = ctx->uStack_2ec;
    ushort &uStack_2d8 = ctx->uStack_2d8;
    float &local_2cc = ctx->local_2cc;
    float &local_2c8 = ctx->local_2c8;
    float &local_2c4 = ctx->local_2c4;
    float &local_2c0 = ctx->local_2c0;
    float &local_2bc = ctx->local_2bc;
    float &local_2b8 = ctx->local_2b8;
    float &local_2b4 = ctx->local_2b4;
    float &local_2b0 = ctx->local_2b0;
    float &local_2ac = ctx->local_2ac;
    float &local_2a8 = ctx->local_2a8;
    float &local_2a4 = ctx->local_2a4;
    float &local_2a0 = ctx->local_2a0;
    float &local_29c = ctx->local_29c;
    float &local_298 = ctx->local_298;
    float &local_294 = ctx->local_294;
    float &local_290 = ctx->local_290;
    float &local_28c = ctx->local_28c;
    float &local_288 = ctx->local_288;
    float &local_284 = ctx->local_284;
    float &local_280 = ctx->local_280;
    float &local_27c = ctx->local_27c;
    uint &local_278 = ctx->local_278;
    auto &local_274 = ctx->local_274;
    auto &local_270 = ctx->local_270;
    float &local_26c = ctx->local_26c;
    float &local_268 = ctx->local_268;
    float &local_264 = ctx->local_264;
    float &local_260 = ctx->local_260;
    float &local_25c = ctx->local_25c;
    float &local_258 = ctx->local_258;
    float &local_254 = ctx->local_254;
    float &local_250 = ctx->local_250;
    float &local_24c = ctx->local_24c;
    float &local_248 = ctx->local_248;
    float &local_244 = ctx->local_244;
    float &local_240 = ctx->local_240;
    float &local_23c = ctx->local_23c;
    float &local_238 = ctx->local_238;
    float &local_234 = ctx->local_234;
    float &local_230 = ctx->local_230;
    float &local_22c = ctx->local_22c;
    float &local_228 = ctx->local_228;
    float &local_224 = ctx->local_224;
    float &local_220 = ctx->local_220;
    float &local_21c = ctx->local_21c;
    float &local_218 = ctx->local_218;
    float &local_214 = ctx->local_214;
    float &local_210 = ctx->local_210;
    float &local_20c = ctx->local_20c;
    float &local_208 = ctx->local_208;
    float &local_204 = ctx->local_204;
    float &local_200 = ctx->local_200;
    auto &local_1fc = ctx->local_1fc;
    float &local_1f4 = ctx->local_1f4;
    float &local_1f0 = ctx->local_1f0;
    float &local_1ec = ctx->local_1ec;
    float &local_1e8 = ctx->local_1e8;
    float &local_1e4 = ctx->local_1e4;
    float &local_1e0 = ctx->local_1e0;
    float &local_1dc = ctx->local_1dc;
    float &local_1d8 = ctx->local_1d8;
    float &local_1d4 = ctx->local_1d4;
    float &local_1d0 = ctx->local_1d0;
    float &local_1cc = ctx->local_1cc;
    float &local_1c8 = ctx->local_1c8;
    float &local_1c4 = ctx->local_1c4;
    float &local_1c0 = ctx->local_1c0;
    float &local_1bc = ctx->local_1bc;
    float &local_1b8 = ctx->local_1b8;
    float &local_1b4 = ctx->local_1b4;
    float &local_1b0 = ctx->local_1b0;
    float &local_1ac = ctx->local_1ac;
    float &local_1a8 = ctx->local_1a8;
    float &local_1a4 = ctx->local_1a4;
    float &local_1a0 = ctx->local_1a0;
    float &local_19c = ctx->local_19c;
    float &local_198 = ctx->local_198;
    float &local_194 = ctx->local_194;
    auto &local_190 = ctx->local_190;
    auto &local_18c = ctx->local_18c;
    CVector3f *&local_188 = ctx->local_188;
    SS3DFaceMatch *&local_184 = ctx->local_184;
    _FILE *&local_180 = ctx->local_180;
    CVector3f *&local_17c = ctx->local_17c;
    CVector3f *&local_178 = ctx->local_178;
    void *&local_174 = ctx->local_174;
    uint *&local_170 = ctx->local_170;
    float &local_16c = ctx->local_16c;
    float &local_168 = ctx->local_168;
    auto &local_164 = ctx->local_164;
    int &local_160 = ctx->local_160;
    void *&local_15c = ctx->local_15c;
    int &local_158 = ctx->local_158;
    int &local_154 = ctx->local_154;
    SInputFace *&local_150 = ctx->local_150;
    int *&local_14c = ctx->local_14c;
    SPart *&local_148 = ctx->local_148;
    int &local_144 = ctx->local_144;
    SPart *&local_140 = ctx->local_140;
    auto &local_13c = ctx->local_13c;
    void *&local_134 = ctx->local_134;
    uint &local_130 = ctx->local_130;
    int &local_12c = ctx->local_12c;
    int &local_128 = ctx->local_128;
    int &local_124 = ctx->local_124;
    SInputFace *&local_120 = ctx->local_120;
    int &local_11c = ctx->local_11c;
    int &local_118 = ctx->local_118;
    void *&local_114 = ctx->local_114;
    float &local_110 = ctx->local_110;
    int &local_10c = ctx->local_10c;
    float *&local_108 = ctx->local_108;
    float &local_104 = ctx->local_104;
    float *&local_fc = ctx->local_fc;
    float *&local_f8 = ctx->local_f8;
    int &local_f4 = ctx->local_f4;
    int *&local_f0 = ctx->local_f0;
    _FILE *&local_ec = ctx->local_ec;
    int &local_e8 = ctx->local_e8;
    int &local_e4 = ctx->local_e4;
    int &local_e0 = ctx->local_e0;
    auto &local_dc = ctx->local_dc;
    SPart *&local_d8 = ctx->local_d8;
    int &local_d4 = ctx->local_d4;
    int &local_d0 = ctx->local_d0;
    int &local_cc = ctx->local_cc;
    short *&local_c8 = ctx->local_c8;
    int &local_c4 = ctx->local_c4;
    short *&local_c0 = ctx->local_c0;
    short *&local_bc = ctx->local_bc;
    int &local_b8 = ctx->local_b8;
    void *&local_b4 = ctx->local_b4;
    SInputFace *&local_b0 = ctx->local_b0;
    int &local_ac = ctx->local_ac;
    STextureSet *&local_a8 = ctx->local_a8;
    STextureSet *&local_a4 = ctx->local_a4;
    float &local_a0 = ctx->local_a0;
    int &local_9c = ctx->local_9c;
    float &local_98 = ctx->local_98;
    byte *&local_94 = ctx->local_94;
    uint *&local_90 = ctx->local_90;
    float *&local_8c = ctx->local_8c;
    void *&local_88 = ctx->local_88;
    void *&local_84 = ctx->local_84;
    int &local_80 = ctx->local_80;
    void *&local_7c = ctx->local_7c;
    float *&local_78 = ctx->local_78;
    int &local_74 = ctx->local_74;
    int &local_70 = ctx->local_70;
    short *&local_6c = ctx->local_6c;
    int *&local_68 = ctx->local_68;
    int &local_64 = ctx->local_64;
    int &local_60 = ctx->local_60;
    int *&local_5c = ctx->local_5c;
    int &local_58 = ctx->local_58;
    int &local_54 = ctx->local_54;
    void *&local_50 = ctx->local_50;
    void *&local_4c = ctx->local_4c;
    CDeformableModel *&local_48 = ctx->local_48;
    int &local_44 = ctx->local_44;
    int &local_40 = ctx->local_40;
    int &local_3c = ctx->local_3c;
    int &local_38 = ctx->local_38;
    int &local_34 = ctx->local_34;
    int &local_30 = ctx->local_30;
    int &local_2c = ctx->local_2c;
    int &local_28 = ctx->local_28;
    int &local_24 = ctx->local_24;
    int &local_20 = ctx->local_20;
    float &local_1c = ctx->local_1c;
    int &local_18 = ctx->local_18;
    ushort &uVar2 = ctx->uVar2;
    char &cVar1 = ctx->cVar1;
    float &fVar6 = ctx->fVar6;
    SVert *&pSVar5 = ctx->pSVar5;
    ushort &uVar4 = ctx->uVar4;
    ushort &uVar3 = ctx->uVar3;
    _FILE *&file = ctx->file;
    _FILE *&p_Var8 = ctx->p_Var8;
    CEditorTools *&this_ptr_00 = ctx->this_ptr_00;
    double &dVar7 = ctx->dVar7;
  // param this_ptr aliased into ctx above
  // param entry aliased into ctx above

  bVar39 = 0;
  if (this_ptr->num_lods != 1) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0xbc8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::determinePartsFromS3D - can't do this before building LODs!");
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Opening %s");
  local_188 = (CVector3f *)0x0;
  local_184 = (SS3DFaceMatch *)0x0;
  local_180 = (_FILE *)0x0;
  local_17c = (CVector3f *)0x0;
  local_178 = (CVector3f *)0x0;
  local_174 = (void *)0x0;
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
    _fprintf(local_180,"Matching skeleton parts for %s\n");
    p_Var16 = local_ec;
    iVar22 = 1;
    do {
      iVar9 = _fgetc(p_Var16);
      file = local_ec;
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar22 = iVar22 + -1, 0 < iVar22));
    _fscanf(local_ec,"%d\n");
    if ((local_e8 < 0x65) || (0x67 < local_e8)) {
      _sprintf(g_SkeleditStatusMessage,"%s has incorrect S3D version %d",entry->s3d_filename);
      goto LAB_0058f8e7;
    }
    iVar30 = 1;
    do {
      iVar18 = _fgetc(file);
      if (iVar18 < 0) break;
    } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
    iVar30 = _fscanf(local_ec,"%d,%d,%d,%d,%d,%d,%d\n",&local_e4,&local_16c,&local_168,&local_e0,
                        local_164,local_dc);
    this_ptr_00 = g_CEditorToolsPtr;
    if (iVar30 == 7) {
      if (local_e0 < 0x1f) {
        this_ptr->num_parts = local_e0;
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (this_ptr_00,"Reading part list from %s");
        _fprintf(local_180,"Reading part list from %s\n");
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
            local_144 = iVar30 * 4;
            iVar18 = _fscanf(local_ec,"%d,%d,%*d,%d,\"%[^\"]\"\n",local_94,local_90,piVar29);
            if (iVar18 != 4) goto LAB_00590a70;
            this_ptr->parts[iVar30].adj_part_count = 0;
            piVar29 = piVar29 + 0x18;
            _fprintf(local_180,"\t%2d: %s, verts=%d, tris=%d\n",iVar30,local_140,
                       *(uint *)((int)local_400 + local_144));
            iVar30 = iVar30 + 1;
            local_94 = local_94 + 4;
            local_90 = local_90 + 1;
          } while (iVar30 < this_ptr->num_parts);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading texture list from %s");
        _fprintf(local_180,"Reading texture list from %s\n");
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
            iVar18 = _fscanf(local_ec,"%[^\n]\n");
            if (iVar18 != 1) goto LAB_00590a70;
            splitpath
                      (local_844,(char *)0x0,(char *)0x0,pcVar23,(char *)0x0);
            iVar30 = iVar30 + 1;
            pcVar23 = pcVar23 + 0x100;
          } while (iVar30 < local_e4);
        }
        pcVar38 = g_GoreBuffer;
        pcVar30 = local_388;
        for (iVar30 = 0x19; iVar30 != 0; iVar30 = iVar30 + -1) {
          pcVar30 = pcVar30 + (uint)bVar39 * -8 + 4;
          *(uint *)pcVar30 = *(uint *)pcVar38;
          pcVar38 = pcVar38 + ((uint)bVar39 * -2 + 1) * 4;
          pcVar30 = pcVar30;
        }
        if (entry->skip_generation == 0) {
          shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Automap cap faces to texture (blank to leave map as-is) NO EXTENSION",local_388,100,1);
        }
        local_160 = -1;
        if (local_388[0] != '\0') {
          int _rc = CDeformableModel_determinePartsFromS3D_else_0_check_local_388_0(ctx);
          if (_rc == GOTO_LAB_0058f8e7) goto LAB_0058f8e7;
        }
        local_184 = (SS3DFaceMatch *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                              ((int)local_16c * 0x3c,"..\\core\\skeledit.cpp",0xc4e);
        if (local_184 == (SS3DFaceMatch *)0x0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0xc4f;
          core_main_c_displayErrorAndQuit_FUN_00506f10("out of memory in CDeformableModel::determinePartsFromS3D");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Reading faces from %s");
        _fprintf(local_180,"Reading faces from %s\n");
        p_Var16 = local_ec;
        iVar30 = 1;
        do {
          iVar18 = _fgetc(p_Var16);
          if (iVar18 < 0) break;
        } while ((iVar18 != 10) || (iVar30 = iVar30 + -1, 0 < iVar30));
        iVar30 = 0;
        pSVar21 = local_184;
        if (0 < (int)local_16c) {
          int _rc = CDeformableModel_determinePartsFromS3D_else_0_check_0_1(ctx);
          if (_rc == GOTO_LAB_00590a70) goto LAB_00590a70;
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
                  (g_CEditorToolsPtr,"Reading vertices from %s");
        _fprintf(local_180,"Reading vertices from %s\n");
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
            iVar18 = _fscanf(local_ec,"%f,%f,%f\n");
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
          CDeformableModel_determinePartsFromS3D_else_0_check_0_2(ctx);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Biasing %s");
        if (&local_30c != (CBoundingBox3D *)local_188) {
          local_30c.min.x = local_188->x;
          local_30c.min.y = local_188->y;
          local_30c.min.z = local_188->z;
        }
        if (&local_30c.max != local_188) {
          local_30c.max.x = local_188->x;
          local_30c.max.y = local_188->y;
          local_30c.max.z = local_188->z;
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
          local_324.min.x = pCVar19->x;
          local_324.min.y = (pSVar5->position).y;
          local_324.min.z = (pSVar5->position).z;
        }
        if (&local_324.max != pCVar19) {
          local_324.max.x = pCVar19->x;
          local_324.max.y = (pSVar5->position).y;
          local_324.max.z = (pSVar5->position).z;
        }
        iVar30 = 1;
        if (1 < this_ptr->vertex_count[0]) {
          iVar18 = 0x34;
          do {
            core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                      (&local_324,
                       (CVector3f *)((int)this_ptr->vertex_data_ptr[0]->bone_weights + iVar18 + 0xc)
                      );
            iVar30 = iVar30 + 1;
            iVar18 = iVar18 + 0x34;
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
        pCVar11 = (CBoundingBox3D *)local_188;
        if (0 < (int)local_168) {
          do {
            (pCVar11->min).x = ((pCVar11->min).x - local_30c.min.x) * local_1dc + local_324.min.x;
            (pCVar11->min).y = ((pCVar11->min).y - local_30c.min.y) * local_1d8 + local_324.min.y;
            iVar30 = iVar30 + 1;
            (pCVar11->min).z = ((pCVar11->min).z - local_30c.min.z) * local_1d4 + local_324.min.z;
            pCVar11 = (CBoundingBox3D *)&pCVar11->max;
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
                            ((int)local_16c * 0xc + 4,"..\\core\\skeledit.cpp",0xd0f);
        local_17c = pCVar19;
        if (pCVar19 != (CVector3f *)0x0) {
          local_17c = (CVector3f *)&pCVar19->y;
          pCVar19->x = local_16c;
        }
        fVar8 = (float)this_ptr->tri_count[0];
        pCVar19 = (CVector3f *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                            ((int)fVar8 * 0xc + 4,"..\\core\\skeledit.cpp",0xd10);
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
          CDeformableModel_determinePartsFromS3D_else_0_check_0_3(ctx);
        }
        iVar30 = 0;
        if (0 < this_ptr->tri_count[0]) {
          CDeformableModel_determinePartsFromS3D_else_0_check_0_4(ctx);
        }
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                  (g_CEditorToolsPtr,"Matching faces");
        _fprintf(local_180,"Matching faces in %s\n");
        if (this_ptr->tri_count[0] <= (int)local_16c) {
          local_174 = shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                                (this_ptr->tri_count[0] * 4,"..\\core\\skeledit.cpp",0xd42);
          if (local_174 == (void *)0x0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xd43;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
          }
          local_15c = local_184;
          iVar30 = 0;
          if (0 < this_ptr->num_parts) {
            iVar18 = 0;
            do {
              pvVar35 = local_15c;
              for (iVar21 = 0; iVar21 < *(int *)((int)this_ptr->parts[0].tri_counts + iVar18);
                  iVar21 = iVar21 + 1) {
                *(uint *)((int)pvVar35 + 0xc) = 0xffffffff;
                *(int *)((int)pvVar35 + 8) = iVar30;
                pvVar35 = (void *)((int)pvVar35 + 0x3c);
              }
              local_15c = (void *)((int)local_15c +
                                  *(int *)((int)this_ptr->parts[0].tri_counts + iVar18) * 0x3c);
              iVar18 = iVar18 + 0x60;
              iVar30 = iVar30 + 1;
            } while (iVar30 < this_ptr->num_parts);
          }
          local_2c = 0;
        if (0 < this_ptr->tri_count[0]) {
          CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_0_0(ctx);
        }
          shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd1;
          if (local_17c != (CVector3f *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659(&local_17c[-1].z);
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd2;
          local_17c = (CVector3f *)0x0;
          if (local_178 != (CVector3f *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659(&local_178[-1].z);
          }
          local_178 = (CVector3f *)0x0;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xdd3;
          shape_memdbg_cpp_free_FUN_005fe659(local_174);
          iVar30 = 0;
          local_174 = (void *)0x0;
          local_158 = 0;
          pCVar12 = this_ptr;
          if (0 < this_ptr->num_parts) {
            do {
              pCVar12->parts[0].cap_tri_counts[0] = 0;
              pCVar12->parts[0].tri_counts[0] = 0;
              iVar30 = iVar30 + 1;
              pCVar12 = (CDeformableModel *)(pCVar12->tri_count + 3);
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
          int _rc = CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_0_1(ctx);
          if (_rc == GOTO_LAB_0058f8da) goto LAB_0058f8da;
        }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xe86;
          shape_memdbg_cpp_free_FUN_005fe659(local_170);
          local_30 = this_ptr->tri_count[0];
          local_170 = (uint *)0x0;
          while (local_30 = local_30 + -1, -1 < local_30) {
            iVar30 = 0;
            if (0 < local_30) {
              local_74 = 0;
              local_70 = 0x12;
              piVar29 = local_f0;
              do {
                if (piVar29[1] < *piVar29) {
                  local_18 = iVar30 * 4 + 4;
                  piVar27 = this_ptr->index_data_ptr[0] + iVar30 + 1;
                  piVar22 = this_ptr->index_data_ptr[0] + iVar30;
                  iVar18 = *piVar22;
                  *piVar22 = *piVar27;
                  *piVar27 = iVar18;
                  puVar23 = (uint *)
                            ((int)&(this_ptr->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                            local_74);
                  uVar10 = *puVar23;
                  uVar15 = puVar23[1];
                  uStack_2d8 = (ushort)((uint)*(uint *)((int)puVar23 + 6) >> 0x10);
                  uVar1 = *(ushort *)((int)puVar23 + 10);
                  puVar11 = (uint *)puVar23[3];
                  uVar5 = *(ushort *)(puVar23 + 4);
                  *puVar23 = *puVar11;
                  puVar23[1] = puVar11[1];
                  puVar23[2] = puVar11[2];
                  puVar34 = (uint *)puVar11[3];
                  puVar23[3] = puVar34;
                  *(ushort *)(puVar23 + 4) = *(ushort *)(puVar11 + 4);
                  *puVar34 = uVar10;
                  puVar34[1] = uVar15;
                  puVar34[2] = CONCAT22(uVar1,uStack_2d8);
                  puVar34[3] = puVar11;
                  *(ushort *)(puVar34 + 4) = uVar5;
                  iVar18 = *piVar29;
                  *piVar29 = local_f0[iVar30 + 1];
                  local_f0[iVar30 + 1] = iVar18;
                }
                iVar30 = iVar30 + 1;
                piVar29 = piVar29 + 1;
                local_74 = local_74 + 0x12;
                local_70 = local_70 + 0x12;
              } while (iVar30 < local_30);
            }
          }
          iVar30 = 2;
        if (local_154 != this_ptr->tri_count[0]) {
          CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_local_154_2(ctx);
        }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf0c;
          shape_memdbg_cpp_free_FUN_005fe659(local_f0);
          local_f0 = (int *)0x0;
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Finding capped faces in %s");
          pSVar14 = (SInputFace *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                              ((this_ptr->tri_count[0] + local_158) * 0x12,
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
          uVar25 = this_ptr->tri_count[0] * 0x12;
          pSVar29 = this_ptr->tri_data_ptr[0];
          pSVar34 = local_150;
          for (uVar18 = uVar25 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            uVar7 = (pSVar29->vertex_indices).vertex_index_1;
            (pSVar34->vertex_indices).vertex_index_0 = (pSVar29->vertex_indices).vertex_index_0;
            (pSVar34->vertex_indices).vertex_index_1 = uVar7;
            pSVar29 = (SInputFace *)((int)pSVar29 + (uint)bVar39 * -8 + 4);
            pSVar34 = (SInputFace *)((int)pSVar34 + (uint)bVar39 * -8 + 4);
          }
          for (uVar19 = uVar25 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
            pSVar34 = (SInputFace *)((int)pSVar34 + (uint)bVar39 * -2 + 1);
            pSVar29 = (SInputFace *)((int)pSVar29 + (uint)bVar39 * -2 + 1);
            *(char *)&(pSVar34->vertex_indices).vertex_index_0 =
                 (char)(pSVar29->vertex_indices).vertex_index_0;
            pSVar29 = pSVar29;
            pSVar34 = pSVar34;
          }
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          g_CurrentDebugLine = 0xf1f;
          shape_memdbg_cpp_free_FUN_005fe659(this_ptr->tri_data_ptr[0]);
          this_ptr->tri_data_ptr[0] = pSVar37;
          piVar29 = this_ptr->index_data_ptr[0];
          piVar35 = local_14c;
          for (uVar25 = this_ptr->tri_count[0] & 0x3fffffff; uVar25 != 0; uVar25 = uVar25 - 1) {
            *piVar35 = *piVar29;
            piVar29 = piVar29 + (uint)bVar39 * -2 + 1;
            piVar35 = piVar35 + (uint)bVar39 * -2 + 1;
          }
          for (iVar30 = 0; iVar30 != 0; iVar30 = iVar30 + -1) {
            piVar35 = (int *)((int)piVar35 + (uint)bVar39 * -2 + 1);
            *(char *)piVar35 = (char)*piVar29;
            piVar29 = (int *)((int)piVar29 + (uint)bVar39 * -2 + 1);
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
          int _rc = CDeformableModel_determinePartsFromS3D_else_0_check_this_ptr_5_check_0_3(ctx);
          if (_rc == GOTO_LAB_0058f8e7) goto LAB_0058f8e7;
        }
          if (local_158 != this_ptr->cap_tri_count[0]) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0xfbe;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze after adding capped triangles.");
          }
          shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                    (g_CEditorToolsPtr,"Determining adjacent parts from %s");
          iVar30 = 0;
          pCVar27 = this_ptr;
          if (0 < this_ptr->num_parts) {
            do {
              pCVar27->parts[0].adj_part_count = 0;
              iVar30 = iVar30 + 1;
              pCVar27 = (CDeformableModel *)(pCVar27->tri_count + 3);
            } while (iVar30 < this_ptr->num_parts);
          }
          g_CurrentDebugLine = 0xff5;
          g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
          if (local_188 != (CVector3f *)0x0) {
            shape_memdbg_cpp_free_FUN_005fe659(&local_188[-1].z);
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
    shape_memdbg_cpp_free_FUN_005fe659(&local_188[-1].z);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe5;
  shape_memdbg_cpp_free_FUN_005fe659(local_184);
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0xbe6;
  if (local_17c != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&local_17c[-1].z);
  }
  g_CurrentDebugLine = 0xbe7;
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  if (local_178 != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_005fe659(&local_178[-1].z);
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
