// Name: shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0
// Address: 005d47b0
// Address Range: [[005d47b0, 005d57f3]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CObj_removeTJunctions_FUN_005d47b0(CObj * this_ptr, int validate_first)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CObj_removeTJunctions_FUN_005d47b0(CObj *this_ptr,int validate_first)

{
  CVert *pCVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  CVector3d *pCVar10;
  uint uVar11;
  CPoly *pCVar12;
  CVert *pCVar13;
  CVert *pCVar14;
  CVert *pCVar15;
  int iVar16;
  CPoly *pCVar17;
  int iVar18;
  void *pvVar19;
  double *pdVar20;
  BADSPACEBASE *in_ESP;
  uint *puVar21;
  double *pdVar22;
  uint *puVar23;
  byte bVar24;
  int aiStackY_18e0 [1396];
  CVert *in_stack_fffffd20;
  uint uStack_2dc;
  uint local_2d0;
  int iStack_2bc;
  int local_2b8;
  uint uStack_2b4;
  uint local_2b0;
  uint local_2a4;
  uint local_2a0;
  int iStack_29c;
  uint uStack_294;
  int iStack_28c;
  int iStack_284;
  uint uStack_27c;
  uint local_274;
  uint local_268;
  uint local_264;
  int iStack_25c;
  CVert *local_258;
  int iStack_254;
  int local_250;
  int iStack_24c;
  int iStack_244;
  CVert *local_240;
  int iStack_23c;
  byte local_218 [8];
  CObj *local_210;
  ulonglong local_20c;
  ulonglong local_204;
  byte local_1fc [8];
  ulonglong local_1f4;
  int local_1ec;
  CPoly *local_1e8;
  int local_1e4;
  CPoly local_1e0;
  char acStack_174 [24];
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  uint local_13c;
  uint uStack_138;
  uint local_134;
  byte auStack_130 [8];
  byte auStack_128 [28];
  double local_10c;
  ulonglong local_104;
  double local_fc;
  uint local_f4;
  uint auStack_f0 [4];
  uint local_e0;
  double local_dc;
  uint local_d4;
  uint uStack_d0;
  double local_cc;
  ulonglong local_c4;
  double local_bc;
  ulonglong local_b4;
  double local_ac [8];
  void *pvStack_6c;
  uint uStack_68;
  uint *puStack_64;
  uint uStack_60;
  uint *puStack_5c;
  int iStack_58;
  uint *local_54;
  void *local_50;
  void *local_4c;
  void *local_48;
  CPoly *local_44;
  CVector3d *local_40;
  CVector3d *local_3c;
  CVector3d *local_38;
  uint *local_34;
  CVector3d *local_30;
  uint local_2c;
  int local_28;
  CVector2d *local_20;
  CVector2d *local_18;
  CVector2d *local_14;
  uint uVar25;
  
  bVar24 = 0;
  if (validate_first != 0) {
    iVar18 = (*this_ptr->vtable->weldVertices)(this_ptr,0.0001,1);
    if (iVar18 == 0) {
      return 0;
    }
  }
  local_30 = (CVector3d *)0x0;
  if (1000 < (uint)this_ptr->poly_count) {
    shape_memdbg_cpp_debugAlloc_FUN_0050f1d0(4);
  }
  local_28 = this_ptr->vertex_count;
  uVar25 = 0;
  local_2c = 0;
  if (this_ptr->poly_count != 0) {
    do {
      if ((local_30 != (CVector3d *)0x0) && ((char)uVar25 == '\0')) {
        local_2d0 = 0x5d4dbe;
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_174,"Deleting T-Junctions (%d deleted so far)",
                   "Deleting T-Junctions (%d deleted so far)",local_2c);
      }
      pCVar17 = this_ptr->poly_array;
      pCVar13 = this_ptr->vertex_data;
      pCVar1 = pCVar13 + pCVar17[uVar25].vertex_idx_0;
      pCVar15 = pCVar13 + pCVar17[uVar25].vertex_idx_1;
      this_ptr = (CObj *)(pCVar13 + pCVar17[uVar25].vertex_idx_2);
      if ((pCVar15->position).x <= (pCVar1->position).x) {
        local_264 = *(uint *)&(pCVar15->position).x;
        uVar11 = *(uint *)((int)&(pCVar15->position).x + 4);
      }
      else {
        local_264 = *(uint *)&(pCVar1->position).x;
        uVar11 = *(uint *)((int)&(pCVar1->position).x + 4);
      }
      if ((((CVert *)this_ptr)->position).x <= (double)CONCAT44 /* combine 2-byte values */(uVar11,local_264)) {
        iStack_25c = *(int *)&(((CVert *)this_ptr)->position).x;
        local_258 = *(CVert **)((int)&(((CVert *)this_ptr)->position).x + 4);
      }
      else {
        if ((pCVar15->position).x <= (pCVar1->position).x) {
          iStack_28c = *(int *)&(pCVar15->position).x;
          pCVar13 = pCVar15;
        }
        else {
          iStack_28c = *(int *)&(pCVar1->position).x;
          pCVar13 = pCVar1;
        }
        local_258 = *(CVert **)((int)&(pCVar13->position).x + 4);
        iStack_25c = iStack_28c;
      }
      local_1f4 = (double)CONCAT44 /* combine 2-byte values */(local_258,iStack_25c) + -0.0001;
      if ((pCVar15->position).y <= (pCVar1->position).y) {
        local_2a4 = *(uint *)&(pCVar15->position).y;
        pCVar13 = pCVar15;
      }
      else {
        local_2a4 = *(uint *)&(pCVar1->position).y;
        pCVar13 = pCVar1;
      }
      local_2a0 = *(uint *)((int)&(pCVar13->position).y + 4);
      if ((((CVert *)this_ptr)->position).y <= (double)CONCAT44 /* combine 2-byte values */(local_2a0,local_2a4)) {
        iStack_23c = *(int *)&(((CVert *)this_ptr)->position).y;
        pCVar12 = *(CPoly **)((int)&(((CVert *)this_ptr)->position).y + 4);
      }
      else {
        if ((pCVar15->position).y <= (pCVar1->position).y) {
          local_1ec = *(int *)&(pCVar15->position).y;
          pCVar13 = pCVar15;
        }
        else {
          local_1ec = *(int *)&(pCVar1->position).y;
          pCVar13 = pCVar1;
        }
        pCVar12 = *(CPoly **)((int)&(pCVar13->position).y + 4);
        iStack_23c = local_1ec;
        local_1e8 = pCVar12;
      }
      local_204 = (double)CONCAT44 /* combine 2-byte values */(pCVar12,iStack_23c) + -0.0001;
      if ((pCVar15->position).z <= (pCVar1->position).z) {
        local_274 = *(uint *)&(pCVar15->position).z;
        pCVar13 = pCVar15;
      }
      else {
        local_274 = *(uint *)&(pCVar1->position).z;
        pCVar13 = pCVar1;
      }
      uVar11 = *(uint *)((int)&(pCVar13->position).z + 4);
      if ((((CVert *)this_ptr)->position).z <= (double)CONCAT44 /* combine 2-byte values */(uVar11,local_274)) {
        local_218._4_4_ = *(uint *)&(((CVert *)this_ptr)->position).z;
        local_210 = *(CObj **)((int)&(((CVert *)this_ptr)->position).z + 4);
      }
      else {
        if ((pCVar15->position).z <= (pCVar1->position).z) {
          local_1e4 = *(int *)&(pCVar15->position).z;
          pCVar13 = pCVar15;
        }
        else {
          local_1e4 = *(int *)&(pCVar1->position).z;
          pCVar13 = pCVar1;
        }
        local_210 = *(CObj **)((int)&(pCVar13->position).z + 4);
        local_218._4_4_ = local_1e4;
        local_1e0.parent_obj = local_210;
      }
      local_20c = (double)CONCAT44 /* combine 2-byte values */(local_210,local_218._4_4_) + -0.0001;
      if ((pCVar1->position).x <= (pCVar15->position).x) {
        uStack_27c = *(uint *)&(pCVar15->position).x;
        pCVar13 = pCVar15;
      }
      else {
        uStack_27c = *(uint *)&(pCVar1->position).x;
        pCVar13 = pCVar1;
      }
      if ((double)CONCAT44 /* combine 2-byte values */(*(uint *)((int)&(pCVar13->position).x + 4),uStack_27c) <=
          (((CVert *)this_ptr)->position).x) {
        iStack_24c = *(int *)&(((CVert *)this_ptr)->position).x;
        pCVar13 = *(CVert **)((int)&(((CVert *)this_ptr)->position).x + 4);
      }
      else {
        if ((pCVar1->position).x <= (pCVar15->position).x) {
          iStack_244 = *(int *)&(pCVar15->position).x;
          pCVar13 = pCVar15;
        }
        else {
          iStack_244 = *(int *)&(pCVar1->position).x;
          pCVar13 = pCVar1;
        }
        pCVar13 = *(CVert **)((int)&(pCVar13->position).x + 4);
        iStack_24c = iStack_244;
        local_240 = pCVar13;
      }
      dVar2 = (double)CONCAT44 /* combine 2-byte values */(pCVar13,iStack_24c) + 0.0001;
      if ((pCVar1->position).y <= (pCVar15->position).y) {
        uStack_2b4 = *(uint *)&(pCVar15->position).y;
        pCVar14 = pCVar15;
      }
      else {
        uStack_2b4 = *(uint *)&(pCVar1->position).y;
        pCVar14 = pCVar1;
      }
      local_2b0 = *(uint *)((int)&(pCVar14->position).y + 4);
      if ((double)CONCAT44 /* combine 2-byte values */(local_2b0,uStack_2b4) <= (((CVert *)this_ptr)->position).y) {
        iStack_29c = *(int *)&(((CVert *)this_ptr)->position).y;
      }
      else {
        if ((pCVar1->position).y <= (pCVar15->position).y) {
          iStack_284 = *(int *)&(pCVar15->position).y;
        }
        else {
          iStack_284 = *(int *)&(pCVar1->position).y;
        }
        iStack_29c = iStack_284;
      }
      if ((pCVar1->position).z <= (pCVar15->position).z) {
        uStack_294 = *(uint *)&(pCVar15->position).z;
        pCVar14 = pCVar15;
      }
      else {
        uStack_294 = *(uint *)&(pCVar1->position).z;
        pCVar14 = pCVar1;
      }
      if ((double)CONCAT44 /* combine 2-byte values */(*(uint *)((int)&(pCVar14->position).z + 4),uStack_294) <=
          (((CVert *)this_ptr)->position).z) {
        iStack_2bc = *(int *)&(((CVert *)this_ptr)->position).z;
        local_2b8 = *(int *)((int)&(((CVert *)this_ptr)->position).z + 4);
      }
      else {
        if ((pCVar1->position).z <= (pCVar15->position).z) {
          iStack_254 = *(int *)&(pCVar15->position).z;
        }
        else {
          iStack_254 = *(int *)&(pCVar1->position).z;
          pCVar15 = pCVar1;
        }
        local_2b8 = *(int *)((int)&(pCVar15->position).z + 4);
        iStack_2bc = iStack_254;
        local_250 = local_2b8;
      }
      pvVar19 = (void *)0x0;
      local_1fc = (byte  [8])((double)CONCAT44 /* combine 2-byte values */(local_2b8,iStack_2bc) + 0.0001);
      if (*(int *)&(((CVert *)this_ptr)->position).x != 0) {
        local_18 = pCVar17[uVar25].uv_coords + 2;
        local_14 = pCVar17[uVar25].uv_coords + 1;
        local_20 = pCVar17[uVar25].uv_coords;
        do {
          if (((pvVar19 != local_4c) && (pvVar19 != local_48)) && (pvVar19 != local_50)) {
            puVar21 = (uint *)
                      ((int)&local_40->x +
                      (int)&(*(CVert **)((int)&(((CVert *)this_ptr)->position).x + 4))->position);
            puVar23 = (uint *)auStack_130;
            for (iVar18 = 6; iVar18 != 0; iVar18 = iVar18 + -1) {
              *puVar23 = *puVar21;
              puVar21 = puVar21 + (uint)bVar24 * -2 + 1;
              puVar23 = puVar23 + (uint)bVar24 * -2 + 1;
            }
            if (((((double)CONCAT44 /* combine 2-byte values */(pCVar12,iStack_23c) <=
                   (double)CONCAT44 /* combine 2-byte values */(auStack_130._4_4_,auStack_130._0_4_)) &&
                 ((double)CONCAT44 /* combine 2-byte values */(auStack_130._4_4_,auStack_130._0_4_) <=
                  (double)CONCAT44 /* combine 2-byte values */(local_2b0,uStack_2b4))) &&
                (((double)CONCAT44 /* combine 2-byte values */(pCVar13,iStack_24c) <=
                  (double)CONCAT44 /* combine 2-byte values */(auStack_128._4_4_,auStack_128._0_4_) &&
                 (((double)CONCAT44 /* combine 2-byte values */(auStack_128._4_4_,auStack_128._0_4_) <=
                   (double)CONCAT44 /* combine 2-byte values */(uVar11,local_274) &&
                  ((double)CONCAT44 /* combine 2-byte values */(local_250,iStack_254) <=
                   (double)CONCAT44 /* combine 2-byte values */(auStack_128._12_4_,auStack_128._8_4_))))))) &&
               ((double)CONCAT44 /* combine 2-byte values */(auStack_128._12_4_,auStack_128._8_4_) <=
                (double)CONCAT44 /* combine 2-byte values */(local_240,iStack_244))) {
              iVar18 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                 ((CVector3d *)auStack_130,local_38,local_3c);
              if (iVar18 == 0) {
                iVar18 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                   ((CVector3d *)(auStack_130 + 4),local_38,local_40);
                pCVar10 = local_30;
                local_268 = (uint)((ulonglong)dVar2 >> 0x20);
                if (iVar18 == 0) {
                  iVar18 = shape_superopt_cpp_isPointOnLineSegment_FUN_005d6c10
                                     ((CVector3d *)auStack_128,local_3c,local_30);
                  if (iVar18 == 0) goto LAB_005d4d06;
                  local_13c = *(uint *)&local_38->x;
                  uStack_138 = *(uint *)((int)&local_38->x + 4);
                  local_134 = *(uint *)&local_38->y;
                  auStack_130._0_4_ = *(uint *)((int)&local_38->y + 4);
                  auStack_130._4_4_ = *(uint *)&local_38->z;
                  auStack_128._0_4_ = *(uint *)((int)&local_38->z + 4);
                  uStack_154 = *(uint *)&pCVar10->x;
                  uStack_150 = *(uint *)((int)&pCVar10->x + 4);
                  uStack_14c = *(uint *)&pCVar10->y;
                  uStack_148 = *(uint *)((int)&pCVar10->y + 4);
                  uStack_144 = *(uint *)&pCVar10->z;
                  uStack_140 = *(uint *)((int)&pCVar10->z + 4);
                  local_258 = (CVert *)*puStack_5c;
                  iStack_254 = puStack_5c[1];
                  uStack_60 = 1;
                  iStack_58 = 0;
                }
                else {
                  uStack_140 = *local_34;
                  local_13c = local_34[1];
                  uStack_138 = local_34[2];
                  local_134 = local_34[3];
                  auStack_130._0_4_ = local_34[4];
                  auStack_130._4_4_ = local_34[5];
                  local_264 = *local_54;
                  uStack_158 = *(uint *)&local_3c->x;
                  uStack_154 = *(uint *)((int)&local_3c->x + 4);
                  uStack_150 = *(uint *)&local_3c->y;
                  uStack_14c = *(uint *)((int)&local_3c->y + 4);
                  uStack_148 = *(uint *)&local_3c->z;
                  uStack_144 = *(uint *)((int)&local_3c->z + 4);
                  local_258 = *(CVert **)(iStack_58 + 4);
                  puStack_64 = (uint *)0x0;
                  puStack_5c = (uint *)&DAT_00000002;
                }
              }
              else {
                uStack_60 = 1;
                uStack_144 = *local_34;
                uStack_140 = local_34[1];
                local_13c = local_34[2];
                uStack_138 = local_34[3];
                local_134 = local_34[4];
                auStack_130._0_4_ = local_34[5];
                local_268 = *puStack_64;
                local_264 = puStack_64[1];
                uStack_15c = *(uint *)&local_38->x;
                uStack_158 = *(uint *)((int)&local_38->x + 4);
                uStack_154 = *(uint *)&local_38->y;
                uStack_150 = *(uint *)((int)&local_38->y + 4);
                uStack_14c = *(uint *)&local_38->z;
                uStack_148 = *(uint *)((int)&local_38->z + 4);
                uStack_68 = 2;
              }
              puStack_64 = (uint *)((int)puStack_64 + -1);
              if ((int)puStack_64 < 1) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(pvStack_6c);
                return 0;
              }
              shape_superopt_cpp_CPoly_ctor_FUN_005cc620((CPoly *)local_218);
              shape_superopt_cpp_CPoly_copyFrom_FUN_005cc6a0
                        ((CPoly *)(local_218 + 4),local_44,this_ptr);
              pCVar10 = local_40;
              dVar2 = (double)CONCAT44 /* combine 2-byte values */(uStack_148,uStack_14c) -
                      (double)CONCAT44 /* combine 2-byte values */(auStack_130._0_4_,local_134);
              dVar7 = (double)CONCAT44 /* combine 2-byte values */(uStack_140,uStack_144) -
                      (double)CONCAT44 /* combine 2-byte values */(auStack_128._0_4_,auStack_130._4_4_);
              local_20c = (double)CONCAT44 /* combine 2-byte values */(*(uint *)
                                            ((int)&local_40->x + (int)local_50 * 4 + 4),pvVar19);
              dVar6 = (double)CONCAT44 /* combine 2-byte values */(uStack_138,local_13c) -
                      (double)CONCAT44 /* combine 2-byte values */(auStack_128._8_4_,auStack_128._4_4_);
              local_204._0_4_ = *(uint *)((int)&local_40->x + iStack_58 * 4 + 4);
              *(void **)((int)&local_40->x + (int)local_50 * 4 + 4) = pvVar19;
              dVar3 = (double)CONCAT44 /* combine 2-byte values */(auStack_128._16_4_,auStack_128._12_4_) -
                      (double)CONCAT44 /* combine 2-byte values */(auStack_130._0_4_,local_134);
              dVar4 = (double)auStack_128._20_8_ -
                      (double)CONCAT44 /* combine 2-byte values */(auStack_128._0_4_,auStack_130._4_4_);
              dVar5 = local_10c - (double)CONCAT44 /* combine 2-byte values */(auStack_128._8_4_,auStack_128._4_4_);
              local_104 = (double)CONCAT44 /* combine 2-byte values */(iStack_24c,local_250) -
                          (double)CONCAT44 /* combine 2-byte values */(iStack_254,local_258);
              dVar8 = (double)CONCAT44 /* combine 2-byte values */(uStack_2dc,in_stack_fffffd20);
              dVar9 = local_104;
              local_fc = (double)CONCAT44 /* combine 2-byte values */(local_264,local_268) - dVar8;
              local_d4 = (uint)local_104;
              (&uStack_d0)[(uint)bVar24 * -2] =
                   *(uint *)((int)&local_104 + (uint)bVar24 * -8 + 4);
              local_104 = dVar9;
              *(uint *)(&local_cc + (-(uint)bVar24 - (uint)bVar24)) =
                   *(uint *)(&local_fc + (-(uint)bVar24 - (uint)bVar24));
              *(uint *)
               ((int)(&local_cc + (-(uint)bVar24 - (uint)bVar24)) + ((uint)bVar24 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&local_fc + (-(uint)bVar24 - (uint)bVar24)) + ((uint)bVar24 * -2 + 1) * 4
                    );
              dVar2 = SQRT(dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3) /
                      SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar2 * dVar2);
              local_b4 = (double)CONCAT44 /* combine 2-byte values */(uStack_d0,local_d4) * dVar2;
              dVar3 = local_b4;
              local_ac[0] = local_cc * dVar2;
              auStack_f0[3] = (uint)local_b4;
              local_b4 = dVar3;
              auStack_f0[(uint)bVar24 * -2 + 4] =
                   *(uint *)((int)&local_b4 + (uint)bVar24 * -8 + 4);
              *(uint *)(&local_dc + (-(uint)bVar24 - (uint)bVar24)) =
                   *(uint *)(local_ac + (-(uint)bVar24 - (uint)bVar24));
              *(uint *)
               ((int)(&local_dc + (-(uint)bVar24 - (uint)bVar24)) + ((uint)bVar24 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(local_ac + (-(uint)bVar24 - (uint)bVar24)) + ((uint)bVar24 * -2 + 1) * 4)
              ;
              local_c4 = (double)CONCAT44 /* combine 2-byte values */(iStack_254,local_258) +
                         (double)CONCAT44 /* combine 2-byte values */(local_e0,auStack_f0[3]);
              dVar2 = local_c4;
              local_bc = dVar8 + local_dc;
              local_f4 = (uint)local_c4;
              local_c4 = dVar2;
              auStack_f0[(uint)bVar24 * -2] =
                   *(uint *)((int)&local_c4 + (uint)bVar24 * -8 + 4);
              auStack_f0[(uint)bVar24 * -2 + (uint)bVar24 * -2 + 1] =
                   *(uint *)(&local_bc + (-(uint)bVar24 - (uint)bVar24));
              (auStack_f0 + (uint)bVar24 * -2 + (uint)bVar24 * -2 + 1)[(uint)bVar24 * -2 + 1] =
                   *(uint *)
                    ((int)(&local_bc + (-(uint)bVar24 - (uint)bVar24)) + ((uint)bVar24 * -2 + 1) * 4
                    );
              local_204 = (double)CONCAT44 /* combine 2-byte values */(local_f4,(uint)local_204);
              local_1fc._4_4_ = auStack_f0[1];
              local_1fc._0_4_ = auStack_f0[0];
              pdVar20 = &pCVar10->z + (int)local_50 * 2;
              local_1f4 = (double)CONCAT44 /* combine 2-byte values */(*(uint *)pdVar20,auStack_f0[2]);
              local_1ec = *(int *)((int)pdVar20 + 4);
              local_1e8 = *(CPoly **)(pdVar20 + 1);
              local_1e4 = *(int *)((int)pdVar20 + 0xc);
              pdVar22 = &pCVar10->z + iStack_58 * 2;
              local_1e0.parent_obj = *(CObj **)pdVar22;
              local_1e0.vertex_idx_0 = *(int *)((int)pdVar22 + 4);
              local_1e0.vertex_idx_1 = *(int *)(pdVar22 + 1);
              local_1e0.vertex_idx_2 = *(int *)((int)pdVar22 + 0xc);
              *(uint *)pdVar20 = local_f4;
              *(uint *)((int)pdVar20 + 4) = auStack_f0[0];
              *(uint *)(pdVar20 + 1) = auStack_f0[1];
              *(uint *)((int)pdVar20 + 0xc) = auStack_f0[2];
              iVar18 = *(int *)&(((CVert *)this_ptr)->position).y;
              iVar16 = (*(*(CObj_vtable **)&(((CVert *)this_ptr)->orig_position).x)->addPolygons)
                                 (this_ptr,1);
              if (iVar16 == 0) {
                shape_memdbg_cpp_debugFree_FUN_0050f210(local_50);
                uStack_2dc = 0;
                shape_superopt_cpp_CPoly_dtor_FUN_005cc660((CPoly *)(local_1fc + 4));
                return 0;
              }
              pCVar17 = *(CPoly **)((int)&(((CVert *)this_ptr)->position).y + 4) + iVar18;
              in_stack_fffffd20 = (CVert *)this_ptr;
              (*pCVar17->vtable->copyFrom)(pCVar17,(CPoly *)local_1fc,this_ptr);
              local_14 = (CVector2d *)((int)&local_14[-1].y + 7);
              local_30 = (CVector3d *)((int)&local_30->x + 1);
              shape_superopt_cpp_CPoly_dtor_FUN_005cc660(&local_1e0);
              break;
            }
          }
LAB_005d4d06:
          pvVar19 = (void *)((int)pvVar19 + 1);
        } while (pvVar19 < *(void **)&(((CVert *)this_ptr)->position).x);
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 < *(uint *)&(((CVert *)this_ptr)->position).y);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(local_30);
  return 1;
}
