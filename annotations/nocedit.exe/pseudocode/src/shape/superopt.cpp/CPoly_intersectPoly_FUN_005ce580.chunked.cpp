// Name: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
// Address Range: [[005ce580, 005d0004] [006058d9, 006059c0] [0060f38f, 0060f3fd] [03fc56e7, 03fc5807]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

#include "nocturne.h"
typedef struct CPoly_intersectPoly_Ctx {
    CPoly *this_ptr;
    CPoly *other_poly;
    CPolyIntersectResult *out_result;
    CVector3d *pCVar4;
    CVector2d *pCVar5;
    CVector3d *pCVar6;
    CVector2d *pCVar7;
    CVector3d *pCVar8;
    CVector2d *pCVar9;
    CVector3d *pCVar11;
    CVector2d *pCVar12;
    CVector3d *pCVar13;
    CVector2d *pCVar14;
    CVector3d *pCVar15;
    CVector2d *pCVar16;
    double dVar17;
    double dVar18;
    int iVar5;
    int iVar19;
    double *pdVar20;
    int iVar6;
    int iVar7;
    int iVar8;
    double *pdVar21;
    int iVar9;
    int iVar22;
    double *pdVar23;
    double *pdVar24;
    CVert *pCVar10;
    double *pdVar11;
    double *pdVar25;
    double *pdVar12;
    CVert *pCVar26;
    double *pdVar13;
    uint *puVar27;
    double *pdVar28;
    double *pdVar14;
    uint *puVar15;
    byte bVar16;
    int aiStackY_19c4[1261];
    ulonglong uStack_5e0;
    ulonglong uStack_5d8;
    ulonglong uStack_5d0;
    uint uStack_5c8;
    uint uStack_5c4;
    uint uStack_5c0;
    uint uStack_5bc;
    uint uStack_5b8;
    uint uStack_5b4;
    uint uStack_5b0;
    uint uStack_5ac;
    uint uStack_5a8;
    uint uStack_5a4;
    uint uStack_5a0;
    uint uStack_59c;
    uint uStack_598;
    ulonglong uStack_568;
    ulonglong uStack_560;
    uint uStack_558;
    uint uStack_554;
    uint uStack_550;
    uint uStack_54c;
    uint uStack_548;
    uint uStack_544;
    uint uStack_540;
    uint uStack_53c;
    double dStack_538;
    uint uStack_530;
    double dStack_518;
    double dStack_510;
    double dStack_508;
    double dStack_500;
    double dStack_4f8;
    double dStack_4f0;
    double dStack_4e8;
    double dStack_4e0;
    double dStack_4d8;
    CVector3d CStack_4d0;
    double dStack_4b8;
    double dStack_4b0;
    double dStack_4a8;
    double dStack_4a0;
    double dStack_498;
    double dStack_490;
    double dStack_488;
    double dStack_480;
    double dStack_478;
    double dStack_470;
    double dStack_468;
    double dStack_460;
    CVector3d local_458;
    uint uStack_440[6];
    double dStack_428;
    double dStack_420;
    double dStack_418;
    CVector3d CStack_410;
    double dStack_3f8;
    double dStack_3f0;
    double dStack_3e8;
    uint uStack_3e0;
    uint uStack_3dc;
    uint uStack_3d8;
    uint uStack_3d4;
    uint uStack_3d0;
    uint uStack_3cc;
    CVector3d local_3c8;
    double dStack_3b0;
    double dStack_3a8;
    double dStack_3a0;
    double dStack_398;
    double dStack_390;
    double dStack_388;
    double dStack_380;
    double dStack_378;
    double dStack_370;
    double dStack_368;
    double dStack_360;
    double dStack_358;
    uint uStack_350;
    uint uStack_34c;
    uint uStack_348;
    uint uStack_344;
    uint uStack_340;
    uint uStack_33c;
    double dStack_338;
    double dStack_330;
    double dStack_328;
    double dStack_320;
    double dStack_318;
    double dStack_310;
    double dStack_308;
    double dStack_300;
    double dStack_2f8;
    CVector3d CStack_2f0;
    double dStack_2d8;
    double dStack_2d0;
    double dStack_2c8;
    double dStack_2c0;
    double dStack_2b8;
    double dStack_2b0;
    double dStack_2a8;
    double dStack_2a0;
    double dStack_298;
    double dStack_290;
    double dStack_288;
    double dStack_280;
    double dStack_278;
    double dStack_270;
    double dStack_268;
    double dStack_260;
    double dStack_258;
    double dStack_250;
    double dStack_248;
    double dStack_240;
    double dStack_238;
    double dStack_230;
    double dStack_228;
    double dStack_220;
    uint uStack_218;
    uint uStack_214;
    uint uStack_210;
    uint uStack_20c;
    uint uStack_208;
    uint uStack_204;
    double dStack_200;
    double dStack_1f8;
    double dStack_1f0;
    ulonglong uStack_1e8;
    double dStack_1e0;
    double uStack_1d8;
    double dStack_1d0;
    double uStack_1c8;
    double dStack_1c0;
    double uStack_1b8;
    double dStack_1b0;
    double uStack_1a8;
    double dStack_1a0;
    double uStack_198;
    double dStack_190;
    double uStack_188;
    double dStack_180;
    double uStack_178;
    double dStack_170;
    double uStack_168;
    double dStack_160;
    double uStack_158;
    double dStack_150;
    double uStack_148;
    double dStack_140;
    double uStack_138;
    double dStack_130;
    double dStack_128;
    double uStack_120;
    double uStack_118;
    double dStack_110;
    double uStack_108;
    double dStack_100;
    double uStack_f8;
    double dStack_f0;
    double uStack_e8;
    double dStack_e0;
    uint uStack_d8;
    int aiStack_d4[4];
    CVector3d *pCStack_c4;
    CVector3d *pCStack_c0;
    CVector3d *pCStack_bc;
    double *pdStack_b8;
    double *pdStack_b4;
    int iStack_b0;
    int iStack_ac;
    int iStack_a8;
    int iStack_a4;
    double *pdStack_a0;
    double *pdStack_9c;
    double *pdStack_98;
    double *pdStack_94;
    int iStack_90;
    CVector2d *pCStack_8c;
    CVector2d *pCStack_88;
    CVector2d *pCStack_84;
    CVector2d *pCStack_80;
    CVector2d *pCStack_7c;
    CVector2d *pCStack_78;
    CVector2d *pCStack_74;
    CVector2d *pCStack_70;
    int iStack_6c;
    CVector2d *pCStack_68;
    CVector2d *pCStack_64;
    CVector2d *pCStack_60;
    CVector2d *pCStack_5c;
    int iStack_58;
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    CVector3d *pCStack_48;
    CVector3d *pCStack_44;
    CVector3d *pCStack_40;
    CVector3d *pCStack_3c;
    CVector3d *pCStack_38;
    double *pdStack_34;
    CVector3d *pCStack_30;
    CVector3d *pCStack_2c;
    CVector3d *pCStack_28;
    double *pdStack_24;
    double *pdStack_20;
    double *pdStack_1c;
    double *pdStack_18;
    double dVar4;
    CVert *pCVar3;
    CVector3d *pCVar2;
    CP3D *pCVar1;
} CPoly_intersectPoly_Ctx;

// Chunk: branch_0 (lines 11-44 of original)
static int CPoly_intersectPoly_branch_0(CPoly_intersectPoly_Ctx *ctx) {
    CPoly *&this_ptr = ctx->this_ptr;
    CPoly *&other_poly = ctx->other_poly;
    int &iVar19 = ctx->iVar19;
    CVert *&pCVar26 = ctx->pCVar26;
    CVector3d &CStack_410 = ctx->CStack_410;

      pCVar26 = other_poly->parent_obj->vertex_data;
      iVar19 = (*this_ptr->vtable->rayIntersect)
                         (this_ptr,&pCVar26[other_poly->vertex_idx_1].position,
                          &pCVar26[other_poly->vertex_idx_2].position,&CStack_410);
      if (iVar19 == 0) {
        pCVar26 = other_poly->parent_obj->vertex_data;
        iVar19 = (*this_ptr->vtable->rayIntersect)
                           (this_ptr,&pCVar26[other_poly->vertex_idx_2].position,
                            &pCVar26[other_poly->vertex_idx_0].position,&CStack_410);
        if (iVar19 == 0) {
          pCVar26 = this_ptr->parent_obj->vertex_data;
          iVar19 = (*other_poly->vtable->rayIntersect)
                             (other_poly,&pCVar26[this_ptr->vertex_idx_0].position,
                              &pCVar26[this_ptr->vertex_idx_1].position,&CStack_410);
          if (iVar19 == 0) {
            pCVar26 = this_ptr->parent_obj->vertex_data;
            iVar19 = (*other_poly->vtable->rayIntersect)
                               (other_poly,&pCVar26[this_ptr->vertex_idx_1].position,
                                &pCVar26[this_ptr->vertex_idx_2].position,&CStack_410);
            if (iVar19 == 0) {
              pCVar26 = this_ptr->parent_obj->vertex_data;
              iVar19 = (*other_poly->vtable->rayIntersect)
                                 (other_poly,&pCVar26[this_ptr->vertex_idx_2].position,
                                  &pCVar26[this_ptr->vertex_idx_0].position,&CStack_410);
              if (iVar19 == 0) {
                return 0;
              }
            }
          }
        }
      }
    return 0;
}

