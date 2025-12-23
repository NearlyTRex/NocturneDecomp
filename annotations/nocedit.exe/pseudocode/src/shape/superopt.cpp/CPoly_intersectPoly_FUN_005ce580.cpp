// Name: shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580
// Address: 005ce580
// Address Range: [[005ce580, 005d0004]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_intersectPoly_FUN_005ce580(CPoly * this_ptr, CPoly * other_poly, CPolyIntersectResult * out_result)

#include "nocturne.h"

int __cdecl
shape_superopt_cpp_CPoly_intersectPoly_FUN_005ce580
          (CPoly *this_ptr,CPoly *other_poly,CPolyIntersectResult *out_result)

{
  CVector3d *pCVar1;
  CVert *pCVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  BADSPACEBASE *in_ESP;
  CVert *pCVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  uint *puVar19;
  byte bVar20;
  int aiStackY_19b4 [1258];
  ulonglong uStack_5d8;
  ulonglong uStack_5d0;
  ulonglong uStack_5c8;
  ulonglong uStack_5c0;
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
  byte auStack_55c [4];
  ulonglong uStack_558;
  ulonglong uStack_550;
  uint uStack_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  uint uStack_538;
  uint uStack_534;
  uint uStack_530;
  uint uStack_52c;
  double dStack_508;
  double dStack_500;
  double dStack_4f8;
  double dStack_4f0;
  double dStack_4e8;
  double dStack_4e0;
  double dStack_4d8;
  uint uStack_4d0;
  CVector3d CStack_4cc;
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
  byte local_458 [40];
  uint uStack_430;
  uint uStack_42c;
  uint uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
  double dStack_418;
  byte auStack_410 [8];
  double dStack_408;
  double dStack_3e8;
  double dStack_3e0;
  double dStack_3d8;
  uint uStack_3d0;
  uint uStack_3cc;
  byte local_3c8 [40];
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
  double dStack_350;
  double dStack_348;
  uint uStack_340;
  uint uStack_33c;
  uint uStack_338;
  uint uStack_334;
  uint uStack_330;
  uint uStack_32c;
  double dStack_328;
  double dStack_320;
  double dStack_318;
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double dStack_2f8;
  uint uStack_2f0;
  CVector3d CStack_2ec;
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
  double dStack_218;
  double dStack_210;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  ulonglong uStack_1d8;
  double dStack_1d0;
  ulonglong uStack_1c8;
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
  uint uStack_188;
  uint uStack_184;
  double dStack_180;
  ulonglong uStack_178;
  double dStack_170;
  uint uStack_168;
  uint uStack_164;
  double dStack_160;
  ulonglong uStack_158;
  double dStack_150;
  ulonglong uStack_148;
  double dStack_140;
  ulonglong uStack_138;
  double dStack_130;
  uint uStack_128;
  uint auStack_124 [4];
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  ulonglong uStack_108;
  double dStack_100;
  uint uStack_f8;
  uint uStack_f4;
  double dStack_f0;
  ulonglong uStack_e8;
  double dStack_e0;
  ulonglong uStack_d8;
  double dStack_d0;
  uint uStack_c8;
  int aiStack_c4 [4];
  CVector3d *pCStack_b4;
  CVector3d *pCStack_b0;
  CVector3d *pCStack_ac;
  double *pdStack_a8;
  double *pdStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  double *pdStack_90;
  double *pdStack_8c;
  double *pdStack_88;
  double *pdStack_84;
  int iStack_80;
  CVector2d *pCStack_7c;
  CVector2d *pCStack_78;
  CVector2d *pCStack_74;
  CVector2d *pCStack_70;
  CVector2d *pCStack_6c;
  CVector2d *pCStack_68;
  CVector2d *pCStack_64;
  CVector2d *pCStack_60;
  int iStack_5c;
  CVector2d *pCStack_58;
  CVector2d *pCStack_54;
  CVector2d *pCStack_50;
  CVector2d *pCStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  CVector3d *pCStack_38;
  CVector3d *pCStack_34;
  CVector3d *pCStack_30;
  CVector3d *pCStack_2c;
  CVector3d *pCStack_28;
  double *pdStack_24;
  CVector3d *pCStack_20;
  CVector3d *pCStack_1c;
  CVector3d *pCStack_18;
  double *pdStack_14;
  
  bVar20 = 0;
  (*other_poly->vtable->getBounds)(other_poly,(CVector3d *)local_3c8,(CVector3d *)local_458);
  (*this_ptr->vtable->getBounds)(this_ptr,&CStack_4cc,&CStack_2ec);
  if ((((((double)CONCAT44 /* combine 2-byte values */(local_3c8._8_4_,local_3c8._4_4_) <=
          (double)CONCAT44 /* combine 2-byte values */(CStack_2ec.x._4_4_,CStack_2ec.x._0_4_)) &&
        ((double)CONCAT44 /* combine 2-byte values */(CStack_4cc.x._4_4_,CStack_4cc.x._0_4_) <=
         (double)CONCAT44 /* combine 2-byte values */(local_458._8_4_,local_458._4_4_))) &&
       ((double)CONCAT44 /* combine 2-byte values */(local_3c8._16_4_,local_3c8._12_4_) <=
        (double)CONCAT44 /* combine 2-byte values */(CStack_2ec.y._4_4_,CStack_2ec.y._0_4_))) &&
      (((double)CONCAT44 /* combine 2-byte values */(CStack_4cc.y._4_4_,CStack_4cc.y._0_4_) <=
        (double)CONCAT44 /* combine 2-byte values */(local_458._16_4_,local_458._12_4_) &&
       ((double)local_3c8._20_8_ <= CStack_2ec.z)))) && (CStack_4cc.z <= (double)local_458._20_8_))
  {
    pCVar14 = other_poly->parent_obj->vertex_data;
    iVar7 = (*this_ptr->vtable->rayIntersect)
                      (this_ptr,&pCVar14[other_poly->vertex_idx_0].position,
                       &pCVar14[other_poly->vertex_idx_1].position,(CVector3d *)(auStack_410 + 4));
    if (iVar7 == 0) {
      pCVar14 = other_poly->parent_obj->vertex_data;
      iVar7 = (*this_ptr->vtable->rayIntersect)
                        (this_ptr,&pCVar14[other_poly->vertex_idx_1].position,
                         &pCVar14[other_poly->vertex_idx_2].position,(CVector3d *)(auStack_410 + 4))
      ;
      if (iVar7 == 0) {
        pCVar14 = other_poly->parent_obj->vertex_data;
        iVar7 = (*this_ptr->vtable->rayIntersect)
                          (this_ptr,&pCVar14[other_poly->vertex_idx_2].position,
                           &pCVar14[other_poly->vertex_idx_0].position,
                           (CVector3d *)(auStack_410 + 4));
        if (iVar7 == 0) {
          pCVar14 = this_ptr->parent_obj->vertex_data;
          iVar7 = (*other_poly->vtable->rayIntersect)
                            (other_poly,&pCVar14[this_ptr->vertex_idx_0].position,
                             &pCVar14[this_ptr->vertex_idx_1].position,
                             (CVector3d *)(auStack_410 + 4));
          if (iVar7 == 0) {
            pCVar14 = this_ptr->parent_obj->vertex_data;
            iVar7 = (*other_poly->vtable->rayIntersect)
                              (other_poly,&pCVar14[this_ptr->vertex_idx_1].position,
                               &pCVar14[this_ptr->vertex_idx_2].position,
                               (CVector3d *)(auStack_410 + 4));
            if (iVar7 == 0) {
              pCVar14 = this_ptr->parent_obj->vertex_data;
              iVar7 = (*other_poly->vtable->rayIntersect)
                                (other_poly,&pCVar14[this_ptr->vertex_idx_2].position,
                                 &pCVar14[this_ptr->vertex_idx_0].position,
                                 (CVector3d *)(auStack_410 + 4));
              if (iVar7 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    crt_memory_c_memset_FUN_005fde40(out_result,0,0x148);
    pCVar2 = this_ptr->parent_obj->vertex_data;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_5d8,5,&g_CP3DTypeInfo);
    pCVar14 = pCVar2 + this_ptr->vertex_idx_0;
    uStack_5d8 = (double)CONCAT44 /* combine 2-byte values */(*(uint *)&(pCVar14->position).x,(uint)uStack_5d8);
    uStack_5d0._0_4_ = *(uint *)((int)&(pCVar14->position).x + 4);
    uStack_5d0._4_4_ = *(uint *)&(pCVar14->position).y;
    uStack_5c8._0_4_ = *(uint *)((int)&(pCVar14->position).y + 4);
    uStack_5c8._4_4_ = *(uint *)&(pCVar14->position).z;
    uStack_5c0._0_4_ = *(uint *)((int)&(pCVar14->position).z + 4);
    pCVar14 = pCVar2 + this_ptr->vertex_idx_1;
    uStack_5c0._4_4_ = *(uint *)&(pCVar14->position).x;
    uStack_5b8 = *(uint *)((int)&(pCVar14->position).x + 4);
    uStack_5b4 = *(uint *)&(pCVar14->position).y;
    uStack_5b0 = *(uint *)((int)&(pCVar14->position).y + 4);
    uStack_5ac = *(uint *)&(pCVar14->position).z;
    uStack_5a8 = *(uint *)((int)&(pCVar14->position).z + 4);
    pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
    uStack_5a4 = *(uint *)&(pCVar2->position).x;
    uStack_5a0 = *(uint *)((int)&(pCVar2->position).x + 4);
    uStack_59c = *(uint *)&(pCVar2->position).y;
    uStack_598 = *(uint *)((int)&(pCVar2->position).y + 4);
    uStack_594 = *(uint *)&(pCVar2->position).z;
    uStack_590 = *(uint *)((int)&(pCVar2->position).z + 4);
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(auStack_55c,5,&g_CP2DTypeInfo);
    uStack_558._0_4_ = *(uint *)&this_ptr->uv_coords[0].x;
    uStack_558._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].x + 4);
    uStack_550._0_4_ = *(uint *)&this_ptr->uv_coords[0].y;
    uStack_550._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].y + 4);
    uStack_548 = *(uint *)&this_ptr->uv_coords[1].x;
    uStack_544 = *(uint *)((int)&this_ptr->uv_coords[1].x + 4);
    uStack_540 = *(uint *)&this_ptr->uv_coords[1].y;
    uStack_53c = *(uint *)((int)&this_ptr->uv_coords[1].y + 4);
    uStack_538 = *(uint *)&this_ptr->uv_coords[2].x;
    uStack_534 = *(uint *)((int)&this_ptr->uv_coords[2].x + 4);
    uStack_530 = *(uint *)&this_ptr->uv_coords[2].y;
    uStack_52c = *(uint *)((int)&this_ptr->uv_coords[2].y + 4);
    pCVar14 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    pdVar16 = &dStack_310;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(uint *)pdVar16 = *(uint *)&(pCVar14->position).x;
      pCVar14 = (CVert *)((int)pCVar14 + ((uint)bVar20 * -2 + 1) * 4);
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
    }
    pCVar1 = &other_poly->normal;
    uStack_208 = *(uint *)&pCVar1->x;
    uStack_204 = *(uint *)((int)&(other_poly->normal).x + 4);
    pdVar16 = &(other_poly->normal).y;
    uStack_200 = *(uint *)pdVar16;
    uStack_1fc = *(uint *)((int)&(other_poly->normal).y + 4);
    pdVar18 = &(other_poly->normal).z;
    dVar5 = *pdVar18;
    uStack_1f8 = *(uint *)pdVar18;
    uStack_1f4 = *(uint *)((int)&(other_poly->normal).z + 4);
    dVar3 = *pdVar16 * (double)CONCAT44 /* combine 2-byte values */(uStack_5c8._4_4_,(uint)uStack_5c8);
    dVar4 = *pdVar18 * (double)CONCAT44 /* combine 2-byte values */(uStack_5c0._4_4_,(uint)uStack_5c0);
    dStack_3a0 = dStack_310 * pCVar1->x;
    dStack_398 = dStack_308 * *pdVar16;
    dStack_390 = dStack_300 * *pdVar18;
    dStack_4d8 = pCVar1->x * (double)CONCAT44 /* combine 2-byte values */(uStack_5d0._4_4_,(uint)uStack_5d0);
    uStack_4d0 = SUB84 /* extract 2-byte value */(dVar3,0);
    CStack_4cc.x._0_4_ = (uint)((ulonglong)dVar3 >> 0x20);
    CStack_4cc.x._4_4_ = SUB84 /* extract 2-byte value */(dVar4,0);
    CStack_4cc.y._0_4_ = (uint)((ulonglong)dVar4 >> 0x20);
    dStack_2c8 = pCVar1->x * (double)CONCAT44 /* combine 2-byte values */(uStack_5b4,uStack_5b8);
    dStack_2c0 = *pdVar16 * (double)CONCAT44 /* combine 2-byte values */(uStack_5ac,uStack_5b0);
    dStack_2b8 = *pdVar18 * (double)CONCAT44 /* combine 2-byte values */(uStack_5a4,uStack_5a8);
    dStack_2b0 = pCVar1->x * (double)CONCAT44 /* combine 2-byte values */(uStack_59c,uStack_5a0);
    dStack_2a8 = *pdVar16 * (double)CONCAT44 /* combine 2-byte values */(uStack_594,uStack_598);
    pdVar16 = &dStack_3a0;
    pdVar18 = &dStack_238;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(uint *)pdVar18 = *(uint *)pdVar16;
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
      pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
    }
    dStack_2a0 = dVar5 * (double)CONCAT44 /* combine 2-byte values */(uStack_58c,uStack_590);
    pdVar16 = &dStack_4d8;
    pdVar18 = &dStack_388;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(uint *)pdVar18 = *(uint *)pdVar16;
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
      pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
    }
    uStack_5d8 = -(dStack_238 + dStack_230 + dStack_228);
    pdVar16 = &dStack_2c8;
    pdVar18 = &dStack_268;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(uint *)pdVar18 = *(uint *)pdVar16;
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
      pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
    }
    pdVar16 = &dStack_2b0;
    pdVar18 = &dStack_460;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(uint *)pdVar18 = *(uint *)pdVar16;
      pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
      pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
    }
    dStack_3e8 = dStack_388 + dStack_380 + dStack_378 + uStack_5d8;
    dStack_3e0 = dStack_268 + dStack_260 + dStack_258 + uStack_5d8;
    dStack_3d8 = dStack_460 + (double)CONCAT44 /* combine 2-byte values */(local_458._4_4_,local_458._0_4_) +
                 (double)CONCAT44 /* combine 2-byte values */(local_458._12_4_,local_458._8_4_) + uStack_5d8;
    if ((dStack_3e8 < 1e-08) && (-1e-08 <= dStack_3e8)) {
      dStack_3e8 = 0.0;
    }
    if ((dStack_3e0 < 1e-08) && (-1e-08 < dStack_3e0)) {
      dStack_3e0 = 0.0;
    }
    if ((dStack_3d8 < 1e-08) && (-1e-08 <= dStack_3d8)) {
      dStack_3d8 = 0.0;
    }
    if ((((dStack_3e8 < 0.0) || (dStack_3e0 < 0.0)) || (dStack_3d8 < 0.0)) &&
       (((0.0 < dStack_3e8 || (0.0 < dStack_3e0)) || (0.0 < dStack_3d8)))) {
      if (((((ulonglong)dStack_3e8 & 0x7fffffff00000000) != 0) || (dStack_3e8._0_4_ != 0)) &&
         (((((ulonglong)dStack_3e0 & 0x7fffffff00000000) != 0 || (dStack_3e0._0_4_ != 0)) &&
          ((((ulonglong)dStack_3d8 & 0x7fffffff00000000) != 0 || (dStack_3d8._0_4_ != 0)))))) {
        iStack_9c = 3;
        iStack_a0 = 4;
        if (((0.0 <= dStack_3e0) && (0.0 <= dStack_3d8)) ||
           ((dStack_3e0 < 0.0 && (dStack_3d8 < 0.0)))) {
          aiStack_c4[3] = 1;
          iStack_48 = 2;
          iStack_40 = 0;
        }
        else if (((0.0 <= dStack_3e8) && (0.0 <= dStack_3d8)) ||
                ((dStack_3e8 < 0.0 && (dStack_3d8 < 0.0)))) {
          aiStack_c4[3] = 2;
          iStack_48 = 0;
          iStack_40 = 1;
        }
        else {
          aiStack_c4[3] = 0;
          iStack_48 = 1;
          iStack_40 = 2;
        }
        iVar7 = aiStack_c4[3];
        dVar3 = (&dStack_3e8)[aiStack_c4[3]] /
                ((&dStack_3e8)[aiStack_c4[3]] - (&dStack_3e8)[iStack_40]);
        iStack_94 = iStack_40 * 8;
        pdStack_88 = (double *)(&uStack_5d0 + iStack_40 * 3);
        pdVar12 = (double *)(&uStack_5d0 + aiStack_c4[3] * 3);
        dStack_298 = *pdVar12 - (double)(&uStack_5d0)[iStack_40 * 3];
        dStack_290 = (double)(&uStack_5c8)[aiStack_c4[3] * 3] - (double)(&uStack_5c8)[iStack_40 * 3]
        ;
        dStack_288 = (double)(&uStack_5c0)[aiStack_c4[3] * 3] - (double)(&uStack_5c0)[iStack_40 * 3]
        ;
        pdVar16 = &dStack_298;
        pdVar18 = &dStack_478;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(uint *)pdVar18 = *(uint *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
          pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
        }
        dStack_328 = dStack_478 * dVar3;
        dStack_320 = dStack_470 * dVar3;
        dStack_318 = dStack_468 * dVar3;
        pdVar16 = &dStack_328;
        pdVar18 = &dStack_490;
        for (iVar10 = 6; iVar6 = iStack_9c, iVar10 != 0; iVar10 = iVar10 + -1) {
          *(uint *)pdVar18 = *(uint *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
          pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
        }
        pdStack_90 = pdVar12;
        dStack_508 = *pdVar12 - dStack_490;
        dStack_500 = (double)(&uStack_5c8)[iVar7 * 3] - dStack_488;
        dStack_4f8 = (double)(&uStack_5c0)[iVar7 * 3] - dStack_480;
        iVar7 = iStack_9c * 0x18;
        pdVar16 = &dStack_508;
        puVar19 = &uStack_340;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar19 = *(uint *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
          puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
        }
        pdVar13 = (double *)(&uStack_5d0 + iVar6 * 3);
        *(uint *)pdVar13 = uStack_340;
        *(uint *)((int)&uStack_5d0 + iVar7 + 4) = uStack_33c;
        *(uint *)(&uStack_5c8 + iVar6 * 3) = uStack_338;
        *(uint *)((int)&uStack_5c8 + iVar7 + 4) = uStack_334;
        *(uint *)(&uStack_5c0 + iVar6 * 3) = uStack_330;
        *(uint *)((int)&uStack_5c0 + iVar7 + 4) = uStack_32c;
        pdStack_14 = (double *)(&uStack_558 + iStack_40 * 2);
        pdVar12 = (double *)(&uStack_558 + aiStack_c4[3] * 2);
        uStack_178 = *pdVar12 - (double)(&uStack_558)[iStack_40 * 2];
        dStack_170 = (double)(&uStack_550)[aiStack_c4[3] * 2] - (double)(&uStack_550)[iStack_40 * 2]
        ;
        uStack_1a8 = (uint)uStack_178;
        (&uStack_1a4)[(uint)bVar20 * -2] = *(uint *)((int)&uStack_178 + (uint)bVar20 * -8 + 4)
        ;
        *(uint *)(&dStack_1a0 + (-(uint)bVar20 - (uint)bVar20)) =
             *(uint *)(&dStack_170 + (-(uint)bVar20 - (uint)bVar20));
        *(uint *)
         ((int)(&dStack_1a0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_170 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
        uStack_108 = (double)CONCAT44 /* combine 2-byte values */(uStack_1a4,uStack_1a8) * dVar3;
        dStack_100 = dStack_1a0 * dVar3;
        uStack_1b8 = (uint)uStack_108;
        (&uStack_1b4)[(uint)bVar20 * -2] = *(uint *)((int)&uStack_108 + (uint)bVar20 * -8 + 4)
        ;
        *(uint *)(&dStack_1b0 + (-(uint)bVar20 - (uint)bVar20)) =
             *(uint *)(&dStack_100 + (-(uint)bVar20 - (uint)bVar20));
        *(uint *)
         ((int)(&dStack_1b0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_100 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
        uStack_138 = *pdVar12 - (double)CONCAT44 /* combine 2-byte values */(uStack_1b4,uStack_1b8);
        dStack_130 = (double)(&uStack_550)[aiStack_c4[3] * 2] - dStack_1b0;
        pdStack_a4 = (double *)(&uStack_558 + iStack_9c * 2);
        auStack_124[3] = (uint)uStack_138;
        auStack_124[(uint)bVar20 * -2 + 4] =
             *(uint *)((int)&uStack_138 + (uint)bVar20 * -8 + 4);
        pdVar16 = pdStack_a4;
        auStack_124[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 5] =
             *(uint *)(&dStack_130 + (-(uint)bVar20 - (uint)bVar20));
        (auStack_124 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 5)[(uint)bVar20 * -2 + 1] =
             *(uint *)
              ((int)(&dStack_130 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
        *(uint *)pdStack_a4 = auStack_124[3];
        *(uint *)((int)pdVar16 + 4) = uStack_114;
        *(uint *)(pdVar16 + 1) = uStack_110;
        *(uint *)((int)pdVar16 + 0xc) = uStack_10c;
        dVar3 = (&dStack_3e8)[iStack_48] /
                ((&dStack_3e8)[iStack_48] - *(double *)((int)&dStack_3e8 + iStack_94));
        pdStack_84 = (double *)(&uStack_5d0 + iStack_48 * 3);
        dStack_4f0 = (double)(&uStack_5d0)[iStack_48 * 3] - *pdStack_88;
        dStack_4e8 = (double)(&uStack_5c8)[iStack_48 * 3] - pdStack_88[1];
        dStack_4e0 = (double)(&uStack_5c0)[iStack_48 * 3] - pdStack_88[2];
        pdVar16 = &dStack_4f0;
        pdVar18 = &dStack_358;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(uint *)pdVar18 = *(uint *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
          pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
        }
        dStack_2f8 = dStack_358 * dVar3;
        uStack_2f0 = SUB84 /* extract 2-byte value */(dStack_350 * dVar3,0);
        CStack_2ec.x._0_4_ = (uint)((ulonglong)(dStack_350 * dVar3) >> 0x20);
        CStack_2ec.x._4_4_ = SUB84 /* extract 2-byte value */(dStack_348 * dVar3,0);
        CStack_2ec.y._0_4_ = (uint)((ulonglong)(dStack_348 * dVar3) >> 0x20);
        pdVar16 = &dStack_2f8;
        pdVar18 = &dStack_1f0;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(uint *)pdVar18 = *(uint *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
          pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
        }
        dStack_370 = *pdStack_84 - dStack_1f0;
        dStack_368 = pdStack_84[1] - dStack_1e8;
        dStack_360 = pdStack_84[2] - dStack_1e0;
        pdVar16 = &dStack_370;
        puVar19 = &uStack_430;
        for (iVar10 = 6; iVar11 = iStack_a0, iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar19 = *(uint *)pdVar16;
          pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
          puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
        }
        iVar10 = iStack_a0 * 0x18;
        pdVar18 = (double *)(&uStack_5d0 + iStack_a0 * 3);
        *(uint *)pdVar18 = uStack_430;
        *(uint *)((int)&uStack_5d0 + iVar10 + 4) = uStack_42c;
        *(uint *)(&uStack_5c8 + iVar11 * 3) = uStack_428;
        *(uint *)((int)&uStack_5c8 + iVar10 + 4) = uStack_424;
        *(uint *)(&uStack_5c0 + iVar11 * 3) = uStack_420;
        *(uint *)((int)&uStack_5c0 + iVar10 + 4) = uStack_41c;
        pdStack_a8 = (double *)(&uStack_558 + iStack_48 * 2);
        uStack_158 = (double)(&uStack_558)[iStack_48 * 2] - *pdStack_14;
        dStack_150 = (double)(&uStack_550)[iStack_48 * 2] - pdStack_14[1];
        uStack_168 = (uint)uStack_158;
        (&uStack_164)[(uint)bVar20 * -2] = *(uint *)((int)&uStack_158 + (uint)bVar20 * -8 + 4)
        ;
        pdVar16 = pdStack_a8;
        *(uint *)(&dStack_160 + (-(uint)bVar20 - (uint)bVar20)) =
             *(uint *)(&dStack_150 + (-(uint)bVar20 - (uint)bVar20));
        *(uint *)
         ((int)(&dStack_160 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_150 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
        uStack_148 = (double)CONCAT44 /* combine 2-byte values */(uStack_164,uStack_168) * dVar3;
        dStack_140 = dStack_160 * dVar3;
        uStack_198 = (uint)uStack_148;
        (&uStack_194)[(uint)bVar20 * -2] = *(uint *)((int)&uStack_148 + (uint)bVar20 * -8 + 4)
        ;
        *(uint *)(&dStack_190 + (-(uint)bVar20 - (uint)bVar20)) =
             *(uint *)(&dStack_140 + (-(uint)bVar20 - (uint)bVar20));
        *(uint *)
         ((int)(&dStack_190 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_140 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
        uStack_1d8 = *pdVar16 - (double)CONCAT44 /* combine 2-byte values */(uStack_194,uStack_198);
        dStack_1d0 = pdVar16[1] - dStack_190;
        uStack_c8 = (uint)uStack_1d8;
        aiStack_c4[(uint)bVar20 * -2] = *(int *)((int)&uStack_1d8 + (uint)bVar20 * -8 + 4);
        aiStack_c4[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
             *(int *)(&dStack_1d0 + (-(uint)bVar20 - (uint)bVar20));
        (aiStack_c4 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
             *(int *)((int)(&dStack_1d0 + (-(uint)bVar20 - (uint)bVar20)) +
                     ((uint)bVar20 * -2 + 1) * 4);
        iVar8 = iStack_a0 * 0x10;
        pdVar16 = (double *)(&uStack_558 + iStack_a0 * 2);
        *(uint *)pdVar16 = uStack_c8;
        *(int *)((int)&uStack_558 + iVar8 + 4) = aiStack_c4[0];
        *(int *)(&uStack_550 + iStack_a0 * 2) = aiStack_c4[1];
        *(int *)((int)&uStack_550 + iVar8 + 4) = aiStack_c4[2];
        pCStack_68 = (out_result->poly2).uvs + 2;
        pCStack_34 = (out_result->poly2).vertices + 2;
        pCStack_70 = (out_result->poly2).uvs + 1;
        pCStack_30 = (out_result->poly2).vertices + 1;
        pCStack_7c = (out_result->poly2).uvs;
        pCVar1 = (out_result->poly2).vertices;
        pCStack_50 = (out_result->poly1).uvs + 2;
        pCStack_38 = (out_result->poly1).vertices + 2;
        pCStack_4c = (out_result->poly1).uvs + 1;
        pCStack_20 = (out_result->poly1).vertices + 1;
        pCStack_54 = (out_result->poly1).uvs;
        pCStack_b0 = (out_result->poly1).vertices;
        if (0.0 < *(double *)((int)&dStack_3e8 + iStack_94)) {
          (out_result->poly1).vertex_count = 3;
          pCStack_b0->x = *pdStack_88;
          (out_result->poly1).vertices[0].y = pdStack_88[1];
          (out_result->poly1).vertices[0].z = pdStack_88[2];
          pCStack_54->x = *pdStack_14;
          (out_result->poly1).uvs[0].y = pdStack_14[1];
          pCStack_20->x = *pdVar13;
          (out_result->poly1).vertices[1].y = (double)(&uStack_5c8)[iVar6 * 3];
          (out_result->poly1).vertices[1].z = (double)(&uStack_5c0)[iVar6 * 3];
          pCStack_4c->x = *pdStack_a4;
          (out_result->poly1).uvs[1].y = pdStack_a4[1];
          pCStack_38->x = *pdVar18;
          (out_result->poly1).vertices[2].y = (double)(&uStack_5c8)[iVar11 * 3];
          (out_result->poly1).vertices[2].z = (double)(&uStack_5c0)[iVar11 * 3];
          pCStack_50->x = *pdVar16;
          (out_result->poly1).uvs[2].y = (double)(&uStack_550)[iStack_a0 * 2];
          (out_result->poly2).vertex_count = 4;
          pCVar1->x = *pdVar13;
          (out_result->poly2).vertices[0].y = (double)(&uStack_5c8)[iVar6 * 3];
          (out_result->poly2).vertices[0].z = (double)(&uStack_5c0)[iVar6 * 3];
          pCStack_7c->x = *pdStack_a4;
          (out_result->poly2).uvs[0].y = pdStack_a4[1];
          pCStack_30->x = *pdStack_90;
          (out_result->poly2).vertices[1].y = pdStack_90[1];
          (out_result->poly2).vertices[1].z = pdStack_90[2];
          pCStack_70->x = *pdVar12;
          (out_result->poly2).uvs[1].y = (double)(&uStack_550)[aiStack_c4[3] * 2];
          pCStack_34->x = *pdStack_84;
          (out_result->poly2).vertices[2].y = pdStack_84[1];
          (out_result->poly2).vertices[2].z = pdStack_84[2];
          pCStack_68->x = *pdStack_a8;
          (out_result->poly2).uvs[2].y = pdStack_a8[1];
          *(uint *)&(out_result->poly2).vertices[3].x = *(uint *)pdVar18;
          *(uint *)((int)&(out_result->poly2).vertices[3].x + 4) =
               *(uint *)((int)&uStack_5d0 + iVar10 + 4);
          *(uint *)&(out_result->poly2).vertices[3].y =
               *(uint *)(&uStack_5c8 + iVar11 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].y + 4) =
               *(uint *)((int)&uStack_5c8 + iVar10 + 4);
          *(uint *)&(out_result->poly2).vertices[3].z =
               *(uint *)(&uStack_5c0 + iVar11 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].z + 4) =
               *(uint *)((int)&uStack_5c0 + iVar10 + 4);
          *(uint *)&(out_result->poly2).uvs[3].x = *(uint *)pdVar16;
          *(uint *)((int)&(out_result->poly2).uvs[3].x + 4) =
               *(uint *)((int)&uStack_558 + iVar8 + 4);
          *(uint *)&(out_result->poly2).uvs[3].y =
               *(uint *)(&uStack_550 + iStack_a0 * 2);
          *(uint *)((int)&(out_result->poly2).uvs[3].y + 4) =
               *(uint *)((int)&uStack_550 + iVar8 + 4);
          return 1;
        }
        (out_result->poly1).vertex_count = 4;
        pCStack_b0->x = *pdVar13;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5c8)[iVar6 * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5c0)[iVar6 * 3];
        pCStack_54->x = *pdStack_a4;
        (out_result->poly1).uvs[0].y = pdStack_a4[1];
        pCStack_20->x = *pdStack_90;
        (out_result->poly1).vertices[1].y = pdStack_90[1];
        (out_result->poly1).vertices[1].z = pdStack_90[2];
        pCStack_4c->x = *pdVar12;
        (out_result->poly1).uvs[1].y = (double)(&uStack_550)[aiStack_c4[3] * 2];
        pCStack_38->x = *pdStack_84;
        (out_result->poly1).vertices[2].y = pdStack_84[1];
        (out_result->poly1).vertices[2].z = pdStack_84[2];
        pCStack_50->x = *pdStack_a8;
        (out_result->poly1).uvs[2].y = pdStack_a8[1];
        (out_result->poly1).vertices[3].x = *pdVar18;
        (out_result->poly1).vertices[3].y = (double)(&uStack_5c8)[iVar11 * 3];
        (out_result->poly1).vertices[3].z = (double)(&uStack_5c0)[iVar11 * 3];
        (out_result->poly1).uvs[3].x = *pdVar16;
        (out_result->poly1).uvs[3].y = (double)(&uStack_550)[iStack_a0 * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCVar1->x = *(uint *)pdStack_88;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)pdStack_88 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y = *(uint *)(pdStack_88 + 1);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)pdStack_88 + 0xc);
        (out_result->poly2).vertices[0].z = pdStack_88[2];
        pCStack_7c->x = *pdStack_14;
        (out_result->poly2).uvs[0].y = pdStack_14[1];
        *(uint *)&pCStack_30->x = *(uint *)pdVar13;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_5d0 + iVar7 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y = *(uint *)(&uStack_5c8 + iVar6 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_5c8 + iVar7 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z = *(uint *)(&uStack_5c0 + iVar6 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_5c0 + iVar7 + 4);
        pCStack_70->x = *pdStack_a4;
        (out_result->poly2).uvs[1].y = pdStack_a4[1];
        *(uint *)&pCStack_34->x = *(uint *)pdVar18;
        *(uint *)((int)&(out_result->poly2).vertices[2].x + 4) =
             *(uint *)((int)&uStack_5d0 + iVar10 + 4);
        *(uint *)&(out_result->poly2).vertices[2].y =
             *(uint *)(&uStack_5c8 + iVar11 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[2].y + 4) =
             *(uint *)((int)&uStack_5c8 + iVar10 + 4);
        *(uint *)&(out_result->poly2).vertices[2].z =
             *(uint *)(&uStack_5c0 + iVar11 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[2].z + 4) =
             *(uint *)((int)&uStack_5c0 + iVar10 + 4);
        *(uint *)&pCStack_68->x = *(uint *)pdVar16;
        *(uint *)((int)&(out_result->poly2).uvs[2].x + 4) =
             *(uint *)((int)&uStack_558 + iVar8 + 4);
        *(uint *)&(out_result->poly2).uvs[2].y = *(uint *)(&uStack_550 + iStack_a0 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[2].y + 4) =
             *(uint *)((int)&uStack_550 + iVar8 + 4);
        return 1;
      }
      iStack_98 = 3;
      if ((((ulonglong)dStack_3e8 & 0x7fffffff00000000) == 0) && (dStack_3e8._0_4_ == 0)) {
        iStack_3c = 1;
        iStack_44 = 2;
        iStack_5c = 0;
      }
      else if ((((ulonglong)dStack_3e0 & 0x7fffffff00000000) == 0) && (dStack_3e0._0_4_ == 0)) {
        iStack_3c = 2;
        iStack_44 = 0;
        iStack_5c = 1;
      }
      else {
        iStack_3c = 0;
        iStack_44 = 1;
        iStack_5c = 2;
      }
      iVar7 = iStack_44;
      iStack_80 = iStack_3c * 8;
      dVar3 = (&dStack_3e8)[iStack_3c] / ((&dStack_3e8)[iStack_3c] - (&dStack_3e8)[iStack_44]);
      pdVar12 = (double *)(&uStack_5d0 + iStack_44 * 3);
      pdStack_8c = (double *)(&uStack_5d0 + iStack_3c * 3);
      dStack_220 = (double)(&uStack_5d0)[iStack_3c * 3] - *pdVar12;
      dStack_218 = (double)(&uStack_5c8)[iStack_3c * 3] - (double)(&uStack_5c8)[iStack_44 * 3];
      dStack_210 = (double)(&uStack_5c0)[iStack_3c * 3] - (double)(&uStack_5c0)[iStack_44 * 3];
      pdVar16 = &dStack_220;
      pdVar18 = &dStack_4a8;
      for (iVar10 = 6; pdVar13 = pdStack_8c, iVar10 != 0; iVar10 = iVar10 + -1) {
        *(uint *)pdVar18 = *(uint *)pdVar16;
        pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
        pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
      }
      dStack_280 = dStack_4a8 * dVar3;
      dStack_278 = dStack_4a0 * dVar3;
      dStack_270 = dStack_498 * dVar3;
      pdVar16 = &dStack_280;
      pdVar18 = &dStack_250;
      for (iVar10 = 6; iVar6 = iStack_98, iVar10 != 0; iVar10 = iVar10 + -1) {
        *(uint *)pdVar18 = *(uint *)pdVar16;
        pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
        pdVar18 = (double *)((int)pdVar18 + (uint)bVar20 * -8 + 4);
      }
      dStack_418 = *pdVar13 - dStack_250;
      auStack_410 = (byte  [8])(pdVar13[1] - dStack_248);
      dStack_408 = pdVar13[2] - dStack_240;
      iVar10 = iStack_98 * 0x18;
      pdVar16 = &dStack_418;
      puVar19 = &uStack_3d0;
      for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
        *puVar19 = *(uint *)pdVar16;
        pdVar16 = (double *)((int)pdVar16 + (uint)bVar20 * -8 + 4);
        puVar19 = puVar19 + (uint)bVar20 * -2 + 1;
      }
      pdVar13 = (double *)(&uStack_5d0 + iVar6 * 3);
      *(uint *)pdVar13 = uStack_3d0;
      *(uint *)((int)&uStack_5d0 + iVar10 + 4) = uStack_3cc;
      *(uint *)(&uStack_5c8 + iVar6 * 3) = local_3c8._0_4_;
      *(uint *)((int)&uStack_5c8 + iVar10 + 4) = local_3c8._4_4_;
      *(uint *)(&uStack_5c0 + iVar6 * 3) = local_3c8._8_4_;
      *(uint *)((int)&uStack_5c0 + iVar10 + 4) = local_3c8._12_4_;
      pdStack_24 = (double *)(&uStack_558 + iStack_44 * 2);
      pdVar16 = (double *)(&uStack_558 + iStack_3c * 2);
      uStack_1c8 = *pdVar16 - (double)(&uStack_558)[iStack_44 * 2];
      dStack_1c0 = (double)(&uStack_550)[iStack_3c * 2] - (double)(&uStack_550)[iStack_44 * 2];
      uStack_f8 = (uint)uStack_1c8;
      (&uStack_f4)[(uint)bVar20 * -2] = *(uint *)((int)&uStack_1c8 + (uint)bVar20 * -8 + 4);
      *(uint *)(&dStack_f0 + (-(uint)bVar20 - (uint)bVar20)) =
           *(uint *)(&dStack_1c0 + (-(uint)bVar20 - (uint)bVar20));
      *(uint *)
       ((int)(&dStack_f0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_1c0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
      uStack_d8 = (double)CONCAT44 /* combine 2-byte values */(uStack_f4,uStack_f8) * dVar3;
      dStack_d0 = dStack_f0 * dVar3;
      uStack_188 = (uint)uStack_d8;
      (&uStack_184)[(uint)bVar20 * -2] = *(uint *)((int)&uStack_d8 + (uint)bVar20 * -8 + 4);
      *(uint *)(&dStack_180 + (-(uint)bVar20 - (uint)bVar20)) =
           *(uint *)(&dStack_d0 + (-(uint)bVar20 - (uint)bVar20));
      *(uint *)
       ((int)(&dStack_180 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_d0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
      uStack_e8 = *pdVar16 - (double)CONCAT44 /* combine 2-byte values */(uStack_184,uStack_188);
      dStack_e0 = (double)(&uStack_550)[iStack_3c * 2] - dStack_180;
      uStack_128 = (uint)uStack_e8;
      auStack_124[(uint)bVar20 * -2] = *(uint *)((int)&uStack_e8 + (uint)bVar20 * -8 + 4);
      auStack_124[(uint)bVar20 * -2 + (uint)bVar20 * -2 + 1] =
           *(uint *)(&dStack_e0 + (-(uint)bVar20 - (uint)bVar20));
      (auStack_124 + (uint)bVar20 * -2 + (uint)bVar20 * -2 + 1)[(uint)bVar20 * -2 + 1] =
           *(uint *)
            ((int)(&dStack_e0 + (-(uint)bVar20 - (uint)bVar20)) + ((uint)bVar20 * -2 + 1) * 4);
      iVar8 = iStack_98 * 0x10;
      pdVar15 = (double *)(&uStack_558 + iStack_98 * 2);
      *(uint *)pdVar15 = uStack_128;
      *(uint *)((int)&uStack_558 + iVar8 + 4) = auStack_124[0];
      *(uint *)(&uStack_550 + iStack_98 * 2) = auStack_124[1];
      *(uint *)((int)&uStack_550 + iVar8 + 4) = auStack_124[2];
      pCStack_6c = (out_result->poly2).uvs + 2;
      pCStack_1c = (out_result->poly2).vertices + 2;
      pCStack_58 = (out_result->poly2).uvs + 1;
      pCStack_ac = (out_result->poly2).vertices + 1;
      pCStack_78 = (out_result->poly2).uvs;
      pCStack_18 = (out_result->poly2).vertices;
      pCStack_74 = (out_result->poly1).uvs + 2;
      pCStack_28 = (out_result->poly1).vertices + 2;
      pCStack_64 = (out_result->poly1).uvs + 1;
      pCStack_2c = (out_result->poly1).vertices + 1;
      pCStack_60 = (out_result->poly1).uvs;
      pCStack_b4 = (out_result->poly1).vertices;
      iVar11 = iStack_5c * 0x18;
      iVar9 = iStack_5c * 0x10;
      pdVar17 = (double *)(&uStack_558 + iStack_5c * 2);
      pdVar18 = (double *)(&uStack_5d0 + iStack_5c * 3);
      if (0.0 < *(double *)((int)&dStack_3e8 + iStack_80)) {
        (out_result->poly1).vertex_count = 3;
        pCStack_b4->x = *pdVar18;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5c8)[iStack_5c * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5c0)[iStack_5c * 3];
        pCStack_60->x = *pdVar17;
        (out_result->poly1).uvs[0].y = (double)(&uStack_550)[iStack_5c * 2];
        pCStack_2c->x = *pdStack_8c;
        (out_result->poly1).vertices[1].y = pdStack_8c[1];
        (out_result->poly1).vertices[1].z = pdStack_8c[2];
        pCStack_64->x = *pdVar16;
        (out_result->poly1).uvs[1].y = (double)(&uStack_550)[iStack_3c * 2];
        pCStack_28->x = *pdVar13;
        (out_result->poly1).vertices[2].y = (double)(&uStack_5c8)[iVar6 * 3];
        (out_result->poly1).vertices[2].z = (double)(&uStack_5c0)[iVar6 * 3];
        pCStack_74->x = *pdVar15;
        (out_result->poly1).uvs[2].y = (double)(&uStack_550)[iStack_98 * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCStack_18->x = *(uint *)pdVar18;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_5d0 + iVar11 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y =
             *(uint *)(&uStack_5c8 + iStack_5c * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_5c8 + iVar11 + 4);
        *(uint *)&(out_result->poly2).vertices[0].z =
             *(uint *)(&uStack_5c0 + iStack_5c * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].z + 4) =
             *(uint *)((int)&uStack_5c0 + iVar11 + 4);
        *(uint *)&pCStack_78->x = *(uint *)pdVar17;
        *(uint *)((int)&(out_result->poly2).uvs[0].x + 4) =
             *(uint *)((int)&uStack_558 + iVar9 + 4);
        *(uint *)&(out_result->poly2).uvs[0].y = *(uint *)(&uStack_550 + iStack_5c * 2);
        *(uint *)((int)&(out_result->poly2).uvs[0].y + 4) =
             *(uint *)((int)&uStack_550 + iVar9 + 4);
        *(uint *)&pCStack_ac->x = *(uint *)pdVar13;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_5d0 + iVar10 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y = *(uint *)(&uStack_5c8 + iVar6 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_5c8 + iVar10 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z = *(uint *)(&uStack_5c0 + iVar6 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_5c0 + iVar10 + 4);
        *(uint *)&pCStack_58->x = *(uint *)pdVar15;
        *(uint *)((int)&(out_result->poly2).uvs[1].x + 4) =
             *(uint *)((int)&uStack_558 + iVar8 + 4);
        *(uint *)&(out_result->poly2).uvs[1].y = *(uint *)(&uStack_550 + iStack_98 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[1].y + 4) =
             *(uint *)((int)&uStack_550 + iVar8 + 4);
        pCStack_1c->x = *pdVar12;
        (out_result->poly2).vertices[2].y = (double)(&uStack_5c8)[iVar7 * 3];
        (out_result->poly2).vertices[2].z = (double)(&uStack_5c0)[iVar7 * 3];
        pCStack_6c->x = *pdStack_24;
        (out_result->poly2).uvs[2].y = pdStack_24[1];
        return 1;
      }
      (out_result->poly2).vertex_count = 3;
      pCStack_18->x = *pdVar18;
      (out_result->poly2).vertices[0].y = (double)(&uStack_5c8)[iStack_5c * 3];
      (out_result->poly2).vertices[0].z = (double)(&uStack_5c0)[iStack_5c * 3];
      pCStack_78->x = *pdVar17;
      (out_result->poly2).uvs[0].y = (double)(&uStack_550)[iStack_5c * 2];
      pCStack_ac->x = *pdStack_8c;
      (out_result->poly2).vertices[1].y = pdStack_8c[1];
      (out_result->poly2).vertices[1].z = pdStack_8c[2];
      pCStack_58->x = *pdVar16;
      (out_result->poly2).uvs[1].y = (double)(&uStack_550)[iStack_3c * 2];
      pCStack_1c->x = *pdVar13;
      (out_result->poly2).vertices[2].y = (double)(&uStack_5c8)[iVar6 * 3];
      (out_result->poly2).vertices[2].z = (double)(&uStack_5c0)[iVar6 * 3];
      pCStack_6c->x = *pdVar15;
      (out_result->poly2).uvs[2].y = (double)(&uStack_550)[iStack_98 * 2];
      (out_result->poly1).vertex_count = 3;
      *(uint *)&pCStack_b4->x = *(uint *)pdVar18;
      *(uint *)((int)&(out_result->poly1).vertices[0].x + 4) =
           *(uint *)((int)&uStack_5d0 + iVar11 + 4);
      *(uint *)&(out_result->poly1).vertices[0].y =
           *(uint *)(&uStack_5c8 + iStack_5c * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].y + 4) =
           *(uint *)((int)&uStack_5c8 + iVar11 + 4);
      *(uint *)&(out_result->poly1).vertices[0].z =
           *(uint *)(&uStack_5c0 + iStack_5c * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].z + 4) =
           *(uint *)((int)&uStack_5c0 + iVar11 + 4);
      *(uint *)&pCStack_60->x = *(uint *)pdVar17;
      *(uint *)((int)&(out_result->poly1).uvs[0].x + 4) =
           *(uint *)((int)&uStack_558 + iVar9 + 4);
      *(uint *)&(out_result->poly1).uvs[0].y = *(uint *)(&uStack_550 + iStack_5c * 2);
      *(uint *)((int)&(out_result->poly1).uvs[0].y + 4) =
           *(uint *)((int)&uStack_550 + iVar9 + 4);
      *(uint *)&pCStack_2c->x = *(uint *)pdVar13;
      *(uint *)((int)&(out_result->poly1).vertices[1].x + 4) =
           *(uint *)((int)&uStack_5d0 + iVar10 + 4);
      *(uint *)&(out_result->poly1).vertices[1].y = *(uint *)(&uStack_5c8 + iVar6 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[1].y + 4) =
           *(uint *)((int)&uStack_5c8 + iVar10 + 4);
      *(uint *)&(out_result->poly1).vertices[1].z = *(uint *)(&uStack_5c0 + iVar6 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[1].z + 4) =
           *(uint *)((int)&uStack_5c0 + iVar10 + 4);
      *(uint *)&pCStack_64->x = *(uint *)pdVar15;
      *(uint *)((int)&(out_result->poly1).uvs[1].x + 4) =
           *(uint *)((int)&uStack_558 + iVar8 + 4);
      *(uint *)&(out_result->poly1).uvs[1].y = *(uint *)(&uStack_550 + iStack_98 * 2);
      *(uint *)((int)&(out_result->poly1).uvs[1].y + 4) =
           *(uint *)((int)&uStack_550 + iVar8 + 4);
      pCStack_28->x = *pdVar12;
      (out_result->poly1).vertices[2].y = (double)(&uStack_5c8)[iVar7 * 3];
      (out_result->poly1).vertices[2].z = (double)(&uStack_5c0)[iVar7 * 3];
      pCStack_74->x = *pdStack_24;
      (out_result->poly1).uvs[2].y = pdStack_24[1];
      return 1;
    }
  }
  return 0;
}
