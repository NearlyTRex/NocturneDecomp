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
  CVert *pCVar1;
  double dVar2;
  CPolyIntersectResult *dest;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  CVert *pCVar6;
  uint *puVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  CVector3d *pCVar11;
  byte bVar12;
  uint in_stack_00000010;
  uint uStack00000014;
  uint in_stack_00000018;
  double in_stack_0000001c;
  uint uStack00000024;
  double dStack0000002c;
  uint uStack00000034;
  double dStack0000003c;
  uint uStack00000044;
  uint in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  int iStack00000054;
  CVector3d *pCStack00000058;
  CVector3d *pCStack0000005c;
  CVector3d *pCStack00000060;
  double *pdStack00000064;
  double *pdStack00000068;
  int iStack0000006c;
  uint uStack00000070;
  int iStack00000074;
  int iStack00000078;
  double *pdStack0000007c;
  double *pdStack00000080;
  double *pdStack00000084;
  double *pdStack00000088;
  int iStack0000008c;
  CVector2d *pCStack00000090;
  CVector2d *pCStack00000094;
  CVector2d *pCStack00000098;
  CVector2d *pCStack0000009c;
  CVector2d *pCStack000000a0;
  CVector2d *pCStack000000a4;
  CVector2d *pCStack000000a8;
  CVector2d *pCStack000000ac;
  int iStack000000b0;
  CVector2d *pCStack000000b4;
  CVector2d *pCStack000000b8;
  CVector2d *pCStack000000bc;
  CVector2d *pCStack000000c0;
  int iStack000000c4;
  int iStack000000c8;
  int iStack000000cc;
  int iStack000000d0;
  CVector3d *pCStack000000d4;
  CVector3d *pCStack000000d8;
  CVector3d *pCStack000000dc;
  CVector3d *pCStack000000e0;
  CVector3d *pCStack000000e4;
  double *pdStack000000e8;
  CVector3d *pCStack000000ec;
  CVector3d *pCStack000000f0;
  CVector3d *pCStack000000f4;
  double *pdStack000000f8;
  double *pdStack000000fc;
  double *pdStack00000100;
  double *pdStack00000104;
  CPolyIntersectResult *apCStackY_18a8 [1191];
  uint uStack_5f4;
  uint uStack_5dc;
  uint uStack_5b8;
  uint uStack_594;
  uint uStack_570;
  uint uStack_54c;
  uint uStack_528;
  uint uStack_500;
  ulonglong uStack_4cc;
  ulonglong uStack_4c4;
  ulonglong uStack_4bc;
  CVector3d CStack_4b4;
  uint uStack_49c;
  uint uStack_498;
  uint uStack_494;
  uint uStack_490;
  uint uStack_48c;
  uint uStack_488;
  uint uStack_484;
  uint uStack_480;
  uint uStack_47c;
  uint uStack_478;
  uint uStack_474;
  uint uStack_470;
  uint uStack_46c;
  uint uStack_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  byte local_458 [20];
  ulonglong uStack_444;
  uint uStack_43c;
  uint uStack_438;
  uint uStack_434;
  uint uStack_430;
  uint uStack_42c;
  uint uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
  double in_stack_fffffbe8;
  double in_stack_fffffbf0;
  double dStack_3fc;
  double dStack_3f4;
  double dStack_3ec;
  double dStack_3e4;
  byte auStack_3dc [8];
  double dStack_3d4;
  byte auStack_3cc [8];
  double dStack_3c4;
  double dStack_3bc;
  CVector3d CStack_3b4;
  double dStack_39c;
  uint uStack_394;
  CVector3d CStack_390;
  uint uStack_378;
  double dStack_374;
  CVector3d CStack_36c;
  double dStack_354;
  byte auStack_34c [8];
  double dStack_344;
  CVector3d CStack_324;
  double dStack_30c;
  double dStack_304;
  double dStack_2fc;
  double dStack_2dc;
  CVector3d CStack_2d4;
  uint uStack_2bc;
  uint uStack_2b8;
  uint uStack_2b4;
  uint uStack_2b0;
  uint uStack_2ac;
  double dStack_2a8;
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
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  uint uStack_228;
  uint uStack_224;
  uint uStack_220;
  double dStack_21c;
  double dStack_214;
  double dStack_20c;
  double dStack_204;
  double dStack_1fc;
  double dStack_1f4;
  double dStack_1ec;
  double dStack_1e4;
  double dStack_1dc;
  double dStack_1bc;
  double dStack_1b4;
  double dStack_1ac;
  double dStack_1a4;
  double dStack_19c;
  double dStack_194;
  double dStack_18c;
  double dStack_184;
  double dStack_17c;
  double dStack_174;
  double dStack_16c;
  double dStack_164;
  double dStack_15c;
  double dStack_154;
  double dStack_14c;
  double dStack_144;
  double dStack_13c;
  double dStack_134;
  double dStack_12c;
  double dStack_124;
  double dStack_11c;
  double dStack_114;
  double dStack_10c;
  double dStack_104;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  double dStack_e4;
  double dStack_dc;
  double dStack_d4;
  ulonglong uStack_cc;
  double dStack_c4;
  ulonglong uStack_bc;
  double dStack_b4;
  CPoly *pCStack_ac;
  uint uStack_a8;
  double dStack_a4;
  uint uStack_9c;
  uint uStack_98;
  double dStack_94;
  uint uStack_8c;
  uint uStack_88;
  double dStack_84;
  uint uStack_7c;
  uint uStack_78;
  double dStack_74;
  ulonglong uStack_6c;
  double dStack_64;
  uint uStack_5c;
  uint uStack_58;
  double dStack_54;
  ulonglong uStack_4c;
  double dStack_44;
  ulonglong uStack_3c;
  double dStack_34;
  double dStack_2c;
  uint uStack_28;
  double dStack_24;
  uint uStack_1c;
  uint auStack_18 [2];
  
  dest = out_result;
  bVar12 = 0;
  (*other_poly->vtable->getBounds)(other_poly,(CVector3d *)(auStack_3cc + 4),(CVector3d *)local_458)
  ;
  uStack_5f4 = 0x5ce5cc;
  (*this_ptr->vtable->getBounds)(this_ptr,&CStack_4b4,&CStack_2d4);
  if ((((((double)CONCAT44 /* combine 2-byte values */(CStack_390.x._4_4_,CStack_390.x._0_4_) <=
          (double)CONCAT44 /* combine 2-byte values */(uStack_2b4,uStack_2b8)) &&
        ((double)CONCAT44 /* combine 2-byte values */(uStack_494,uStack_498) <= (double)CONCAT44 /* combine 2-byte values */(uStack_41c,uStack_420))) &&
       ((double)CONCAT44 /* combine 2-byte values */(CStack_390.y._4_4_,CStack_390.y._0_4_) <=
        (double)CONCAT44 /* combine 2-byte values */(uStack_2ac,uStack_2b0))) &&
      (((double)CONCAT44 /* combine 2-byte values */(uStack_48c,uStack_490) <= in_stack_fffffbe8 &&
       ((double)CONCAT44 /* combine 2-byte values */(CStack_390.z._4_4_,CStack_390.z._0_4_) <= dStack_2a8)))) &&
     ((double)CONCAT44 /* combine 2-byte values */(uStack_484,uStack_488) <= in_stack_fffffbf0)) {
    pCVar6 = other_poly->parent_obj->vertex_data;
    uStack_5dc = 0x5ce687;
    iVar3 = (*this_ptr->vtable->rayIntersect)
                      (this_ptr,&pCVar6[other_poly->vertex_idx_0].position,
                       &pCVar6[other_poly->vertex_idx_1].position,(CVector3d *)(auStack_3dc + 4));
    if (iVar3 == 0) {
      pCVar6 = other_poly->parent_obj->vertex_data;
      uStack_5b8 = 0x5ce6cb;
      iVar3 = (*this_ptr->vtable->rayIntersect)
                        (this_ptr,&pCVar6[other_poly->vertex_idx_1].position,
                         &pCVar6[other_poly->vertex_idx_2].position,&CStack_3b4);
      if (iVar3 == 0) {
        pCVar6 = other_poly->parent_obj->vertex_data;
        uStack_594 = 0x5cf1a6;
        iVar3 = (*this_ptr->vtable->rayIntersect)
                          (this_ptr,&pCVar6[other_poly->vertex_idx_2].position,
                           &pCVar6[other_poly->vertex_idx_0].position,&CStack_390);
        if (iVar3 == 0) {
          pCVar6 = this_ptr->parent_obj->vertex_data;
          uStack_570 = 0x5cf1eb;
          iVar3 = (*other_poly->vtable->rayIntersect)
                            (other_poly,&pCVar6[this_ptr->vertex_idx_0].position,
                             &pCVar6[this_ptr->vertex_idx_1].position,&CStack_36c);
          if (iVar3 == 0) {
            pCVar6 = this_ptr->parent_obj->vertex_data;
            uStack_54c = 0x5cf230;
            iVar3 = (*other_poly->vtable->rayIntersect)
                              (other_poly,&pCVar6[this_ptr->vertex_idx_1].position,
                               &pCVar6[this_ptr->vertex_idx_2].position,
                               (CVector3d *)(auStack_34c + 4));
            if (iVar3 == 0) {
              pCVar6 = this_ptr->parent_obj->vertex_data;
              uStack_528 = 0x5cf275;
              iVar3 = (*other_poly->vtable->rayIntersect)
                                (other_poly,&pCVar6[this_ptr->vertex_idx_2].position,
                                 &pCVar6[this_ptr->vertex_idx_0].position,&CStack_324);
              if (iVar3 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
    uStack_500 = 0x5ce6e3;
    crt_memory_c_memset_FUN_005fde40(dest,0,0x148);
    pCVar1 = this_ptr->parent_obj->vertex_data;
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&uStack_4cc,5,&g_CP3DTypeInfo);
    pCVar6 = pCVar1 + this_ptr->vertex_idx_0;
    uStack_4cc = (double)CONCAT44 /* combine 2-byte values */(*(uint *)&(pCVar6->position).x,(uint)uStack_4cc);
    uStack_4c4._0_4_ = *(uint *)((int)&(pCVar6->position).x + 4);
    uStack_4c4._4_4_ = *(uint *)&(pCVar6->position).y;
    uStack_4bc._0_4_ = *(uint *)((int)&(pCVar6->position).y + 4);
    uStack_4bc._4_4_ = *(uint *)&(pCVar6->position).z;
    CStack_4b4.x._0_4_ = *(uint *)((int)&(pCVar6->position).z + 4);
    pCVar6 = pCVar1 + this_ptr->vertex_idx_1;
    CStack_4b4.x._4_4_ = *(uint *)&(pCVar6->position).x;
    CStack_4b4.y._0_4_ = *(uint *)((int)&(pCVar6->position).x + 4);
    CStack_4b4.y._4_4_ = *(uint *)&(pCVar6->position).y;
    CStack_4b4.z._0_4_ = *(uint *)((int)&(pCVar6->position).y + 4);
    CStack_4b4.z._4_4_ = *(uint *)&(pCVar6->position).z;
    uStack_49c = *(uint *)((int)&(pCVar6->position).z + 4);
    pCVar1 = pCVar1 + this_ptr->vertex_idx_2;
    uStack_498 = *(uint *)&(pCVar1->position).x;
    uStack_494 = *(uint *)((int)&(pCVar1->position).x + 4);
    uStack_490 = *(uint *)&(pCVar1->position).y;
    uStack_48c = *(uint *)((int)&(pCVar1->position).y + 4);
    uStack_488 = *(uint *)&(pCVar1->position).z;
    uStack_484 = *(uint *)((int)&(pCVar1->position).z + 4);
    crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(local_458 + 8,5,&g_CP2DTypeInfo);
    local_458._12_4_ = *(uint *)&this_ptr->uv_coords[0].x;
    local_458._16_4_ = *(uint *)((int)&this_ptr->uv_coords[0].x + 4);
    uStack_444._0_4_ = *(uint *)&this_ptr->uv_coords[0].y;
    uStack_444._4_4_ = *(uint *)((int)&this_ptr->uv_coords[0].y + 4);
    uStack_43c = *(uint *)&this_ptr->uv_coords[1].x;
    uStack_438 = *(uint *)((int)&this_ptr->uv_coords[1].x + 4);
    uStack_434 = *(uint *)&this_ptr->uv_coords[1].y;
    uStack_430 = *(uint *)((int)&this_ptr->uv_coords[1].y + 4);
    uStack_42c = *(uint *)&this_ptr->uv_coords[2].x;
    uStack_428 = *(uint *)((int)&this_ptr->uv_coords[2].x + 4);
    uStack_424 = *(uint *)&this_ptr->uv_coords[2].y;
    uStack_420 = *(uint *)((int)&this_ptr->uv_coords[2].y + 4);
    pCVar6 = other_poly->parent_obj->vertex_data + other_poly->vertex_idx_0;
    pdVar8 = &dStack_204;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar8 = *(uint *)&(pCVar6->position).x;
      pCVar6 = (CVert *)((int)pCVar6 + ((uint)bVar12 * -2 + 1) * 4);
      pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
    }
    pCVar11 = &other_poly->normal;
    uStack_fc = *(uint *)&pCVar11->x;
    uStack_f8 = *(uint *)((int)&(other_poly->normal).x + 4);
    pdVar8 = &(other_poly->normal).y;
    uStack_f4 = *(uint *)pdVar8;
    uStack_f0 = *(uint *)((int)&(other_poly->normal).y + 4);
    pdVar10 = &(other_poly->normal).z;
    dVar2 = *pdVar10;
    uStack_ec = *(uint *)pdVar10;
    uStack_e8 = *(uint *)((int)&(other_poly->normal).z + 4);
    dStack_294 = dStack_204 * pCVar11->x;
    dStack_28c = dStack_1fc * *pdVar8;
    dStack_284 = dStack_1f4 * *pdVar10;
    auStack_3cc = (byte  [8])
                  (pCVar11->x * (double)CONCAT44 /* combine 2-byte values */(uStack_4c4._4_4_,(uint)uStack_4c4));
    dStack_3c4 = *pdVar8 * (double)CONCAT44 /* combine 2-byte values */(uStack_4bc._4_4_,(uint)uStack_4bc);
    dStack_3bc = *pdVar10 * (double)CONCAT44 /* combine 2-byte values */(CStack_4b4.x._4_4_,CStack_4b4.x._0_4_);
    dStack_1bc = pCVar11->x * (double)CONCAT44 /* combine 2-byte values */(CStack_4b4.y._4_4_,CStack_4b4.y._0_4_);
    dStack_1b4 = *pdVar8 * (double)CONCAT44 /* combine 2-byte values */(CStack_4b4.z._4_4_,CStack_4b4.z._0_4_);
    dStack_1ac = *pdVar10 * (double)CONCAT44 /* combine 2-byte values */(uStack_498,uStack_49c);
    dStack_1a4 = pCVar11->x * (double)CONCAT44 /* combine 2-byte values */(uStack_490,uStack_494);
    dStack_19c = *pdVar8 * (double)CONCAT44 /* combine 2-byte values */(uStack_488,uStack_48c);
    pdVar8 = &dStack_294;
    pdVar10 = &dStack_12c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar10 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
    }
    dStack_194 = dVar2 * (double)CONCAT44 /* combine 2-byte values */(uStack_480,uStack_484);
    puVar7 = (uint *)auStack_3cc;
    pdVar8 = &dStack_27c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar8 = *puVar7;
      puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
      pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
    }
    uStack_4cc = -(dStack_12c + dStack_124 + dStack_11c);
    pdVar8 = &dStack_1bc;
    pdVar10 = &dStack_15c;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar10 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
    }
    pdVar8 = &dStack_1a4;
    pdVar10 = &dStack_354;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pdVar10 = *(uint *)pdVar8;
      pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
      pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
    }
    dStack_2dc = dStack_27c + dStack_274 + dStack_26c + uStack_4cc;
    CStack_2d4.x = dStack_15c + dStack_154 + dStack_14c + uStack_4cc;
    CStack_2d4.y = dStack_354 + (double)auStack_34c + dStack_344 + uStack_4cc;
    if ((dStack_2dc < 1e-08) && (-1e-08 <= dStack_2dc)) {
      dStack_2dc = 0.0;
    }
    if ((CStack_2d4.x < 1e-08) && (-1e-08 < CStack_2d4.x)) {
      CStack_2d4.x = 0.0;
    }
    if ((CStack_2d4.y < 1e-08) && (-1e-08 <= CStack_2d4.y)) {
      CStack_2d4.y = 0.0;
    }
    if ((((dStack_2dc < 0.0) || (CStack_2d4.x < 0.0)) || (CStack_2d4.y < 0.0)) &&
       (((0.0 < dStack_2dc || (0.0 < CStack_2d4.x)) || (0.0 < CStack_2d4.y)))) {
      if (((((ulonglong)dStack_2dc & 0x7fffffff00000000) != 0) || (dStack_2dc._0_4_ != 0)) &&
         (((((ulonglong)CStack_2d4.x & 0x7fffffff00000000) != 0 || (CStack_2d4.x._0_4_ != 0)) &&
          ((((ulonglong)CStack_2d4.y & 0x7fffffff00000000) != 0 || (CStack_2d4.y._0_4_ != 0)))))) {
        uStack00000070 = 3;
        iStack0000006c = 4;
        if (((0.0 <= CStack_2d4.x) && (0.0 <= CStack_2d4.y)) ||
           ((CStack_2d4.x < 0.0 && (CStack_2d4.y < 0.0)))) {
          iStack00000054 = 1;
          iStack000000c4 = 2;
          iStack000000cc = 0;
        }
        else if (((0.0 <= dStack_2dc) && (0.0 <= CStack_2d4.y)) ||
                ((dStack_2dc < 0.0 && (CStack_2d4.y < 0.0)))) {
          iStack00000054 = 2;
          iStack000000c4 = 0;
          iStack000000cc = 1;
        }
        else {
          iStack00000054 = 0;
          iStack000000c4 = 1;
          iStack000000cc = 2;
        }
        dVar2 = (&dStack_2dc)[iStack00000054] /
                ((&dStack_2dc)[iStack00000054] - (&dStack_2dc)[iStack000000cc]);
        iStack00000078 = iStack000000cc * 8;
        pdStack00000084 = (double *)(&uStack_4c4 + iStack000000cc * 3);
        pdStack0000007c = (double *)(&uStack_4c4 + iStack00000054 * 3);
        dStack_18c = *pdStack0000007c - *pdStack00000084;
        dStack_184 = (double)(&uStack_4bc)[iStack00000054 * 3] -
                     (double)(&uStack_4bc)[iStack000000cc * 3];
        dStack_17c = (&CStack_4b4)[iStack00000054].x - (&CStack_4b4)[iStack000000cc].x;
        pdVar8 = &dStack_18c;
        pCVar11 = &CStack_36c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)&pCVar11->x = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
          pCVar11 = (CVector3d *)((int)pCVar11 + (uint)bVar12 * -8 + 4);
        }
        dStack_21c = CStack_36c.x * dVar2;
        dStack_214 = CStack_36c.y * dVar2;
        dStack_20c = CStack_36c.z * dVar2;
        pdVar8 = &dStack_21c;
        puVar7 = (uint *)((int)&CStack_390.y + 4);
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
          puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
        }
        dStack_3fc = *pdStack0000007c - (double)CONCAT44 /* combine 2-byte values */(CStack_390.z._0_4_,CStack_390.y._4_4_);
        dStack_3f4 = (double)(&uStack_4bc)[iStack00000054 * 3] -
                     (double)CONCAT44 /* combine 2-byte values */(uStack_378,CStack_390.z._4_4_);
        dStack_3ec = (&CStack_4b4)[iStack00000054].x - dStack_374;
        pdVar8 = &dStack_3fc;
        puVar7 = &uStack_234;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
          puVar7 = puVar7 + (uint)bVar12 * -2 + 1;
        }
        uStack_47c = uStack_234;
        uStack_478 = uStack_230;
        uStack_474 = uStack_22c;
        uStack_470 = uStack_228;
        uStack_46c = uStack_224;
        uStack_468 = uStack_220;
        pdStack000000f8 = (double *)(local_458 + iStack000000cc * 0x10 + 0xc);
        pdStack000000fc = (double *)(local_458 + iStack00000054 * 0x10 + 0xc);
        uStack_6c = *pdStack000000fc - *pdStack000000f8;
        dStack_64 = (double)(&uStack_444)[iStack00000054 * 2] -
                    (double)(&uStack_444)[iStack000000cc * 2];
        uStack_6c._0_4_ = SUB84 /* extract 2-byte value */(*pdStack000000fc - *pdStack000000f8,0);
        uStack_9c = (uint)uStack_6c;
        (&uStack_98)[(uint)bVar12 * -2] = *(uint *)((int)&uStack_6c + (uint)bVar12 * -8 + 4);
        *(uint *)(&dStack_94 + (-(uint)bVar12 - (uint)bVar12)) =
             *(uint *)(&dStack_64 + (-(uint)bVar12 - (uint)bVar12));
        *(uint *)
         ((int)(&dStack_94 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_64 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4);
        _out_result = dStack_94 * dVar2;
        this_ptr = SUB84 /* extract 2-byte value */((double)CONCAT44 /* combine 2-byte values */(uStack_98,uStack_9c) * dVar2,0);
        pCStack_ac = this_ptr;
        (&uStack_a8)[(uint)bVar12 * -2] = (&other_poly)[(uint)bVar12 * -2];
        *(CPolyIntersectResult **)(&dStack_a4 + (-(uint)bVar12 - (uint)bVar12)) =
             (&out_result)[(uint)bVar12 * -2 + (uint)bVar12 * -2];
        *(CPolyIntersectResult **)
         ((int)(&dStack_a4 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4) =
             (&out_result + (uint)bVar12 * -2 + (uint)bVar12 * -2)[(uint)bVar12 * -2 + 1];
        dStack_2c = *pdStack000000fc - (double)CONCAT44 /* combine 2-byte values */(uStack_a8,pCStack_ac);
        dStack_24 = (double)(&uStack_444)[iStack00000054 * 2] - dStack_a4;
        pdStack00000068 = (double *)&uStack_41c;
        *(uint *)(&stack0xfffffff8 + (uint)bVar12 * -8) = (&uStack_28)[(uint)bVar12 * -2];
        *(uint *)(&stack0xfffffffc + (uint)bVar12 * -8 + (uint)bVar12 * -8) =
             *(uint *)(&dStack_24 + (-(uint)bVar12 - (uint)bVar12));
        *(uint *)
         ((int)(&stack0xfffffffc + (uint)bVar12 * -8 + (uint)bVar12 * -8) +
         ((uint)bVar12 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_24 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4);
        dVar2 = (&dStack_2dc)[iStack000000c4] /
                ((&dStack_2dc)[iStack000000c4] - (&dStack_2dc)[iStack000000cc]);
        pdStack00000088 = (double *)(&uStack_4c4 + iStack000000c4 * 3);
        dStack_3e4 = *pdStack00000088 - *pdStack00000084;
        auStack_3dc = (byte  [8])
                      ((double)(&uStack_4bc)[iStack000000c4 * 3] -
                      (double)(&uStack_4bc)[iStack000000cc * 3]);
        dStack_3d4 = (&CStack_4b4)[iStack000000c4].x - (&CStack_4b4)[iStack000000cc].x;
        pdVar8 = &dStack_3e4;
        pdVar10 = &dStack_24c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar10 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
        }
        dStack_1ec = dStack_24c * dVar2;
        dStack_1e4 = dStack_244 * dVar2;
        dStack_1dc = dStack_23c * dVar2;
        pdVar8 = &dStack_1ec;
        pdVar10 = &dStack_e4;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)pdVar10 = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
          pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
        }
        dStack_264 = *pdStack00000088 - dStack_e4;
        dStack_25c = (double)(&uStack_4bc)[iStack000000c4 * 3] - dStack_dc;
        dStack_254 = (&CStack_4b4)[iStack000000c4].x - dStack_d4;
        pdVar8 = &dStack_264;
        pCVar11 = &CStack_324;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(uint *)&pCVar11->x = *(uint *)pdVar8;
          pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
          pCVar11 = (CVector3d *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
        }
        uStack_464 = CStack_324.x._0_4_;
        uStack_460 = CStack_324.x._4_4_;
        uStack_45c = CStack_324.y._0_4_;
        local_458._0_4_ = CStack_324.y._4_4_;
        local_458._4_4_ = CStack_324.z._0_4_;
        local_458._8_4_ = CStack_324.z._4_4_;
        pdStack00000064 = (double *)(local_458 + iStack000000c4 * 0x10 + 0xc);
        uStack_4c = *pdStack00000064 - *pdStack000000f8;
        dStack_44 = (double)(&uStack_444)[iStack000000c4 * 2] -
                    (double)(&uStack_444)[iStack000000cc * 2];
        uStack_4c._0_4_ = SUB84 /* extract 2-byte value */(*pdStack00000064 - *pdStack000000f8,0);
        uStack_5c = (uint)uStack_4c;
        (&uStack_58)[(uint)bVar12 * -2] = *(uint *)((int)&uStack_4c + (uint)bVar12 * -8 + 4);
        *(uint *)(&dStack_54 + (-(uint)bVar12 - (uint)bVar12)) =
             *(uint *)(&dStack_44 + (-(uint)bVar12 - (uint)bVar12));
        *(uint *)
         ((int)(&dStack_54 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_44 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4);
        uStack_3c = (double)CONCAT44 /* combine 2-byte values */(uStack_58,uStack_5c) * dVar2;
        dStack_34 = dStack_54 * dVar2;
        uStack_8c = (uint)uStack_3c;
        (&uStack_88)[(uint)bVar12 * -2] = *(uint *)((int)&uStack_3c + (uint)bVar12 * -8 + 4);
        *(uint *)(&dStack_84 + (-(uint)bVar12 - (uint)bVar12)) =
             *(uint *)(&dStack_34 + (-(uint)bVar12 - (uint)bVar12));
        *(uint *)
         ((int)(&dStack_84 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4) =
             *(uint *)
              ((int)(&dStack_34 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4);
        uStack_cc = *pdStack00000064 - (double)CONCAT44 /* combine 2-byte values */(uStack_88,uStack_8c);
        dStack_c4 = (double)(&uStack_444)[iStack000000c4 * 2] - dStack_84;
        uStack00000044 = (uint)uStack_cc;
        (&stack0x00000048)[(uint)bVar12 * -2] =
             *(uint *)((int)&uStack_cc + (uint)bVar12 * -8 + 4);
        (&stack0x0000004c)[(uint)bVar12 * -2 + (uint)bVar12 * -2] =
             *(uint *)(&dStack_c4 + (-(uint)bVar12 - (uint)bVar12));
        (&stack0x0000004c + (uint)bVar12 * -2 + (uint)bVar12 * -2)[(uint)bVar12 * -2 + 1] =
             *(uint *)
              ((int)(&dStack_c4 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4);
        iVar3 = iStack0000006c * 0x10;
        pdVar8 = (double *)(local_458 + iVar3 + 0xc);
        *(uint *)pdVar8 = (uint)uStack_cc;
        *(uint *)(local_458 + iVar3 + 0x10) = in_stack_00000048;
        *(uint *)(&uStack_444 + iStack0000006c * 2) = in_stack_0000004c;
        *(uint *)((int)&uStack_444 + iVar3 + 4) = in_stack_00000050;
        pCStack000000a4 = (dest->poly2).uvs + 2;
        pCStack000000d8 = (dest->poly2).vertices + 2;
        pCStack0000009c = (dest->poly2).uvs + 1;
        pCStack000000dc = (dest->poly2).vertices + 1;
        pCStack00000090 = (dest->poly2).uvs;
        pCVar11 = (dest->poly2).vertices;
        pCStack000000bc = (dest->poly1).uvs + 2;
        pCStack000000d4 = (dest->poly1).vertices + 2;
        pCStack000000c0 = (dest->poly1).uvs + 1;
        pCStack000000ec = (dest->poly1).vertices + 1;
        pCStack000000b8 = (dest->poly1).uvs;
        pCStack0000005c = (dest->poly1).vertices;
        if (0.0 < *(double *)((int)&dStack_2dc + iStack00000078)) {
          (dest->poly1).vertex_count = 3;
          pCStack0000005c->x = *pdStack00000084;
          (dest->poly1).vertices[0].y = pdStack00000084[1];
          (dest->poly1).vertices[0].z = pdStack00000084[2];
          pCStack000000b8->x = *pdStack000000f8;
          (dest->poly1).uvs[0].y = pdStack000000f8[1];
          pCStack000000ec->x = (double)CONCAT44 /* combine 2-byte values */(uStack_478,uStack_47c);
          (dest->poly1).vertices[1].y = (double)CONCAT44 /* combine 2-byte values */(uStack_470,uStack_474);
          (dest->poly1).vertices[1].z = (double)CONCAT44 /* combine 2-byte values */(uStack_468,uStack_46c);
          pCStack000000c0->x = *pdStack00000068;
          (dest->poly1).uvs[1].y = pdStack00000068[1];
          pCStack000000d4->x = (double)CONCAT44 /* combine 2-byte values */(uStack_460,uStack_464);
          (dest->poly1).vertices[2].y = (double)CONCAT44 /* combine 2-byte values */(local_458._0_4_,uStack_45c);
          (dest->poly1).vertices[2].z = (double)CONCAT44 /* combine 2-byte values */(local_458._8_4_,local_458._4_4_);
          pCStack000000bc->x = *pdVar8;
          (dest->poly1).uvs[2].y = (double)(&uStack_444)[iStack0000006c * 2];
          (dest->poly2).vertex_count = 4;
          pCVar11->x = (double)CONCAT44 /* combine 2-byte values */(uStack_478,uStack_47c);
          (dest->poly2).vertices[0].y = (double)CONCAT44 /* combine 2-byte values */(uStack_470,uStack_474);
          (dest->poly2).vertices[0].z = (double)CONCAT44 /* combine 2-byte values */(uStack_468,uStack_46c);
          pCStack00000090->x = *pdStack00000068;
          (dest->poly2).uvs[0].y = pdStack00000068[1];
          pCStack000000dc->x = *pdStack0000007c;
          (dest->poly2).vertices[1].y = pdStack0000007c[1];
          (dest->poly2).vertices[1].z = pdStack0000007c[2];
          pCStack0000009c->x = *pdStack000000fc;
          (dest->poly2).uvs[1].y = pdStack000000fc[1];
          pCStack000000d8->x = *pdStack00000088;
          (dest->poly2).vertices[2].y = pdStack00000088[1];
          (dest->poly2).vertices[2].z = pdStack00000088[2];
          pCStack000000a4->x = *pdStack00000064;
          (dest->poly2).uvs[2].y = pdStack00000064[1];
          *(uint *)&(dest->poly2).vertices[3].x = uStack_464;
          *(uint *)((int)&(dest->poly2).vertices[3].x + 4) = uStack_460;
          *(uint *)&(dest->poly2).vertices[3].y = uStack_45c;
          *(uint *)((int)&(dest->poly2).vertices[3].y + 4) = local_458._0_4_;
          *(uint *)&(dest->poly2).vertices[3].z = local_458._4_4_;
          *(uint *)((int)&(dest->poly2).vertices[3].z + 4) = local_458._8_4_;
          *(uint *)&(dest->poly2).uvs[3].x = *(uint *)pdVar8;
          *(uint *)((int)&(dest->poly2).uvs[3].x + 4) =
               *(uint *)(local_458 + iVar3 + 0x10);
          *(uint *)&(dest->poly2).uvs[3].y = *(uint *)(&uStack_444 + iStack0000006c * 2)
          ;
          *(uint *)((int)&(dest->poly2).uvs[3].y + 4) =
               *(uint *)((int)&uStack_444 + iVar3 + 4);
          return 1;
        }
        (dest->poly1).vertex_count = 4;
        pCStack0000005c->x = (double)CONCAT44 /* combine 2-byte values */(uStack_478,uStack_47c);
        (dest->poly1).vertices[0].y = (double)CONCAT44 /* combine 2-byte values */(uStack_470,uStack_474);
        (dest->poly1).vertices[0].z = (double)CONCAT44 /* combine 2-byte values */(uStack_468,uStack_46c);
        pCStack000000b8->x = *pdStack00000068;
        (dest->poly1).uvs[0].y = pdStack00000068[1];
        pCStack000000ec->x = *pdStack0000007c;
        (dest->poly1).vertices[1].y = pdStack0000007c[1];
        (dest->poly1).vertices[1].z = pdStack0000007c[2];
        pCStack000000c0->x = *pdStack000000fc;
        (dest->poly1).uvs[1].y = pdStack000000fc[1];
        pCStack000000d4->x = *pdStack00000088;
        (dest->poly1).vertices[2].y = pdStack00000088[1];
        (dest->poly1).vertices[2].z = pdStack00000088[2];
        pCStack000000bc->x = *pdStack00000064;
        (dest->poly1).uvs[2].y = pdStack00000064[1];
        (dest->poly1).vertices[3].x = (double)CONCAT44 /* combine 2-byte values */(uStack_460,uStack_464);
        (dest->poly1).vertices[3].y = (double)CONCAT44 /* combine 2-byte values */(local_458._0_4_,uStack_45c);
        (dest->poly1).vertices[3].z = (double)CONCAT44 /* combine 2-byte values */(local_458._8_4_,local_458._4_4_);
        (dest->poly1).uvs[3].x = *pdVar8;
        (dest->poly1).uvs[3].y = (double)(&uStack_444)[iStack0000006c * 2];
        (dest->poly2).vertex_count = 3;
        *(uint *)&pCVar11->x = *(uint *)pdStack00000084;
        *(uint *)((int)&(dest->poly2).vertices[0].x + 4) =
             *(uint *)((int)pdStack00000084 + 4);
        *(uint *)&(dest->poly2).vertices[0].y = *(uint *)(pdStack00000084 + 1);
        *(uint *)((int)&(dest->poly2).vertices[0].y + 4) =
             *(uint *)((int)pdStack00000084 + 0xc);
        (dest->poly2).vertices[0].z = pdStack00000084[2];
        pCStack00000090->x = *pdStack000000f8;
        (dest->poly2).uvs[0].y = pdStack000000f8[1];
        *(uint *)&pCStack000000dc->x = uStack_47c;
        *(uint *)((int)&(dest->poly2).vertices[1].x + 4) = uStack_478;
        *(uint *)&(dest->poly2).vertices[1].y = uStack_474;
        *(uint *)((int)&(dest->poly2).vertices[1].y + 4) = uStack_470;
        *(uint *)&(dest->poly2).vertices[1].z = uStack_46c;
        *(uint *)((int)&(dest->poly2).vertices[1].z + 4) = uStack_468;
        pCStack0000009c->x = *pdStack00000068;
        (dest->poly2).uvs[1].y = pdStack00000068[1];
        *(uint *)&pCStack000000d8->x = uStack_464;
        *(uint *)((int)&(dest->poly2).vertices[2].x + 4) = uStack_460;
        *(uint *)&(dest->poly2).vertices[2].y = uStack_45c;
        *(uint *)((int)&(dest->poly2).vertices[2].y + 4) = local_458._0_4_;
        *(uint *)&(dest->poly2).vertices[2].z = local_458._4_4_;
        *(uint *)((int)&(dest->poly2).vertices[2].z + 4) = local_458._8_4_;
        *(uint *)&pCStack000000a4->x = *(uint *)pdVar8;
        *(uint *)((int)&(dest->poly2).uvs[2].x + 4) =
             *(uint *)(local_458 + iVar3 + 0x10);
        *(uint *)&(dest->poly2).uvs[2].y = *(uint *)(&uStack_444 + iStack0000006c * 2);
        *(uint *)((int)&(dest->poly2).uvs[2].y + 4) =
             *(uint *)((int)&uStack_444 + iVar3 + 4);
        return 1;
      }
      iStack00000074 = 3;
      if ((((ulonglong)dStack_2dc & 0x7fffffff00000000) == 0) && (dStack_2dc._0_4_ == 0)) {
        iStack000000d0 = 1;
        iStack000000c8 = 2;
        iStack000000b0 = 0;
      }
      else if ((((ulonglong)CStack_2d4.x & 0x7fffffff00000000) == 0) && (CStack_2d4.x._0_4_ == 0)) {
        iStack000000d0 = 2;
        iStack000000c8 = 0;
        iStack000000b0 = 1;
      }
      else {
        iStack000000d0 = 0;
        iStack000000c8 = 1;
        iStack000000b0 = 2;
      }
      iStack0000008c = iStack000000d0 * 8;
      dVar2 = (&dStack_2dc)[iStack000000d0] /
              ((&dStack_2dc)[iStack000000d0] - (&dStack_2dc)[iStack000000c8]);
      pdStack00000104 = (double *)(&uStack_4c4 + iStack000000c8 * 3);
      pdStack00000080 = (double *)(&uStack_4c4 + iStack000000d0 * 3);
      dStack_114 = *pdStack00000080 - (double)(&uStack_4c4)[iStack000000c8 * 3];
      dStack_10c = (double)(&uStack_4bc)[iStack000000d0 * 3] -
                   (double)(&uStack_4bc)[iStack000000c8 * 3];
      dStack_104 = (&CStack_4b4)[iStack000000d0].x - (&CStack_4b4)[iStack000000c8].x;
      pdVar8 = &dStack_114;
      pdVar10 = &dStack_39c;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pdVar10 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
        pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
      }
      dStack_174 = dStack_39c * dVar2;
      dStack_16c = (double)CONCAT44 /* combine 2-byte values */(CStack_390.x._0_4_,uStack_394) * dVar2;
      dStack_164 = (double)CONCAT44 /* combine 2-byte values */(CStack_390.y._0_4_,CStack_390.x._4_4_) * dVar2;
      pdVar8 = &dStack_174;
      pdVar10 = &dStack_144;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pdVar10 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
        pdVar10 = (double *)((int)pdVar10 + (uint)bVar12 * -8 + 4);
      }
      dStack_30c = *pdStack00000080 - dStack_144;
      dStack_304 = (double)(&uStack_4bc)[iStack000000d0 * 3] - dStack_13c;
      dStack_2fc = (&CStack_4b4)[iStack000000d0].x - dStack_134;
      pdVar8 = &dStack_30c;
      pdVar10 = &CStack_2d4.z;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pdVar10 = *(uint *)pdVar8;
        pdVar8 = (double *)((int)pdVar8 + (uint)bVar12 * -8 + 4);
        pdVar10 = (double *)((int)pdVar10 + ((uint)bVar12 * -2 + 1) * 4);
      }
      uStack_47c = CStack_2d4.z._0_4_;
      uStack_478 = CStack_2d4.z._4_4_;
      uStack_474 = uStack_2bc;
      uStack_470 = uStack_2b8;
      uStack_46c = uStack_2b4;
      uStack_468 = uStack_2b0;
      pdStack000000e8 = (double *)(local_458 + iStack000000c8 * 0x10 + 0xc);
      pdStack00000100 = (double *)(local_458 + iStack000000d0 * 0x10 + 0xc);
      uStack_bc = *(double *)(local_458 + iStack000000d0 * 0x10 + 0xc) -
                  *(double *)(local_458 + iStack000000c8 * 0x10 + 0xc);
      dStack_b4 = (double)(&uStack_444)[iStack000000d0 * 2] -
                  (double)(&uStack_444)[iStack000000c8 * 2];
      uStack00000014 = (uint)uStack_bc;
      (&stack0x00000018)[(uint)bVar12 * -2] =
           *(uint *)((int)&uStack_bc + (uint)bVar12 * -8 + 4);
      *(uint *)(&stack0x0000001c + (-(uint)bVar12 - (uint)bVar12)) =
           *(uint *)(&dStack_b4 + (-(uint)bVar12 - (uint)bVar12));
      *(uint *)
       ((int)(&stack0x0000001c + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4) =
           *(uint *)
            ((int)(&dStack_b4 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4);
      _uStack00000034 = (double)CONCAT44 /* combine 2-byte values */(in_stack_00000018,(uint)uStack_bc) * dVar2;
      dStack0000003c = in_stack_0000001c * dVar2;
      uStack_7c = uStack00000034;
      (&uStack_78)[(uint)bVar12 * -2] = *(uint *)(&stack0x00000038 + (uint)bVar12 * -8);
      *(uint *)(&dStack_74 + (-(uint)bVar12 - (uint)bVar12)) =
           *(uint *)((int)&stack0x0000003c + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      *(uint *)
       ((int)(&dStack_74 + (-(uint)bVar12 - (uint)bVar12)) + ((uint)bVar12 * -2 + 1) * 4) =
           ((uint *)((int)&stack0x0000003c + (uint)bVar12 * -8 + (uint)bVar12 * -8))
           [(uint)bVar12 * -2 + 1];
      _uStack00000024 = *pdStack00000100 - (double)CONCAT44 /* combine 2-byte values */(uStack_78,uStack_7c);
      dStack0000002c = pdStack00000100[1] - dStack_74;
      uStack_1c = uStack00000024;
      auStack_18[(uint)bVar12 * -2] = *(uint *)(&stack0x00000028 + (uint)bVar12 * -8);
      auStack_18[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
           *(uint *)((int)&stack0x0000002c + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      (auStack_18 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           ((uint *)((int)&stack0x0000002c + (uint)bVar12 * -8 + (uint)bVar12 * -8))
           [(uint)bVar12 * -2 + 1];
      iVar4 = iStack00000074 * 0x10;
      pdVar10 = (double *)(local_458 + iVar4 + 0xc);
      *(uint *)pdVar10 = uStack_1c;
      *(uint *)(local_458 + iVar4 + 0x10) = auStack_18[0];
      *(uint *)(&uStack_444 + iStack00000074 * 2) = auStack_18[1];
      *(uint *)((int)&uStack_444 + iVar4 + 4) = unaff_EBP;
      pCStack000000a0 = (dest->poly2).uvs + 2;
      pCStack000000f0 = (dest->poly2).vertices + 2;
      pCStack000000b4 = (dest->poly2).uvs + 1;
      pCStack00000060 = (dest->poly2).vertices + 1;
      pCStack00000094 = (dest->poly2).uvs;
      pCStack000000f4 = (dest->poly2).vertices;
      pCStack00000098 = (dest->poly1).uvs + 2;
      pCStack000000e4 = (dest->poly1).vertices + 2;
      pCStack000000a8 = (dest->poly1).uvs + 1;
      pCStack000000e0 = (dest->poly1).vertices + 1;
      pCStack000000ac = (dest->poly1).uvs;
      pCStack00000058 = (dest->poly1).vertices;
      iVar3 = iStack000000b0 * 0x18;
      iVar5 = iStack000000b0 * 0x10;
      pdVar9 = (double *)(local_458 + iVar5 + 0xc);
      pdVar8 = (double *)(&uStack_4c4 + iStack000000b0 * 3);
      if (0.0 < *(double *)((int)&dStack_2dc + iStack0000008c)) {
        (dest->poly1).vertex_count = 3;
        pCStack00000058->x = *pdVar8;
        (dest->poly1).vertices[0].y = (double)(&uStack_4bc)[iStack000000b0 * 3];
        (dest->poly1).vertices[0].z = (&CStack_4b4)[iStack000000b0].x;
        pCStack000000ac->x = *pdVar9;
        (dest->poly1).uvs[0].y = (double)(&uStack_444)[iStack000000b0 * 2];
        pCStack000000e0->x = *pdStack00000080;
        (dest->poly1).vertices[1].y = pdStack00000080[1];
        (dest->poly1).vertices[1].z = pdStack00000080[2];
        pCStack000000a8->x = *pdStack00000100;
        (dest->poly1).uvs[1].y = pdStack00000100[1];
        pCStack000000e4->x = (double)CONCAT44 /* combine 2-byte values */(uStack_478,uStack_47c);
        (dest->poly1).vertices[2].y = (double)CONCAT44 /* combine 2-byte values */(uStack_470,uStack_474);
        (dest->poly1).vertices[2].z = (double)CONCAT44 /* combine 2-byte values */(uStack_468,uStack_46c);
        pCStack00000098->x = *pdVar10;
        (dest->poly1).uvs[2].y = (double)(&uStack_444)[iStack00000074 * 2];
        (dest->poly2).vertex_count = 3;
        *(uint *)&pCStack000000f4->x = *(uint *)pdVar8;
        *(uint *)((int)&(dest->poly2).vertices[0].x + 4) =
             *(uint *)((int)&uStack_4c4 + iVar3 + 4);
        *(uint *)&(dest->poly2).vertices[0].y =
             *(uint *)(&uStack_4bc + iStack000000b0 * 3);
        *(uint *)((int)&(dest->poly2).vertices[0].y + 4) =
             *(uint *)((int)&uStack_4bc + iVar3 + 4);
        *(uint *)&(dest->poly2).vertices[0].z =
             *(uint *)&(&CStack_4b4)[iStack000000b0].x;
        *(uint *)((int)&(dest->poly2).vertices[0].z + 4) =
             *(uint *)((int)&(&CStack_4b4)[iStack000000b0].x + 4);
        *(uint *)&pCStack00000094->x = *(uint *)pdVar9;
        *(uint *)((int)&(dest->poly2).uvs[0].x + 4) =
             *(uint *)(local_458 + iVar5 + 0x10);
        *(uint *)&(dest->poly2).uvs[0].y = *(uint *)(&uStack_444 + iStack000000b0 * 2);
        *(uint *)((int)&(dest->poly2).uvs[0].y + 4) =
             *(uint *)((int)&uStack_444 + iVar5 + 4);
        *(uint *)&pCStack00000060->x = uStack_47c;
        *(uint *)((int)&(dest->poly2).vertices[1].x + 4) = uStack_478;
        *(uint *)&(dest->poly2).vertices[1].y = uStack_474;
        *(uint *)((int)&(dest->poly2).vertices[1].y + 4) = uStack_470;
        *(uint *)&(dest->poly2).vertices[1].z = uStack_46c;
        *(uint *)((int)&(dest->poly2).vertices[1].z + 4) = uStack_468;
        *(uint *)&pCStack000000b4->x = *(uint *)pdVar10;
        *(uint *)((int)&(dest->poly2).uvs[1].x + 4) =
             *(uint *)(local_458 + iVar4 + 0x10);
        *(uint *)&(dest->poly2).uvs[1].y = *(uint *)(&uStack_444 + iStack00000074 * 2);
        *(uint *)((int)&(dest->poly2).uvs[1].y + 4) =
             *(uint *)((int)&uStack_444 + iVar4 + 4);
        pCStack000000f0->x = *pdStack00000104;
        (dest->poly2).vertices[2].y = pdStack00000104[1];
        (dest->poly2).vertices[2].z = pdStack00000104[2];
        pCStack000000a0->x = *pdStack000000e8;
        (dest->poly2).uvs[2].y = pdStack000000e8[1];
        return 1;
      }
      (dest->poly2).vertex_count = 3;
      pCStack000000f4->x = *pdVar8;
      (dest->poly2).vertices[0].y = (double)(&uStack_4bc)[iStack000000b0 * 3];
      (dest->poly2).vertices[0].z = (&CStack_4b4)[iStack000000b0].x;
      pCStack00000094->x = *pdVar9;
      (dest->poly2).uvs[0].y = (double)(&uStack_444)[iStack000000b0 * 2];
      pCStack00000060->x = *pdStack00000080;
      (dest->poly2).vertices[1].y = pdStack00000080[1];
      (dest->poly2).vertices[1].z = pdStack00000080[2];
      pCStack000000b4->x = *pdStack00000100;
      (dest->poly2).uvs[1].y = pdStack00000100[1];
      pCStack000000f0->x = (double)CONCAT44 /* combine 2-byte values */(uStack_478,uStack_47c);
      (dest->poly2).vertices[2].y = (double)CONCAT44 /* combine 2-byte values */(uStack_470,uStack_474);
      (dest->poly2).vertices[2].z = (double)CONCAT44 /* combine 2-byte values */(uStack_468,uStack_46c);
      pCStack000000a0->x = *pdVar10;
      (dest->poly2).uvs[2].y = (double)(&uStack_444)[iStack00000074 * 2];
      (dest->poly1).vertex_count = 3;
      *(uint *)&pCStack00000058->x = *(uint *)pdVar8;
      *(uint *)((int)&(dest->poly1).vertices[0].x + 4) =
           *(uint *)((int)&uStack_4c4 + iVar3 + 4);
      *(uint *)&(dest->poly1).vertices[0].y =
           *(uint *)(&uStack_4bc + iStack000000b0 * 3);
      *(uint *)((int)&(dest->poly1).vertices[0].y + 4) =
           *(uint *)((int)&uStack_4bc + iVar3 + 4);
      *(uint *)&(dest->poly1).vertices[0].z = *(uint *)&(&CStack_4b4)[iStack000000b0].x;
      *(uint *)((int)&(dest->poly1).vertices[0].z + 4) =
           *(uint *)((int)&(&CStack_4b4)[iStack000000b0].x + 4);
      *(uint *)&pCStack000000ac->x = *(uint *)pdVar9;
      *(uint *)((int)&(dest->poly1).uvs[0].x + 4) = *(uint *)(local_458 + iVar5 + 0x10);
      *(uint *)&(dest->poly1).uvs[0].y = *(uint *)(&uStack_444 + iStack000000b0 * 2);
      *(uint *)((int)&(dest->poly1).uvs[0].y + 4) =
           *(uint *)((int)&uStack_444 + iVar5 + 4);
      *(uint *)&pCStack000000e0->x = uStack_47c;
      *(uint *)((int)&(dest->poly1).vertices[1].x + 4) = uStack_478;
      *(uint *)&(dest->poly1).vertices[1].y = uStack_474;
      *(uint *)((int)&(dest->poly1).vertices[1].y + 4) = uStack_470;
      *(uint *)&(dest->poly1).vertices[1].z = uStack_46c;
      *(uint *)((int)&(dest->poly1).vertices[1].z + 4) = uStack_468;
      *(uint *)&pCStack000000a8->x = *(uint *)pdVar10;
      *(uint *)((int)&(dest->poly1).uvs[1].x + 4) = *(uint *)(local_458 + iVar4 + 0x10);
      *(uint *)&(dest->poly1).uvs[1].y = *(uint *)(&uStack_444 + iStack00000074 * 2);
      *(uint *)((int)&(dest->poly1).uvs[1].y + 4) =
           *(uint *)((int)&uStack_444 + iVar4 + 4);
      pCStack000000e4->x = *pdStack00000104;
      (dest->poly1).vertices[2].y = pdStack00000104[1];
      (dest->poly1).vertices[2].z = pdStack00000104[2];
      pCStack00000098->x = *pdStack000000e8;
      (dest->poly1).uvs[2].y = pdStack000000e8[1];
      return 1;
    }
  }
  return 0;
}