// Chunk: chunk_1 (lines 134-556 of original)
static int CPoly_intersectPoly_chunk_1(CPoly_intersectPoly_Ctx *ctx) {
    CPolyIntersectResult *&out_result = ctx->out_result;
    CVector3d *&pCVar4 = ctx->pCVar4;
    CVector2d *&pCVar5 = ctx->pCVar5;
    CVector3d *&pCVar6 = ctx->pCVar6;
    CVector2d *&pCVar7 = ctx->pCVar7;
    CVector3d *&pCVar8 = ctx->pCVar8;
    CVector2d *&pCVar9 = ctx->pCVar9;
    CVector3d *&pCVar11 = ctx->pCVar11;
    CVector2d *&pCVar12 = ctx->pCVar12;
    CVector3d *&pCVar13 = ctx->pCVar13;
    CVector2d *&pCVar14 = ctx->pCVar14;
    CVector3d *&pCVar15 = ctx->pCVar15;
    CVector2d *&pCVar16 = ctx->pCVar16;
    double &dVar17 = ctx->dVar17;
    double &dVar18 = ctx->dVar18;
    int &iVar19 = ctx->iVar19;
    double *&pdVar20 = ctx->pdVar20;
    int &iVar7 = ctx->iVar7;
    int &iVar8 = ctx->iVar8;
    double *&pdVar21 = ctx->pdVar21;
    int &iVar9 = ctx->iVar9;
    int &iVar22 = ctx->iVar22;
    double *&pdVar23 = ctx->pdVar23;
    double *&pdVar24 = ctx->pdVar24;
    double *&pdVar25 = ctx->pdVar25;
    double *&pdVar12 = ctx->pdVar12;
    double *&pdVar13 = ctx->pdVar13;
    uint *&puVar27 = ctx->puVar27;
    double *&pdVar28 = ctx->pdVar28;
    double *&pdVar14 = ctx->pdVar14;
    uint *&puVar15 = ctx->puVar15;
    byte &bVar16 = ctx->bVar16;
    ulonglong &uStack_5e0 = ctx->uStack_5e0;
    ulonglong &uStack_5d8 = ctx->uStack_5d8;
    ulonglong &uStack_5d0 = ctx->uStack_5d0;
    uint &uStack_598 = ctx->uStack_598;
    ulonglong &uStack_568 = ctx->uStack_568;
    ulonglong &uStack_560 = ctx->uStack_560;
    double &dStack_538 = ctx->dStack_538;
    uint &uStack_530 = ctx->uStack_530;
    double &dStack_518 = ctx->dStack_518;
    double &dStack_510 = ctx->dStack_510;
    double &dStack_508 = ctx->dStack_508;
    double &dStack_500 = ctx->dStack_500;
    double &dStack_4f8 = ctx->dStack_4f8;
    double &dStack_4f0 = ctx->dStack_4f0;
    double &dStack_4b8 = ctx->dStack_4b8;
    double &dStack_4b0 = ctx->dStack_4b0;
    double &dStack_4a8 = ctx->dStack_4a8;
    double &dStack_4a0 = ctx->dStack_4a0;
    double &dStack_498 = ctx->dStack_498;
    double &dStack_490 = ctx->dStack_490;
    double &dStack_488 = ctx->dStack_488;
    double &dStack_480 = ctx->dStack_480;
    double &dStack_478 = ctx->dStack_478;
    auto &uStack_440 = ctx->uStack_440;
    double &dStack_428 = ctx->dStack_428;
    double &dStack_420 = ctx->dStack_420;
    double &dStack_418 = ctx->dStack_418;
    double &dStack_3f8 = ctx->dStack_3f8;
    double &dStack_3f0 = ctx->dStack_3f0;
    double &dStack_3e8 = ctx->dStack_3e8;
    uint &uStack_3e0 = ctx->uStack_3e0;
    uint &uStack_3dc = ctx->uStack_3dc;
    uint &uStack_3d8 = ctx->uStack_3d8;
    uint &uStack_3d4 = ctx->uStack_3d4;
    uint &uStack_3d0 = ctx->uStack_3d0;
    uint &uStack_3cc = ctx->uStack_3cc;
    double &dStack_380 = ctx->dStack_380;
    double &dStack_378 = ctx->dStack_378;
    double &dStack_370 = ctx->dStack_370;
    double &dStack_368 = ctx->dStack_368;
    double &dStack_360 = ctx->dStack_360;
    double &dStack_358 = ctx->dStack_358;
    uint &uStack_350 = ctx->uStack_350;
    uint &uStack_34c = ctx->uStack_34c;
    uint &uStack_348 = ctx->uStack_348;
    uint &uStack_344 = ctx->uStack_344;
    uint &uStack_340 = ctx->uStack_340;
    uint &uStack_33c = ctx->uStack_33c;
    double &dStack_338 = ctx->dStack_338;
    double &dStack_330 = ctx->dStack_330;
    double &dStack_328 = ctx->dStack_328;
    double &dStack_308 = ctx->dStack_308;
    double &dStack_300 = ctx->dStack_300;
    double &dStack_2f8 = ctx->dStack_2f8;
    double &dStack_2a8 = ctx->dStack_2a8;
    double &dStack_2a0 = ctx->dStack_2a0;
    double &dStack_298 = ctx->dStack_298;
    double &dStack_290 = ctx->dStack_290;
    double &dStack_288 = ctx->dStack_288;
    double &dStack_280 = ctx->dStack_280;
    double &dStack_260 = ctx->dStack_260;
    double &dStack_258 = ctx->dStack_258;
    double &dStack_250 = ctx->dStack_250;
    double &dStack_230 = ctx->dStack_230;
    double &dStack_228 = ctx->dStack_228;
    double &dStack_220 = ctx->dStack_220;
    double &dStack_200 = ctx->dStack_200;
    double &dStack_1f8 = ctx->dStack_1f8;
    double &dStack_1f0 = ctx->dStack_1f0;
    ulonglong &uStack_1e8 = ctx->uStack_1e8;
    double &dStack_1e0 = ctx->dStack_1e0;
    double &uStack_1d8 = ctx->uStack_1d8;
    double &dStack_1d0 = ctx->dStack_1d0;
    double &uStack_1c8 = ctx->uStack_1c8;
    double &dStack_1c0 = ctx->dStack_1c0;
    double &uStack_1b8 = ctx->uStack_1b8;
    double &dStack_1b0 = ctx->dStack_1b0;
    double &uStack_1a8 = ctx->uStack_1a8;
    double &dStack_1a0 = ctx->dStack_1a0;
    double &uStack_198 = ctx->uStack_198;
    double &dStack_190 = ctx->dStack_190;
    double &uStack_188 = ctx->uStack_188;
    double &dStack_180 = ctx->dStack_180;
    double &uStack_178 = ctx->uStack_178;
    double &dStack_170 = ctx->dStack_170;
    double &uStack_168 = ctx->uStack_168;
    double &dStack_160 = ctx->dStack_160;
    double &uStack_158 = ctx->uStack_158;
    double &dStack_150 = ctx->dStack_150;
    double &uStack_148 = ctx->uStack_148;
    double &dStack_140 = ctx->dStack_140;
    double &uStack_138 = ctx->uStack_138;
    double &dStack_130 = ctx->dStack_130;
    double &dStack_128 = ctx->dStack_128;
    double &uStack_120 = ctx->uStack_120;
    double &uStack_118 = ctx->uStack_118;
    double &dStack_110 = ctx->dStack_110;
    double &uStack_108 = ctx->uStack_108;
    double &dStack_100 = ctx->dStack_100;
    double &uStack_f8 = ctx->uStack_f8;
    double &dStack_f0 = ctx->dStack_f0;
    double &uStack_e8 = ctx->uStack_e8;
    double &dStack_e0 = ctx->dStack_e0;
    uint &uStack_d8 = ctx->uStack_d8;
    auto &aiStack_d4 = ctx->aiStack_d4;
    int &iStack_6c = ctx->iStack_6c;
    int &iStack_58 = ctx->iStack_58;
    int &iStack_54 = ctx->iStack_54;
    int &iStack_50 = ctx->iStack_50;
    int &iStack_4c = ctx->iStack_4c;
    CVector3d *&pCVar2 = ctx->pCVar2;

      if (((((ulonglong)dStack_3f8 & 0x7fffffff00000000) != 0) || (dStack_3f8._0_4_ != 0)) &&
         (((((ulonglong)dStack_3f0 & 0x7fffffff00000000) != 0 || (dStack_3f0._0_4_ != 0)) &&
          ((((ulonglong)dStack_3e8 & 0x7fffffff00000000) != 0 || (dStack_3e8._0_4_ != 0)))))) {
        if (((0.0 <= dStack_3f0) && (0.0 <= dStack_3e8)) ||
           ((dStack_3f0 < 0.0 && (dStack_3e8 < 0.0)))) {
          aiStack_d4[3] = 1;
          iStack_58 = 2;
          iStack_50 = 0;
        }
        else if (((0.0 <= dStack_3f8) && (0.0 <= dStack_3e8)) ||
                ((dStack_3f8 < 0.0 && (dStack_3e8 < 0.0)))) {
          aiStack_d4[3] = 2;
          iStack_58 = 0;
          iStack_50 = 1;
        }
        else {
          aiStack_d4[3] = 0;
          iStack_58 = 1;
          iStack_50 = 2;
        }
        iVar19 = aiStack_d4[3];
        dVar17 = (&dStack_3f8)[aiStack_d4[3]] /
                 ((&dStack_3f8)[aiStack_d4[3]] - (&dStack_3f8)[iStack_50]);
        pdVar20 = (double *)(&uStack_5e0 + iStack_50 * 3);
        pdVar24 = (double *)(&uStack_5e0 + aiStack_d4[3] * 3);
        dStack_2a8 = *pdVar24 - *pdVar20;
        dStack_2a0 = (double)(&uStack_5d8)[aiStack_d4[3] * 3] - (double)(&uStack_5d8)[iStack_50 * 3]
        ;
        dStack_298 = (double)(&uStack_5d0)[aiStack_d4[3] * 3] - (double)(&uStack_5d0)[iStack_50 * 3]
        ;
        pdVar25 = &dStack_2a8;
        pdVar28 = &dStack_488;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(uint *)pdVar28 = *(uint *)pdVar25;
          pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
          pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
        }
        dStack_338 = dStack_488 * dVar17;
        dStack_330 = dStack_480 * dVar17;
        dStack_328 = dStack_478 * dVar17;
        pdVar25 = &dStack_338;
        pdVar28 = &dStack_4a0;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          *(uint *)pdVar28 = *(uint *)pdVar25;
          pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
          pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
        }
        dStack_518 = *pdVar24 - dStack_4a0;
        dStack_510 = (double)(&uStack_5d8)[iVar19 * 3] - dStack_498;
        dStack_508 = (double)(&uStack_5d0)[iVar19 * 3] - dStack_490;
        pdVar25 = &dStack_518;
        puVar27 = &uStack_350;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          *puVar27 = *(uint *)pdVar25;
          pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
          puVar27 = puVar27 + (uint)bVar16 * -2 + 1;
        }
        pdVar21 = (double *)(&uStack_568 + iStack_50 * 2);
        uStack_188 = (double)(&uStack_568)[aiStack_d4[3] * 2] - *pdVar21;
        dStack_1b0 = (double)(&uStack_560)[aiStack_d4[3] * 2] - (double)(&uStack_560)[iStack_50 * 2]
        ;
        dStack_180 = dStack_1b0;
        uStack_1b8 = uStack_188;
        dStack_180._4_4_ = (double *)((ulonglong)dStack_1b0 >> 0x20);
        uStack_118 = uStack_188 * dVar17;
        dStack_1c0 = dStack_1b0 * dVar17;
        dStack_110 = dStack_1c0;
        uStack_1c8 = uStack_118;
        dStack_110._4_4_ = (double *)((ulonglong)dStack_1c0 >> 0x20);
        dStack_538 = *dStack_110._4_4_ - uStack_118;
        dVar17 = dStack_110._4_4_[1] - dStack_1c0;
        uStack_148 = dStack_538;
        dStack_140 = dVar17;
        dStack_128 = dStack_538;
        uStack_120 = dVar17;
        dVar18 = (&dStack_3f8)[iStack_58] / ((&dStack_3f8)[iStack_58] - (&dStack_3f8)[iStack_50]);
        pdVar23 = (double *)(&uStack_5e0 + iStack_58 * 3);
        dStack_500 = *pdVar23 - *pdVar20;
        dStack_4f8 = (double)(&uStack_5d8)[iStack_58 * 3] - (double)(&uStack_5d8)[iStack_50 * 3];
        dStack_4f0 = (double)(&uStack_5d0)[iStack_58 * 3] - (double)(&uStack_5d0)[iStack_50 * 3];
        pdVar25 = &dStack_500;
        pdVar28 = &dStack_368;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          *(uint *)pdVar28 = *(uint *)pdVar25;
          pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
          pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
        }
        dStack_308 = dStack_368 * dVar18;
        dStack_300 = dStack_360 * dVar18;
        dStack_2f8 = dStack_358 * dVar18;
        pdVar25 = &dStack_308;
        pdVar14 = &dStack_200;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          pdVar14 = (double *)((int)pdVar14 + (uint)bVar16 * -8 + 4);
          *(uint *)pdVar14 = *(uint *)pdVar25;
          pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
          pdVar14 = pdVar14;
        }
        dStack_380 = *pdVar23 - dStack_200;
        dStack_378 = (double)(&uStack_5d8)[iStack_58 * 3] - dStack_1f8;
        dStack_370 = (double)(&uStack_5d0)[iStack_58 * 3] - dStack_1f0;
        pdVar12 = &dStack_380;
        puVar15 = uStack_440;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
          pdVar12 = (double *)((int)pdVar12 + (uint)bVar16 * -8 + 4);
          *puVar15 = *(uint *)pdVar12;
          pdVar12 = pdVar12;
          puVar15 = puVar15;
        }
        pdVar25 = (double *)(&uStack_568 + iStack_58 * 2);
        uStack_168 = *pdVar25 - *pdVar21;
        dStack_160 = (double)(&uStack_560)[iStack_58 * 2] - (double)(&uStack_560)[iStack_50 * 2];
        uStack_178 = uStack_168;
        dStack_170 = dStack_160;
        uStack_158 = uStack_168 * dVar18;
        dStack_150 = dStack_160 * dVar18;
        uStack_1a8 = uStack_158;
        dStack_1a0 = dStack_150;
        uStack_158 = *pdVar25 - uStack_158;
        aiStack_d4._4_8_ = (double)(&uStack_560)[iStack_58 * 2] - dStack_150;
        uStack_1e8 = uStack_158;
        dStack_1e0 = (double)aiStack_d4._4_8_;
        uStack_1e8._0_4_ = SUB84(uStack_158,0);
        uStack_d8 = (uint)uStack_1e8;
        uStack_1e8._4_4_ = (int)((ulonglong)uStack_158 >> 0x20);
        aiStack_d4[0] = uStack_1e8._4_4_;
        dStack_1e0._4_4_ = (double *)((ulonglong)aiStack_d4._4_8_ >> 0x20);
        pCVar9 = (out_result->poly2).uvs + 2;
        pCVar11 = (out_result->poly2).vertices + 2;
        pCVar12 = (out_result->poly2).uvs + 1;
        pCVar13 = (out_result->poly2).vertices + 1;
        pCVar14 = (out_result->poly2).uvs;
        pCVar2 = (out_result->poly2).vertices;
        pCVar16 = (out_result->poly1).uvs + 2;
        pCVar4 = (out_result->poly1).vertices + 2;
        pCVar5 = (out_result->poly1).uvs + 1;
        pCVar6 = (out_result->poly1).vertices + 1;
        pCVar7 = (out_result->poly1).uvs;
        pCVar8 = (out_result->poly1).vertices;
        if (0.0 < (&dStack_3f8)[iStack_50]) {
          (out_result->poly1).vertex_count = 3;
          pCVar8->x = *pdVar20;
          (out_result->poly1).vertices[0].y = (double)(&uStack_5d8)[iStack_50 * 3];
          (out_result->poly1).vertices[0].z = (double)(&uStack_5d0)[iStack_50 * 3];
          pCVar7->x = *pdVar21;
          (out_result->poly1).uvs[0].y = (double)(&uStack_560)[iStack_50 * 2];
          pCVar6->x = __BITCAST_DOUBLE(CONCAT44(uStack_34c,uStack_350));
          (out_result->poly1).vertices[1].y = __BITCAST_DOUBLE(CONCAT44(uStack_344,uStack_348));
          (out_result->poly1).vertices[1].z = __BITCAST_DOUBLE(CONCAT44(uStack_33c,uStack_340));
          pCVar5->x = dStack_538;
          (out_result->poly1).uvs[1].y = dVar17;
          pCVar4->x = *dStack_1e0._4_4_;
          (out_result->poly1).vertices[2].y = dStack_1e0._4_4_[1];
          (out_result->poly1).vertices[2].z = dStack_1e0._4_4_[2];
          pCVar16->x = uStack_158;
          (out_result->poly1).uvs[2].y = (double)aiStack_d4._4_8_;
          (out_result->poly2).vertex_count = 4;
          pCVar2->x = __BITCAST_DOUBLE(CONCAT44(uStack_34c,uStack_350));
          (out_result->poly2).vertices[0].y = __BITCAST_DOUBLE(CONCAT44(uStack_344,uStack_348));
          (out_result->poly2).vertices[0].z = __BITCAST_DOUBLE(CONCAT44(uStack_33c,uStack_340));
          pCVar14->x = dStack_538;
          (out_result->poly2).uvs[0].y = dVar17;
          pCVar13->x = *pdVar24;
          (out_result->poly2).vertices[1].y = (double)(&uStack_5d8)[iVar19 * 3];
          (out_result->poly2).vertices[1].z = (double)(&uStack_5d0)[iVar19 * 3];
          pCVar12->x = *dStack_180._4_4_;
          (out_result->poly2).uvs[1].y = dStack_180._4_4_[1];
          pCVar11->x = *pdVar23;
          (out_result->poly2).vertices[2].y = (double)(&uStack_5d8)[iStack_58 * 3];
          (out_result->poly2).vertices[2].z = (double)(&uStack_5d0)[iStack_58 * 3];
          pCVar9->x = *pdVar25;
          (out_result->poly2).uvs[2].y = (double)(&uStack_560)[iStack_58 * 2];
          *(uint *)&(out_result->poly2).vertices[3].x = *(uint *)dStack_1e0._4_4_;
          *(uint *)((int)&(out_result->poly2).vertices[3].x + 4) =
               *(uint *)((int)dStack_1e0._4_4_ + 4);
          *(uint *)&(out_result->poly2).vertices[3].y = *(uint *)(dStack_1e0._4_4_ + 1);
          *(uint *)((int)&(out_result->poly2).vertices[3].y + 4) =
               *(uint *)((int)dStack_1e0._4_4_ + 0xc);
          *(uint *)&(out_result->poly2).vertices[3].z = *(uint *)(dStack_1e0._4_4_ + 2);
          *(uint *)((int)&(out_result->poly2).vertices[3].z + 4) =
               *(uint *)((int)dStack_1e0._4_4_ + 0x14);
          (out_result->poly2).uvs[3].x = uStack_158;
          (out_result->poly2).uvs[3].y = (double)aiStack_d4._4_8_;
          return 1;
        }
        (out_result->poly1).vertex_count = 4;
        pCVar8->x = __BITCAST_DOUBLE(CONCAT44(uStack_34c,uStack_350));
        (out_result->poly1).vertices[0].y = __BITCAST_DOUBLE(CONCAT44(uStack_344,uStack_348));
        (out_result->poly1).vertices[0].z = __BITCAST_DOUBLE(CONCAT44(uStack_33c,uStack_340));
        pCVar7->x = dStack_538;
        (out_result->poly1).uvs[0].y = dVar17;
        pCVar6->x = *pdVar24;
        (out_result->poly1).vertices[1].y = (double)(&uStack_5d8)[iVar19 * 3];
        (out_result->poly1).vertices[1].z = (double)(&uStack_5d0)[iVar19 * 3];
        pCVar5->x = *dStack_180._4_4_;
        (out_result->poly1).uvs[1].y = dStack_180._4_4_[1];
        pCVar4->x = *pdVar23;
        (out_result->poly1).vertices[2].y = (double)(&uStack_5d8)[iStack_58 * 3];
        (out_result->poly1).vertices[2].z = (double)(&uStack_5d0)[iStack_58 * 3];
        pCVar16->x = *pdVar25;
        (out_result->poly1).uvs[2].y = (double)(&uStack_560)[iStack_58 * 2];
        (out_result->poly1).vertices[3].x = *dStack_1e0._4_4_;
        (out_result->poly1).vertices[3].y = dStack_1e0._4_4_[1];
        (out_result->poly1).vertices[3].z = dStack_1e0._4_4_[2];
        (out_result->poly1).uvs[3].x = uStack_158;
        (out_result->poly1).uvs[3].y = (double)aiStack_d4._4_8_;
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCVar2->x = *(uint *)pdVar20;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_5e0 + iStack_50 * 0x18 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y =
             *(uint *)(&uStack_5d8 + iStack_50 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_5d8 + iStack_50 * 0x18 + 4);
        (out_result->poly2).vertices[0].z = (double)(&uStack_5d0)[iStack_50 * 3];
        pCVar14->x = *pdVar21;
        (out_result->poly2).uvs[0].y = (double)(&uStack_560)[iStack_50 * 2];
        *(uint *)&pCVar13->x = uStack_350;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) = uStack_34c;
        *(uint *)&(out_result->poly2).vertices[1].y = uStack_348;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) = uStack_344;
        *(uint *)&(out_result->poly2).vertices[1].z = uStack_340;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) = uStack_33c;
        pCVar12->x = dStack_538;
        (out_result->poly2).uvs[1].y = dVar17;
        *(uint *)&pCVar11->x = *(uint *)dStack_1e0._4_4_;
        *(uint *)((int)&(out_result->poly2).vertices[2].x + 4) =
             *(uint *)((int)dStack_1e0._4_4_ + 4);
        *(uint *)&(out_result->poly2).vertices[2].y = *(uint *)(dStack_1e0._4_4_ + 1);
        *(uint *)((int)&(out_result->poly2).vertices[2].y + 4) =
             *(uint *)((int)dStack_1e0._4_4_ + 0xc);
        *(uint *)&(out_result->poly2).vertices[2].z = *(uint *)(dStack_1e0._4_4_ + 2);
        *(uint *)((int)&(out_result->poly2).vertices[2].z + 4) =
             *(uint *)((int)dStack_1e0._4_4_ + 0x14);
        pCVar9->x = uStack_158;
        (out_result->poly2).uvs[2].y = (double)aiStack_d4._4_8_;
        return 1;
      }
      if ((((ulonglong)dStack_3f8 & 0x7fffffff00000000) == 0) && (dStack_3f8._0_4_ == 0)) {
        iStack_4c = 1;
        iStack_54 = 2;
        iStack_6c = 0;
      }
      else if ((((ulonglong)dStack_3f0 & 0x7fffffff00000000) == 0) && (dStack_3f0._0_4_ == 0)) {
        iStack_4c = 2;
        iStack_54 = 0;
        iStack_6c = 1;
      }
      else {
        iStack_4c = 0;
        iStack_54 = 1;
        iStack_6c = 2;
      }
      dVar17 = (&dStack_3f8)[iStack_4c] / ((&dStack_3f8)[iStack_4c] - (&dStack_3f8)[iStack_54]);
      pdVar24 = (double *)(&uStack_5e0 + iStack_54 * 3);
      pdVar20 = (double *)(&uStack_5e0 + iStack_4c * 3);
      dStack_230 = *pdVar20 - *pdVar24;
      dStack_228 = (double)(&uStack_5d8)[iStack_4c * 3] - (double)(&uStack_5d8)[iStack_54 * 3];
      dStack_220 = (double)(&uStack_5d0)[iStack_4c * 3] - (double)(&uStack_5d0)[iStack_54 * 3];
      pdVar25 = &dStack_230;
      pdVar28 = &dStack_4b8;
      for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(uint *)pdVar28 = *(uint *)pdVar25;
        pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
        pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
      }
      dStack_290 = dStack_4b8 * dVar17;
      dStack_288 = dStack_4b0 * dVar17;
      dStack_280 = dStack_4a8 * dVar17;
      pdVar25 = &dStack_290;
      pdVar28 = &dStack_260;
      for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(uint *)pdVar28 = *(uint *)pdVar25;
        pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
        pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
      }
      dStack_428 = *pdVar20 - dStack_260;
      dStack_420 = (double)(&uStack_5d8)[iStack_4c * 3] - dStack_258;
      dStack_418 = (double)(&uStack_5d0)[iStack_4c * 3] - dStack_250;
      pdVar25 = &dStack_428;
      puVar27 = &uStack_3e0;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar27 = *(uint *)pdVar25;
        pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
        puVar27 = puVar27 + (uint)bVar16 * -2 + 1;
      }
      uStack_598 = uStack_3e0;
      pdVar28 = (double *)(&uStack_568 + iStack_54 * 2);
      pdVar25 = (double *)(&uStack_568 + iStack_4c * 2);
      uStack_1d8 = *pdVar25 - *pdVar28;
      dStack_1d0 = (double)(&uStack_560)[iStack_4c * 2] - (double)(&uStack_560)[iStack_54 * 2];
      uStack_108 = uStack_1d8;
      dStack_100 = dStack_1d0;
      uStack_e8 = uStack_1d8 * dVar17;
      dStack_e0 = dStack_1d0 * dVar17;
      uStack_198 = uStack_e8;
      dStack_190 = dStack_e0;
      uStack_f8 = *pdVar25 - uStack_e8;
      dStack_f0 = (double)(&uStack_560)[iStack_4c * 2] - dStack_e0;
      uStack_138 = uStack_f8;
      dStack_130 = dStack_f0;
      dStack_538 = uStack_f8;
      dStack_130._0_4_ = SUB84(dStack_f0,0);
      uStack_530 = dStack_130._0_4_;
      pCVar9 = (out_result->poly2).uvs + 2;
      pCVar11 = (out_result->poly2).vertices + 2;
      pCVar12 = (out_result->poly2).uvs + 1;
      pCVar13 = (out_result->poly2).vertices + 1;
      pCVar14 = (out_result->poly2).uvs;
      pCVar15 = (out_result->poly2).vertices;
      pCVar16 = (out_result->poly1).uvs + 2;
      pCVar4 = (out_result->poly1).vertices + 2;
      pCVar5 = (out_result->poly1).uvs + 1;
      pCVar6 = (out_result->poly1).vertices + 1;
      pCVar7 = (out_result->poly1).uvs;
      pCVar8 = (out_result->poly1).vertices;
      iVar19 = iStack_6c * 0x18;
      iVar7 = iStack_6c * 0x10;
      pdVar13 = (double *)(&uStack_568 + iStack_6c * 2);
      pdVar21 = (double *)(&uStack_5e0 + iStack_6c * 3);
      if (0.0 < (&dStack_3f8)[iStack_4c]) {
        (out_result->poly1).vertex_count = 3;
        pCVar8->x = *pdVar21;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5d8)[iStack_6c * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5d0)[iStack_6c * 3];
        pCVar7->x = *pdVar13;
        (out_result->poly1).uvs[0].y = (double)(&uStack_560)[iStack_6c * 2];
        pCVar6->x = *pdVar20;
        (out_result->poly1).vertices[1].y = (double)(&uStack_5d8)[iStack_4c * 3];
        (out_result->poly1).vertices[1].z = (double)(&uStack_5d0)[iStack_4c * 3];
        pCVar5->x = *pdVar25;
        (out_result->poly1).uvs[1].y = (double)(&uStack_560)[iStack_4c * 2];
        pCVar4->x = __BITCAST_DOUBLE(CONCAT44(uStack_3dc,uStack_3e0));
        (out_result->poly1).vertices[2].y = __BITCAST_DOUBLE(CONCAT44(uStack_3d4,uStack_3d8));
        (out_result->poly1).vertices[2].z = __BITCAST_DOUBLE(CONCAT44(uStack_3cc,uStack_3d0));
        pCVar16->x = uStack_f8;
        (out_result->poly1).uvs[2].y = dStack_f0;
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCVar15->x = *(uint *)pdVar21;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_5e0 + iVar19 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y =
             *(uint *)(&uStack_5d8 + iStack_6c * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_5d8 + iVar19 + 4);
        *(uint *)&(out_result->poly2).vertices[0].z =
             *(uint *)(&uStack_5d0 + iStack_6c * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].z + 4) =
             *(uint *)((int)&uStack_5d0 + iVar19 + 4);
        *(uint *)&pCVar14->x = *(uint *)pdVar13;
        *(uint *)((int)&(out_result->poly2).uvs[0].x + 4) =
             *(uint *)((int)&uStack_568 + iVar7 + 4);
        *(uint *)&(out_result->poly2).uvs[0].y = *(uint *)(&uStack_560 + iStack_6c * 2);
        *(uint *)((int)&(out_result->poly2).uvs[0].y + 4) =
             *(uint *)((int)&uStack_560 + iVar7 + 4);
        *(uint *)&pCVar13->x = uStack_3e0;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) = uStack_3dc;
        *(uint *)&(out_result->poly2).vertices[1].y = uStack_3d8;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) = uStack_3d4;
        *(uint *)&(out_result->poly2).vertices[1].z = uStack_3d0;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) = uStack_3cc;
        pCVar12->x = uStack_f8;
        (out_result->poly2).uvs[1].y = dStack_f0;
        pCVar11->x = *pdVar24;
        (out_result->poly2).vertices[2].y = (double)(&uStack_5d8)[iStack_54 * 3];
        (out_result->poly2).vertices[2].z = (double)(&uStack_5d0)[iStack_54 * 3];
        pCVar9->x = *pdVar28;
        (out_result->poly2).uvs[2].y = (double)(&uStack_560)[iStack_54 * 2];
        return 1;
      }
      (out_result->poly2).vertex_count = 3;
      pCVar15->x = *pdVar21;
      (out_result->poly2).vertices[0].y = (double)(&uStack_5d8)[iStack_6c * 3];
      (out_result->poly2).vertices[0].z = (double)(&uStack_5d0)[iStack_6c * 3];
      pCVar14->x = *pdVar13;
      (out_result->poly2).uvs[0].y = (double)(&uStack_560)[iStack_6c * 2];
      pCVar13->x = *pdVar20;
      (out_result->poly2).vertices[1].y = (double)(&uStack_5d8)[iStack_4c * 3];
      (out_result->poly2).vertices[1].z = (double)(&uStack_5d0)[iStack_4c * 3];
      pCVar12->x = *pdVar25;
      (out_result->poly2).uvs[1].y = (double)(&uStack_560)[iStack_4c * 2];
      pCVar11->x = __BITCAST_DOUBLE(CONCAT44(uStack_3dc,uStack_3e0));
      (out_result->poly2).vertices[2].y = __BITCAST_DOUBLE(CONCAT44(uStack_3d4,uStack_3d8));
      (out_result->poly2).vertices[2].z = __BITCAST_DOUBLE(CONCAT44(uStack_3cc,uStack_3d0));
      pCVar9->x = uStack_f8;
      (out_result->poly2).uvs[2].y = dStack_f0;
      (out_result->poly1).vertex_count = 3;
      *(uint *)&pCVar8->x = *(uint *)pdVar21;
      *(uint *)((int)&(out_result->poly1).vertices[0].x + 4) =
           *(uint *)((int)&uStack_5e0 + iVar19 + 4);
      *(uint *)&(out_result->poly1).vertices[0].y =
           *(uint *)(&uStack_5d8 + iStack_6c * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].y + 4) =
           *(uint *)((int)&uStack_5d8 + iVar19 + 4);
      *(uint *)&(out_result->poly1).vertices[0].z =
           *(uint *)(&uStack_5d0 + iStack_6c * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].z + 4) =
           *(uint *)((int)&uStack_5d0 + iVar19 + 4);
      *(uint *)&pCVar7->x = *(uint *)pdVar13;
      *(uint *)((int)&(out_result->poly1).uvs[0].x + 4) =
           *(uint *)((int)&uStack_568 + iVar7 + 4);
      *(uint *)&(out_result->poly1).uvs[0].y = *(uint *)(&uStack_560 + iStack_6c * 2);
      *(uint *)((int)&(out_result->poly1).uvs[0].y + 4) =
           *(uint *)((int)&uStack_560 + iVar7 + 4);
      *(uint *)&pCVar6->x = uStack_3e0;
      *(uint *)((int)&(out_result->poly1).vertices[1].x + 4) = uStack_3dc;
      *(uint *)&(out_result->poly1).vertices[1].y = uStack_3d8;
      *(uint *)((int)&(out_result->poly1).vertices[1].y + 4) = uStack_3d4;
      *(uint *)&(out_result->poly1).vertices[1].z = uStack_3d0;
      *(uint *)((int)&(out_result->poly1).vertices[1].z + 4) = uStack_3cc;
      pCVar5->x = uStack_f8;
      (out_result->poly1).uvs[1].y = dStack_f0;
      pCVar4->x = *pdVar24;
      (out_result->poly1).vertices[2].y = (double)(&uStack_5d8)[iStack_54 * 3];
      (out_result->poly1).vertices[2].z = (double)(&uStack_5d0)[iStack_54 * 3];
      pCVar16->x = *pdVar28;
      (out_result->poly1).uvs[2].y = (double)(&uStack_560)[iStack_54 * 2];
      return 1;
    return 0;
}

