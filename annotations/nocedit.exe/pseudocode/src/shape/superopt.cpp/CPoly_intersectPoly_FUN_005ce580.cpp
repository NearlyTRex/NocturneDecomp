// Name: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
// Address Range: [[005ce580, 005d0004]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580 (CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580
          (CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

{
  CVector3d *pCVar1;
  CVector2d *pCVar2;
  CVector3d *pCVar3;
  CVector2d *pCVar4;
  CVector2d *pCVar5;
  CVector3d *pCVar6;
  CVector2d *pCVar7;
  CVector2d *pCVar8;
  CVector3d *pCVar9;
  CVector2d *pCVar10;
  CVector3d *pCVar11;
  CVert *pCVar12;
  double dVar13;
  CPolyIntersectResult *pCVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  double *pdVar19;
  int iVar20;
  double *pdVar21;
  double *pdVar22;
  CVert *pCVar23;
  uint *puVar24;
  double *pdVar25;
  double *pdVar26;
  uint *puVar27;
  double *pdVar28;
  double *pdVar29;
  byte bVar30;
  int iStack00000020;
  int iStack00000024;
  int iStack00000028;
  int iStack0000002c;
  int aiStackY_194c [1232];
  uint uStack_598;
  ulonglong uStack_568;
  ulonglong uStack_560;
  ulonglong uStack_558;
  uint uStack_550;
  uint uStack_54c;
  uint uStack_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  uint uStack_528;
  uint uStack_524;
  ulonglong uStack_4f0;
  ulonglong uStack_4e8;
  uint uStack_4e0;
  uint uStack_4dc;
  uint uStack_4d8;
  uint uStack_4d4;
  uint uStack_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  byte auStack_4c4 [28];
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
  double dStack_440;
  double dStack_438;
  double dStack_430;
  double dStack_428;
  double dStack_420;
  double dStack_418;
  double dStack_410;
  double dStack_408;
  double dStack_400;
  byte auStack_3f8 [32];
  byte auStack_3d8 [20];
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  byte auStack_3b8 [24];
  double dStack_3a0;
  double dStack_380;
  double dStack_378;
  double dStack_370;
  uint uStack_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  uint uStack_358;
  uint uStack_354;
  double dStack_338;
  double dStack_330;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  double dStack_2f0;
  byte auStack_2e8 [8];
  double dStack_2e0;
  uint uStack_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  uint uStack_2c8;
  uint uStack_2c4;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_260;
  double dStack_258;
  double dStack_250;
  double dStack_248;
  double dStack_240;
  double dStack_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  uint uStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  ulonglong uStack_170;
  double dStack_168;
  ulonglong uStack_160;
  double dStack_158;
  uint uStack_150;
  uint uStack_14c;
  double dStack_148;
  uint uStack_140;
  uint uStack_13c;
  double dStack_138;
  uint uStack_130;
  uint uStack_12c;
  double dStack_128;
  uint uStack_120;
  uint uStack_11c;
  double dStack_118;
  ulonglong uStack_110;
  double dStack_108;
  uint uStack_100;
  uint uStack_fc;
  double dStack_f8;
  ulonglong uStack_f0;
  double dStack_e8;
  ulonglong uStack_e0;
  double dStack_d8;
  ulonglong uStack_d0;
  double dStack_c8;
  uint uStack_c0;
  uint auStack_bc [4];
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  ulonglong uStack_a0;
  double dStack_98;
  uint uStack_90;
  uint uStack_8c;
  double dStack_88;
  ulonglong uStack_80;
  double dStack_78;
  ulonglong uStack_70;
  double dStack_68;
  uint uStack_60;
  int aiStack_5c [4];
  CVector3d *pCStack_4c;
  CVector3d *pCStack_48;
  CVector3d *pCStack_44;
  double *pdStack_40;
  double *pdStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  double *pdStack_28;
  double *pdStack_24;
  double *pdStack_20;
  double *pdStack_1c;
  int iStack_18;
  CVector2d *pCStack_14;
  
  pCVar14 = out_result;
  bVar30 = 0;
  (*other_poly->vtable->getBounds)(other_poly,(CVector3d *)(auStack_3d8 + 0x10),&local_458);
  (*this_ptr->vtable->getBounds)(this_ptr,(CVector3d *)auStack_4c4,(CVector3d *)(auStack_2e8 + 4));
  if ((((((double)auStack_3b8._8_8_ <= (double)CONCAT44(uStack_2d4,uStack_2d8)) &&
        ((double)auStack_4c4._12_8_ <= dStack_440)) &&
       ((double)auStack_3b8._16_8_ <= (double)CONCAT44(uStack_2cc,uStack_2d0))) &&
      (((double)auStack_4c4._20_8_ <= dStack_438 &&
       (dStack_3a0 <= (double)CONCAT44(uStack_2c4,uStack_2c8))))) && (dStack_4a8 <= dStack_430)) {
    pCVar23 = other_poly->parent_obj->vertex_data;
    iVar15 = (*this_ptr->vtable->rayIntersect)
                       (this_ptr,&pCVar23[other_poly->vertex_idx_0].position,
                        &pCVar23[other_poly->vertex_idx_1].position,(CVector3d *)auStack_3f8);
    if (iVar15 == 0) {
      pCVar23 = other_poly->parent_obj->vertex_data;
      iVar15 = (*this_ptr->vtable->rayIntersect)
                         (this_ptr,&pCVar23[other_poly->vertex_idx_1].position,
                          &pCVar23[other_poly->vertex_idx_2].position,
                          (CVector3d *)(auStack_3f8 + 0x10));
      if (iVar15 == 0) {
        pCVar23 = other_poly->parent_obj->vertex_data;
        iVar15 = (*this_ptr->vtable->rayIntersect)
                           (this_ptr,&pCVar23[other_poly->vertex_idx_2].position,
                            &pCVar23[other_poly->vertex_idx_0].position,(CVector3d *)auStack_3d8);
        if (iVar15 == 0) {
          pCVar23 = this_ptr->parent_obj->vertex_data;
          iVar15 = (*other_poly->vtable->rayIntersect)
                             (other_poly,&pCVar23[this_ptr->vertex_idx_0].position,
                              &pCVar23[this_ptr->vertex_idx_1].position,
                              (CVector3d *)(auStack_3d8 + 0x10));
          if (iVar15 == 0) {
            pCVar23 = this_ptr->parent_obj->vertex_data;
            iVar15 = (*other_poly->vtable->rayIntersect)
                               (other_poly,&pCVar23[this_ptr->vertex_idx_1].position,
                                &pCVar23[this_ptr->vertex_idx_2].position,(CVector3d *)auStack_3b8);
            if (iVar15 == 0) {
              pCVar23 = this_ptr->parent_obj->vertex_data;
              iVar15 = (*other_poly->vtable->rayIntersect)
                                 (other_poly,&pCVar23[this_ptr->vertex_idx_2].position,
                                  &pCVar23[this_ptr->vertex_idx_0].position,
                                  (CVector3d *)(auStack_3b8 + 0x10));
              if (iVar15 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    uStack_598 = 0x5ce6e3;
    crt_memory_c_memset_FUN_005fde40(out_result,0,0x148);
    pCVar12 = this_ptr->parent_obj->vertex_data;
    uStack_598 = 0x5ce6fc;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_568,5,&g_CP3DTypeInfo);
    pCVar23 = pCVar12 + this_ptr->vertex_idx_0;
    uStack_568._0_4_ = *(uint *)&(pCVar23->position).x;
    uStack_568._4_4_ = *(uint *)((int)&(pCVar23->position).x + 4);
    uStack_560._0_4_ = *(uint *)&(pCVar23->position).y;
    uStack_560._4_4_ = *(uint *)((int)&(pCVar23->position).y + 4);
    uStack_558._0_4_ = *(uint *)&(pCVar23->position).z;
    uStack_558._4_4_ = *(uint *)((int)&(pCVar23->position).z + 4);
    pCVar23 = pCVar12 + this_ptr->vertex_idx_1;
    uStack_550 = *(uint *)&(pCVar23->position).x;
    uStack_54c = *(uint *)((int)&(pCVar23->position).x + 4);
    uStack_548 = *(uint *)&(pCVar23->position).y;
    uStack_544 = *(uint *)((int)&(pCVar23->position).y + 4);
    uStack_540 = *(uint *)&(pCVar23->position).z;
    uStack_53c = *(uint *)((int)&(pCVar23->position).z + 4);
    pCVar12 = pCVar12 + this_ptr->vertex_idx_2;
    uStack_538 = *(uint *)&(pCVar12->position).x;
    uStack_534 = *(uint *)((int)&(pCVar12->position).x + 4);
    uStack_530 = *(uint *)&(pCVar12->position).y;
    uStack_52c = *(uint *)((int)&(pCVar12->position).y + 4);
    uStack_528 = *(uint *)&(pCVar12->position).z;
    uStack_524 = *(uint *)((int)&(pCVar12->position).z + 4);
    uStack_598 = 0x5ce7be;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_4f0,5,&g_CP2DTypeInfo);
    uStack_4f0._0_4_ = *(uint *)&this_ptr->uv_coords[0].x;
    uStack_4f0._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].x + 4);
    uStack_4e8._0_4_ = *(uint *)&this_ptr->uv_coords[0].y;
    uStack_4e8._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].y + 4);
    uStack_4e0 = *(uint *)&this_ptr->uv_coords[1].x;
    uStack_4dc = *(uint *)((int)&this_ptr->uv_coords[1].x + 4);
    uStack_4d8 = *(uint *)&this_ptr->uv_coords[1].y;
    uStack_4d4 = *(uint *)((int)&this_ptr->uv_coords[1].y + 4);
    uStack_4d0 = *(uint *)&this_ptr->uv_coords[2].x;
    uStack_4cc = *(uint *)((int)&this_ptr->uv_coords[2].x + 4);
    uStack_4c8 = *(uint *)&this_ptr->uv_coords[2].y;
    auStack_4c4._0_4_ = *(uint *)((int)&this_ptr->uv_coords[2].y + 4);
    pCVar23 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    pdVar26 = &dStack_2a8;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar26 = *(uint *)&(pCVar23->position).x;
      pCVar23 = (CVert *)((int)pCVar23 + ((uint)bVar30 * -2 + 1) * 4);
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
    }
    pCVar1 = &other_poly->normal;
    uStack_1a0 = *(uint *)&pCVar1->x;
    uStack_19c = *(uint *)((int)&(other_poly->normal).x + 4);
    pdVar26 = &(other_poly->normal).y;
    uStack_198 = *(uint *)pdVar26;
    uStack_194 = *(uint *)((int)&(other_poly->normal).y + 4);
    pdVar29 = &(other_poly->normal).z;
    dVar13 = *pdVar29;
    uStack_190 = *(uint *)pdVar29;
    uStack_18c = *(uint *)((int)&(other_poly->normal).z + 4);
    dStack_338 = dStack_2a8 * pCVar1->x;
    dStack_330 = dStack_2a0 * *pdVar26;
    dStack_328 = dStack_298 * *pdVar29;
    dStack_470 = pCVar1->x * (double)CONCAT44(uStack_568._4_4_,(uint)uStack_568);
    dStack_468 = *pdVar26 * (double)CONCAT44(uStack_560._4_4_,(uint)uStack_560);
    dStack_460 = *pdVar29 * (double)CONCAT44(uStack_558._4_4_,(uint)uStack_558);
    dStack_260 = pCVar1->x * (double)CONCAT44(uStack_54c,uStack_550);
    dStack_258 = *pdVar26 * (double)CONCAT44(uStack_544,uStack_548);
    dStack_250 = *pdVar29 * (double)CONCAT44(uStack_53c,uStack_540);
    dStack_248 = pCVar1->x * (double)CONCAT44(uStack_534,uStack_538);
    dStack_240 = *pdVar26 * (double)CONCAT44(uStack_52c,uStack_530);
    pdVar26 = &dStack_338;
    pdVar29 = &dStack_1d0;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar29 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
      pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
    }
    dStack_238 = dVar13 * (double)CONCAT44(uStack_524,uStack_528);
    pdVar26 = &dStack_470;
    pdVar29 = &dStack_320;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar29 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
      pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
    }
    dVar13 = -(dStack_1d0 + dStack_1c8 + dStack_1c0);
    pdVar26 = &dStack_260;
    pdVar29 = &dStack_200;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *(uint *)pdVar29 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
      pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
    }
    pdVar26 = &dStack_248;
    puVar24 = (uint *)auStack_3f8;
    for (iVar15 = 6; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar24 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
      puVar24 = puVar24 + (uint)bVar30 * -2 + 1;
    }
    dStack_380 = dStack_320 + dStack_318 + dStack_310 + dVar13;
    dStack_378 = dStack_200 + dStack_1f8 + dStack_1f0 + dVar13;
    dStack_370 = (double)auStack_3f8._0_8_ + (double)auStack_3f8._8_8_ + (double)auStack_3f8._16_8_
                 + dVar13;
    if ((dStack_380 < 1e-08) && (-1e-08 <= dStack_380)) {
      dStack_380 = 0.0;
    }
    if ((dStack_378 < 1e-08) && (-1e-08 < dStack_378)) {
      dStack_378 = 0.0;
    }
    if ((dStack_370 < 1e-08) && (-1e-08 <= dStack_370)) {
      dStack_370 = 0.0;
    }
    if ((((dStack_380 < 0.0) || (dStack_378 < 0.0)) || (dStack_370 < 0.0)) &&
       (((0.0 < dStack_380 || (0.0 < dStack_378)) || (0.0 < dStack_370)))) {
      if (((((ulonglong)dStack_380 & 0x7fffffff00000000) != 0) || (dStack_380._0_4_ != 0)) &&
         (((((ulonglong)dStack_378 & 0x7fffffff00000000) != 0 || (dStack_378._0_4_ != 0)) &&
          ((((ulonglong)dStack_370 & 0x7fffffff00000000) != 0 || (dStack_370._0_4_ != 0)))))) {
        iStack_34 = 3;
        iStack_38 = 4;
        if (((0.0 <= dStack_378) && (0.0 <= dStack_370)) ||
           ((dStack_378 < 0.0 && (dStack_370 < 0.0)))) {
          aiStack_5c[3] = 1;
          iStack00000020 = 2;
          iStack00000028 = 0;
        }
        else if (((0.0 <= dStack_380) && (0.0 <= dStack_370)) ||
                ((dStack_380 < 0.0 && (dStack_370 < 0.0)))) {
          aiStack_5c[3] = 2;
          iStack00000020 = 0;
          iStack00000028 = 1;
        }
        else {
          aiStack_5c[3] = 0;
          iStack00000020 = 1;
          iStack00000028 = 2;
        }
        iVar15 = aiStack_5c[3];
        dVar13 = (&dStack_380)[aiStack_5c[3]] /
                 ((&dStack_380)[aiStack_5c[3]] - (&dStack_380)[iStack00000028]);
        iStack_2c = iStack00000028 * 8;
        pdStack_20 = (double *)(&uStack_568 + iStack00000028 * 3);
        pdVar21 = (double *)(&uStack_568 + aiStack_5c[3] * 3);
        dStack_230 = *pdVar21 - (double)(&uStack_568)[iStack00000028 * 3];
        dStack_228 = (double)(&uStack_560)[aiStack_5c[3] * 3] -
                     (double)(&uStack_560)[iStack00000028 * 3];
        dStack_220 = (double)(&uStack_558)[aiStack_5c[3] * 3] -
                     (double)(&uStack_558)[iStack00000028 * 3];
        pdVar26 = &dStack_230;
        pdVar29 = &dStack_410;
        for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
          *(uint *)pdVar29 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
          pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
        }
        dStack_2c0 = dStack_410 * dVar13;
        dStack_2b8 = dStack_408 * dVar13;
        dStack_2b0 = dStack_400 * dVar13;
        pdVar26 = &dStack_2c0;
        pdVar29 = &dStack_428;
        for (iVar20 = 6; iVar18 = iStack_34, iVar20 != 0; iVar20 = iVar20 + -1) {
          *(uint *)pdVar29 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
          pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
        }
        pdStack_28 = pdVar21;
        dStack_4a0 = *pdVar21 - dStack_428;
        dStack_498 = (double)(&uStack_560)[iVar15 * 3] - dStack_420;
        dStack_490 = (double)(&uStack_558)[iVar15 * 3] - dStack_418;
        iVar15 = iStack_34 * 0x18;
        pdVar26 = &dStack_4a0;
        puVar24 = &uStack_2d8;
        for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar24 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
          puVar24 = puVar24 + (uint)bVar30 * -2 + 1;
        }
        pdVar22 = (double *)(&uStack_568 + iVar18 * 3);
        *(uint *)pdVar22 = uStack_2d8;
        *(uint *)((int)&uStack_568 + iVar15 + 4) = uStack_2d4;
        *(uint *)(&uStack_560 + iVar18 * 3) = uStack_2d0;
        *(uint *)((int)&uStack_560 + iVar15 + 4) = uStack_2cc;
        *(uint *)(&uStack_558 + iVar18 * 3) = uStack_2c8;
        *(uint *)((int)&uStack_558 + iVar15 + 4) = uStack_2c4;
        pdVar21 = (double *)(&uStack_4f0 + iStack00000028 * 2);
        pdVar19 = (double *)(&uStack_4f0 + aiStack_5c[3] * 2);
        uStack_110 = *pdVar19 - *pdVar21;
        dStack_108 = (double)(&uStack_4e8)[aiStack_5c[3] * 2] -
                     (double)(&uStack_4e8)[iStack00000028 * 2];
        uStack_110._0_4_ = SUB84(*pdVar19 - *pdVar21,0);
        uStack_140 = (uint)uStack_110;
        (&uStack_13c)[(uint)bVar30 * -2] = *(uint *)((int)&uStack_110 + (uint)bVar30 * -8 + 4)
        ;
        *(uint *)(&dStack_138 + (-(uint)bVar30 - (uint)bVar30)) =
             *(uint *)(&dStack_108 + (-(uint)bVar30 - (uint)bVar30));
        *(uint *)
         ((int)(&dStack_138 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_108 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
        uStack_a0 = (double)CONCAT44(uStack_13c,uStack_140) * dVar13;
        dStack_98 = dStack_138 * dVar13;
        uStack_150 = (uint)uStack_a0;
        (&uStack_14c)[(uint)bVar30 * -2] = *(uint *)((int)&uStack_a0 + (uint)bVar30 * -8 + 4);
        *(uint *)(&dStack_148 + (-(uint)bVar30 - (uint)bVar30)) =
             *(uint *)(&dStack_98 + (-(uint)bVar30 - (uint)bVar30));
        *(uint *)
         ((int)(&dStack_148 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_98 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
        uStack_d0 = *pdVar19 - (double)CONCAT44(uStack_14c,uStack_150);
        dStack_c8 = (double)(&uStack_4e8)[aiStack_5c[3] * 2] - dStack_148;
        pdStack_3c = (double *)(&uStack_4f0 + iStack_34 * 2);
        auStack_bc[3] = (uint)uStack_d0;
        auStack_bc[(uint)bVar30 * -2 + 4] = *(uint *)((int)&uStack_d0 + (uint)bVar30 * -8 + 4)
        ;
        pdVar26 = pdStack_3c;
        auStack_bc[(uint)bVar30 * -2 + (uint)bVar30 * -2 + 5] =
             *(uint *)(&dStack_c8 + (-(uint)bVar30 - (uint)bVar30));
        (auStack_bc + (uint)bVar30 * -2 + (uint)bVar30 * -2 + 5)[(uint)bVar30 * -2 + 1] =
             *(uint *)
              ((int)(&dStack_c8 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
        *(uint *)pdStack_3c = auStack_bc[3];
        *(uint *)((int)pdVar26 + 4) = uStack_ac;
        *(uint *)(pdVar26 + 1) = uStack_a8;
        *(uint *)((int)pdVar26 + 0xc) = uStack_a4;
        dVar13 = (&dStack_380)[iStack00000020] /
                 ((&dStack_380)[iStack00000020] - *(double *)((int)&dStack_380 + iStack_2c));
        pdStack_1c = (double *)(&uStack_568 + iStack00000020 * 3);
        dStack_488 = (double)(&uStack_568)[iStack00000020 * 3] - *pdStack_20;
        dStack_480 = (double)(&uStack_560)[iStack00000020 * 3] - pdStack_20[1];
        dStack_478 = (double)(&uStack_558)[iStack00000020 * 3] - pdStack_20[2];
        pdVar26 = &dStack_488;
        pdVar29 = &dStack_2f0;
        for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
          *(uint *)pdVar29 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
          pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
        }
        dStack_290 = dStack_2f0 * dVar13;
        dStack_288 = (double)auStack_2e8 * dVar13;
        dStack_280 = dStack_2e0 * dVar13;
        pdVar26 = &dStack_290;
        pdVar29 = &dStack_188;
        for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
          *(uint *)pdVar29 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
          pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
        }
        dStack_308 = *pdStack_1c - dStack_188;
        dStack_300 = pdStack_1c[1] - dStack_180;
        dStack_2f8 = pdStack_1c[2] - dStack_178;
        pdVar26 = &dStack_308;
        puVar24 = (uint *)(auStack_3d8 + 0x10);
        for (iVar20 = 6; iVar16 = iStack_38, iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar24 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
          puVar24 = puVar24 + (uint)bVar30 * -2 + 1;
        }
        iVar20 = iStack_38 * 0x18;
        pdVar29 = (double *)(&uStack_568 + iStack_38 * 3);
        *(uint *)pdVar29 = auStack_3d8._16_4_;
        *(uint *)((int)&uStack_568 + iVar20 + 4) = uStack_3c4;
        *(uint *)(&uStack_560 + iVar16 * 3) = uStack_3c0;
        *(uint *)((int)&uStack_560 + iVar20 + 4) = uStack_3bc;
        *(uint *)(&uStack_558 + iVar16 * 3) = auStack_3b8._0_4_;
        *(uint *)((int)&uStack_558 + iVar20 + 4) = auStack_3b8._4_4_;
        pdStack_40 = (double *)(&uStack_4f0 + iStack00000020 * 2);
        uStack_f0 = (double)(&uStack_4f0)[iStack00000020 * 2] - *pdVar21;
        dStack_e8 = (double)(&uStack_4e8)[iStack00000020 * 2] -
                    (double)(&uStack_4e8)[iStack00000028 * 2];
        uStack_100 = (uint)uStack_f0;
        (&uStack_fc)[(uint)bVar30 * -2] = *(uint *)((int)&uStack_f0 + (uint)bVar30 * -8 + 4);
        pdVar26 = pdStack_40;
        *(uint *)(&dStack_f8 + (-(uint)bVar30 - (uint)bVar30)) =
             *(uint *)(&dStack_e8 + (-(uint)bVar30 - (uint)bVar30));
        *(uint *)
         ((int)(&dStack_f8 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_e8 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
        uStack_e0 = (double)CONCAT44(uStack_fc,uStack_100) * dVar13;
        dStack_d8 = dStack_f8 * dVar13;
        uStack_130 = (uint)uStack_e0;
        (&uStack_12c)[(uint)bVar30 * -2] = *(uint *)((int)&uStack_e0 + (uint)bVar30 * -8 + 4);
        *(uint *)(&dStack_128 + (-(uint)bVar30 - (uint)bVar30)) =
             *(uint *)(&dStack_d8 + (-(uint)bVar30 - (uint)bVar30));
        *(uint *)
         ((int)(&dStack_128 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_d8 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
        uStack_170 = *pdVar26 - (double)CONCAT44(uStack_12c,uStack_130);
        dStack_168 = pdVar26[1] - dStack_128;
        uStack_60 = (uint)uStack_170;
        aiStack_5c[(uint)bVar30 * -2] = *(int *)((int)&uStack_170 + (uint)bVar30 * -8 + 4);
        aiStack_5c[(uint)bVar30 * -2 + (uint)bVar30 * -2 + 1] =
             *(int *)(&dStack_168 + (-(uint)bVar30 - (uint)bVar30));
        (aiStack_5c + (uint)bVar30 * -2 + (uint)bVar30 * -2 + 1)[(uint)bVar30 * -2 + 1] =
             *(int *)((int)(&dStack_168 + (-(uint)bVar30 - (uint)bVar30)) +
                     ((uint)bVar30 * -2 + 1) * 4);
        iVar17 = iStack_38 * 0x10;
        pdVar26 = (double *)(&uStack_4f0 + iStack_38 * 2);
        *(uint *)pdVar26 = uStack_60;
        *(int *)((int)&uStack_4f0 + iVar17 + 4) = aiStack_5c[0];
        *(int *)(&uStack_4e8 + iStack_38 * 2) = aiStack_5c[1];
        *(int *)((int)&uStack_4e8 + iVar17 + 4) = aiStack_5c[2];
        pCVar5 = (out_result->poly2).uvs + 2;
        pCVar6 = (out_result->poly2).vertices + 2;
        pCVar7 = (out_result->poly2).uvs + 1;
        pCVar9 = (out_result->poly2).vertices + 1;
        pCStack_14 = (out_result->poly2).uvs;
        pCVar11 = (out_result->poly2).vertices;
        pCVar8 = (out_result->poly1).uvs + 2;
        pCVar1 = (out_result->poly1).vertices + 2;
        pCVar2 = (out_result->poly1).uvs + 1;
        pCVar3 = (out_result->poly1).vertices + 1;
        pCVar4 = (out_result->poly1).uvs;
        pCStack_48 = (out_result->poly1).vertices;
        if (0.0 < *(double *)((int)&dStack_380 + iStack_2c)) {
          (out_result->poly1).vertex_count = 3;
          pCStack_48->x = *pdStack_20;
          (out_result->poly1).vertices[0].y = pdStack_20[1];
          (out_result->poly1).vertices[0].z = pdStack_20[2];
          pCVar4->x = *pdVar21;
          (out_result->poly1).uvs[0].y = (double)(&uStack_4e8)[iStack00000028 * 2];
          pCVar3->x = *pdVar22;
          (out_result->poly1).vertices[1].y = (double)(&uStack_560)[iVar18 * 3];
          (out_result->poly1).vertices[1].z = (double)(&uStack_558)[iVar18 * 3];
          pCVar2->x = *pdStack_3c;
          (out_result->poly1).uvs[1].y = pdStack_3c[1];
          pCVar1->x = *pdVar29;
          (out_result->poly1).vertices[2].y = (double)(&uStack_560)[iVar16 * 3];
          (out_result->poly1).vertices[2].z = (double)(&uStack_558)[iVar16 * 3];
          pCVar8->x = *pdVar26;
          (out_result->poly1).uvs[2].y = (double)(&uStack_4e8)[iStack_38 * 2];
          (out_result->poly2).vertex_count = 4;
          pCVar11->x = *pdVar22;
          (out_result->poly2).vertices[0].y = (double)(&uStack_560)[iVar18 * 3];
          (out_result->poly2).vertices[0].z = (double)(&uStack_558)[iVar18 * 3];
          pCStack_14->x = *pdStack_3c;
          (out_result->poly2).uvs[0].y = pdStack_3c[1];
          pCVar9->x = *pdStack_28;
          (out_result->poly2).vertices[1].y = pdStack_28[1];
          (out_result->poly2).vertices[1].z = pdStack_28[2];
          pCVar7->x = *pdVar19;
          (out_result->poly2).uvs[1].y = (double)(&uStack_4e8)[aiStack_5c[3] * 2];
          pCVar6->x = *pdStack_1c;
          (out_result->poly2).vertices[2].y = pdStack_1c[1];
          (out_result->poly2).vertices[2].z = pdStack_1c[2];
          pCVar5->x = *pdStack_40;
          (out_result->poly2).uvs[2].y = pdStack_40[1];
          *(uint *)&(out_result->poly2).vertices[3].x = *(uint *)pdVar29;
          *(uint *)((int)&(out_result->poly2).vertices[3].x + 4) =
               *(uint *)((int)&uStack_568 + iVar20 + 4);
          *(uint *)&(out_result->poly2).vertices[3].y =
               *(uint *)(&uStack_560 + iVar16 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].y + 4) =
               *(uint *)((int)&uStack_560 + iVar20 + 4);
          *(uint *)&(out_result->poly2).vertices[3].z =
               *(uint *)(&uStack_558 + iVar16 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].z + 4) =
               *(uint *)((int)&uStack_558 + iVar20 + 4);
          *(uint *)&(out_result->poly2).uvs[3].x = *(uint *)pdVar26;
          *(uint *)((int)&(out_result->poly2).uvs[3].x + 4) =
               *(uint *)((int)&uStack_4f0 + iVar17 + 4);
          *(uint *)&(out_result->poly2).uvs[3].y =
               *(uint *)(&uStack_4e8 + iStack_38 * 2);
          *(uint *)((int)&(out_result->poly2).uvs[3].y + 4) =
               *(uint *)((int)&uStack_4e8 + iVar17 + 4);
          return 1;
        }
        (out_result->poly1).vertex_count = 4;
        pCStack_48->x = *pdVar22;
        (out_result->poly1).vertices[0].y = (double)(&uStack_560)[iVar18 * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_558)[iVar18 * 3];
        pCVar4->x = *pdStack_3c;
        (out_result->poly1).uvs[0].y = pdStack_3c[1];
        pCVar3->x = *pdStack_28;
        (out_result->poly1).vertices[1].y = pdStack_28[1];
        (out_result->poly1).vertices[1].z = pdStack_28[2];
        pCVar2->x = *pdVar19;
        (out_result->poly1).uvs[1].y = (double)(&uStack_4e8)[aiStack_5c[3] * 2];
        pCVar1->x = *pdStack_1c;
        (out_result->poly1).vertices[2].y = pdStack_1c[1];
        (out_result->poly1).vertices[2].z = pdStack_1c[2];
        pCVar8->x = *pdStack_40;
        (out_result->poly1).uvs[2].y = pdStack_40[1];
        (out_result->poly1).vertices[3].x = *pdVar29;
        (out_result->poly1).vertices[3].y = (double)(&uStack_560)[iVar16 * 3];
        (out_result->poly1).vertices[3].z = (double)(&uStack_558)[iVar16 * 3];
        (out_result->poly1).uvs[3].x = *pdVar26;
        (out_result->poly1).uvs[3].y = (double)(&uStack_4e8)[iStack_38 * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCVar11->x = *(uint *)pdStack_20;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)pdStack_20 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y = *(uint *)(pdStack_20 + 1);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)pdStack_20 + 0xc);
        (out_result->poly2).vertices[0].z = pdStack_20[2];
        pCStack_14->x = *pdVar21;
        (out_result->poly2).uvs[0].y = (double)(&uStack_4e8)[iStack00000028 * 2];
        *(uint *)&pCVar9->x = *(uint *)pdVar22;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_568 + iVar15 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y =
             *(uint *)(&uStack_560 + iVar18 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_560 + iVar15 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z =
             *(uint *)(&uStack_558 + iVar18 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_558 + iVar15 + 4);
        pCVar7->x = *pdStack_3c;
        (out_result->poly2).uvs[1].y = pdStack_3c[1];
        *(uint *)&pCVar6->x = *(uint *)pdVar29;
        *(uint *)((int)&(out_result->poly2).vertices[2].x + 4) =
             *(uint *)((int)&uStack_568 + iVar20 + 4);
        *(uint *)&(out_result->poly2).vertices[2].y =
             *(uint *)(&uStack_560 + iVar16 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[2].y + 4) =
             *(uint *)((int)&uStack_560 + iVar20 + 4);
        *(uint *)&(out_result->poly2).vertices[2].z =
             *(uint *)(&uStack_558 + iVar16 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[2].z + 4) =
             *(uint *)((int)&uStack_558 + iVar20 + 4);
        *(uint *)&pCVar5->x = *(uint *)pdVar26;
        *(uint *)((int)&(out_result->poly2).uvs[2].x + 4) =
             *(uint *)((int)&uStack_4f0 + iVar17 + 4);
        *(uint *)&(out_result->poly2).uvs[2].y = *(uint *)(&uStack_4e8 + iStack_38 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[2].y + 4) =
             *(uint *)((int)&uStack_4e8 + iVar17 + 4);
        return 1;
      }
      iStack_30 = 3;
      if ((((ulonglong)dStack_380 & 0x7fffffff00000000) == 0) && (dStack_380._0_4_ == 0)) {
        iStack0000002c = 1;
        iStack00000024 = 2;
        out_result = (CPolyIntersectResult *)0x0;
      }
      else if ((((ulonglong)dStack_378 & 0x7fffffff00000000) == 0) && (dStack_378._0_4_ == 0)) {
        iStack0000002c = 2;
        iStack00000024 = 0;
        out_result = (CPolyIntersectResult *)0x1;
      }
      else {
        iStack0000002c = 0;
        iStack00000024 = 1;
        out_result = (CPolyIntersectResult *)0x2;
      }
      iStack_18 = iStack0000002c * 8;
      dVar13 = (&dStack_380)[iStack0000002c] /
               ((&dStack_380)[iStack0000002c] - (&dStack_380)[iStack00000024]);
      pdVar21 = (double *)(&uStack_568 + iStack00000024 * 3);
      pdStack_24 = (double *)(&uStack_568 + iStack0000002c * 3);
      dStack_1b8 = (double)(&uStack_568)[iStack0000002c * 3] - *pdVar21;
      dStack_1b0 = (double)(&uStack_560)[iStack0000002c * 3] -
                   (double)(&uStack_560)[iStack00000024 * 3];
      dStack_1a8 = (double)(&uStack_558)[iStack0000002c * 3] -
                   (double)(&uStack_558)[iStack00000024 * 3];
      pdVar26 = &dStack_1b8;
      pdVar29 = &dStack_440;
      for (iVar15 = 6; pdVar19 = pdStack_24, iVar15 != 0; iVar15 = iVar15 + -1) {
        *(uint *)pdVar29 = *(uint *)pdVar26;
        pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
        pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
      }
      dStack_218 = dStack_440 * dVar13;
      dStack_210 = dStack_438 * dVar13;
      dStack_208 = dStack_430 * dVar13;
      pdVar26 = &dStack_218;
      pdVar29 = &dStack_1e8;
      for (iVar15 = 6; iVar20 = iStack_30, iVar15 != 0; iVar15 = iVar15 + -1) {
        *(uint *)pdVar29 = *(uint *)pdVar26;
        pdVar26 = (double *)((int)pdVar26 + (uint)bVar30 * -8 + 4);
        pdVar29 = (double *)((int)pdVar29 + (uint)bVar30 * -8 + 4);
      }
      auStack_3b8._8_8_ = *pdVar19 - dStack_1e8;
      auStack_3b8._16_8_ = pdVar19[1] - dStack_1e0;
      dStack_3a0 = pdVar19[2] - dStack_1d8;
      iVar15 = iStack_30 * 0x18;
      puVar24 = (uint *)(auStack_3b8 + 8);
      puVar27 = &uStack_368;
      for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar27 = *puVar24;
        puVar24 = puVar24 + (uint)bVar30 * -2 + 1;
        puVar27 = puVar27 + (uint)bVar30 * -2 + 1;
      }
      pdVar22 = (double *)(&uStack_568 + iVar20 * 3);
      *(uint *)pdVar22 = uStack_368;
      *(uint *)((int)&uStack_568 + iVar15 + 4) = uStack_364;
      *(uint *)(&uStack_560 + iVar20 * 3) = uStack_360;
      *(uint *)((int)&uStack_560 + iVar15 + 4) = uStack_35c;
      *(uint *)(&uStack_558 + iVar20 * 3) = uStack_358;
      *(uint *)((int)&uStack_558 + iVar15 + 4) = uStack_354;
      pdVar29 = (double *)(&uStack_4f0 + iStack00000024 * 2);
      pdVar26 = (double *)(&uStack_4f0 + iStack0000002c * 2);
      uStack_160 = *pdVar26 - *pdVar29;
      dStack_158 = (double)(&uStack_4e8)[iStack0000002c * 2] -
                   (double)(&uStack_4e8)[iStack00000024 * 2];
      uStack_160._0_4_ = SUB84(*pdVar26 - *pdVar29,0);
      uStack_90 = (uint)uStack_160;
      (&uStack_8c)[(uint)bVar30 * -2] = *(uint *)((int)&uStack_160 + (uint)bVar30 * -8 + 4);
      *(uint *)(&dStack_88 + (-(uint)bVar30 - (uint)bVar30)) =
           *(uint *)(&dStack_158 + (-(uint)bVar30 - (uint)bVar30));
      *(uint *)
       ((int)(&dStack_88 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_158 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
      uStack_70 = (double)CONCAT44(uStack_8c,uStack_90) * dVar13;
      dStack_68 = dStack_88 * dVar13;
      uStack_120 = (uint)uStack_70;
      (&uStack_11c)[(uint)bVar30 * -2] = *(uint *)((int)&uStack_70 + (uint)bVar30 * -8 + 4);
      *(uint *)(&dStack_118 + (-(uint)bVar30 - (uint)bVar30)) =
           *(uint *)(&dStack_68 + (-(uint)bVar30 - (uint)bVar30));
      *(uint *)
       ((int)(&dStack_118 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_68 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
      uStack_80 = *pdVar26 - (double)CONCAT44(uStack_11c,uStack_120);
      dStack_78 = (double)(&uStack_4e8)[iStack0000002c * 2] - dStack_118;
      uStack_c0 = (uint)uStack_80;
      auStack_bc[(uint)bVar30 * -2] = *(uint *)((int)&uStack_80 + (uint)bVar30 * -8 + 4);
      auStack_bc[(uint)bVar30 * -2 + (uint)bVar30 * -2 + 1] =
           *(uint *)(&dStack_78 + (-(uint)bVar30 - (uint)bVar30));
      (auStack_bc + (uint)bVar30 * -2 + (uint)bVar30 * -2 + 1)[(uint)bVar30 * -2 + 1] =
           *(uint *)
            ((int)(&dStack_78 + (-(uint)bVar30 - (uint)bVar30)) + ((uint)bVar30 * -2 + 1) * 4);
      iVar16 = iStack_30 * 0x10;
      pdVar25 = (double *)(&uStack_4f0 + iStack_30 * 2);
      *(uint *)pdVar25 = uStack_c0;
      *(uint *)((int)&uStack_4f0 + iVar16 + 4) = auStack_bc[0];
      *(uint *)(&uStack_4e8 + iStack_30 * 2) = auStack_bc[1];
      *(uint *)((int)&uStack_4e8 + iVar16 + 4) = auStack_bc[2];
      pCVar5 = (pCVar14->poly2).uvs + 2;
      pCVar6 = (pCVar14->poly2).vertices + 2;
      pCVar7 = (pCVar14->poly2).uvs + 1;
      pCStack_44 = (pCVar14->poly2).vertices + 1;
      pCVar8 = (pCVar14->poly2).uvs;
      pCVar9 = (pCVar14->poly2).vertices;
      pCVar10 = (pCVar14->poly1).uvs + 2;
      pCVar1 = (pCVar14->poly1).vertices + 2;
      pCVar2 = (pCVar14->poly1).uvs + 1;
      pCVar3 = (pCVar14->poly1).vertices + 1;
      pCVar4 = (pCVar14->poly1).uvs;
      pCStack_4c = (pCVar14->poly1).vertices;
      iVar18 = (int)out_result * 0x18;
      iVar17 = (int)out_result * 0x10;
      pdVar28 = (double *)(&uStack_4f0 + (int)out_result * 2);
      pdVar19 = (double *)(&uStack_568 + (int)out_result * 3);
      if (0.0 < *(double *)((int)&dStack_380 + iStack_18)) {
        (pCVar14->poly1).vertex_count = 3;
        pCStack_4c->x = *pdVar19;
        (pCVar14->poly1).vertices[0].y = (double)(&uStack_560)[(int)out_result * 3];
        (pCVar14->poly1).vertices[0].z = (double)(&uStack_558)[(int)out_result * 3];
        pCVar4->x = *pdVar28;
        (pCVar14->poly1).uvs[0].y = (double)(&uStack_4e8)[(int)out_result * 2];
        pCVar3->x = *pdStack_24;
        (pCVar14->poly1).vertices[1].y = pdStack_24[1];
        (pCVar14->poly1).vertices[1].z = pdStack_24[2];
        pCVar2->x = *pdVar26;
        (pCVar14->poly1).uvs[1].y = (double)(&uStack_4e8)[iStack0000002c * 2];
        pCVar1->x = *pdVar22;
        (pCVar14->poly1).vertices[2].y = (double)(&uStack_560)[iVar20 * 3];
        (pCVar14->poly1).vertices[2].z = (double)(&uStack_558)[iVar20 * 3];
        pCVar10->x = *pdVar25;
        (pCVar14->poly1).uvs[2].y = (double)(&uStack_4e8)[iStack_30 * 2];
        (pCVar14->poly2).vertex_count = 3;
        *(uint *)&pCVar9->x = *(uint *)pdVar19;
        *(uint *)((int)&(pCVar14->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_568 + iVar18 + 4);
        *(uint *)&(pCVar14->poly2).vertices[0].y =
             *(uint *)(&uStack_560 + (int)out_result * 3);
        *(uint *)((int)&(pCVar14->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_560 + iVar18 + 4);
        *(uint *)&(pCVar14->poly2).vertices[0].z =
             *(uint *)(&uStack_558 + (int)out_result * 3);
        *(uint *)((int)&(pCVar14->poly2).vertices[0].z + 4) =
             *(uint *)((int)&uStack_558 + iVar18 + 4);
        *(uint *)&pCVar8->x = *(uint *)pdVar28;
        *(uint *)((int)&(pCVar14->poly2).uvs[0].x + 4) =
             *(uint *)((int)&uStack_4f0 + iVar17 + 4);
        *(uint *)&(pCVar14->poly2).uvs[0].y =
             *(uint *)(&uStack_4e8 + (int)out_result * 2);
        *(uint *)((int)&(pCVar14->poly2).uvs[0].y + 4) =
             *(uint *)((int)&uStack_4e8 + iVar17 + 4);
        *(uint *)&pCStack_44->x = *(uint *)pdVar22;
        *(uint *)((int)&(pCVar14->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_568 + iVar15 + 4);
        *(uint *)&(pCVar14->poly2).vertices[1].y = *(uint *)(&uStack_560 + iVar20 * 3);
        *(uint *)((int)&(pCVar14->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_560 + iVar15 + 4);
        *(uint *)&(pCVar14->poly2).vertices[1].z = *(uint *)(&uStack_558 + iVar20 * 3);
        *(uint *)((int)&(pCVar14->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_558 + iVar15 + 4);
        *(uint *)&pCVar7->x = *(uint *)pdVar25;
        *(uint *)((int)&(pCVar14->poly2).uvs[1].x + 4) =
             *(uint *)((int)&uStack_4f0 + iVar16 + 4);
        *(uint *)&(pCVar14->poly2).uvs[1].y = *(uint *)(&uStack_4e8 + iStack_30 * 2);
        *(uint *)((int)&(pCVar14->poly2).uvs[1].y + 4) =
             *(uint *)((int)&uStack_4e8 + iVar16 + 4);
        pCVar6->x = *pdVar21;
        (pCVar14->poly2).vertices[2].y = (double)(&uStack_560)[iStack00000024 * 3];
        (pCVar14->poly2).vertices[2].z = (double)(&uStack_558)[iStack00000024 * 3];
        pCVar5->x = *pdVar29;
        (pCVar14->poly2).uvs[2].y = (double)(&uStack_4e8)[iStack00000024 * 2];
        return 1;
      }
      (pCVar14->poly2).vertex_count = 3;
      pCVar9->x = *pdVar19;
      (pCVar14->poly2).vertices[0].y = (double)(&uStack_560)[(int)out_result * 3];
      (pCVar14->poly2).vertices[0].z = (double)(&uStack_558)[(int)out_result * 3];
      pCVar8->x = *pdVar28;
      (pCVar14->poly2).uvs[0].y = (double)(&uStack_4e8)[(int)out_result * 2];
      pCStack_44->x = *pdStack_24;
      (pCVar14->poly2).vertices[1].y = pdStack_24[1];
      (pCVar14->poly2).vertices[1].z = pdStack_24[2];
      pCVar7->x = *pdVar26;
      (pCVar14->poly2).uvs[1].y = (double)(&uStack_4e8)[iStack0000002c * 2];
      pCVar6->x = *pdVar22;
      (pCVar14->poly2).vertices[2].y = (double)(&uStack_560)[iVar20 * 3];
      (pCVar14->poly2).vertices[2].z = (double)(&uStack_558)[iVar20 * 3];
      pCVar5->x = *pdVar25;
      (pCVar14->poly2).uvs[2].y = (double)(&uStack_4e8)[iStack_30 * 2];
      (pCVar14->poly1).vertex_count = 3;
      *(uint *)&pCStack_4c->x = *(uint *)pdVar19;
      *(uint *)((int)&(pCVar14->poly1).vertices[0].x + 4) =
           *(uint *)((int)&uStack_568 + iVar18 + 4);
      *(uint *)&(pCVar14->poly1).vertices[0].y =
           *(uint *)(&uStack_560 + (int)out_result * 3);
      *(uint *)((int)&(pCVar14->poly1).vertices[0].y + 4) =
           *(uint *)((int)&uStack_560 + iVar18 + 4);
      *(uint *)&(pCVar14->poly1).vertices[0].z =
           *(uint *)(&uStack_558 + (int)out_result * 3);
      *(uint *)((int)&(pCVar14->poly1).vertices[0].z + 4) =
           *(uint *)((int)&uStack_558 + iVar18 + 4);
      *(uint *)&pCVar4->x = *(uint *)pdVar28;
      *(uint *)((int)&(pCVar14->poly1).uvs[0].x + 4) =
           *(uint *)((int)&uStack_4f0 + iVar17 + 4);
      *(uint *)&(pCVar14->poly1).uvs[0].y = *(uint *)(&uStack_4e8 + (int)out_result * 2)
      ;
      *(uint *)((int)&(pCVar14->poly1).uvs[0].y + 4) =
           *(uint *)((int)&uStack_4e8 + iVar17 + 4);
      *(uint *)&pCVar3->x = *(uint *)pdVar22;
      *(uint *)((int)&(pCVar14->poly1).vertices[1].x + 4) =
           *(uint *)((int)&uStack_568 + iVar15 + 4);
      *(uint *)&(pCVar14->poly1).vertices[1].y = *(uint *)(&uStack_560 + iVar20 * 3);
      *(uint *)((int)&(pCVar14->poly1).vertices[1].y + 4) =
           *(uint *)((int)&uStack_560 + iVar15 + 4);
      *(uint *)&(pCVar14->poly1).vertices[1].z = *(uint *)(&uStack_558 + iVar20 * 3);
      *(uint *)((int)&(pCVar14->poly1).vertices[1].z + 4) =
           *(uint *)((int)&uStack_558 + iVar15 + 4);
      *(uint *)&pCVar2->x = *(uint *)pdVar25;
      *(uint *)((int)&(pCVar14->poly1).uvs[1].x + 4) =
           *(uint *)((int)&uStack_4f0 + iVar16 + 4);
      *(uint *)&(pCVar14->poly1).uvs[1].y = *(uint *)(&uStack_4e8 + iStack_30 * 2);
      *(uint *)((int)&(pCVar14->poly1).uvs[1].y + 4) =
           *(uint *)((int)&uStack_4e8 + iVar16 + 4);
      pCVar1->x = *pdVar21;
      (pCVar14->poly1).vertices[2].y = (double)(&uStack_560)[iStack00000024 * 3];
      (pCVar14->poly1).vertices[2].z = (double)(&uStack_558)[iStack00000024 * 3];
      pCVar10->x = *pdVar29;
      (pCVar14->poly1).uvs[2].y = (double)(&uStack_4e8)[iStack00000024 * 2];
      return 1;
    }
  }
  return 0;
}
