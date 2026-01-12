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
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  CVert *pCVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  uint *puVar13;
  byte bVar14;
  int aiStackY_19c0 [1261];
  double dVar15;
  ulonglong uStack_5dc;
  ulonglong uStack_5d4;
  ulonglong uStack_5cc;
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
  ulonglong uStack_564;
  ulonglong uStack_55c;
  uint uStack_554;
  uint uStack_550;
  uint uStack_54c;
  uint uStack_548;
  uint uStack_544;
  uint uStack_540;
  uint uStack_53c;
  uint uStack_538;
  double dStack_514;
  double dStack_50c;
  double dStack_504;
  double dStack_4fc;
  double dStack_4f4;
  double dStack_4ec;
  double dStack_4e4;
  double dStack_4dc;
  double dStack_4d4;
  CVector3d CStack_4cc;
  double dStack_4b4;
  double dStack_4ac;
  double dStack_4a4;
  double dStack_49c;
  double dStack_494;
  double dStack_48c;
  double dStack_484;
  double dStack_47c;
  double dStack_474;
  double dStack_46c;
  double dStack_464;
  double dStack_45c;
  CVector3d CStack_454;
  uint uStack_43c;
  uint uStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  uint uStack_428;
  double dStack_424;
  double dStack_41c;
  double dStack_414;
  CVector3d CStack_40c;
  double dStack_3f4;
  double dStack_3ec;
  double dStack_3e4;
  uint uStack_3dc;
  uint uStack_3d8;
  uint uStack_3d4;
  uint uStack_3d0;
  uint uStack_3cc;
  uint local_3c8;
  CVector3d CStack_3c4;
  double dStack_3ac;
  double dStack_3a4;
  double dStack_39c;
  double dStack_394;
  double dStack_38c;
  double dStack_384;
  double dStack_37c;
  double dStack_374;
  double dStack_36c;
  double dStack_364;
  double dStack_35c;
  double dStack_354;
  uint uStack_34c;
  uint uStack_348;
  uint uStack_344;
  uint uStack_340;
  uint uStack_33c;
  uint uStack_338;
  double dStack_334;
  double dStack_32c;
  double dStack_324;
  double dStack_31c;
  double dStack_314;
  double dStack_30c;
  double dStack_304;
  double dStack_2fc;
  double dStack_2f4;
  CVector3d CStack_2ec;
  double dStack_2d4;
  double dStack_2cc;
  double dStack_2c4;
  double dStack_2bc;
  double dStack_2b4;
  double dStack_2ac;
  double dStack_2a4;
  double dStack_29c;
  double dStack_294;
  double dStack_28c;
  double dStack_284;
  double dStack_27c;
  double dStack_274;
  double dStack_26c;
  double dStack_264;
  double dStack_25c;
  double dStack_254;
  double dStack_24c;
  double dStack_244;
  double dStack_23c;
  double dStack_234;
  double dStack_22c;
  double dStack_224;
  double dStack_21c;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  uint uStack_200;
  double dStack_1fc;
  double dStack_1f4;
  double dStack_1ec;
  ulonglong uStack_1e4;
  double dStack_1dc;
  ulonglong uStack_1d4;
  double dStack_1cc;
  uint uStack_1c4;
  uint uStack_1c0;
  double dStack_1bc;
  uint uStack_1b4;
  uint uStack_1b0;
  double dStack_1ac;
  uint uStack_1a4;
  uint uStack_1a0;
  double dStack_19c;
  uint uStack_194;
  uint uStack_190;
  double dStack_18c;
  ulonglong uStack_184;
  double dStack_17c;
  uint uStack_174;
  uint uStack_170;
  double dStack_16c;
  ulonglong uStack_164;
  double dStack_15c;
  ulonglong uStack_154;
  double dStack_14c;
  ulonglong uStack_144;
  double dStack_13c;
  uint uStack_134;
  uint auStack_130 [4];
  uint uStack_120;
  uint uStack_11c;
  uint uStack_118;
  ulonglong uStack_114;
  double dStack_10c;
  uint uStack_104;
  uint uStack_100;
  double dStack_fc;
  ulonglong uStack_f4;
  double dStack_ec;
  ulonglong uStack_e4;
  double dStack_dc;
  uint uStack_d4;
  int aiStack_d0 [4];
  CVector3d *pCStack_c0;
  CVector3d *pCStack_bc;
  CVector3d *pCStack_b8;
  double *pdStack_b4;
  double *pdStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  double *pdStack_9c;
  double *pdStack_98;
  double *pdStack_94;
  double *pdStack_90;
  int iStack_8c;
  CVector2d *pCStack_88;
  CVector2d *pCStack_84;
  CVector2d *pCStack_80;
  CVector2d *pCStack_7c;
  CVector2d *pCStack_78;
  CVector2d *pCStack_74;
  CVector2d *pCStack_70;
  CVector2d *pCStack_6c;
  int iStack_68;
  CVector2d *pCStack_64;
  CVector2d *pCStack_60;
  CVector2d *pCStack_5c;
  CVector2d *pCStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  CVector3d *pCStack_44;
  CVector3d *pCStack_40;
  CVector3d *pCStack_3c;
  CVector3d *pCStack_38;
  CVector3d *pCStack_34;
  double *pdStack_30;
  CVector3d *pCStack_2c;
  CVector3d *pCStack_28;
  CVector3d *pCStack_24;
  double *pdStack_20;
  double *pdStack_1c;
  double *pdStack_18;
  double *pdStack_14;
  
  bVar14 = 0;
  (*other_poly->vtable->getBounds)(other_poly,&CStack_3c4,&CStack_454);
  (*this_ptr->vtable->getBounds)(this_ptr,&CStack_4cc,&CStack_2ec);
  if (((((CStack_3c4.x <= CStack_2ec.x) && (CStack_4cc.x <= CStack_454.x)) &&
       (CStack_3c4.y <= CStack_2ec.y)) &&
      ((CStack_4cc.y <= CStack_454.y && (CStack_3c4.z <= CStack_2ec.z)))) &&
     (CStack_4cc.z <= CStack_454.z)) {
    pCVar8 = other_poly->parent_obj->vertex_data;
    iVar3 = (*this_ptr->vtable->rayIntersect)
                      (this_ptr,&pCVar8[other_poly->vertex_idx_0].position,
                       &pCVar8[other_poly->vertex_idx_1].position,&CStack_40c);
    if (iVar3 == 0) {
      pCVar8 = other_poly->parent_obj->vertex_data;
      iVar3 = (*this_ptr->vtable->rayIntersect)
                        (this_ptr,&pCVar8[other_poly->vertex_idx_1].position,
                         &pCVar8[other_poly->vertex_idx_2].position,&CStack_40c);
      if (iVar3 == 0) {
        pCVar8 = other_poly->parent_obj->vertex_data;
        iVar3 = (*this_ptr->vtable->rayIntersect)
                          (this_ptr,&pCVar8[other_poly->vertex_idx_2].position,
                           &pCVar8[other_poly->vertex_idx_0].position,&CStack_40c);
        if (iVar3 == 0) {
          pCVar8 = this_ptr->parent_obj->vertex_data;
          iVar3 = (*other_poly->vtable->rayIntersect)
                            (other_poly,&pCVar8[this_ptr->vertex_idx_0].position,
                             &pCVar8[this_ptr->vertex_idx_1].position,&CStack_40c);
          if (iVar3 == 0) {
            pCVar8 = this_ptr->parent_obj->vertex_data;
            iVar3 = (*other_poly->vtable->rayIntersect)
                              (other_poly,&pCVar8[this_ptr->vertex_idx_1].position,
                               &pCVar8[this_ptr->vertex_idx_2].position,&CStack_40c);
            if (iVar3 == 0) {
              pCVar8 = this_ptr->parent_obj->vertex_data;
              iVar3 = (*other_poly->vtable->rayIntersect)
                                (other_poly,&pCVar8[this_ptr->vertex_idx_2].position,
                                 &pCVar8[this_ptr->vertex_idx_0].position,&CStack_40c);
              if (iVar3 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    crt_memory_c_memset_FUN_005fde40(out_result,0,0x148);
    pCVar2 = this_ptr->parent_obj->vertex_data;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_5dc,5,&g_CP3DTypeInfo);
    pCVar8 = pCVar2 + this_ptr->vertex_idx_0;
    uStack_5dc._4_4_ = *(uint *)&(pCVar8->position).x;
    uStack_5d4._0_4_ = *(uint *)((int)&(pCVar8->position).x + 4);
    uStack_5d4._4_4_ = *(uint *)&(pCVar8->position).y;
    uStack_5cc._0_4_ = *(uint *)((int)&(pCVar8->position).y + 4);
    uStack_5cc._4_4_ = *(uint *)&(pCVar8->position).z;
    uStack_5c4 = *(uint *)((int)&(pCVar8->position).z + 4);
    pCVar8 = pCVar2 + this_ptr->vertex_idx_1;
    uStack_5c0 = *(uint *)&(pCVar8->position).x;
    uStack_5bc = *(uint *)((int)&(pCVar8->position).x + 4);
    uStack_5b8 = *(uint *)&(pCVar8->position).y;
    uStack_5b4 = *(uint *)((int)&(pCVar8->position).y + 4);
    uStack_5b0 = *(uint *)&(pCVar8->position).z;
    uStack_5ac = *(uint *)((int)&(pCVar8->position).z + 4);
    pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
    uStack_5a8 = *(uint *)&(pCVar2->position).x;
    uStack_5a4 = *(uint *)((int)&(pCVar2->position).x + 4);
    uStack_5a0 = *(uint *)&(pCVar2->position).y;
    uStack_59c = *(uint *)((int)&(pCVar2->position).y + 4);
    uStack_598 = *(uint *)&(pCVar2->position).z;
    uStack_594 = *(uint *)((int)&(pCVar2->position).z + 4);
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
              ((void *)((int)&uStack_564 + 4),5,&g_CP2DTypeInfo);
    uStack_564._0_4_ = *(uint *)&this_ptr->uv_coords[0].x;
    uStack_564._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].x + 4);
    uStack_55c._0_4_ = *(uint *)&this_ptr->uv_coords[0].y;
    uStack_55c._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].y + 4);
    uStack_554 = *(uint *)&this_ptr->uv_coords[1].x;
    uStack_550 = *(uint *)((int)&this_ptr->uv_coords[1].x + 4);
    uStack_54c = *(uint *)&this_ptr->uv_coords[1].y;
    uStack_548 = *(uint *)((int)&this_ptr->uv_coords[1].y + 4);
    uStack_544 = *(uint *)&this_ptr->uv_coords[2].x;
    uStack_540 = *(uint *)((int)&this_ptr->uv_coords[2].x + 4);
    uStack_53c = *(uint *)&this_ptr->uv_coords[2].y;
    uStack_538 = *(uint *)((int)&this_ptr->uv_coords[2].y + 4);
    pCVar8 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    pdVar10 = &dStack_31c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar10 = *(uint *)&(pCVar8->position).x;
      pCVar8 = (CVert *)((int)pCVar8 + ((uint)bVar14 * -2 + 1) * 4);
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
    }
    pCVar1 = &other_poly->normal;
    uStack_214 = *(uint *)&pCVar1->x;
    uStack_210 = *(uint *)((int)&(other_poly->normal).x + 4);
    pdVar10 = &(other_poly->normal).y;
    uStack_20c = *(uint *)pdVar10;
    uStack_208 = *(uint *)((int)&(other_poly->normal).y + 4);
    pdVar12 = &(other_poly->normal).z;
    dVar15 = *pdVar12;
    uStack_204 = *(uint *)pdVar12;
    uStack_200 = *(uint *)((int)&(other_poly->normal).z + 4);
    dStack_3ac = dStack_31c * pCVar1->x;
    dStack_3a4 = dStack_314 * *pdVar10;
    dStack_39c = dStack_30c * *pdVar12;
    dStack_4e4 = pCVar1->x * (double)CONCAT44 /* combine 2-byte values */(uStack_5dc._4_4_,(uint)uStack_5dc);
    dStack_4dc = *pdVar10 * (double)CONCAT44 /* combine 2-byte values */(uStack_5d4._4_4_,(uint)uStack_5d4);
    dStack_4d4 = *pdVar12 * (double)CONCAT44 /* combine 2-byte values */(uStack_5cc._4_4_,(uint)uStack_5cc);
    dStack_2d4 = pCVar1->x * (double)CONCAT44 /* combine 2-byte values */(uStack_5c0,uStack_5c4);
    dStack_2cc = *pdVar10 * (double)CONCAT44 /* combine 2-byte values */(uStack_5b8,uStack_5bc);
    dStack_2c4 = *pdVar12 * (double)CONCAT44 /* combine 2-byte values */(uStack_5b0,uStack_5b4);
    dStack_2bc = pCVar1->x * (double)CONCAT44 /* combine 2-byte values */(uStack_5a8,uStack_5ac);
    dStack_2b4 = *pdVar10 * (double)CONCAT44 /* combine 2-byte values */(uStack_5a0,uStack_5a4);
    pdVar10 = &dStack_3ac;
    pdVar12 = &dStack_244;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar12 = *(uint *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
      pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
    }
    dStack_2ac = dVar15 * (double)CONCAT44 /* combine 2-byte values */(uStack_598,uStack_59c);
    pdVar10 = &dStack_4e4;
    pdVar12 = &dStack_394;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar12 = *(uint *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
      pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
    }
    dVar15 = -(dStack_244 + dStack_23c + dStack_234);
    pdVar10 = &dStack_2d4;
    pdVar12 = &dStack_274;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar12 = *(uint *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
      pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
    }
    pdVar10 = &dStack_2bc;
    pdVar12 = &dStack_46c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar12 = *(uint *)pdVar10;
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
      pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
    }
    dStack_3f4 = dStack_394 + dStack_38c + dStack_384 + dVar15;
    dStack_3ec = dStack_274 + dStack_26c + dStack_264 + dVar15;
    dStack_3e4 = dStack_46c + dStack_464 + dStack_45c + dVar15;
    if ((dStack_3f4 < 1e-08) && (-1e-08 <= dStack_3f4)) {
      dStack_3f4 = 0.0;
    }
    if ((dStack_3ec < 1e-08) && (-1e-08 < dStack_3ec)) {
      dStack_3ec = 0.0;
    }
    if ((dStack_3e4 < 1e-08) && (-1e-08 <= dStack_3e4)) {
      dStack_3e4 = 0.0;
    }
    if ((((dStack_3f4 < 0.0) || (dStack_3ec < 0.0)) || (dStack_3e4 < 0.0)) &&
       (((0.0 < dStack_3f4 || (0.0 < dStack_3ec)) || (0.0 < dStack_3e4)))) {
      if (((((ulonglong)dStack_3f4 & 0x7fffffff00000000) != 0) || (dStack_3f4._0_4_ != 0)) &&
         (((((ulonglong)dStack_3ec & 0x7fffffff00000000) != 0 || (dStack_3ec._0_4_ != 0)) &&
          ((((ulonglong)dStack_3e4 & 0x7fffffff00000000) != 0 || (dStack_3e4._0_4_ != 0)))))) {
        iStack_a8 = 3;
        iStack_ac = 4;
        if (((0.0 <= dStack_3ec) && (0.0 <= dStack_3e4)) ||
           ((dStack_3ec < 0.0 && (dStack_3e4 < 0.0)))) {
          aiStack_d0[3] = 1;
          iStack_54 = 2;
          iStack_4c = 0;
        }
        else if (((0.0 <= dStack_3f4) && (0.0 <= dStack_3e4)) ||
                ((dStack_3f4 < 0.0 && (dStack_3e4 < 0.0)))) {
          aiStack_d0[3] = 2;
          iStack_54 = 0;
          iStack_4c = 1;
        }
        else {
          aiStack_d0[3] = 0;
          iStack_54 = 1;
          iStack_4c = 2;
        }
        iVar3 = aiStack_d0[3];
        dVar15 = (&dStack_3f4)[aiStack_d0[3]] /
                 ((&dStack_3f4)[aiStack_d0[3]] - (&dStack_3f4)[iStack_4c]);
        iStack_a0 = iStack_4c * 8;
        pdStack_94 = (double *)(&uStack_5dc + iStack_4c * 3);
        pdVar9 = (double *)(&uStack_5dc + aiStack_d0[3] * 3);
        dStack_2a4 = *pdVar9 - (double)(&uStack_5dc)[iStack_4c * 3];
        dStack_29c = (double)(&uStack_5d4)[aiStack_d0[3] * 3] - (double)(&uStack_5d4)[iStack_4c * 3]
        ;
        dStack_294 = (double)(&uStack_5cc)[aiStack_d0[3] * 3] - (double)(&uStack_5cc)[iStack_4c * 3]
        ;
        pdVar10 = &dStack_2a4;
        pdVar12 = &dStack_484;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)pdVar12 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
          pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
        }
        dStack_334 = dStack_484 * dVar15;
        dStack_32c = dStack_47c * dVar15;
        dStack_324 = dStack_474 * dVar15;
        pdVar10 = &dStack_334;
        pdVar12 = &dStack_49c;
        for (iVar7 = 6; iVar6 = iStack_a8, iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)pdVar12 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
          pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
        }
        pdStack_9c = pdVar9;
        dStack_514 = *pdVar9 - dStack_49c;
        dStack_50c = (double)(&uStack_5d4)[iVar3 * 3] - dStack_494;
        dStack_504 = (double)(&uStack_5cc)[iVar3 * 3] - dStack_48c;
        iVar3 = iStack_a8 * 0x18;
        pdVar10 = &dStack_514;
        puVar13 = &uStack_34c;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar13 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
          puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
        }
        pdVar9 = (double *)(&uStack_5dc + iVar6 * 3);
        *(uint *)pdVar9 = uStack_34c;
        *(uint *)((int)&uStack_5dc + iVar3 + 4) = uStack_348;
        *(uint *)(&uStack_5d4 + iVar6 * 3) = uStack_344;
        *(uint *)((int)&uStack_5d4 + iVar3 + 4) = uStack_340;
        *(uint *)(&uStack_5cc + iVar6 * 3) = uStack_33c;
        *(uint *)((int)&uStack_5cc + iVar3 + 4) = uStack_338;
        pdStack_20 = (double *)(&uStack_564 + iStack_4c * 2);
        pdVar10 = (double *)(&uStack_564 + aiStack_d0[3] * 2);
        uStack_184 = *pdVar10 - (double)(&uStack_564)[iStack_4c * 2];
        dStack_17c = (double)(&uStack_55c)[aiStack_d0[3] * 2] - (double)(&uStack_55c)[iStack_4c * 2]
        ;
        uStack_1b4 = (uint)uStack_184;
        (&uStack_1b0)[(uint)bVar14 * -2] = *(uint *)((int)&uStack_184 + (uint)bVar14 * -8 + 4)
        ;
        *(uint *)(&dStack_1ac + (-(uint)bVar14 - (uint)bVar14)) =
             *(uint *)(&dStack_17c + (-(uint)bVar14 - (uint)bVar14));
        *(uint *)
         ((int)(&dStack_1ac + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_17c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_114 = (double)CONCAT44 /* combine 2-byte values */(uStack_1b0,uStack_1b4) * dVar15;
        pdStack_1c = pdVar10;
        dStack_10c = dStack_1ac * dVar15;
        uStack_1c4 = (uint)uStack_114;
        (&uStack_1c0)[(uint)bVar14 * -2] = *(uint *)((int)&uStack_114 + (uint)bVar14 * -8 + 4)
        ;
        *(uint *)(&dStack_1bc + (-(uint)bVar14 - (uint)bVar14)) =
             *(uint *)(&dStack_10c + (-(uint)bVar14 - (uint)bVar14));
        *(uint *)
         ((int)(&dStack_1bc + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_10c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_144 = *pdVar10 - (double)CONCAT44 /* combine 2-byte values */(uStack_1c0,uStack_1c4);
        dStack_13c = (double)(&uStack_55c)[aiStack_d0[3] * 2] - dStack_1bc;
        pdStack_b0 = (double *)(&uStack_564 + iStack_a8 * 2);
        auStack_130[3] = (uint)uStack_144;
        auStack_130[(uint)bVar14 * -2 + 4] =
             *(uint *)((int)&uStack_144 + (uint)bVar14 * -8 + 4);
        pdVar10 = pdStack_b0;
        auStack_130[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5] =
             *(uint *)(&dStack_13c + (-(uint)bVar14 - (uint)bVar14));
        (auStack_130 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1] =
             *(uint *)
              ((int)(&dStack_13c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        *(uint *)pdStack_b0 = auStack_130[3];
        *(uint *)((int)pdVar10 + 4) = uStack_120;
        *(uint *)(pdVar10 + 1) = uStack_11c;
        *(uint *)((int)pdVar10 + 0xc) = uStack_118;
        dVar15 = (&dStack_3f4)[iStack_54] /
                 ((&dStack_3f4)[iStack_54] - *(double *)((int)&dStack_3f4 + iStack_a0));
        pdStack_90 = (double *)(&uStack_5dc + iStack_54 * 3);
        dStack_4fc = (double)(&uStack_5dc)[iStack_54 * 3] - *pdStack_94;
        dStack_4f4 = (double)(&uStack_5d4)[iStack_54 * 3] - pdStack_94[1];
        dStack_4ec = (double)(&uStack_5cc)[iStack_54 * 3] - pdStack_94[2];
        pdVar10 = &dStack_4fc;
        pdVar12 = &dStack_364;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)pdVar12 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
          pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
        }
        dStack_304 = dStack_364 * dVar15;
        dStack_2fc = dStack_35c * dVar15;
        dStack_2f4 = dStack_354 * dVar15;
        pdVar10 = &dStack_304;
        pdVar12 = &dStack_1fc;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *(uint *)pdVar12 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
          pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
        }
        dStack_37c = *pdStack_90 - dStack_1fc;
        dStack_374 = pdStack_90[1] - dStack_1f4;
        dStack_36c = pdStack_90[2] - dStack_1ec;
        pdVar10 = &dStack_37c;
        puVar13 = &uStack_43c;
        for (iVar7 = 6; iVar4 = iStack_ac, iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar13 = *(uint *)pdVar10;
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
          puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
        }
        iVar7 = iStack_ac * 0x18;
        pdVar12 = (double *)(&uStack_5dc + iStack_ac * 3);
        *(uint *)pdVar12 = uStack_43c;
        *(uint *)((int)&uStack_5dc + iVar7 + 4) = uStack_438;
        *(uint *)(&uStack_5d4 + iVar4 * 3) = uStack_434;
        *(uint *)((int)&uStack_5d4 + iVar7 + 4) = uStack_430;
        *(uint *)(&uStack_5cc + iVar4 * 3) = uStack_42c;
        *(uint *)((int)&uStack_5cc + iVar7 + 4) = uStack_428;
        pdStack_b4 = (double *)(&uStack_564 + iStack_54 * 2);
        uStack_164 = (double)(&uStack_564)[iStack_54 * 2] - *pdStack_20;
        dStack_15c = (double)(&uStack_55c)[iStack_54 * 2] - pdStack_20[1];
        uStack_174 = (uint)uStack_164;
        (&uStack_170)[(uint)bVar14 * -2] = *(uint *)((int)&uStack_164 + (uint)bVar14 * -8 + 4)
        ;
        pdVar10 = pdStack_b4;
        *(uint *)(&dStack_16c + (-(uint)bVar14 - (uint)bVar14)) =
             *(uint *)(&dStack_15c + (-(uint)bVar14 - (uint)bVar14));
        *(uint *)
         ((int)(&dStack_16c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_15c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_154 = (double)CONCAT44 /* combine 2-byte values */(uStack_170,uStack_174) * dVar15;
        dStack_14c = dStack_16c * dVar15;
        uStack_1a4 = (uint)uStack_154;
        (&uStack_1a0)[(uint)bVar14 * -2] = *(uint *)((int)&uStack_154 + (uint)bVar14 * -8 + 4)
        ;
        *(uint *)(&dStack_19c + (-(uint)bVar14 - (uint)bVar14)) =
             *(uint *)(&dStack_14c + (-(uint)bVar14 - (uint)bVar14));
        *(uint *)
         ((int)(&dStack_19c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_14c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
        uStack_1e4 = *pdVar10 - (double)CONCAT44 /* combine 2-byte values */(uStack_1a0,uStack_1a4);
        dStack_1dc = pdVar10[1] - dStack_19c;
        uStack_d4 = (uint)uStack_1e4;
        aiStack_d0[(uint)bVar14 * -2] = *(int *)((int)&uStack_1e4 + (uint)bVar14 * -8 + 4);
        aiStack_d0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
             *(int *)(&dStack_1dc + (-(uint)bVar14 - (uint)bVar14));
        (aiStack_d0 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
             *(int *)((int)(&dStack_1dc + (-(uint)bVar14 - (uint)bVar14)) +
                     ((uint)bVar14 * -2 + 1) * 4);
        iVar5 = iStack_ac * 0x10;
        pdVar10 = (double *)(&uStack_564 + iStack_ac * 2);
        *(uint *)pdVar10 = uStack_d4;
        *(int *)((int)&uStack_564 + iVar5 + 4) = aiStack_d0[0];
        *(int *)(&uStack_55c + iStack_ac * 2) = aiStack_d0[1];
        *(int *)((int)&uStack_55c + iVar5 + 4) = aiStack_d0[2];
        pCStack_74 = (out_result->poly2).uvs + 2;
        pCStack_40 = (out_result->poly2).vertices + 2;
        pCStack_7c = (out_result->poly2).uvs + 1;
        pCStack_3c = (out_result->poly2).vertices + 1;
        pCStack_88 = (out_result->poly2).uvs;
        pCVar1 = (out_result->poly2).vertices;
        pCStack_5c = (out_result->poly1).uvs + 2;
        pCStack_44 = (out_result->poly1).vertices + 2;
        pCStack_58 = (out_result->poly1).uvs + 1;
        pCStack_2c = (out_result->poly1).vertices + 1;
        pCStack_60 = (out_result->poly1).uvs;
        pCStack_bc = (out_result->poly1).vertices;
        if (0.0 < *(double *)((int)&dStack_3f4 + iStack_a0)) {
          (out_result->poly1).vertex_count = 3;
          pCStack_bc->x = *pdStack_94;
          (out_result->poly1).vertices[0].y = pdStack_94[1];
          (out_result->poly1).vertices[0].z = pdStack_94[2];
          pCStack_60->x = *pdStack_20;
          (out_result->poly1).uvs[0].y = pdStack_20[1];
          pCStack_2c->x = *pdVar9;
          (out_result->poly1).vertices[1].y = (double)(&uStack_5d4)[iVar6 * 3];
          (out_result->poly1).vertices[1].z = (double)(&uStack_5cc)[iVar6 * 3];
          pCStack_58->x = *pdStack_b0;
          (out_result->poly1).uvs[1].y = pdStack_b0[1];
          pCStack_44->x = *pdVar12;
          (out_result->poly1).vertices[2].y = (double)(&uStack_5d4)[iVar4 * 3];
          (out_result->poly1).vertices[2].z = (double)(&uStack_5cc)[iVar4 * 3];
          pCStack_5c->x = *pdVar10;
          (out_result->poly1).uvs[2].y = (double)(&uStack_55c)[iStack_ac * 2];
          (out_result->poly2).vertex_count = 4;
          pCVar1->x = *pdVar9;
          (out_result->poly2).vertices[0].y = (double)(&uStack_5d4)[iVar6 * 3];
          (out_result->poly2).vertices[0].z = (double)(&uStack_5cc)[iVar6 * 3];
          pCStack_88->x = *pdStack_b0;
          (out_result->poly2).uvs[0].y = pdStack_b0[1];
          pCStack_3c->x = *pdStack_9c;
          (out_result->poly2).vertices[1].y = pdStack_9c[1];
          (out_result->poly2).vertices[1].z = pdStack_9c[2];
          pCStack_7c->x = *pdStack_1c;
          (out_result->poly2).uvs[1].y = pdStack_1c[1];
          pCStack_40->x = *pdStack_90;
          (out_result->poly2).vertices[2].y = pdStack_90[1];
          (out_result->poly2).vertices[2].z = pdStack_90[2];
          pCStack_74->x = *pdStack_b4;
          (out_result->poly2).uvs[2].y = pdStack_b4[1];
          *(uint *)&(out_result->poly2).vertices[3].x = *(uint *)pdVar12;
          *(uint *)((int)&(out_result->poly2).vertices[3].x + 4) =
               *(uint *)((int)&uStack_5dc + iVar7 + 4);
          *(uint *)&(out_result->poly2).vertices[3].y =
               *(uint *)(&uStack_5d4 + iVar4 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].y + 4) =
               *(uint *)((int)&uStack_5d4 + iVar7 + 4);
          *(uint *)&(out_result->poly2).vertices[3].z =
               *(uint *)(&uStack_5cc + iVar4 * 3);
          *(uint *)((int)&(out_result->poly2).vertices[3].z + 4) =
               *(uint *)((int)&uStack_5cc + iVar7 + 4);
          *(uint *)&(out_result->poly2).uvs[3].x = *(uint *)pdVar10;
          *(uint *)((int)&(out_result->poly2).uvs[3].x + 4) =
               *(uint *)((int)&uStack_564 + iVar5 + 4);
          *(uint *)&(out_result->poly2).uvs[3].y =
               *(uint *)(&uStack_55c + iStack_ac * 2);
          *(uint *)((int)&(out_result->poly2).uvs[3].y + 4) =
               *(uint *)((int)&uStack_55c + iVar5 + 4);
          return 1;
        }
        (out_result->poly1).vertex_count = 4;
        pCStack_bc->x = *pdVar9;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5d4)[iVar6 * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5cc)[iVar6 * 3];
        pCStack_60->x = *pdStack_b0;
        (out_result->poly1).uvs[0].y = pdStack_b0[1];
        pCStack_2c->x = *pdStack_9c;
        (out_result->poly1).vertices[1].y = pdStack_9c[1];
        (out_result->poly1).vertices[1].z = pdStack_9c[2];
        pCStack_58->x = *pdStack_1c;
        (out_result->poly1).uvs[1].y = pdStack_1c[1];
        pCStack_44->x = *pdStack_90;
        (out_result->poly1).vertices[2].y = pdStack_90[1];
        (out_result->poly1).vertices[2].z = pdStack_90[2];
        pCStack_5c->x = *pdStack_b4;
        (out_result->poly1).uvs[2].y = pdStack_b4[1];
        (out_result->poly1).vertices[3].x = *pdVar12;
        (out_result->poly1).vertices[3].y = (double)(&uStack_5d4)[iVar4 * 3];
        (out_result->poly1).vertices[3].z = (double)(&uStack_5cc)[iVar4 * 3];
        (out_result->poly1).uvs[3].x = *pdVar10;
        (out_result->poly1).uvs[3].y = (double)(&uStack_55c)[iStack_ac * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCVar1->x = *(uint *)pdStack_94;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)pdStack_94 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y = *(uint *)(pdStack_94 + 1);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)pdStack_94 + 0xc);
        (out_result->poly2).vertices[0].z = pdStack_94[2];
        pCStack_88->x = *pdStack_20;
        (out_result->poly2).uvs[0].y = pdStack_20[1];
        *(uint *)&pCStack_3c->x = *(uint *)pdVar9;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_5dc + iVar3 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y = *(uint *)(&uStack_5d4 + iVar6 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_5d4 + iVar3 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z = *(uint *)(&uStack_5cc + iVar6 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_5cc + iVar3 + 4);
        pCStack_7c->x = *pdStack_b0;
        (out_result->poly2).uvs[1].y = pdStack_b0[1];
        *(uint *)&pCStack_40->x = *(uint *)pdVar12;
        *(uint *)((int)&(out_result->poly2).vertices[2].x + 4) =
             *(uint *)((int)&uStack_5dc + iVar7 + 4);
        *(uint *)&(out_result->poly2).vertices[2].y = *(uint *)(&uStack_5d4 + iVar4 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[2].y + 4) =
             *(uint *)((int)&uStack_5d4 + iVar7 + 4);
        *(uint *)&(out_result->poly2).vertices[2].z = *(uint *)(&uStack_5cc + iVar4 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[2].z + 4) =
             *(uint *)((int)&uStack_5cc + iVar7 + 4);
        *(uint *)&pCStack_74->x = *(uint *)pdVar10;
        *(uint *)((int)&(out_result->poly2).uvs[2].x + 4) =
             *(uint *)((int)&uStack_564 + iVar5 + 4);
        *(uint *)&(out_result->poly2).uvs[2].y = *(uint *)(&uStack_55c + iStack_ac * 2);
        *(uint *)((int)&(out_result->poly2).uvs[2].y + 4) =
             *(uint *)((int)&uStack_55c + iVar5 + 4);
        return 1;
      }
      iStack_a4 = 3;
      if ((((ulonglong)dStack_3f4 & 0x7fffffff00000000) == 0) && (dStack_3f4._0_4_ == 0)) {
        iStack_48 = 1;
        iStack_50 = 2;
        iStack_68 = 0;
      }
      else if ((((ulonglong)dStack_3ec & 0x7fffffff00000000) == 0) && (dStack_3ec._0_4_ == 0)) {
        iStack_48 = 2;
        iStack_50 = 0;
        iStack_68 = 1;
      }
      else {
        iStack_48 = 0;
        iStack_50 = 1;
        iStack_68 = 2;
      }
      iStack_8c = iStack_48 * 8;
      dVar15 = (&dStack_3f4)[iStack_48] / ((&dStack_3f4)[iStack_48] - (&dStack_3f4)[iStack_50]);
      pdStack_14 = (double *)(&uStack_5dc + iStack_50 * 3);
      pdStack_98 = (double *)(&uStack_5dc + iStack_48 * 3);
      dStack_22c = (double)(&uStack_5dc)[iStack_48 * 3] - (double)(&uStack_5dc)[iStack_50 * 3];
      dStack_224 = (double)(&uStack_5d4)[iStack_48 * 3] - (double)(&uStack_5d4)[iStack_50 * 3];
      dStack_21c = (double)(&uStack_5cc)[iStack_48 * 3] - (double)(&uStack_5cc)[iStack_50 * 3];
      pdVar10 = &dStack_22c;
      pdVar12 = &dStack_4b4;
      for (iVar3 = 6; pdVar9 = pdStack_98, iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pdVar12 = *(uint *)pdVar10;
        pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
        pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
      }
      dStack_28c = dStack_4b4 * dVar15;
      dStack_284 = dStack_4ac * dVar15;
      dStack_27c = dStack_4a4 * dVar15;
      pdVar10 = &dStack_28c;
      pdVar12 = &dStack_25c;
      for (iVar3 = 6; iVar7 = iStack_a4, iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pdVar12 = *(uint *)pdVar10;
        pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
        pdVar12 = (double *)((int)pdVar12 + (uint)bVar14 * -8 + 4);
      }
      dStack_424 = *pdVar9 - dStack_25c;
      dStack_41c = pdVar9[1] - dStack_254;
      dStack_414 = pdVar9[2] - dStack_24c;
      iVar3 = iStack_a4 * 0x18;
      pdVar10 = &dStack_424;
      puVar13 = &uStack_3dc;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar13 = *(uint *)pdVar10;
        pdVar10 = (double *)((int)pdVar10 + (uint)bVar14 * -8 + 4);
        puVar13 = puVar13 + (uint)bVar14 * -2 + 1;
      }
      pdVar12 = (double *)(&uStack_5dc + iVar7 * 3);
      *(uint *)pdVar12 = uStack_3dc;
      *(uint *)((int)&uStack_5dc + iVar3 + 4) = uStack_3d8;
      *(uint *)(&uStack_5d4 + iVar7 * 3) = uStack_3d4;
      *(uint *)((int)&uStack_5d4 + iVar3 + 4) = uStack_3d0;
      *(uint *)(&uStack_5cc + iVar7 * 3) = uStack_3cc;
      *(uint *)((int)&uStack_5cc + iVar3 + 4) = local_3c8;
      pdStack_30 = (double *)(&uStack_564 + iStack_50 * 2);
      pdStack_18 = (double *)(&uStack_564 + iStack_48 * 2);
      uStack_1d4 = (double)(&uStack_564)[iStack_48 * 2] - (double)(&uStack_564)[iStack_50 * 2];
      dStack_1cc = (double)(&uStack_55c)[iStack_48 * 2] - (double)(&uStack_55c)[iStack_50 * 2];
      uStack_104 = (uint)uStack_1d4;
      (&uStack_100)[(uint)bVar14 * -2] = *(uint *)((int)&uStack_1d4 + (uint)bVar14 * -8 + 4);
      pdVar10 = pdStack_18;
      *(uint *)(&dStack_fc + (-(uint)bVar14 - (uint)bVar14)) =
           *(uint *)(&dStack_1cc + (-(uint)bVar14 - (uint)bVar14));
      *(uint *)
       ((int)(&dStack_fc + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_1cc + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
      uStack_e4 = (double)CONCAT44 /* combine 2-byte values */(uStack_100,uStack_104) * dVar15;
      dStack_dc = dStack_fc * dVar15;
      uStack_194 = (uint)uStack_e4;
      (&uStack_190)[(uint)bVar14 * -2] = *(uint *)((int)&uStack_e4 + (uint)bVar14 * -8 + 4);
      *(uint *)(&dStack_18c + (-(uint)bVar14 - (uint)bVar14)) =
           *(uint *)(&dStack_dc + (-(uint)bVar14 - (uint)bVar14));
      *(uint *)
       ((int)(&dStack_18c + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_dc + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
      uStack_f4 = *pdVar10 - (double)CONCAT44 /* combine 2-byte values */(uStack_190,uStack_194);
      dStack_ec = pdVar10[1] - dStack_18c;
      uStack_134 = (uint)uStack_f4;
      auStack_130[(uint)bVar14 * -2] = *(uint *)((int)&uStack_f4 + (uint)bVar14 * -8 + 4);
      auStack_130[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           *(uint *)(&dStack_ec + (-(uint)bVar14 - (uint)bVar14));
      (auStack_130 + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1] =
           *(uint *)
            ((int)(&dStack_ec + (-(uint)bVar14 - (uint)bVar14)) + ((uint)bVar14 * -2 + 1) * 4);
      iVar4 = iStack_a4 * 0x10;
      pdVar9 = (double *)(&uStack_564 + iStack_a4 * 2);
      *(uint *)pdVar9 = uStack_134;
      *(uint *)((int)&uStack_564 + iVar4 + 4) = auStack_130[0];
      *(uint *)(&uStack_55c + iStack_a4 * 2) = auStack_130[1];
      *(uint *)((int)&uStack_55c + iVar4 + 4) = auStack_130[2];
      pCStack_78 = (out_result->poly2).uvs + 2;
      pCStack_28 = (out_result->poly2).vertices + 2;
      pCStack_64 = (out_result->poly2).uvs + 1;
      pCStack_b8 = (out_result->poly2).vertices + 1;
      pCStack_84 = (out_result->poly2).uvs;
      pCStack_24 = (out_result->poly2).vertices;
      pCStack_80 = (out_result->poly1).uvs + 2;
      pCStack_34 = (out_result->poly1).vertices + 2;
      pCStack_70 = (out_result->poly1).uvs + 1;
      pCStack_38 = (out_result->poly1).vertices + 1;
      pCStack_6c = (out_result->poly1).uvs;
      pCStack_c0 = (out_result->poly1).vertices;
      iVar6 = iStack_68 * 0x18;
      iVar5 = iStack_68 * 0x10;
      pdVar11 = (double *)(&uStack_564 + iStack_68 * 2);
      pdVar10 = (double *)(&uStack_5dc + iStack_68 * 3);
      if (0.0 < *(double *)((int)&dStack_3f4 + iStack_8c)) {
        (out_result->poly1).vertex_count = 3;
        pCStack_c0->x = *pdVar10;
        (out_result->poly1).vertices[0].y = (double)(&uStack_5d4)[iStack_68 * 3];
        (out_result->poly1).vertices[0].z = (double)(&uStack_5cc)[iStack_68 * 3];
        pCStack_6c->x = *pdVar11;
        (out_result->poly1).uvs[0].y = (double)(&uStack_55c)[iStack_68 * 2];
        pCStack_38->x = *pdStack_98;
        (out_result->poly1).vertices[1].y = pdStack_98[1];
        (out_result->poly1).vertices[1].z = pdStack_98[2];
        pCStack_70->x = *pdStack_18;
        (out_result->poly1).uvs[1].y = pdStack_18[1];
        pCStack_34->x = *pdVar12;
        (out_result->poly1).vertices[2].y = (double)(&uStack_5d4)[iVar7 * 3];
        (out_result->poly1).vertices[2].z = (double)(&uStack_5cc)[iVar7 * 3];
        pCStack_80->x = *pdVar9;
        (out_result->poly1).uvs[2].y = (double)(&uStack_55c)[iStack_a4 * 2];
        (out_result->poly2).vertex_count = 3;
        *(uint *)&pCStack_24->x = *(uint *)pdVar10;
        *(uint *)((int)&(out_result->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_5dc + iVar6 + 4);
        *(uint *)&(out_result->poly2).vertices[0].y =
             *(uint *)(&uStack_5d4 + iStack_68 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_5d4 + iVar6 + 4);
        *(uint *)&(out_result->poly2).vertices[0].z =
             *(uint *)(&uStack_5cc + iStack_68 * 3);
        *(uint *)((int)&(out_result->poly2).vertices[0].z + 4) =
             *(uint *)((int)&uStack_5cc + iVar6 + 4);
        *(uint *)&pCStack_84->x = *(uint *)pdVar11;
        *(uint *)((int)&(out_result->poly2).uvs[0].x + 4) =
             *(uint *)((int)&uStack_564 + iVar5 + 4);
        *(uint *)&(out_result->poly2).uvs[0].y = *(uint *)(&uStack_55c + iStack_68 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[0].y + 4) =
             *(uint *)((int)&uStack_55c + iVar5 + 4);
        *(uint *)&pCStack_b8->x = *(uint *)pdVar12;
        *(uint *)((int)&(out_result->poly2).vertices[1].x + 4) =
             *(uint *)((int)&uStack_5dc + iVar3 + 4);
        *(uint *)&(out_result->poly2).vertices[1].y = *(uint *)(&uStack_5d4 + iVar7 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].y + 4) =
             *(uint *)((int)&uStack_5d4 + iVar3 + 4);
        *(uint *)&(out_result->poly2).vertices[1].z = *(uint *)(&uStack_5cc + iVar7 * 3)
        ;
        *(uint *)((int)&(out_result->poly2).vertices[1].z + 4) =
             *(uint *)((int)&uStack_5cc + iVar3 + 4);
        *(uint *)&pCStack_64->x = *(uint *)pdVar9;
        *(uint *)((int)&(out_result->poly2).uvs[1].x + 4) =
             *(uint *)((int)&uStack_564 + iVar4 + 4);
        *(uint *)&(out_result->poly2).uvs[1].y = *(uint *)(&uStack_55c + iStack_a4 * 2);
        *(uint *)((int)&(out_result->poly2).uvs[1].y + 4) =
             *(uint *)((int)&uStack_55c + iVar4 + 4);
        pCStack_28->x = *pdStack_14;
        (out_result->poly2).vertices[2].y = pdStack_14[1];
        (out_result->poly2).vertices[2].z = pdStack_14[2];
        pCStack_78->x = *pdStack_30;
        (out_result->poly2).uvs[2].y = pdStack_30[1];
        return 1;
      }
      (out_result->poly2).vertex_count = 3;
      pCStack_24->x = *pdVar10;
      (out_result->poly2).vertices[0].y = (double)(&uStack_5d4)[iStack_68 * 3];
      (out_result->poly2).vertices[0].z = (double)(&uStack_5cc)[iStack_68 * 3];
      pCStack_84->x = *pdVar11;
      (out_result->poly2).uvs[0].y = (double)(&uStack_55c)[iStack_68 * 2];
      pCStack_b8->x = *pdStack_98;
      (out_result->poly2).vertices[1].y = pdStack_98[1];
      (out_result->poly2).vertices[1].z = pdStack_98[2];
      pCStack_64->x = *pdStack_18;
      (out_result->poly2).uvs[1].y = pdStack_18[1];
      pCStack_28->x = *pdVar12;
      (out_result->poly2).vertices[2].y = (double)(&uStack_5d4)[iVar7 * 3];
      (out_result->poly2).vertices[2].z = (double)(&uStack_5cc)[iVar7 * 3];
      pCStack_78->x = *pdVar9;
      (out_result->poly2).uvs[2].y = (double)(&uStack_55c)[iStack_a4 * 2];
      (out_result->poly1).vertex_count = 3;
      *(uint *)&pCStack_c0->x = *(uint *)pdVar10;
      *(uint *)((int)&(out_result->poly1).vertices[0].x + 4) =
           *(uint *)((int)&uStack_5dc + iVar6 + 4);
      *(uint *)&(out_result->poly1).vertices[0].y =
           *(uint *)(&uStack_5d4 + iStack_68 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].y + 4) =
           *(uint *)((int)&uStack_5d4 + iVar6 + 4);
      *(uint *)&(out_result->poly1).vertices[0].z =
           *(uint *)(&uStack_5cc + iStack_68 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[0].z + 4) =
           *(uint *)((int)&uStack_5cc + iVar6 + 4);
      *(uint *)&pCStack_6c->x = *(uint *)pdVar11;
      *(uint *)((int)&(out_result->poly1).uvs[0].x + 4) =
           *(uint *)((int)&uStack_564 + iVar5 + 4);
      *(uint *)&(out_result->poly1).uvs[0].y = *(uint *)(&uStack_55c + iStack_68 * 2);
      *(uint *)((int)&(out_result->poly1).uvs[0].y + 4) =
           *(uint *)((int)&uStack_55c + iVar5 + 4);
      *(uint *)&pCStack_38->x = *(uint *)pdVar12;
      *(uint *)((int)&(out_result->poly1).vertices[1].x + 4) =
           *(uint *)((int)&uStack_5dc + iVar3 + 4);
      *(uint *)&(out_result->poly1).vertices[1].y = *(uint *)(&uStack_5d4 + iVar7 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[1].y + 4) =
           *(uint *)((int)&uStack_5d4 + iVar3 + 4);
      *(uint *)&(out_result->poly1).vertices[1].z = *(uint *)(&uStack_5cc + iVar7 * 3);
      *(uint *)((int)&(out_result->poly1).vertices[1].z + 4) =
           *(uint *)((int)&uStack_5cc + iVar3 + 4);
      *(uint *)&pCStack_70->x = *(uint *)pdVar9;
      *(uint *)((int)&(out_result->poly1).uvs[1].x + 4) =
           *(uint *)((int)&uStack_564 + iVar4 + 4);
      *(uint *)&(out_result->poly1).uvs[1].y = *(uint *)(&uStack_55c + iStack_a4 * 2);
      *(uint *)((int)&(out_result->poly1).uvs[1].y + 4) =
           *(uint *)((int)&uStack_55c + iVar4 + 4);
      pCStack_34->x = *pdStack_14;
      (out_result->poly1).vertices[2].y = pdStack_14[1];
      (out_result->poly1).vertices[2].z = pdStack_14[2];
      pCStack_80->x = *pdStack_30;
      (out_result->poly1).uvs[2].y = pdStack_30[1];
      return 1;
    }
  }
  return 0;
}
