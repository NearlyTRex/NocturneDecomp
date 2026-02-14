// Name: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
// Address Range: [[005ce580, 005d0004]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

{
  CVector3d *pCVar1;
  CVert *pCVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CVert *pCVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  uint *puVar14;
  byte bVar15;
  int aiStackY_19c4 [1261];
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
  uint uStack_440;
  uint uStack_43c;
  uint uStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
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
  ulonglong uStack_1d8;
  double dStack_1d0;
  uint uStack_1c8;
  uint uStack_1c4;
  double dStack_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  double dStack_1b0;
  uint uStack_1a8;
  uint uStack_1a4;
  double dStack_1a0;
  uint uStack_198;
  uint uStack_194;
  double dStack_190;
  ulonglong uStack_188;
  double dStack_180;
  uint uStack_178;
  uint uStack_174;
  double dStack_170;
  ulonglong uStack_168;
  double dStack_160;
  ulonglong uStack_158;
  double dStack_150;
  ulonglong uStack_148;
  double dStack_140;
  uint uStack_138;
  uint auStack_134 [4];
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  ulonglong uStack_118;
  double dStack_110;
  uint uStack_108;
  uint uStack_104;
  double dStack_100;
  ulonglong uStack_f8;
  double dStack_f0;
  ulonglong uStack_e8;
  double dStack_e0;
  uint uStack_d8;
  int aiStack_d4 [4];
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
  
  bVar15 = 0;
  (*other_poly->vtable->getBounds)(other_poly,&local_3c8,&local_458);
  (*this_ptr->vtable->getBounds)(this_ptr,&CStack_4d0,&CStack_2f0);
  if (((((local_3c8.x <= CStack_2f0.x) && (CStack_4d0.x <= local_458.x)) &&
       (local_3c8.y <= CStack_2f0.y)) &&
      ((CStack_4d0.y <= local_458.y && (local_3c8.z <= CStack_2f0.z)))) &&
     (CStack_4d0.z <= local_458.z)) {
    pCVar9 = other_poly->parent_obj->vertex_data;
    iVar4 = (*this_ptr->vtable->rayIntersect)
                      (this_ptr,&pCVar9[other_poly->vertex_idx_0].position,
                       &pCVar9[other_poly->vertex_idx_1].position,&CStack_410);
    if (iVar4 == 0) {
      pCVar9 = other_poly->parent_obj->vertex_data;
      iVar4 = (*this_ptr->vtable->rayIntersect)
                        (this_ptr,&pCVar9[other_poly->vertex_idx_1].position,
                         &pCVar9[other_poly->vertex_idx_2].position,&CStack_410);
      if (iVar4 == 0) {
        pCVar9 = other_poly->parent_obj->vertex_data;
        iVar4 = (*this_ptr->vtable->rayIntersect)
                          (this_ptr,&pCVar9[other_poly->vertex_idx_2].position,
                           &pCVar9[other_poly->vertex_idx_0].position,&CStack_410);
        if (iVar4 == 0) {
          pCVar9 = this_ptr->parent_obj->vertex_data;
          iVar4 = (*other_poly->vtable->rayIntersect)
                            (other_poly,&pCVar9[this_ptr->vertex_idx_0].position,
                             &pCVar9[this_ptr->vertex_idx_1].position,&CStack_410);
          if (iVar4 == 0) {
            pCVar9 = this_ptr->parent_obj->vertex_data;
            iVar4 = (*other_poly->vtable->rayIntersect)
                              (other_poly,&pCVar9[this_ptr->vertex_idx_1].position,
                               &pCVar9[this_ptr->vertex_idx_2].position,&CStack_410);
            if (iVar4 == 0) {
              pCVar9 = this_ptr->parent_obj->vertex_data;
              iVar4 = (*other_poly->vtable->rayIntersect)
                                (other_poly,&pCVar9[this_ptr->vertex_idx_2].position,
                                 &pCVar9[this_ptr->vertex_idx_0].position,&CStack_410);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    memset(out_result,0,0x148);
    pCVar2 = this_ptr->parent_obj->vertex_data;
    __arrinit(&uStack_5e0,5,&g_CP3DTypeInfo);
    pCVar9 = pCVar2 + this_ptr->vertex_idx_0;
    uStack_5e0._0_4_ = *(uint *)&(pCVar9->position).x;
    uStack_5e0._4_4_ = *(uint *)((int)&(pCVar9->position).x + 4);
    uStack_5d8._0_4_ = *(uint *)&(pCVar9->position).y;
    uStack_5d8._4_4_ = *(uint *)((int)&(pCVar9->position).y + 4);
    uStack_5d0._0_4_ = *(uint *)&(pCVar9->position).z;
    uStack_5d0._4_4_ = *(uint *)((int)&(pCVar9->position).z + 4);
    pCVar9 = pCVar2 + this_ptr->vertex_idx_1;
    uStack_5c8 = *(uint *)&(pCVar9->position).x;
    uStack_5c4 = *(uint *)((int)&(pCVar9->position).x + 4);
    uStack_5c0 = *(uint *)&(pCVar9->position).y;
    uStack_5bc = *(uint *)((int)&(pCVar9->position).y + 4);
    uStack_5b8 = *(uint *)&(pCVar9->position).z;
    uStack_5b4 = *(uint *)((int)&(pCVar9->position).z + 4);
    pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
    uStack_5b0 = *(uint *)&(pCVar2->position).x;
    uStack_5ac = *(uint *)((int)&(pCVar2->position).x + 4);
    uStack_5a8 = *(uint *)&(pCVar2->position).y;
    uStack_5a4 = *(uint *)((int)&(pCVar2->position).y + 4);
    uStack_5a0 = *(uint *)&(pCVar2->position).z;
    uStack_59c = *(uint *)((int)&(pCVar2->position).z + 4);
    __arrinit(&uStack_568,5,&g_CP2DTypeInfo);
    uStack_568._0_4_ = *(uint *)&this_ptr->uv_coords[0].x;
    uStack_568._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].x + 4);
    uStack_560._0_4_ = *(uint *)&this_ptr->uv_coords[0].y;
    uStack_560._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].y + 4);
    uStack_558 = *(uint *)&this_ptr->uv_coords[1].x;
    uStack_554 = *(uint *)((int)&this_ptr->uv_coords[1].x + 4);
    uStack_550 = *(uint *)&this_ptr->uv_coords[1].y;
    uStack_54c = *(uint *)((int)&this_ptr->uv_coords[1].y + 4);
    uStack_548 = *(uint *)&this_ptr->uv_coords[2].x;
    uStack_544 = *(uint *)((int)&this_ptr->uv_coords[2].x + 4);
    uStack_540 = *(uint *)&this_ptr->uv_coords[2].y;
    uStack_53c = *(uint *)((int)&this_ptr->uv_coords[2].y + 4);
    pCVar9 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    pdVar11 = &dStack_320;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pdVar11 = *(uint *)&(pCVar9->position).x;
      pCVar9 = (CVert *)((int)pCVar9 + ((uint)bVar15 * -2 + 1) * 4);
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
    }
    pCVar1 = &other_poly->normal;
    uStack_218 = *(uint *)&pCVar1->x;
    uStack_214 = *(uint *)((int)&(other_poly->normal).x + 4);
    pdVar11 = &(other_poly->normal).y;
    uStack_210 = *(uint *)pdVar11;
    uStack_20c = *(uint *)((int)&(other_poly->normal).y + 4);
    pdVar13 = &(other_poly->normal).z;
    dVar3 = *pdVar13;
    uStack_208 = *(uint *)pdVar13;
    uStack_204 = *(uint *)((int)&(other_poly->normal).z + 4);
    dStack_3b0 = dStack_320 * pCVar1->x;
    dStack_3a8 = dStack_318 * *pdVar11;
    dStack_3a0 = dStack_310 * *pdVar13;
    dStack_4e8 = pCVar1->x * (double)CONCAT44(uStack_5e0._4_4_,(uint)uStack_5e0);
    dStack_4e0 = *pdVar11 * (double)CONCAT44(uStack_5d8._4_4_,(uint)uStack_5d8);
    dStack_4d8 = *pdVar13 * (double)CONCAT44(uStack_5d0._4_4_,(uint)uStack_5d0);
    dStack_2d8 = pCVar1->x * (double)CONCAT44(uStack_5c4,uStack_5c8);
    dStack_2d0 = *pdVar11 * (double)CONCAT44(uStack_5bc,uStack_5c0);
    dStack_2c8 = *pdVar13 * (double)CONCAT44(uStack_5b4,uStack_5b8);
    dStack_2c0 = pCVar1->x * (double)CONCAT44(uStack_5ac,uStack_5b0);
    dStack_2b8 = *pdVar11 * (double)CONCAT44(uStack_5a4,uStack_5a8);
    pdVar11 = &dStack_3b0;
    pdVar13 = &dStack_248;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pdVar13 = *(uint *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
    }
    dStack_2b0 = dVar3 * (double)CONCAT44(uStack_59c,uStack_5a0);
    pdVar11 = &dStack_4e8;
    pdVar13 = &dStack_398;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pdVar13 = *(uint *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
    }
    dVar3 = -(dStack_248 + dStack_240 + dStack_238);
    pdVar11 = &dStack_2d8;
    pdVar13 = &dStack_278;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pdVar13 = *(uint *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
    }
    pdVar11 = &dStack_2c0;
    pdVar13 = &dStack_470;
    for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(uint *)pdVar13 = *(uint *)pdVar11;
      pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
      pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
    }
    dStack_3f8 = dStack_398 + dStack_390 + dStack_388 + dVar3;
    dStack_3f0 = dStack_278 + dStack_270 + dStack_268 + dVar3;
    dStack_3e8 = dStack_470 + dStack_468 + dStack_460 + dVar3;
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
       (((0.0 < dStack_3f8 || (0.0 < dStack_3f0)) || (0.0 < dStack_3e8)))) {
      if (((((ulonglong)dStack_3f8 & 0x7fffffff00000000) != 0) || (dStack_3f8._0_4_ != 0)) &&
         (((((ulonglong)dStack_3f0 & 0x7fffffff00000000) != 0 || (dStack_3f0._0_4_ != 0)) &&
          ((((ulonglong)dStack_3e8 & 0x7fffffff00000000) != 0 || (dStack_3e8._0_4_ != 0)))))) {
        iStack_ac = 3;
        iStack_b0 = 4;
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
        iVar4 = aiStack_d4[3];
        dVar3 = (&dStack_3f8)[aiStack_d4[3]] /
                ((&dStack_3f8)[aiStack_d4[3]] - (&dStack_3f8)[iStack_50]);
        iStack_a4 = iStack_50 * 8;
        pdStack_98 = (double *)(&uStack_5e0 + iStack_50 * 3);
        pdVar10 = (double *)(&uStack_5e0 + aiStack_d4[3] * 3);
        dStack_2a8 = *pdVar10 - (double)(&uStack_5e0)[iStack_50 * 3];
        dStack_2a0 = (double)(&uStack_5d8)[aiStack_d4[3] * 3] - (double)(&uStack_5d8)[iStack_50 * 3]
        ;
        dStack_298 = (double)(&uStack_5d0)[aiStack_d4[3] * 3] - (double)(&uStack_5d0)[iStack_50 * 3]
        ;
        pdVar11 = &dStack_2a8;
        pdVar13 = &dStack_488;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(uint *)pdVar13 = *(uint *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
        }
        dStack_338 = dStack_488 * dVar3;
        dStack_330 = dStack_480 * dVar3;
        dStack_328 = dStack_478 * dVar3;
        pdVar11 = &dStack_338;
        pdVar13 = &dStack_4a0;
        for (iVar8 = 6; iVar7 = iStack_ac, iVar8 != 0; iVar8 = iVar8 + -1) {
          *(uint *)pdVar13 = *(uint *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
        }
        pdStack_a0 = pdVar10;
        dStack_518 = *pdVar10 - dStack_4a0;
        dStack_510 = (double)(&uStack_5d8)[iVar4 * 3] - dStack_498;
        dStack_508 = (double)(&uStack_5d0)[iVar4 * 3] - dStack_490;
        iVar4 = iStack_ac * 0x18;
        pdVar11 = &dStack_518;
        puVar14 = &uStack_350;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar14 = *(uint *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        pdVar10 = (double *)(&uStack_5e0 + iVar7 * 3);
        *(uint *)pdVar10 = uStack_350;
        *(uint *)((int)&uStack_5e0 + iVar4 + 4) = uStack_34c;
        *(uint *)(&uStack_5d8 + iVar7 * 3) = uStack_348;
        *(uint *)((int)&uStack_5d8 + iVar4 + 4) = uStack_344;
        *(uint *)(&uStack_5d0 + iVar7 * 3) = uStack_340;
        *(uint *)((int)&uStack_5d0 + iVar4 + 4) = uStack_33c;
        pdStack_24 = (double *)(&uStack_568 + iStack_50 * 2);
        pdVar11 = (double *)(&uStack_568 + aiStack_d4[3] * 2);
        uStack_188 = *pdVar11 - (double)(&uStack_568)[iStack_50 * 2];
        dStack_180 = (double)(&uStack_560)[aiStack_d4[3] * 2] - (double)(&uStack_560)[iStack_50 * 2]
        ;
        uStack_1b8 = (uint)uStack_188;
        (&uStack_1b4)[(uint)bVar15 * -2] = *(uint *)((int)&uStack_188 + (uint)bVar15 * -8 + 4)
        ;
        *(uint *)(&dStack_1b0 + (-(uint)bVar15 - (uint)bVar15)) =
             *(uint *)(&dStack_180 + (-(uint)bVar15 - (uint)bVar15));
        *(uint *)
         ((int)(&dStack_1b0 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_180 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
        uStack_118 = (double)CONCAT44(uStack_1b4,uStack_1b8) * dVar3;
        pdStack_20 = pdVar11;
        dStack_110 = dStack_1b0 * dVar3;
        uStack_1c8 = (uint)uStack_118;
        (&uStack_1c4)[(uint)bVar15 * -2] = *(uint *)((int)&uStack_118 + (uint)bVar15 * -8 + 4)
        ;
        *(uint *)(&dStack_1c0 + (-(uint)bVar15 - (uint)bVar15)) =
             *(uint *)(&dStack_110 + (-(uint)bVar15 - (uint)bVar15));
        *(uint *)
         ((int)(&dStack_1c0 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_110 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
        uStack_148 = *pdVar11 - (double)CONCAT44(uStack_1c4,uStack_1c8);
        dStack_140 = (double)(&uStack_560)[aiStack_d4[3] * 2] - dStack_1c0;
        pdStack_b4 = (double *)(&uStack_568 + iStack_ac * 2);
        auStack_134[3] = (uint)uStack_148;
        auStack_134[(uint)bVar15 * -2 + 4] =
             *(uint *)((int)&uStack_148 + (uint)bVar15 * -8 + 4);
        pdVar11 = pdStack_b4;
        auStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 5] =
             *(uint *)(&dStack_140 + (-(uint)bVar15 - (uint)bVar15));
        (auStack_134 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 5)[(uint)bVar15 * -2 + 1] =
             *(uint *)
              ((int)(&dStack_140 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
        *(uint *)pdStack_b4 = auStack_134[3];
        *(uint *)((int)pdVar11 + 4) = uStack_124;
        *(uint *)(pdVar11 + 1) = uStack_120;
        *(uint *)((int)pdVar11 + 0xc) = uStack_11c;
        dVar3 = (&dStack_3f8)[iStack_58] /
                ((&dStack_3f8)[iStack_58] - *(double *)((int)&dStack_3f8 + iStack_a4));
        pdStack_94 = (double *)(&uStack_5e0 + iStack_58 * 3);
        dStack_500 = (double)(&uStack_5e0)[iStack_58 * 3] - *pdStack_98;
        dStack_4f8 = (double)(&uStack_5d8)[iStack_58 * 3] - pdStack_98[1];
        dStack_4f0 = (double)(&uStack_5d0)[iStack_58 * 3] - pdStack_98[2];
        pdVar11 = &dStack_500;
        pdVar13 = &dStack_368;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(uint *)pdVar13 = *(uint *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
        }
        dStack_308 = dStack_368 * dVar3;
        dStack_300 = dStack_360 * dVar3;
        dStack_2f8 = dStack_358 * dVar3;
        pdVar11 = &dStack_308;
        pdVar13 = &dStack_200;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *(uint *)pdVar13 = *(uint *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
          pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
        }
        dStack_380 = *pdStack_94 - dStack_200;
        dStack_378 = pdStack_94[1] - dStack_1f8;
        dStack_370 = pdStack_94[2] - dStack_1f0;
        pdVar11 = &dStack_380;
        puVar14 = &uStack_440;
        for (iVar8 = 6; iVar5 = iStack_b0, iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar14 = *(uint *)pdVar11;
          pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
          puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
        }
        iVar8 = iStack_b0 * 0x18;
        pdVar13 = (double *)(&uStack_5e0 + iStack_b0 * 3);
        *(uint *)pdVar13 = uStack_440;
        *(uint *)((int)&uStack_5e0 + iVar8 + 4) = uStack_43c;
        *(uint *)(&uStack_5d8 + iVar5 * 3) = uStack_438;
        *(uint *)((int)&uStack_5d8 + iVar8 + 4) = uStack_434;
        *(uint *)(&uStack_5d0 + iVar5 * 3) = uStack_430;
        *(uint *)((int)&uStack_5d0 + iVar8 + 4) = uStack_42c;
        pdStack_b8 = (double *)(&uStack_568 + iStack_58 * 2);
        uStack_168 = (double)(&uStack_568)[iStack_58 * 2] - *pdStack_24;
        dStack_160 = (double)(&uStack_560)[iStack_58 * 2] - pdStack_24[1];
        uStack_178 = (uint)uStack_168;
        (&uStack_174)[(uint)bVar15 * -2] = *(uint *)((int)&uStack_168 + (uint)bVar15 * -8 + 4)
        ;
        pdVar11 = pdStack_b8;
        *(uint *)(&dStack_170 + (-(uint)bVar15 - (uint)bVar15)) =
             *(uint *)(&dStack_160 + (-(uint)bVar15 - (uint)bVar15));
        *(uint *)
         ((int)(&dStack_170 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_160 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
        uStack_158 = (double)CONCAT44(uStack_174,uStack_178) * dVar3;
        dStack_150 = dStack_170 * dVar3;
        uStack_1a8 = (uint)uStack_158;
        (&uStack_1a4)[(uint)bVar15 * -2] = *(uint *)((int)&uStack_158 + (uint)bVar15 * -8 + 4)
        ;
        *(uint *)(&dStack_1a0 + (-(uint)bVar15 - (uint)bVar15)) =
             *(uint *)(&dStack_150 + (-(uint)bVar15 - (uint)bVar15));
        *(uint *)
         ((int)(&dStack_1a0 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_150 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
        uStack_1e8 = *pdVar11 - (double)CONCAT44(uStack_1a4,uStack_1a8);
        dStack_1e0 = pdVar11[1] - dStack_1a0;
        uStack_d8 = (uint)uStack_1e8;
        aiStack_d4[(uint)bVar15 * -2] = *(int *)((int)&uStack_1e8 + (uint)bVar15 * -8 + 4);
        aiStack_d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             *(int *)(&dStack_1e0 + (-(uint)bVar15 - (uint)bVar15));
        (aiStack_d4 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
             *(int *)((int)(&dStack_1e0 + (-(uint)bVar15 - (uint)bVar15)) +
                     ((uint)bVar15 * -2 + 1) * 4);
        iVar6 = iStack_b0 * 0x10;
        pdVar11 = (double *)(&uStack_568 + iStack_b0 * 2);
        *(uint *)pdVar11 = uStack_d8;
        *(int *)((int)&uStack_568 + iVar6 + 4) = aiStack_d4[0];
        *(int *)(&uStack_560 + iStack_b0 * 2) = aiStack_d4[1];
        *(int *)((int)&uStack_560 + iVar6 + 4) = aiStack_d4[2];
        pCStack_78 = (out_result->poly2).uvs + 2;
        pCStack_44 = (out_result->poly2).vertices + 2;
        pCStack_80 = (out_result->poly2).uvs + 1;
        pCStack_40 = (out_result->poly2).vertices + 1;
        pCStack_8c = (out_result->poly2).uvs;
        pCVar1 = (out_result->poly2).vertices;
        pCStack_60 = (out_result->poly1).uvs + 2;
        pCStack_48 = (out_result->poly1).vertices + 2;
        pCStack_5c = (out_result->poly1).uvs + 1;
        pCStack_30 = (out_result->poly1).vertices + 1;
        pCStack_64 = (out_result->poly1).uvs;
        pCStack_c0 = (out_result->poly1).vertices;
        if (0.0 < *(double *)((int)&dStack_3f8 + iStack_a4)) {
          (out_result->poly1).vertex_count = 3;
          pCStack_c0->x = *pdStack_98;
          (out_result->poly1).vertices[0].y = pdStack_98[1];
          (out_result->poly1).vertices[0].z = pdStack_98[2];
          pCStack_64->x = *pdStack_24;
          (out_result->poly1).uvs[0].y = pdStack_24[1];
          pCStack_30->x = *pdVar10;
          (out_result->poly1).vertices[1].y = (double)(&uStack_5d8)[iVar7 * 3];
          (out_result->poly1).vertices[1].z = (double)(&uStack_5d0)[iVar7 * 3];
          pCStack_5c->x = *pdStack_b4;
          (out_result->poly1).uvs[1].y = pdStack_b4[1];
          pCStack_48->x = *pdVar13;
          (out_result->poly1).vertices[2].y = (double)(&uStack_5d8)[iVar5 * 3];
          (out_result->poly1).vertices[2].z = (double)(&uStack_5d0)[iVar5 * 3];
          pCStack_60->x = *pdVar11;
          (out_result->poly1).uvs[2].y = (double)(&uStack_560)[iStack_b0 * 2];
          (out_result->poly2).vertex_count = 4;
          pCVar1->x = *pdVar10;
          (out_result->poly2).vertices[0].y = (double)(&uStack_5d8)[iVar7 * 3];
          (out_result->poly2).vertices[0].z = (double)(&uStack_5d0)[iVar7 * 3];
          pCStack_8c->x = *pdStack_b4;
          (out_result->poly2).uvs[0].y = pdStack_b4[1];
          pCStack_40->x = *pdStack_a0;
          (out_result->poly2).vertices[1].y = pdStack_a0[1];
          (out_result->poly2).vertices[1].z = pdStack_a0[2];
          pCStack_80->x = *pdStack_20;
          (out_result->poly2).uvs[1].y = pdStack_20[1];
          pCStack_44->x = *pdStack_94;
          (out_result->poly2).vertices[2].y = pdStack_94[1];
          (out_result->poly2).vertices[2].z = pdStack_94[2];
          pCStack_78->x = *pdStack_b8;
          (out_result->poly2).uvs[2].y = pdStack_b8[1];
          *(uint *)&(out_result->poly2).vertices[3].x = *(uint *)pdVar13;
          *(uint *)((int)&(out_result->poly2).vertices[3].x + 4) =
               *(uint *)((int)&uStack_5e0 + iVar8 + 4);
          *(uint *)&(out_result->poly2).vertices[3].y =
               *(uint *)(&uStack_5d8 + iVar5 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].y + 4) =
               *(uint *)((int)&uStack_5d8 + iVar8 + 4);
          *(uint *)&(out_result->poly2).vertices[3].z =
               *(uint *)(&uStack_5d0 + iVar5 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].z + 4) =
               *(uint *)((int)&uStack_5d0 + iVar8 + 4);
          *(uint *)&(out_result->poly2).uvs[3].x = *(uint *)pdVar11;
          *(uint *)((int)&(out_result->poly2).uvs[3].x + 4) =
               *(uint *)((int)&uStack_568 + iVar6 + 4);
          *(uint *)&(out_result->poly2).uvs[3].y =
               *(uint *)(&uStack_560 + iStack_b0 * 2);
          *(uint *)((int)&(out_result->poly2).uvs[3].y + 4) =
               *(uint *)((int)&uStack_560 + iVar6 + 4);
          return 1;
        }
        (out_result->poly1).vertex_count = 4;
        pCStack_c0->x = *pdVar10;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5d8)[iVar7 * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5d0)[iVar7 * 3];
        pCStack_64->x = *pdStack_b4;
        (out_result->poly1).uvs[0].y = pdStack_b4[1];
        pCStack_30->x = *pdStack_a0;
        (out_result->poly1).vertices[1].y = pdStack_a0[1];
        (out_result->poly1).vertices[1].z = pdStack_a0[2];
        pCStack_5c->x = *pdStack_20;
        (out_result->poly1).uvs[1].y = pdStack_20[1];
        pCStack_48->x = *pdStack_94;
        (out_result->poly1).vertices[2].y = pdStack_94[1];
        (out_result->poly1).vertices[2].z = pdStack_94[2];
        pCStack_60->x = *pdStack_b8;
        (out_result->poly1).uvs[2].y = pdStack_b8[1];
        (out_result->poly1).vertices[3].x = *pdVar13;
        (out_result->poly1).vertices[3].y = (double)(&uStack_5d8)[iVar5 * 3];
        (out_result->poly1).vertices[3].z = (double)(&uStack_5d0)[iVar5 * 3];
        (out_result->poly1).uvs[3].x = *pdVar11;
        (out_result->poly1).uvs[3].y = (double)(&uStack_560)[iStack_b0 * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCVar1->x = *(uint *)pdStack_98;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)pdStack_98 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y = *(uint *)(pdStack_98 + 1);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)pdStack_98 + 0xc);
        (out_result->poly2).vertices[0].z = pdStack_98[2];
        pCStack_8c->x = *pdStack_24;
        (out_result->poly2).uvs[0].y = pdStack_24[1];
        *(uint *)&pCStack_40->x = *(uint *)pdVar10;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_5e0 + iVar4 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y = *(uint *)(&uStack_5d8 + iVar7 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_5d8 + iVar4 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z = *(uint *)(&uStack_5d0 + iVar7 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_5d0 + iVar4 + 4);
        pCStack_80->x = *pdStack_b4;
        (out_result->poly2).uvs[1].y = pdStack_b4[1];
        *(uint *)&pCStack_44->x = *(uint *)pdVar13;
        *(uint *)((int)&(out_result->poly2).vertices[2].x + 4) =
             *(uint *)((int)&uStack_5e0 + iVar8 + 4);
        *(uint *)&(out_result->poly2).vertices[2].y = *(uint *)(&uStack_5d8 + iVar5 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[2].y + 4) =
             *(uint *)((int)&uStack_5d8 + iVar8 + 4);
        *(uint *)&(out_result->poly2).vertices[2].z = *(uint *)(&uStack_5d0 + iVar5 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[2].z + 4) =
             *(uint *)((int)&uStack_5d0 + iVar8 + 4);
        *(uint *)&pCStack_78->x = *(uint *)pdVar11;
        *(uint *)((int)&(out_result->poly2).uvs[2].x + 4) =
             *(uint *)((int)&uStack_568 + iVar6 + 4);
        *(uint *)&(out_result->poly2).uvs[2].y = *(uint *)(&uStack_560 + iStack_b0 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[2].y + 4) =
             *(uint *)((int)&uStack_560 + iVar6 + 4);
        return 1;
      }
      iStack_a8 = 3;
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
      iStack_90 = iStack_4c * 8;
      dVar3 = (&dStack_3f8)[iStack_4c] / ((&dStack_3f8)[iStack_4c] - (&dStack_3f8)[iStack_54]);
      pdStack_18 = (double *)(&uStack_5e0 + iStack_54 * 3);
      pdStack_9c = (double *)(&uStack_5e0 + iStack_4c * 3);
      dStack_230 = (double)(&uStack_5e0)[iStack_4c * 3] - (double)(&uStack_5e0)[iStack_54 * 3];
      dStack_228 = (double)(&uStack_5d8)[iStack_4c * 3] - (double)(&uStack_5d8)[iStack_54 * 3];
      dStack_220 = (double)(&uStack_5d0)[iStack_4c * 3] - (double)(&uStack_5d0)[iStack_54 * 3];
      pdVar11 = &dStack_230;
      pdVar13 = &dStack_4b8;
      for (iVar4 = 6; pdVar10 = pdStack_9c, iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pdVar13 = *(uint *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
        pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
      }
      dStack_290 = dStack_4b8 * dVar3;
      dStack_288 = dStack_4b0 * dVar3;
      dStack_280 = dStack_4a8 * dVar3;
      pdVar11 = &dStack_290;
      pdVar13 = &dStack_260;
      for (iVar4 = 6; iVar8 = iStack_a8, iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pdVar13 = *(uint *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
        pdVar13 = (double *)((int)pdVar13 + (uint)bVar15 * -8 + 4);
      }
      dStack_428 = *pdVar10 - dStack_260;
      dStack_420 = pdVar10[1] - dStack_258;
      dStack_418 = pdVar10[2] - dStack_250;
      iVar4 = iStack_a8 * 0x18;
      pdVar11 = &dStack_428;
      puVar14 = &uStack_3e0;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar14 = *(uint *)pdVar11;
        pdVar11 = (double *)((int)pdVar11 + (uint)bVar15 * -8 + 4);
        puVar14 = puVar14 + (uint)bVar15 * -2 + 1;
      }
      pdVar13 = (double *)(&uStack_5e0 + iVar8 * 3);
      *(uint *)pdVar13 = uStack_3e0;
      *(uint *)((int)&uStack_5e0 + iVar4 + 4) = uStack_3dc;
      *(uint *)(&uStack_5d8 + iVar8 * 3) = uStack_3d8;
      *(uint *)((int)&uStack_5d8 + iVar4 + 4) = uStack_3d4;
      *(uint *)(&uStack_5d0 + iVar8 * 3) = uStack_3d0;
      *(uint *)((int)&uStack_5d0 + iVar4 + 4) = uStack_3cc;
      pdStack_34 = (double *)(&uStack_568 + iStack_54 * 2);
      pdStack_1c = (double *)(&uStack_568 + iStack_4c * 2);
      uStack_1d8 = (double)(&uStack_568)[iStack_4c * 2] - (double)(&uStack_568)[iStack_54 * 2];
      dStack_1d0 = (double)(&uStack_560)[iStack_4c * 2] - (double)(&uStack_560)[iStack_54 * 2];
      uStack_108 = (uint)uStack_1d8;
      (&uStack_104)[(uint)bVar15 * -2] = *(uint *)((int)&uStack_1d8 + (uint)bVar15 * -8 + 4);
      pdVar11 = pdStack_1c;
      *(uint *)(&dStack_100 + (-(uint)bVar15 - (uint)bVar15)) =
           *(uint *)(&dStack_1d0 + (-(uint)bVar15 - (uint)bVar15));
      *(uint *)
       ((int)(&dStack_100 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_1d0 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
      uStack_e8 = (double)CONCAT44(uStack_104,uStack_108) * dVar3;
      dStack_e0 = dStack_100 * dVar3;
      uStack_198 = (uint)uStack_e8;
      (&uStack_194)[(uint)bVar15 * -2] = *(uint *)((int)&uStack_e8 + (uint)bVar15 * -8 + 4);
      *(uint *)(&dStack_190 + (-(uint)bVar15 - (uint)bVar15)) =
           *(uint *)(&dStack_e0 + (-(uint)bVar15 - (uint)bVar15));
      *(uint *)
       ((int)(&dStack_190 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_e0 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
      uStack_f8 = *pdVar11 - (double)CONCAT44(uStack_194,uStack_198);
      dStack_f0 = pdVar11[1] - dStack_190;
      uStack_138 = (uint)uStack_f8;
      auStack_134[(uint)bVar15 * -2] = *(uint *)((int)&uStack_f8 + (uint)bVar15 * -8 + 4);
      auStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           *(uint *)(&dStack_f0 + (-(uint)bVar15 - (uint)bVar15));
      (auStack_134 + (uint)bVar15 * -2 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1] =
           *(uint *)
            ((int)(&dStack_f0 + (-(uint)bVar15 - (uint)bVar15)) + ((uint)bVar15 * -2 + 1) * 4);
      iVar5 = iStack_a8 * 0x10;
      pdVar10 = (double *)(&uStack_568 + iStack_a8 * 2);
      *(uint *)pdVar10 = uStack_138;
      *(uint *)((int)&uStack_568 + iVar5 + 4) = auStack_134[0];
      *(uint *)(&uStack_560 + iStack_a8 * 2) = auStack_134[1];
      *(uint *)((int)&uStack_560 + iVar5 + 4) = auStack_134[2];
      pCStack_7c = (out_result->poly2).uvs + 2;
      pCStack_2c = (out_result->poly2).vertices + 2;
      pCStack_68 = (out_result->poly2).uvs + 1;
      pCStack_bc = (out_result->poly2).vertices + 1;
      pCStack_88 = (out_result->poly2).uvs;
      pCStack_28 = (out_result->poly2).vertices;
      pCStack_84 = (out_result->poly1).uvs + 2;
      pCStack_38 = (out_result->poly1).vertices + 2;
      pCStack_74 = (out_result->poly1).uvs + 1;
      pCStack_3c = (out_result->poly1).vertices + 1;
      pCStack_70 = (out_result->poly1).uvs;
      pCStack_c4 = (out_result->poly1).vertices;
      iVar7 = iStack_6c * 0x18;
      iVar6 = iStack_6c * 0x10;
      pdVar12 = (double *)(&uStack_568 + iStack_6c * 2);
      pdVar11 = (double *)(&uStack_5e0 + iStack_6c * 3);
      if (0.0 < *(double *)((int)&dStack_3f8 + iStack_90)) {
        (out_result->poly1).vertex_count = 3;
        pCStack_c4->x = *pdVar11;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5d8)[iStack_6c * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5d0)[iStack_6c * 3];
        pCStack_70->x = *pdVar12;
        (out_result->poly1).uvs[0].y = (double)(&uStack_560)[iStack_6c * 2];
        pCStack_3c->x = *pdStack_9c;
        (out_result->poly1).vertices[1].y = pdStack_9c[1];
        (out_result->poly1).vertices[1].z = pdStack_9c[2];
        pCStack_74->x = *pdStack_1c;
        (out_result->poly1).uvs[1].y = pdStack_1c[1];
        pCStack_38->x = *pdVar13;
        (out_result->poly1).vertices[2].y = (double)(&uStack_5d8)[iVar8 * 3];
        (out_result->poly1).vertices[2].z = (double)(&uStack_5d0)[iVar8 * 3];
        pCStack_84->x = *pdVar10;
        (out_result->poly1).uvs[2].y = (double)(&uStack_560)[iStack_a8 * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCStack_28->x = *(uint *)pdVar11;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_5e0 + iVar7 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y =
             *(uint *)(&uStack_5d8 + iStack_6c * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_5d8 + iVar7 + 4);
        *(uint *)&(out_result->poly2).vertices[0].z =
             *(uint *)(&uStack_5d0 + iStack_6c * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].z + 4) =
             *(uint *)((int)&uStack_5d0 + iVar7 + 4);
        *(uint *)&pCStack_88->x = *(uint *)pdVar12;
        *(uint *)((int)&(out_result->poly2).uvs[0].x + 4) =
             *(uint *)((int)&uStack_568 + iVar6 + 4);
        *(uint *)&(out_result->poly2).uvs[0].y = *(uint *)(&uStack_560 + iStack_6c * 2);
        *(uint *)((int)&(out_result->poly2).uvs[0].y + 4) =
             *(uint *)((int)&uStack_560 + iVar6 + 4);
        *(uint *)&pCStack_bc->x = *(uint *)pdVar13;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_5e0 + iVar4 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y = *(uint *)(&uStack_5d8 + iVar8 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_5d8 + iVar4 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z = *(uint *)(&uStack_5d0 + iVar8 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_5d0 + iVar4 + 4);
        *(uint *)&pCStack_68->x = *(uint *)pdVar10;
        *(uint *)((int)&(out_result->poly2).uvs[1].x + 4) =
             *(uint *)((int)&uStack_568 + iVar5 + 4);
        *(uint *)&(out_result->poly2).uvs[1].y = *(uint *)(&uStack_560 + iStack_a8 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[1].y + 4) =
             *(uint *)((int)&uStack_560 + iVar5 + 4);
        pCStack_2c->x = *pdStack_18;
        (out_result->poly2).vertices[2].y = pdStack_18[1];
        (out_result->poly2).vertices[2].z = pdStack_18[2];
        pCStack_7c->x = *pdStack_34;
        (out_result->poly2).uvs[2].y = pdStack_34[1];
        return 1;
      }
      (out_result->poly2).vertex_count = 3;
      pCStack_28->x = *pdVar11;
      (out_result->poly2).vertices[0].y = (double)(&uStack_5d8)[iStack_6c * 3];
      (out_result->poly2).vertices[0].z = (double)(&uStack_5d0)[iStack_6c * 3];
      pCStack_88->x = *pdVar12;
      (out_result->poly2).uvs[0].y = (double)(&uStack_560)[iStack_6c * 2];
      pCStack_bc->x = *pdStack_9c;
      (out_result->poly2).vertices[1].y = pdStack_9c[1];
      (out_result->poly2).vertices[1].z = pdStack_9c[2];
      pCStack_68->x = *pdStack_1c;
      (out_result->poly2).uvs[1].y = pdStack_1c[1];
      pCStack_2c->x = *pdVar13;
      (out_result->poly2).vertices[2].y = (double)(&uStack_5d8)[iVar8 * 3];
      (out_result->poly2).vertices[2].z = (double)(&uStack_5d0)[iVar8 * 3];
      pCStack_7c->x = *pdVar10;
      (out_result->poly2).uvs[2].y = (double)(&uStack_560)[iStack_a8 * 2];
      (out_result->poly1).vertex_count = 3;
      *(uint *)&pCStack_c4->x = *(uint *)pdVar11;
      *(uint *)((int)&(out_result->poly1).vertices[0].x + 4) =
           *(uint *)((int)&uStack_5e0 + iVar7 + 4);
      *(uint *)&(out_result->poly1).vertices[0].y =
           *(uint *)(&uStack_5d8 + iStack_6c * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].y + 4) =
           *(uint *)((int)&uStack_5d8 + iVar7 + 4);
      *(uint *)&(out_result->poly1).vertices[0].z =
           *(uint *)(&uStack_5d0 + iStack_6c * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].z + 4) =
           *(uint *)((int)&uStack_5d0 + iVar7 + 4);
      *(uint *)&pCStack_70->x = *(uint *)pdVar12;
      *(uint *)((int)&(out_result->poly1).uvs[0].x + 4) =
           *(uint *)((int)&uStack_568 + iVar6 + 4);
      *(uint *)&(out_result->poly1).uvs[0].y = *(uint *)(&uStack_560 + iStack_6c * 2);
      *(uint *)((int)&(out_result->poly1).uvs[0].y + 4) =
           *(uint *)((int)&uStack_560 + iVar6 + 4);
      *(uint *)&pCStack_3c->x = *(uint *)pdVar13;
      *(uint *)((int)&(out_result->poly1).vertices[1].x + 4) =
           *(uint *)((int)&uStack_5e0 + iVar4 + 4);
      *(uint *)&(out_result->poly1).vertices[1].y = *(uint *)(&uStack_5d8 + iVar8 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[1].y + 4) =
           *(uint *)((int)&uStack_5d8 + iVar4 + 4);
      *(uint *)&(out_result->poly1).vertices[1].z = *(uint *)(&uStack_5d0 + iVar8 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[1].z + 4) =
           *(uint *)((int)&uStack_5d0 + iVar4 + 4);
      *(uint *)&pCStack_74->x = *(uint *)pdVar10;
      *(uint *)((int)&(out_result->poly1).uvs[1].x + 4) =
           *(uint *)((int)&uStack_568 + iVar5 + 4);
      *(uint *)&(out_result->poly1).uvs[1].y = *(uint *)(&uStack_560 + iStack_a8 * 2);
      *(uint *)((int)&(out_result->poly1).uvs[1].y + 4) =
           *(uint *)((int)&uStack_560 + iVar5 + 4);
      pCStack_38->x = *pdStack_18;
      (out_result->poly1).vertices[2].y = pdStack_18[1];
      (out_result->poly1).vertices[2].z = pdStack_18[2];
      pCStack_84->x = *pdStack_34;
      (out_result->poly1).uvs[2].y = pdStack_34[1];
      return 1;
    }
  }
  return 0;
}
