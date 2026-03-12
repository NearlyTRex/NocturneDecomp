// Name: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
// Address Range: [[005ce580, 005d0004]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580(CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

{
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
  CVert *pCVar17;
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
  double *pdVar25;
  CVert *pCVar10;
  double *pdVar11;
  double *pdVar26;
  double *pdVar12;
  double *pdVar13;
  uint *puVar27;
  double *pdVar28;
  double *pdVar14;
  uint *puVar15;
  byte bVar16;
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
  uint uStack_598;
  uint uStack_594;
  uint uStack_590;
  uint uStack_58c;
  uint uStack_588;
  uint uStack_584;
  uint uStack_580;
  uint uStack_57c;
  uint uStack_578;
  uint uStack_574;
  uint uStack_570;
  uint uStack_56c;
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
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
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
  double dVar4;
  CVert *pCVar3;
  CVector3d *pCVar2;
  CP3D *pCVar1;
  
  bVar16 = 0;
  (*other_poly->vtable->getBounds)(other_poly,&local_3c8,&local_458);
  (*this_ptr->vtable->getBounds)(this_ptr,&CStack_4d0,&CStack_2f0);
  if (((((local_3c8.x <= CStack_2f0.x) && (CStack_4d0.x <= local_458.x)) &&
       (local_3c8.y <= CStack_2f0.y)) &&
      ((CStack_4d0.y <= local_458.y && (local_3c8.z <= CStack_2f0.z)))) &&
     (CStack_4d0.z <= local_458.z)) {
    pCVar17 = other_poly->parent_obj->vertex_data;
    iVar5 = (*this_ptr->vtable->rayIntersect)
                      (this_ptr,&pCVar17[other_poly->vertex_idx_0].position,
                       &pCVar17[other_poly->vertex_idx_1].position,&CStack_410);
    if (iVar5 == 0) {
      pCVar17 = other_poly->parent_obj->vertex_data;
      iVar19 = (*this_ptr->vtable->rayIntersect)
                         (this_ptr,&pCVar17[other_poly->vertex_idx_1].position,
                          &pCVar17[other_poly->vertex_idx_2].position,&CStack_410);
      if (iVar19 == 0) {
        pCVar17 = other_poly->parent_obj->vertex_data;
        iVar19 = (*this_ptr->vtable->rayIntersect)
                           (this_ptr,&pCVar17[other_poly->vertex_idx_2].position,
                            &pCVar17[other_poly->vertex_idx_0].position,&CStack_410);
        if (iVar19 == 0) {
          pCVar17 = this_ptr->parent_obj->vertex_data;
          iVar19 = (*other_poly->vtable->rayIntersect)
                             (other_poly,&pCVar17[this_ptr->vertex_idx_0].position,
                              &pCVar17[this_ptr->vertex_idx_1].position,&CStack_410);
          if (iVar19 == 0) {
            pCVar17 = this_ptr->parent_obj->vertex_data;
            iVar19 = (*other_poly->vtable->rayIntersect)
                               (other_poly,&pCVar17[this_ptr->vertex_idx_1].position,
                                &pCVar17[this_ptr->vertex_idx_2].position,&CStack_410);
            if (iVar19 == 0) {
              pCVar17 = this_ptr->parent_obj->vertex_data;
              iVar19 = (*other_poly->vtable->rayIntersect)
                                 (other_poly,&pCVar17[this_ptr->vertex_idx_2].position,
                                  &pCVar17[this_ptr->vertex_idx_0].position,&CStack_410);
              if (iVar19 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    memset(out_result,0,0x148);
    pCVar3 = this_ptr->parent_obj->vertex_data;
    __arrinit(&uStack_5e0,5,&g_CP3DTypeInfo);
    pCVar17 = pCVar3 + this_ptr->vertex_idx_0;
    uStack_5e0._0_4_ = *(uint *)&(pCVar17->position).x;
    uStack_5e0._4_4_ = *(uint *)((int)&(pCVar17->position).x + 4);
    uStack_5d8._0_4_ = *(uint *)&(pCVar17->position).y;
    uStack_5d8._4_4_ = *(uint *)((int)&(pCVar17->position).y + 4);
    uStack_5d0._0_4_ = *(uint *)&(pCVar17->position).z;
    uStack_5d0._4_4_ = *(uint *)((int)&(pCVar17->position).z + 4);
    pCVar17 = pCVar3 + this_ptr->vertex_idx_1;
    uStack_5c8 = *(uint *)&(pCVar17->position).x;
    uStack_5c4 = *(uint *)((int)&(pCVar17->position).x + 4);
    uStack_5c0 = *(uint *)&(pCVar17->position).y;
    uStack_5bc = *(uint *)((int)&(pCVar17->position).y + 4);
    uStack_5b8 = *(uint *)&(pCVar17->position).z;
    uStack_5b4 = *(uint *)((int)&(pCVar17->position).z + 4);
    pCVar17 = pCVar3 + this_ptr->vertex_idx_2;
    uStack_5b0 = *(uint *)&(pCVar17->position).x;
    uStack_5ac = *(uint *)((int)&(pCVar17->position).x + 4);
    uStack_5a8 = *(uint *)&(pCVar17->position).y;
    uStack_5a4 = *(uint *)((int)&(pCVar17->position).y + 4);
    uStack_5a0 = *(uint *)&(pCVar17->position).z;
    uStack_59c = *(uint *)((int)&(pCVar17->position).z + 4);
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
    pCVar10 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    pdVar26 = &dStack_320;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      pCVar10 = (CVert *)((int)pCVar10 + (uint)bVar16 * -8 + 4);
      *(uint *)pdVar26 = *(uint *)&(pCVar10->position).x;
      pCVar10 = pCVar10;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
    }
    pCVar1 = &other_poly->normal;
    uStack_218 = *(uint *)&(pCVar1->impl).x;
    uStack_214 = *(uint *)((int)&(other_poly->normal).impl.x + 4);
    pdVar26 = &(other_poly->normal).impl.y;
    uStack_210 = *(uint *)pdVar26;
    uStack_20c = *(uint *)((int)&(other_poly->normal).impl.y + 4);
    pdVar28 = &(other_poly->normal).impl.z;
    dVar18 = *pdVar28;
    uStack_208 = *(uint *)pdVar28;
    uStack_204 = *(uint *)((int)&(other_poly->normal).impl.z + 4);
    dStack_3b0 = dStack_320 * (pCVar1->impl).x;
    dStack_3a8 = dStack_318 * *pdVar26;
    dStack_3a0 = dStack_310 * *pdVar28;
    dStack_4e8 = (pCVar1->impl).x * __BITCAST_DOUBLE(CONCAT44(uStack_5e0._4_4_,(uint)uStack_5e0));
    dStack_4e0 = *pdVar26 * __BITCAST_DOUBLE(CONCAT44(uStack_5d8._4_4_,(uint)uStack_5d8));
    dStack_4d8 = *pdVar28 * __BITCAST_DOUBLE(CONCAT44(uStack_5d0._4_4_,(uint)uStack_5d0));
    dStack_2d8 = (pCVar1->impl).x * __BITCAST_DOUBLE(CONCAT44(uStack_5c4,uStack_5c8));
    dStack_2d0 = *pdVar26 * __BITCAST_DOUBLE(CONCAT44(uStack_5bc,uStack_5c0));
    dStack_2c8 = *pdVar28 * __BITCAST_DOUBLE(CONCAT44(uStack_5b4,uStack_5b8));
    dStack_2c0 = (pCVar1->impl).x * __BITCAST_DOUBLE(CONCAT44(uStack_5ac,uStack_5b0));
    dStack_2b8 = *pdVar26 * __BITCAST_DOUBLE(CONCAT44(uStack_5a4,uStack_5a8));
    pdVar26 = &dStack_3b0;
    pdVar28 = &dStack_248;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(uint *)pdVar28 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
      pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
    }
    dStack_2b0 = dVar18 * __BITCAST_DOUBLE(CONCAT44(uStack_59c,uStack_5a0));
    pdVar26 = &dStack_4e8;
    pdVar28 = &dStack_398;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(uint *)pdVar28 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
      pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
    }
    dVar4 = -(dStack_248 + dStack_240 + dStack_238);
    pdVar26 = &dStack_2d8;
    pdVar28 = &dStack_278;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(uint *)pdVar28 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
      pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
    }
    pdVar26 = &dStack_2c0;
    pdVar28 = &dStack_470;
    for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
      *(uint *)pdVar28 = *(uint *)pdVar26;
      pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
      pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
    }
    dStack_3f8 = dStack_398 + dStack_390 + dStack_388 + dVar4;
    dStack_3f0 = dStack_278 + dStack_270 + dStack_268 + dVar4;
    dStack_3e8 = dStack_470 + dStack_468 + dStack_460 + dVar4;
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
        dVar18 = (&dStack_3f8)[aiStack_d4[3]] /
                 ((&dStack_3f8)[aiStack_d4[3]] - (&dStack_3f8)[iStack_50]);
        pdVar20 = (double *)(&uStack_5e0 + iStack_50 * 3);
        pdVar25 = (double *)(&uStack_5e0 + aiStack_d4[3] * 3);
        dStack_2a8 = *pdVar25 - *pdVar20;
        dStack_2a0 = (double)(&uStack_5d8)[aiStack_d4[3] * 3] - (double)(&uStack_5d8)[iStack_50 * 3]
        ;
        dStack_298 = (double)(&uStack_5d0)[aiStack_d4[3] * 3] - (double)(&uStack_5d0)[iStack_50 * 3]
        ;
        pdVar26 = &dStack_2a8;
        pdVar28 = &dStack_488;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *(uint *)pdVar28 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
          pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
        }
        dStack_338 = dStack_488 * dVar18;
        dStack_330 = dStack_480 * dVar18;
        dStack_328 = dStack_478 * dVar18;
        pdVar26 = &dStack_338;
        pdVar28 = &dStack_4a0;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          *(uint *)pdVar28 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
          pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
        }
        dStack_518 = *pdVar25 - dStack_4a0;
        dStack_510 = (double)(&uStack_5d8)[iVar19 * 3] - dStack_498;
        dStack_508 = (double)(&uStack_5d0)[iVar19 * 3] - dStack_490;
        pdVar26 = &dStack_518;
        puVar27 = &uStack_350;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          *puVar27 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
          puVar27 = puVar27 + (uint)bVar16 * -2 + 1;
        }
        uStack_598 = uStack_350;
        uStack_594 = uStack_34c;
        uStack_590 = uStack_348;
        uStack_58c = uStack_344;
        uStack_588 = uStack_340;
        uStack_584 = uStack_33c;
        pdVar21 = (double *)(&uStack_568 + iStack_50 * 2);
        pdVar23 = (double *)(&uStack_568 + aiStack_d4[3] * 2);
        uStack_188 = *pdVar23 - *pdVar21;
        dStack_180 = (double)(&uStack_560)[aiStack_d4[3] * 2] - (double)(&uStack_560)[iStack_50 * 2]
        ;
        uStack_188._0_4_ = SUB84(*pdVar23 - *pdVar21,0);
        uStack_1b8 = (uint)uStack_188;
        (&uStack_1b4)[(uint)bVar16 * -2] = *(uint *)((int)&uStack_188 + (uint)bVar16 * -8 + 4)
        ;
        *(uint *)(&dStack_1b0 + (-(uint)bVar16 - (uint)bVar16)) =
             *(uint *)(&dStack_180 + (-(uint)bVar16 - (uint)bVar16));
        *(uint *)
         ((int)(&dStack_1b0 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_180 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
        uStack_118 = __BITCAST_DOUBLE(CONCAT44(uStack_1b4,uStack_1b8)) * dVar18;
        dStack_110 = dStack_1b0 * dVar18;
        uStack_1c8 = (uint)uStack_118;
        (&uStack_1c4)[(uint)bVar16 * -2] = *(uint *)((int)&uStack_118 + (uint)bVar16 * -8 + 4)
        ;
        *(uint *)(&dStack_1c0 + (-(uint)bVar16 - (uint)bVar16)) =
             *(uint *)(&dStack_110 + (-(uint)bVar16 - (uint)bVar16));
        *(uint *)
         ((int)(&dStack_1c0 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_110 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
        uStack_148 = *pdVar23 - __BITCAST_DOUBLE(CONCAT44(uStack_1c4,uStack_1c8));
        dStack_140 = (double)(&uStack_560)[aiStack_d4[3] * 2] - dStack_1c0;
        auStack_134[3] = (uint)uStack_148;
        auStack_134[(uint)bVar16 * -2 + 4] =
             *(uint *)((int)&uStack_148 + (uint)bVar16 * -8 + 4);
        auStack_134[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5] =
             *(uint *)(&dStack_140 + (-(uint)bVar16 - (uint)bVar16));
        (auStack_134 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1] =
             *(uint *)
              ((int)(&dStack_140 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
        uStack_538 = auStack_134[3];
        uStack_534 = uStack_124;
        uStack_530 = uStack_120;
        uStack_52c = uStack_11c;
        dVar18 = (&dStack_3f8)[iStack_58] / ((&dStack_3f8)[iStack_58] - (&dStack_3f8)[iStack_50]);
        pdVar24 = (double *)(&uStack_5e0 + iStack_58 * 3);
        dStack_500 = *pdVar24 - *pdVar20;
        dStack_4f8 = (double)(&uStack_5d8)[iStack_58 * 3] - (double)(&uStack_5d8)[iStack_50 * 3];
        dStack_4f0 = (double)(&uStack_5d0)[iStack_58 * 3] - (double)(&uStack_5d0)[iStack_50 * 3];
        pdVar26 = &dStack_500;
        pdVar28 = &dStack_368;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          *(uint *)pdVar28 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
          pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
        }
        dStack_308 = dStack_368 * dVar18;
        dStack_300 = dStack_360 * dVar18;
        dStack_2f8 = dStack_358 * dVar18;
        pdVar26 = &dStack_308;
        pdVar14 = &dStack_200;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          pdVar14 = (double *)((int)pdVar14 + (uint)bVar16 * -8 + 4);
          *(uint *)pdVar14 = *(uint *)pdVar26;
          pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
          pdVar14 = pdVar14;
        }
        dStack_380 = *pdVar24 - dStack_200;
        dStack_378 = (double)(&uStack_5d8)[iStack_58 * 3] - dStack_1f8;
        dStack_370 = (double)(&uStack_5d0)[iStack_58 * 3] - dStack_1f0;
        pdVar12 = &dStack_380;
        puVar15 = &uStack_440;
        for (iVar22 = 6; iVar22 != 0; iVar22 = iVar22 + -1) {
          puVar15 = puVar15 + (uint)bVar16 * -2 + 1;
          pdVar12 = (double *)((int)pdVar12 + (uint)bVar16 * -8 + 4);
          *puVar15 = *(uint *)pdVar12;
          pdVar12 = pdVar12;
          puVar15 = puVar15;
        }
        uStack_580 = uStack_440;
        uStack_57c = uStack_43c;
        uStack_578 = uStack_438;
        uStack_574 = uStack_434;
        uStack_570 = uStack_430;
        uStack_56c = uStack_42c;
        pdVar26 = (double *)(&uStack_568 + iStack_58 * 2);
        uStack_168 = *pdVar26 - *pdVar21;
        dStack_160 = (double)(&uStack_560)[iStack_58 * 2] - (double)(&uStack_560)[iStack_50 * 2];
        uStack_168._0_4_ = SUB84(*pdVar26 - *pdVar21,0);
        uStack_178 = (uint)uStack_168;
        (&uStack_174)[(uint)bVar16 * -2] = *(uint *)((int)&uStack_168 + (uint)bVar16 * -8 + 4)
        ;
        *(uint *)(&dStack_170 + (-(uint)bVar16 - (uint)bVar16)) =
             *(uint *)(&dStack_160 + (-(uint)bVar16 - (uint)bVar16));
        *(uint *)
         ((int)(&dStack_170 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_160 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
        uStack_158 = __BITCAST_DOUBLE(CONCAT44(uStack_174,uStack_178)) * dVar18;
        dStack_150 = dStack_170 * dVar18;
        uStack_1a8 = (uint)uStack_158;
        (&uStack_1a4)[(uint)bVar16 * -2] = *(uint *)((int)&uStack_158 + (uint)bVar16 * -8 + 4)
        ;
        *(uint *)(&dStack_1a0 + (-(uint)bVar16 - (uint)bVar16)) =
             *(uint *)(&dStack_150 + (-(uint)bVar16 - (uint)bVar16));
        *(uint *)
         ((int)(&dStack_1a0 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_150 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
        uStack_1e8 = *pdVar26 - __BITCAST_DOUBLE(CONCAT44(uStack_1a4,uStack_1a8));
        dStack_1e0 = (double)(&uStack_560)[iStack_58 * 2] - dStack_1a0;
        uStack_d8 = (uint)uStack_1e8;
        aiStack_d4[(uint)bVar16 * -2] = *(int *)((int)&uStack_1e8 + (uint)bVar16 * -8 + 4);
        aiStack_d4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             *(int *)(&dStack_1e0 + (-(uint)bVar16 - (uint)bVar16));
        (aiStack_d4 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
             *(int *)((int)(&dStack_1e0 + (-(uint)bVar16 - (uint)bVar16)) +
                     ((uint)bVar16 * -2 + 1) * 4);
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
          pCVar6->x = __BITCAST_DOUBLE(CONCAT44(uStack_594,uStack_598));
          (out_result->poly1).vertices[1].y = __BITCAST_DOUBLE(CONCAT44(uStack_58c,uStack_590));
          (out_result->poly1).vertices[1].z = __BITCAST_DOUBLE(CONCAT44(uStack_584,uStack_588));
          pCVar5->x = __BITCAST_DOUBLE(CONCAT44(uStack_534,uStack_538));
          (out_result->poly1).uvs[1].y = __BITCAST_DOUBLE(CONCAT44(uStack_52c,uStack_530));
          pCVar4->x = __BITCAST_DOUBLE(CONCAT44(uStack_57c,uStack_580));
          (out_result->poly1).vertices[2].y = __BITCAST_DOUBLE(CONCAT44(uStack_574,uStack_578));
          (out_result->poly1).vertices[2].z = __BITCAST_DOUBLE(CONCAT44(uStack_56c,uStack_570));
          pCVar16->x = __BITCAST_DOUBLE(CONCAT44(aiStack_d4[0],uStack_d8));
          (out_result->poly1).uvs[2].y = __BITCAST_DOUBLE(CONCAT44(aiStack_d4[2],aiStack_d4[1]));
          (out_result->poly2).vertex_count = 4;
          pCVar2->x = __BITCAST_DOUBLE(CONCAT44(uStack_594,uStack_598));
          (out_result->poly2).vertices[0].y = __BITCAST_DOUBLE(CONCAT44(uStack_58c,uStack_590));
          (out_result->poly2).vertices[0].z = __BITCAST_DOUBLE(CONCAT44(uStack_584,uStack_588));
          pCVar14->x = __BITCAST_DOUBLE(CONCAT44(uStack_534,uStack_538));
          (out_result->poly2).uvs[0].y = __BITCAST_DOUBLE(CONCAT44(uStack_52c,uStack_530));
          pCVar13->x = *pdVar25;
          (out_result->poly2).vertices[1].y = (double)(&uStack_5d8)[iVar19 * 3];
          (out_result->poly2).vertices[1].z = (double)(&uStack_5d0)[iVar19 * 3];
          pCVar12->x = *pdVar23;
          (out_result->poly2).uvs[1].y = (double)(&uStack_560)[aiStack_d4[3] * 2];
          pCVar11->x = *pdVar24;
          (out_result->poly2).vertices[2].y = (double)(&uStack_5d8)[iStack_58 * 3];
          (out_result->poly2).vertices[2].z = (double)(&uStack_5d0)[iStack_58 * 3];
          pCVar9->x = *pdVar26;
          (out_result->poly2).uvs[2].y = (double)(&uStack_560)[iStack_58 * 2];
          *(uint *)&(out_result->poly2).vertices[3].x = uStack_580;
          *(uint *)((int)&(out_result->poly2).vertices[3].x + 4) = uStack_57c;
          *(uint *)&(out_result->poly2).vertices[3].y = uStack_578;
          *(uint *)((int)&(out_result->poly2).vertices[3].y + 4) = uStack_574;
          *(uint *)&(out_result->poly2).vertices[3].z = uStack_570;
          *(uint *)((int)&(out_result->poly2).vertices[3].z + 4) = uStack_56c;
          *(uint *)&(out_result->poly2).uvs[3].x = uStack_d8;
          *(int *)((int)&(out_result->poly2).uvs[3].x + 4) = aiStack_d4[0];
          *(int *)&(out_result->poly2).uvs[3].y = aiStack_d4[1];
          *(int *)((int)&(out_result->poly2).uvs[3].y + 4) = aiStack_d4[2];
          return 1;
        }
        (out_result->poly1).vertex_count = 4;
        pCVar8->x = __BITCAST_DOUBLE(CONCAT44(uStack_594,uStack_598));
        (out_result->poly1).vertices[0].y = __BITCAST_DOUBLE(CONCAT44(uStack_58c,uStack_590));
        (out_result->poly1).vertices[0].z = __BITCAST_DOUBLE(CONCAT44(uStack_584,uStack_588));
        pCVar7->x = __BITCAST_DOUBLE(CONCAT44(uStack_534,uStack_538));
        (out_result->poly1).uvs[0].y = __BITCAST_DOUBLE(CONCAT44(uStack_52c,uStack_530));
        pCVar6->x = *pdVar25;
        (out_result->poly1).vertices[1].y = (double)(&uStack_5d8)[iVar19 * 3];
        (out_result->poly1).vertices[1].z = (double)(&uStack_5d0)[iVar19 * 3];
        pCVar5->x = *pdVar23;
        (out_result->poly1).uvs[1].y = (double)(&uStack_560)[aiStack_d4[3] * 2];
        pCVar4->x = *pdVar24;
        (out_result->poly1).vertices[2].y = (double)(&uStack_5d8)[iStack_58 * 3];
        (out_result->poly1).vertices[2].z = (double)(&uStack_5d0)[iStack_58 * 3];
        pCVar16->x = *pdVar26;
        (out_result->poly1).uvs[2].y = (double)(&uStack_560)[iStack_58 * 2];
        (out_result->poly1).vertices[3].x = __BITCAST_DOUBLE(CONCAT44(uStack_57c,uStack_580));
        (out_result->poly1).vertices[3].y = __BITCAST_DOUBLE(CONCAT44(uStack_574,uStack_578));
        (out_result->poly1).vertices[3].z = __BITCAST_DOUBLE(CONCAT44(uStack_56c,uStack_570));
        (out_result->poly1).uvs[3].x = __BITCAST_DOUBLE(CONCAT44(aiStack_d4[0],uStack_d8));
        (out_result->poly1).uvs[3].y = __BITCAST_DOUBLE(CONCAT44(aiStack_d4[2],aiStack_d4[1]));
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
        *(uint *)&pCVar13->x = uStack_598;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) = uStack_594;
        *(uint *)&(out_result->poly2).vertices[1].y = uStack_590;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) = uStack_58c;
        *(uint *)&(out_result->poly2).vertices[1].z = uStack_588;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) = uStack_584;
        pCVar12->x = __BITCAST_DOUBLE(CONCAT44(uStack_534,uStack_538));
        (out_result->poly2).uvs[1].y = __BITCAST_DOUBLE(CONCAT44(uStack_52c,uStack_530));
        *(uint *)&pCVar11->x = uStack_580;
        *(uint *)((int)&(out_result->poly2).vertices[2].x + 4) = uStack_57c;
        *(uint *)&(out_result->poly2).vertices[2].y = uStack_578;
        *(uint *)((int)&(out_result->poly2).vertices[2].y + 4) = uStack_574;
        *(uint *)&(out_result->poly2).vertices[2].z = uStack_570;
        *(uint *)((int)&(out_result->poly2).vertices[2].z + 4) = uStack_56c;
        *(uint *)&pCVar9->x = uStack_d8;
        *(int *)((int)&(out_result->poly2).uvs[2].x + 4) = aiStack_d4[0];
        *(int *)&(out_result->poly2).uvs[2].y = aiStack_d4[1];
        *(int *)((int)&(out_result->poly2).uvs[2].y + 4) = aiStack_d4[2];
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
      dVar18 = (&dStack_3f8)[iStack_4c] / ((&dStack_3f8)[iStack_4c] - (&dStack_3f8)[iStack_54]);
      pdVar25 = (double *)(&uStack_5e0 + iStack_54 * 3);
      pdVar20 = (double *)(&uStack_5e0 + iStack_4c * 3);
      dStack_230 = *pdVar20 - *pdVar25;
      dStack_228 = (double)(&uStack_5d8)[iStack_4c * 3] - (double)(&uStack_5d8)[iStack_54 * 3];
      dStack_220 = (double)(&uStack_5d0)[iStack_4c * 3] - (double)(&uStack_5d0)[iStack_54 * 3];
      pdVar26 = &dStack_230;
      pdVar28 = &dStack_4b8;
      for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(uint *)pdVar28 = *(uint *)pdVar26;
        pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
        pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
      }
      dStack_290 = dStack_4b8 * dVar18;
      dStack_288 = dStack_4b0 * dVar18;
      dStack_280 = dStack_4a8 * dVar18;
      pdVar26 = &dStack_290;
      pdVar28 = &dStack_260;
      for (iVar19 = 6; iVar19 != 0; iVar19 = iVar19 + -1) {
        *(uint *)pdVar28 = *(uint *)pdVar26;
        pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
        pdVar28 = (double *)((int)pdVar28 + (uint)bVar16 * -8 + 4);
      }
      dStack_428 = *pdVar20 - dStack_260;
      dStack_420 = (double)(&uStack_5d8)[iStack_4c * 3] - dStack_258;
      dStack_418 = (double)(&uStack_5d0)[iStack_4c * 3] - dStack_250;
      pdVar26 = &dStack_428;
      puVar27 = &uStack_3e0;
      for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar27 = *(uint *)pdVar26;
        pdVar26 = (double *)((int)pdVar26 + (uint)bVar16 * -8 + 4);
        puVar27 = puVar27 + (uint)bVar16 * -2 + 1;
      }
      uStack_598 = uStack_3e0;
      uStack_594 = uStack_3dc;
      uStack_590 = uStack_3d8;
      uStack_58c = uStack_3d4;
      uStack_588 = uStack_3d0;
      uStack_584 = uStack_3cc;
      pdVar28 = (double *)(&uStack_568 + iStack_54 * 2);
      pdVar26 = (double *)(&uStack_568 + iStack_4c * 2);
      uStack_1d8 = *pdVar26 - *pdVar28;
      dStack_1d0 = (double)(&uStack_560)[iStack_4c * 2] - (double)(&uStack_560)[iStack_54 * 2];
      uStack_1d8._0_4_ = SUB84(*pdVar26 - *pdVar28,0);
      uStack_108 = (uint)uStack_1d8;
      (&uStack_104)[(uint)bVar16 * -2] = *(uint *)((int)&uStack_1d8 + (uint)bVar16 * -8 + 4);
      *(uint *)(&dStack_100 + (-(uint)bVar16 - (uint)bVar16)) =
           *(uint *)(&dStack_1d0 + (-(uint)bVar16 - (uint)bVar16));
      *(uint *)
       ((int)(&dStack_100 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_1d0 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
      uStack_e8 = __BITCAST_DOUBLE(CONCAT44(uStack_104,uStack_108)) * dVar18;
      dStack_e0 = dStack_100 * dVar18;
      uStack_198 = (uint)uStack_e8;
      (&uStack_194)[(uint)bVar16 * -2] = *(uint *)((int)&uStack_e8 + (uint)bVar16 * -8 + 4);
      *(uint *)(&dStack_190 + (-(uint)bVar16 - (uint)bVar16)) =
           *(uint *)(&dStack_e0 + (-(uint)bVar16 - (uint)bVar16));
      *(uint *)
       ((int)(&dStack_190 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_e0 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
      uStack_f8 = *pdVar26 - __BITCAST_DOUBLE(CONCAT44(uStack_194,uStack_198));
      dStack_f0 = (double)(&uStack_560)[iStack_4c * 2] - dStack_190;
      uStack_138 = (uint)uStack_f8;
      auStack_134[(uint)bVar16 * -2] = *(uint *)((int)&uStack_f8 + (uint)bVar16 * -8 + 4);
      auStack_134[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           *(uint *)(&dStack_f0 + (-(uint)bVar16 - (uint)bVar16));
      (auStack_134 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1] =
           *(uint *)
            ((int)(&dStack_f0 + (-(uint)bVar16 - (uint)bVar16)) + ((uint)bVar16 * -2 + 1) * 4);
      uStack_538 = uStack_138;
      uStack_534 = auStack_134[0];
      uStack_530 = auStack_134[1];
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
        pCVar5->x = *pdVar26;
        (out_result->poly1).uvs[1].y = (double)(&uStack_560)[iStack_4c * 2];
        pCVar4->x = __BITCAST_DOUBLE(CONCAT44(uStack_594,uStack_598));
        (out_result->poly1).vertices[2].y = __BITCAST_DOUBLE(CONCAT44(uStack_58c,uStack_590));
        (out_result->poly1).vertices[2].z = __BITCAST_DOUBLE(CONCAT44(uStack_584,uStack_588));
        pCVar16->x = __BITCAST_DOUBLE(CONCAT44(auStack_134[0],uStack_138));
        (out_result->poly1).uvs[2].y = __BITCAST_DOUBLE(CONCAT44(auStack_134[2],auStack_134[1]));
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
        *(uint *)&pCVar13->x = uStack_598;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) = uStack_594;
        *(uint *)&(out_result->poly2).vertices[1].y = uStack_590;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) = uStack_58c;
        *(uint *)&(out_result->poly2).vertices[1].z = uStack_588;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) = uStack_584;
        *(uint *)&pCVar12->x = uStack_138;
        *(uint *)((int)&(out_result->poly2).uvs[1].x + 4) = auStack_134[0];
        *(uint *)&(out_result->poly2).uvs[1].y = auStack_134[1];
        *(uint *)((int)&(out_result->poly2).uvs[1].y + 4) = auStack_134[2];
        pCVar11->x = *pdVar25;
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
      pCVar12->x = *pdVar26;
      (out_result->poly2).uvs[1].y = (double)(&uStack_560)[iStack_4c * 2];
      pCVar11->x = __BITCAST_DOUBLE(CONCAT44(uStack_594,uStack_598));
      (out_result->poly2).vertices[2].y = __BITCAST_DOUBLE(CONCAT44(uStack_58c,uStack_590));
      (out_result->poly2).vertices[2].z = __BITCAST_DOUBLE(CONCAT44(uStack_584,uStack_588));
      pCVar9->x = __BITCAST_DOUBLE(CONCAT44(auStack_134[0],uStack_138));
      (out_result->poly2).uvs[2].y = __BITCAST_DOUBLE(CONCAT44(auStack_134[2],auStack_134[1]));
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
      *(uint *)&pCVar6->x = uStack_598;
      *(uint *)((int)&(out_result->poly1).vertices[1].x + 4) = uStack_594;
      *(uint *)&(out_result->poly1).vertices[1].y = uStack_590;
      *(uint *)((int)&(out_result->poly1).vertices[1].y + 4) = uStack_58c;
      *(uint *)&(out_result->poly1).vertices[1].z = uStack_588;
      *(uint *)((int)&(out_result->poly1).vertices[1].z + 4) = uStack_584;
      *(uint *)&pCVar5->x = uStack_138;
      *(uint *)((int)&(out_result->poly1).uvs[1].x + 4) = auStack_134[0];
      *(uint *)&(out_result->poly1).uvs[1].y = auStack_134[1];
      *(uint *)((int)&(out_result->poly1).uvs[1].y + 4) = auStack_134[2];
      pCVar4->x = *pdVar25;
      (out_result->poly1).vertices[2].y = (double)(&uStack_5d8)[iStack_54 * 3];
      (out_result->poly1).vertices[2].z = (double)(&uStack_5d0)[iStack_54 * 3];
      pCVar16->x = *pdVar28;
      (out_result->poly1).uvs[2].y = (double)(&uStack_560)[iStack_54 * 2];
      return 1;
    }
  }
  return 0;
}