int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

{
  CPoly_intersectPoly_Ctx _ctx_storage = {};
  CPoly_intersectPoly_Ctx *ctx = &_ctx_storage;
  ctx->this_ptr = this_ptr;
  ctx->other_poly = other_poly;
  ctx->out_result = out_result;

    CVector3d *&pCVar4 = ctx->pCVar4;
    CVector2d *&pCVar5 = ctx->pCVar5;
    CVector3d *&pCVar6 = ctx->pCVar6;
    CVector2d *&pCVar7 = ctx->pCVar7;
    CVector3d *&pCVar8 = ctx->pCVar8;
    CVector2d *&pCVar9 = ctx->pCVar9;
    CVector3d *&pCVar11 = ctx->pCVar11;
    CVector2d *&pCVar12 = ctx->pCVar12;
    CVector3d *&pCVar13 = ctx->pCVar13;
    CVector2d *&pCVar14 = ctx->pCVar14;
    CVector3d *&pCVar15 = ctx->pCVar15;
    CVector2d *&pCVar16 = ctx->pCVar16;
    double &dVar17 = ctx->dVar17;
    double &dVar18 = ctx->dVar18;
    int &iVar5 = ctx->iVar5;
    int &iVar19 = ctx->iVar19;
    double *&pdVar20 = ctx->pdVar20;
    int &iVar6 = ctx->iVar6;
    int &iVar7 = ctx->iVar7;
    int &iVar8 = ctx->iVar8;
    double *&pdVar21 = ctx->pdVar21;
    int &iVar9 = ctx->iVar9;
    int &iVar22 = ctx->iVar22;
    double *&pdVar23 = ctx->pdVar23;
    double *&pdVar24 = ctx->pdVar24;
    CVert *&pCVar10 = ctx->pCVar10;
    double *&pdVar11 = ctx->pdVar11;
    double *&pdVar25 = ctx->pdVar25;
    double *&pdVar12 = ctx->pdVar12;
    CVert *&pCVar26 = ctx->pCVar26;
    double *&pdVar13 = ctx->pdVar13;
    uint *&puVar27 = ctx->puVar27;
    double *&pdVar28 = ctx->pdVar28;
    double *&pdVar14 = ctx->pdVar14;
    uint *&puVar15 = ctx->puVar15;
    byte &bVar16 = ctx->bVar16;
    auto &aiStackY_19c4 = ctx->aiStackY_19c4;
    ulonglong &uStack_5e0 = ctx->uStack_5e0;
    ulonglong &uStack_5d8 = ctx->uStack_5d8;
    ulonglong &uStack_5d0 = ctx->uStack_5d0;
    uint &uStack_5c8 = ctx->uStack_5c8;
    uint &uStack_5c4 = ctx->uStack_5c4;
    uint &uStack_5c0 = ctx->uStack_5c0;
    uint &uStack_5bc = ctx->uStack_5bc;
    uint &uStack_5b8 = ctx->uStack_5b8;
    uint &uStack_5b4 = ctx->uStack_5b4;
    uint &uStack_5b0 = ctx->uStack_5b0;
    uint &uStack_5ac = ctx->uStack_5ac;
    uint &uStack_5a8 = ctx->uStack_5a8;
    uint &uStack_5a4 = ctx->uStack_5a4;
    uint &uStack_5a0 = ctx->uStack_5a0;
    uint &uStack_59c = ctx->uStack_59c;
    uint &uStack_598 = ctx->uStack_598;
    ulonglong &uStack_568 = ctx->uStack_568;
    ulonglong &uStack_560 = ctx->uStack_560;
    uint &uStack_558 = ctx->uStack_558;
    uint &uStack_554 = ctx->uStack_554;
    uint &uStack_550 = ctx->uStack_550;
    uint &uStack_54c = ctx->uStack_54c;
    uint &uStack_548 = ctx->uStack_548;
    uint &uStack_544 = ctx->uStack_544;
    uint &uStack_540 = ctx->uStack_540;
    uint &uStack_53c = ctx->uStack_53c;
    double &dStack_538 = ctx->dStack_538;
    uint &uStack_530 = ctx->uStack_530;
    double &dStack_518 = ctx->dStack_518;
    double &dStack_510 = ctx->dStack_510;
    double &dStack_508 = ctx->dStack_508;
    double &dStack_500 = ctx->dStack_500;
    double &dStack_4f8 = ctx->dStack_4f8;
    double &dStack_4f0 = ctx->dStack_4f0;
    double &dStack_4e8 = ctx->dStack_4e8;
    double &dStack_4e0 = ctx->dStack_4e0;
    double &dStack_4d8 = ctx->dStack_4d8;
    CVector3d &CStack_4d0 = ctx->CStack_4d0;
    double &dStack_4b8 = ctx->dStack_4b8;
    double &dStack_4b0 = ctx->dStack_4b0;
    double &dStack_4a8 = ctx->dStack_4a8;
    double &dStack_4a0 = ctx->dStack_4a0;
    double &dStack_498 = ctx->dStack_498;
    double &dStack_490 = ctx->dStack_490;
    double &dStack_488 = ctx->dStack_488;
    double &dStack_480 = ctx->dStack_480;
    double &dStack_478 = ctx->dStack_478;
    double &dStack_470 = ctx->dStack_470;
    double &dStack_468 = ctx->dStack_468;
    double &dStack_460 = ctx->dStack_460;
    CVector3d &local_458 = ctx->local_458;
    auto &uStack_440 = ctx->uStack_440;
    double &dStack_428 = ctx->dStack_428;
    double &dStack_420 = ctx->dStack_420;
    double &dStack_418 = ctx->dStack_418;
    CVector3d &CStack_410 = ctx->CStack_410;
    double &dStack_3f8 = ctx->dStack_3f8;
    double &dStack_3f0 = ctx->dStack_3f0;
    double &dStack_3e8 = ctx->dStack_3e8;
    uint &uStack_3e0 = ctx->uStack_3e0;
    uint &uStack_3dc = ctx->uStack_3dc;
    uint &uStack_3d8 = ctx->uStack_3d8;
    uint &uStack_3d4 = ctx->uStack_3d4;
    uint &uStack_3d0 = ctx->uStack_3d0;
    uint &uStack_3cc = ctx->uStack_3cc;
    CVector3d &local_3c8 = ctx->local_3c8;
    double &dStack_3b0 = ctx->dStack_3b0;
    double &dStack_3a8 = ctx->dStack_3a8;
    double &dStack_3a0 = ctx->dStack_3a0;
    double &dStack_398 = ctx->dStack_398;
    double &dStack_390 = ctx->dStack_390;
    double &dStack_388 = ctx->dStack_388;
    double &dStack_380 = ctx->dStack_380;
    double &dStack_378 = ctx->dStack_378;
    double &dStack_370 = ctx->dStack_370;
    double &dStack_368 = ctx->dStack_368;
    double &dStack_360 = ctx->dStack_360;
    double &dStack_358 = ctx->dStack_358;
    uint &uStack_350 = ctx->uStack_350;
    uint &uStack_34c = ctx->uStack_34c;
    uint &uStack_348 = ctx->uStack_348;
    uint &uStack_344 = ctx->uStack_344;
    uint &uStack_340 = ctx->uStack_340;
    uint &uStack_33c = ctx->uStack_33c;
    double &dStack_338 = ctx->dStack_338;
    double &dStack_330 = ctx->dStack_330;
    double &dStack_328 = ctx->dStack_328;
    double &dStack_320 = ctx->dStack_320;
    double &dStack_318 = ctx->dStack_318;
    double &dStack_310 = ctx->dStack_310;
    double &dStack_308 = ctx->dStack_308;
    double &dStack_300 = ctx->dStack_300;
    double &dStack_2f8 = ctx->dStack_2f8;
    CVector3d &CStack_2f0 = ctx->CStack_2f0;
    double &dStack_2d8 = ctx->dStack_2d8;
    double &dStack_2d0 = ctx->dStack_2d0;
    double &dStack_2c8 = ctx->dStack_2c8;
    double &dStack_2c0 = ctx->dStack_2c0;
    double &dStack_2b8 = ctx->dStack_2b8;
    double &dStack_2b0 = ctx->dStack_2b0;
    double &dStack_2a8 = ctx->dStack_2a8;
    double &dStack_2a0 = ctx->dStack_2a0;
    double &dStack_298 = ctx->dStack_298;
    double &dStack_290 = ctx->dStack_290;
    double &dStack_288 = ctx->dStack_288;
    double &dStack_280 = ctx->dStack_280;
    double &dStack_278 = ctx->dStack_278;
    double &dStack_270 = ctx->dStack_270;
    double &dStack_268 = ctx->dStack_268;
    double &dStack_260 = ctx->dStack_260;
    double &dStack_258 = ctx->dStack_258;
    double &dStack_250 = ctx->dStack_250;
    double &dStack_248 = ctx->dStack_248;
    double &dStack_240 = ctx->dStack_240;
    double &dStack_238 = ctx->dStack_238;
    double &dStack_230 = ctx->dStack_230;
    double &dStack_228 = ctx->dStack_228;
    double &dStack_220 = ctx->dStack_220;
    uint &uStack_218 = ctx->uStack_218;
    uint &uStack_214 = ctx->uStack_214;
    uint &uStack_210 = ctx->uStack_210;
    uint &uStack_20c = ctx->uStack_20c;
    uint &uStack_208 = ctx->uStack_208;
    uint &uStack_204 = ctx->uStack_204;
    double &dStack_200 = ctx->dStack_200;
    double &dStack_1f8 = ctx->dStack_1f8;
    double &dStack_1f0 = ctx->dStack_1f0;
    ulonglong &uStack_1e8 = ctx->uStack_1e8;
    double &dStack_1e0 = ctx->dStack_1e0;
    double &uStack_1d8 = ctx->uStack_1d8;
    double &dStack_1d0 = ctx->dStack_1d0;
    double &uStack_1c8 = ctx->uStack_1c8;
    double &dStack_1c0 = ctx->dStack_1c0;
    double &uStack_1b8 = ctx->uStack_1b8;
    double &dStack_1b0 = ctx->dStack_1b0;
    double &uStack_1a8 = ctx->uStack_1a8;
    double &dStack_1a0 = ctx->dStack_1a0;
    double &uStack_198 = ctx->uStack_198;
    double &dStack_190 = ctx->dStack_190;
    double &uStack_188 = ctx->uStack_188;
    double &dStack_180 = ctx->dStack_180;
    double &uStack_178 = ctx->uStack_178;
    double &dStack_170 = ctx->dStack_170;
    double &uStack_168 = ctx->uStack_168;
    double &dStack_160 = ctx->dStack_160;
    double &uStack_158 = ctx->uStack_158;
    double &dStack_150 = ctx->dStack_150;
    double &uStack_148 = ctx->uStack_148;
    double &dStack_140 = ctx->dStack_140;
    double &uStack_138 = ctx->uStack_138;
    double &dStack_130 = ctx->dStack_130;
    double &dStack_128 = ctx->dStack_128;
    double &uStack_120 = ctx->uStack_120;
    double &uStack_118 = ctx->uStack_118;
    double &dStack_110 = ctx->dStack_110;
    double &uStack_108 = ctx->uStack_108;
    double &dStack_100 = ctx->dStack_100;
    double &uStack_f8 = ctx->uStack_f8;
    double &dStack_f0 = ctx->dStack_f0;
    double &uStack_e8 = ctx->uStack_e8;
    double &dStack_e0 = ctx->dStack_e0;
    uint &uStack_d8 = ctx->uStack_d8;
    auto &aiStack_d4 = ctx->aiStack_d4;
    CVector3d *&pCStack_c4 = ctx->pCStack_c4;
    CVector3d *&pCStack_c0 = ctx->pCStack_c0;
    CVector3d *&pCStack_bc = ctx->pCStack_bc;
    double *&pdStack_b8 = ctx->pdStack_b8;
    double *&pdStack_b4 = ctx->pdStack_b4;
    int &iStack_b0 = ctx->iStack_b0;
    int &iStack_ac = ctx->iStack_ac;
    int &iStack_a8 = ctx->iStack_a8;
    int &iStack_a4 = ctx->iStack_a4;
    double *&pdStack_a0 = ctx->pdStack_a0;
    double *&pdStack_9c = ctx->pdStack_9c;
    double *&pdStack_98 = ctx->pdStack_98;
    double *&pdStack_94 = ctx->pdStack_94;
    int &iStack_90 = ctx->iStack_90;
    CVector2d *&pCStack_8c = ctx->pCStack_8c;
    CVector2d *&pCStack_88 = ctx->pCStack_88;
    CVector2d *&pCStack_84 = ctx->pCStack_84;
    CVector2d *&pCStack_80 = ctx->pCStack_80;
    CVector2d *&pCStack_7c = ctx->pCStack_7c;
    CVector2d *&pCStack_78 = ctx->pCStack_78;
    CVector2d *&pCStack_74 = ctx->pCStack_74;
    CVector2d *&pCStack_70 = ctx->pCStack_70;
    int &iStack_6c = ctx->iStack_6c;
    CVector2d *&pCStack_68 = ctx->pCStack_68;
    CVector2d *&pCStack_64 = ctx->pCStack_64;
    CVector2d *&pCStack_60 = ctx->pCStack_60;
    CVector2d *&pCStack_5c = ctx->pCStack_5c;
    int &iStack_58 = ctx->iStack_58;
    int &iStack_54 = ctx->iStack_54;
    int &iStack_50 = ctx->iStack_50;
    int &iStack_4c = ctx->iStack_4c;
    CVector3d *&pCStack_48 = ctx->pCStack_48;
    CVector3d *&pCStack_44 = ctx->pCStack_44;
    CVector3d *&pCStack_40 = ctx->pCStack_40;
    CVector3d *&pCStack_3c = ctx->pCStack_3c;
    CVector3d *&pCStack_38 = ctx->pCStack_38;
    double *&pdStack_34 = ctx->pdStack_34;
    CVector3d *&pCStack_30 = ctx->pCStack_30;
    CVector3d *&pCStack_2c = ctx->pCStack_2c;
    CVector3d *&pCStack_28 = ctx->pCStack_28;
    double *&pdStack_24 = ctx->pdStack_24;
    double *&pdStack_20 = ctx->pdStack_20;
    double *&pdStack_1c = ctx->pdStack_1c;
    double *&pdStack_18 = ctx->pdStack_18;
    double &dVar4 = ctx->dVar4;
    CVert *&pCVar3 = ctx->pCVar3;
    CVector3d *&pCVar2 = ctx->pCVar2;
    CP3D *&pCVar1 = ctx->pCVar1;
  // param this_ptr aliased into ctx above
  // param other_poly aliased into ctx above
  // param out_result aliased into ctx above

  bVar16 = 0;
  (*other_poly->vtable->getBounds)(other_poly,&local_3c8,&local_458);
  (*this_ptr->vtable->getBounds)(this_ptr,&CStack_4d0,&CStack_2f0);
  if (((((local_3c8.x <= CStack_2f0.x) && (CStack_4d0.x <= local_458.x)) &&
       (local_3c8.y <= CStack_2f0.y)) &&
      ((CStack_4d0.y <= local_458.y && (local_3c8.z <= CStack_2f0.z)))) &&
     (CStack_4d0.z <= local_458.z)) {
    pCVar26 = other_poly->parent_obj->vertex_data;
    iVar5 = (*this_ptr->vtable->rayIntersect)
                      (this_ptr,&pCVar26[other_poly->vertex_idx_0].position,
                       &pCVar26[other_poly->vertex_idx_1].position,&CStack_410);
    if (iVar5 == 0) {
      CPoly_intersectPoly_branch_0(ctx);
    }
    memset(out_result,0,0x148);
    pCVar3 = this_ptr->parent_obj->vertex_data;
    __arrinit(&uStack_5e0,5,&g_CP3DTypeInfo);
    pCVar26 = pCVar3 + this_ptr->vertex_idx_0;
    uStack_5e0._0_4_ = *(uint *)&(pCVar26->position).x;
    uStack_5e0._4_4_ = *(uint *)((int)&(pCVar26->position).x + 4);
    uStack_5d8._0_4_ = *(uint *)&(pCVar26->position).y;
    uStack_5d8._4_4_ = *(uint *)((int)&(pCVar26->position).y + 4);
    uStack_5d0._0_4_ = *(uint *)&(pCVar26->position).z;
    uStack_5d0._4_4_ = *(uint *)((int)&(pCVar26->position).z + 4);
    pCVar26 = pCVar3 + this_ptr->vertex_idx_1;
    uStack_5c8 = *(uint *)&(pCVar26->position).x;
    uStack_5c4 = *(uint *)((int)&(pCVar26->position).x + 4);
    uStack_5c0 = *(uint *)&(pCVar26->position).y;
    uStack_5bc = *(uint *)((int)&(pCVar26->position).y + 4);
    uStack_5b8 = *(uint *)&(pCVar26->position).z;
    uStack_5b4 = *(uint *)((int)&(pCVar26->position).z + 4);
    pCVar26 = pCVar3 + this_ptr->vertex_idx_2;
    uStack_5b0 = *(uint *)&(pCVar26->position).x;
    uStack_5ac = *(uint *)((int)&(pCVar26->position).x + 4);
    uStack_5a8 = *(uint *)&(pCVar26->position).y;
    uStack_5a4 = *(uint *)((int)&(pCVar26->position).y + 4);
    uStack_5a0 = *(uint *)&(pCVar26->position).z;
    uStack_59c = *(uint *)((int)&(pCVar26->position).z + 4);
    __arrinit(&uStack_568,5,&g_CP2DTypeInfo);
    uStack_568._0_4_ = *(uint *)&this_ptr->uv_coords[0].impl.x;
    uStack_568._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].impl.x + 4);
    uStack_560._0_4_ = *(uint *)&this_ptr->uv_coords[0].impl.y;
    uStack_560._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].impl.y + 4);
    uStack_558 = *(uint *)&this_ptr->uv_coords[1].impl.x;
    uStack_554 = *(uint *)((int)&this_ptr->uv_coords[1].impl.x + 4);
    uStack_550 = *(uint *)&this_ptr->uv_coords[1].impl.y;
    uStack_54c = *(uint *)((int)&this_ptr->uv_coords[1].impl.y + 4);
    uStack_548 = *(uint *)&this_ptr->uv_coords[2].impl.x;
    uStack_544 = *(uint *)((int)&this_ptr->uv_coords[2].impl.x + 4);
    uStack_540 = *(uint *)&this_ptr->uv_coords[2].impl.y;
    uStack_53c = *(uint *)((int)&this_ptr->uv_coords[2].impl.y + 4);
    pCVar26 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    dStack_320._0_4_ = *(uint *)&(pCVar26->position).x;
    dStack_320._4_4_ = *(uint *)((int)&(pCVar26->position).x + 4);
    pdVar20 = &(pCVar26->position).y;
    dStack_318._0_4_ = *(uint *)pdVar20;
    dStack_318._4_4_ = *(uint *)((int)&(pCVar26->position).y + 4);
    pdVar24 = &(pCVar26->position).z;
    dStack_310._0_4_ = *(uint *)pdVar24;
    dStack_310._4_4_ = *(uint *)((int)&(pCVar26->position).z + 4);
    pCVar1 = &other_poly->normal;
    uStack_218 = *(uint *)&(pCVar1->impl).x;
    uStack_214 = *(uint *)((int)&(other_poly->normal).impl.x + 4);
    pdVar25 = &(other_poly->normal).impl.y;
    uStack_210 = *(uint *)pdVar25;
    uStack_20c = *(uint *)((int)&(other_poly->normal).impl.y + 4);
    pdVar28 = &(other_poly->normal).impl.z;
    uStack_208 = *(uint *)pdVar28;
    uStack_204 = *(uint *)((int)&(other_poly->normal).impl.z + 4);
    dStack_4e8 = (pCVar1->impl).x * __BITCAST_DOUBLE(CONCAT44(uStack_5e0._4_4_,(uint)uStack_5e0));
    dStack_4e0 = *pdVar25 * __BITCAST_DOUBLE(CONCAT44(uStack_5d8._4_4_,(uint)uStack_5d8));
    dStack_4d8 = *pdVar28 * __BITCAST_DOUBLE(CONCAT44(uStack_5d0._4_4_,(uint)uStack_5d0));
    dStack_278 = (pCVar1->impl).x * __BITCAST_DOUBLE(CONCAT44(uStack_5c4,uStack_5c8));
    dStack_3b0 = (pCVar26->position).x * (pCVar1->impl).x;
    dStack_270 = *pdVar25 * __BITCAST_DOUBLE(CONCAT44(uStack_5bc,uStack_5c0));
    dStack_3a8 = *pdVar20 * *pdVar25;
    dStack_268 = *pdVar28 * __BITCAST_DOUBLE(CONCAT44(uStack_5b4,uStack_5b8));
    dStack_3a0 = *pdVar24 * *pdVar28;
    dStack_470 = (pCVar1->impl).x * __BITCAST_DOUBLE(CONCAT44(uStack_5ac,uStack_5b0));
    dStack_468 = *pdVar25 * __BITCAST_DOUBLE(CONCAT44(uStack_5a4,uStack_5a8));
    dStack_460 = *pdVar28 * __BITCAST_DOUBLE(CONCAT44(uStack_59c,uStack_5a0));
    pdVar25 = &dStack_3b0;
    pdVar28 = &dStack_248;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(uint *)pdVar28 = *(uint *)pdVar25;
      pdVar25 = (double *)((int)pdVar25 + (uint)bVar16 * -8 + 4);
      pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
    }
    dStack_398 = dStack_4e8;
    dStack_390 = dStack_4e0;
    dStack_388 = dStack_4d8;
    dVar17 = -(dStack_248 + dStack_240 + dStack_238);
    dStack_3f8 = dStack_4e8 + dStack_4e0 + dStack_4d8 + dVar17;
    dStack_3f0 = dStack_278 + dStack_270 + dStack_268 + dVar17;
    dStack_3e8 = dStack_470 + dStack_468 + dStack_460 + dVar17;
    if ((dStack_3f8 < 1e-08) && (-1e-08 <= dStack_3f8)) {
      dStack_3f8 = 0.0;
    }
    if ((dStack_3f0 < 1e-08) && (-1e-08 < dStack_3f0)) {
      dStack_3f0 = 0.0;
    }
    if ((dStack_3e8 < 1e-08) && (-1e-08 <= dStack_3e8)) {
      dStack_3e8 = 0.0;
    }
    if ((((dStack_3f8 < 0.0) || (dStack_3f0 < 0.0)) || (dStack_3e8 < 0.0)) &&
    {
      CPoly_intersectPoly_chunk_1(ctx);
    }
  }
  return 0;
}
