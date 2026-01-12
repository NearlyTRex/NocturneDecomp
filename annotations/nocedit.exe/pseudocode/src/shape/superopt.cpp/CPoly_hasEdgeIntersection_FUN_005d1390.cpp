// Name: shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390
// Address: 005d1390
// Address Range: [[005d1390, 005d1f9a]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_hasEdgeIntersection_FUN_005d1390(CPoly * this_ptr, CPoly * other)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_hasEdgeIntersection_FUN_005d1390(CPoly *this_ptr,CPoly *other)

{
  CVert *pCVar1;
  CVert *pCVar2;
  CVert *pCVar3;
  int iVar4;
  CVert *pCVar5;
  BADSPACEBASE *in_ESP;
  double dStack_1cc;
  double dStack_1c4;
  double dStack_1ac;
  byte auStack_19c [12];
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  CVector2d CStack_17c;
  CVector2d CStack_16c;
  byte auStack_15c [4];
  int local_158;
  int local_154;
  uint local_150;
  CVector2d CStack_14c;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  int local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  int local_100;
  uint local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  CVert *local_18;
  CVert *pCStack_14;
  
  if (0.0 <= (this_ptr->normal).x) {
    dStack_1cc = (this_ptr->normal).x;
  }
  else {
    dStack_1cc = -(this_ptr->normal).x;
  }
  if ((this_ptr->normal).y < 0.0) {
    dStack_1c4 = -(this_ptr->normal).y;
  }
  else {
    dStack_1c4 = (this_ptr->normal).y;
  }
  if ((this_ptr->normal).z < 0.0) {
    dStack_1ac = -(this_ptr->normal).z;
  }
  else {
    dStack_1ac = (this_ptr->normal).z;
  }
  pCVar3 = this_ptr->parent_obj->vertex_data;
  local_18 = pCVar3 + this_ptr->vertex_idx_0;
  pCStack_14 = pCVar3 + this_ptr->vertex_idx_1;
  pCVar3 = pCVar3 + this_ptr->vertex_idx_2;
  pCVar5 = other->parent_obj->vertex_data;
  pCVar1 = pCVar5 + other->vertex_idx_0;
  pCVar2 = pCVar5 + other->vertex_idx_1;
  local_1c = other->vertex_idx_2 * 8;
  pCVar5 = pCVar5 + other->vertex_idx_2;
  if ((dStack_1cc < dStack_1c4) || (dStack_1cc < dStack_1ac)) {
    if ((dStack_1c4 < dStack_1cc) || (dStack_1c4 < dStack_1ac)) {
      CStack_17c.x._0_4_ = *(uint *)&(local_18->position).x;
      CStack_17c.x._4_4_ = *(uint *)((int)&(local_18->position).x + 4);
      CStack_17c.y._0_4_ = *(uint *)&(local_18->position).y;
      CStack_17c.y._4_4_ = *(uint *)((int)&(local_18->position).y + 4);
      auStack_19c._0_4_ = *(uint *)&(pCStack_14->position).x;
      auStack_19c._4_4_ = *(uint *)((int)&(pCStack_14->position).x + 4);
      auStack_19c._8_4_ = *(uint *)&(pCStack_14->position).y;
      local_190 = *(int *)((int)&(pCStack_14->position).y + 4);
      local_18c = *(int *)&(pCVar3->position).x;
      local_188 = *(int *)((int)&(pCVar3->position).x + 4);
      local_184 = *(int *)&(pCVar3->position).y;
      local_180 = *(uint *)((int)&(pCVar3->position).y + 4);
      CStack_14c.x._0_4_ = *(uint *)&(pCVar1->position).x;
      CStack_14c.x._4_4_ = *(uint *)((int)&(pCVar1->position).x + 4);
      CStack_14c.y._0_4_ = *(uint *)&(pCVar1->position).y;
      CStack_14c.y._4_4_ = *(uint *)((int)&(pCVar1->position).y + 4);
      CStack_16c.x._0_4_ = *(uint *)&(pCVar2->position).x;
      CStack_16c.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
      CStack_16c.y._0_4_ = *(uint *)&(pCVar2->position).y;
      CStack_16c.y._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
      auStack_15c = *(byte (*) [4])&(pCVar5->position).x;
      local_158 = *(int *)((int)&(pCVar5->position).x + 4);
      local_154 = *(int *)&(pCVar5->position).y;
      local_150 = *(uint *)((int)&(pCVar5->position).y + 4);
      local_134 = CStack_17c.x._0_4_;
      local_130 = CStack_17c.x._4_4_;
      local_11c = CStack_17c.y._0_4_;
      local_118 = CStack_17c.y._4_4_;
      local_114 = auStack_19c._0_4_;
      local_110 = auStack_19c._4_4_;
      local_ac = auStack_19c._8_4_;
      local_a8 = local_190;
      local_7c = CStack_16c.y._0_4_;
      local_78 = CStack_16c.y._4_4_;
      local_74 = auStack_15c;
      local_70 = local_158;
      local_6c = local_154;
      local_68 = local_150;
      local_64 = CStack_14c.x._0_4_;
      local_60 = CStack_14c.x._4_4_;
      local_5c = CStack_14c.y._0_4_;
      local_58 = CStack_14c.y._4_4_;
      local_54 = CStack_16c.x._0_4_;
      local_50 = CStack_16c.x._4_4_;
      local_4c = local_184;
      local_48 = local_180;
      local_34 = local_18c;
      local_30 = local_188;
    }
    else {
      CStack_17c.x._0_4_ = *(uint *)&(local_18->position).x;
      CStack_17c.x._4_4_ = *(uint *)((int)&(local_18->position).x + 4);
      CStack_17c.y._0_4_ = *(uint *)&(local_18->position).z;
      CStack_17c.y._4_4_ = *(uint *)((int)&(local_18->position).z + 4);
      auStack_19c._0_4_ = *(uint *)&(pCStack_14->position).x;
      auStack_19c._4_4_ = *(uint *)((int)&(pCStack_14->position).x + 4);
      auStack_19c._8_4_ = *(uint *)&(pCStack_14->position).z;
      local_190 = *(int *)((int)&(pCStack_14->position).z + 4);
      local_18c = *(int *)&(pCVar3->position).x;
      local_188 = *(int *)((int)&(pCVar3->position).x + 4);
      local_184 = *(int *)&(pCVar3->position).z;
      local_180 = *(uint *)((int)&(pCVar3->position).z + 4);
      CStack_14c.x._0_4_ = *(uint *)&(pCVar1->position).x;
      CStack_14c.x._4_4_ = *(uint *)((int)&(pCVar1->position).x + 4);
      CStack_14c.y._0_4_ = *(uint *)&(pCVar1->position).z;
      CStack_14c.y._4_4_ = *(uint *)((int)&(pCVar1->position).z + 4);
      CStack_16c.x._0_4_ = *(uint *)&(pCVar2->position).x;
      CStack_16c.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
      CStack_16c.y._0_4_ = *(uint *)&(pCVar2->position).z;
      CStack_16c.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
      auStack_15c = *(byte (*) [4])&(pCVar5->position).x;
      local_158 = *(int *)((int)&(pCVar5->position).x + 4);
      local_154 = *(int *)&(pCVar5->position).z;
      local_150 = *(uint *)((int)&(pCVar5->position).z + 4);
      local_13c = CStack_16c.x._0_4_;
      local_138 = CStack_16c.x._4_4_;
      local_12c = CStack_14c.y._0_4_;
      local_128 = CStack_14c.y._4_4_;
      local_124 = local_154;
      local_120 = local_150;
      local_10c = CStack_16c.y._0_4_;
      local_108 = CStack_16c.y._4_4_;
      local_104 = auStack_15c;
      local_100 = local_158;
      local_b4 = CStack_17c.x._0_4_;
      local_b0 = CStack_17c.x._4_4_;
      local_8c = local_184;
      local_88 = local_180;
      local_84 = CStack_14c.x._0_4_;
      local_80 = CStack_14c.x._4_4_;
      local_44 = auStack_19c._0_4_;
      local_40 = auStack_19c._4_4_;
      local_3c = CStack_17c.y._0_4_;
      local_38 = CStack_17c.y._4_4_;
      local_2c = local_18c;
      local_28 = local_188;
      local_24 = auStack_19c._8_4_;
      local_20 = local_190;
    }
  }
  else {
    CStack_17c.x._0_4_ = *(uint *)&(local_18->position).y;
    CStack_17c.x._4_4_ = *(uint *)((int)&(local_18->position).y + 4);
    CStack_17c.y._0_4_ = *(uint *)&(local_18->position).z;
    CStack_17c.y._4_4_ = *(uint *)((int)&(local_18->position).z + 4);
    auStack_19c._0_4_ = *(uint *)&(pCStack_14->position).y;
    auStack_19c._4_4_ = *(uint *)((int)&(pCStack_14->position).y + 4);
    auStack_19c._8_4_ = *(uint *)&(pCStack_14->position).z;
    local_190 = *(int *)((int)&(pCStack_14->position).z + 4);
    local_18c = *(int *)&(pCVar3->position).y;
    local_188 = *(int *)((int)&(pCVar3->position).y + 4);
    local_184 = *(int *)&(pCVar3->position).z;
    local_180 = *(uint *)((int)&(pCVar3->position).z + 4);
    CStack_14c.x._0_4_ = *(uint *)&(pCVar1->position).y;
    CStack_14c.x._4_4_ = *(uint *)((int)&(pCVar1->position).y + 4);
    CStack_14c.y._0_4_ = *(uint *)&(pCVar1->position).z;
    CStack_14c.y._4_4_ = *(uint *)((int)&(pCVar1->position).z + 4);
    CStack_16c.x._0_4_ = *(uint *)&(pCVar2->position).y;
    CStack_16c.x._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
    CStack_16c.y._0_4_ = *(uint *)&(pCVar2->position).z;
    CStack_16c.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
    auStack_15c = *(byte (*) [4])&(pCVar5->position).y;
    local_158 = *(int *)((int)&(pCVar5->position).y + 4);
    local_154 = *(int *)&(pCVar5->position).z;
    local_150 = *(uint *)((int)&(pCVar5->position).z + 4);
    local_fc = auStack_19c._8_4_;
    local_f8 = local_190;
    local_f4 = local_18c;
    local_f0 = local_188;
    local_ec = local_184;
    local_e8 = local_180;
    local_e4 = CStack_14c.x._0_4_;
    local_e0 = CStack_14c.x._4_4_;
    local_dc = CStack_14c.y._0_4_;
    local_d8 = CStack_14c.y._4_4_;
    local_d4 = CStack_16c.x._0_4_;
    local_d0 = CStack_16c.x._4_4_;
    local_cc = CStack_16c.y._0_4_;
    local_c8 = CStack_16c.y._4_4_;
    local_c4 = auStack_15c;
    local_c0 = local_158;
    local_bc = local_154;
    local_b8 = local_150;
    local_a4 = CStack_17c.x._0_4_;
    local_a0 = CStack_17c.x._4_4_;
    local_9c = CStack_17c.y._0_4_;
    local_98 = CStack_17c.y._4_4_;
    local_94 = auStack_19c._0_4_;
    local_90 = auStack_19c._4_4_;
  }
  if ((((((((double)CONCAT44 /* combine 2-byte values */(CStack_17c.x._4_4_,CStack_17c.x._0_4_) ==
            (double)CONCAT44 /* combine 2-byte values */(CStack_16c.x._4_4_,CStack_16c.x._0_4_)) &&
          ((double)CONCAT44 /* combine 2-byte values */(CStack_17c.y._4_4_,CStack_17c.y._0_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_16c.y._4_4_,CStack_16c.y._0_4_))) ||
         (((double)CONCAT44 /* combine 2-byte values */(auStack_19c._4_4_,auStack_19c._0_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_14c.x._4_4_,CStack_14c.x._0_4_) &&
          ((double)CONCAT44 /* combine 2-byte values */(local_190,auStack_19c._8_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_14c.y._4_4_,CStack_14c.y._0_4_))))) ||
        (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                           (&CStack_17c,(CVector2d *)auStack_19c,&CStack_14c,&CStack_16c),
        iVar4 == 0)) &&
       ((((double)CONCAT44 /* combine 2-byte values */(CStack_17c.x._4_4_,CStack_17c.x._0_4_) ==
          (double)CONCAT44 /* combine 2-byte values */(local_158,auStack_15c) &&
         ((double)CONCAT44 /* combine 2-byte values */(CStack_17c.y._4_4_,CStack_17c.y._0_4_) ==
          (double)CONCAT44 /* combine 2-byte values */(local_150,local_154))) ||
        ((((double)CONCAT44 /* combine 2-byte values */(auStack_19c._4_4_,auStack_19c._0_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_16c.x._4_4_,CStack_16c.x._0_4_) &&
          ((double)CONCAT44 /* combine 2-byte values */(local_190,auStack_19c._8_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_16c.y._4_4_,CStack_16c.y._0_4_))) ||
         (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                            (&CStack_17c,(CVector2d *)auStack_19c,&CStack_16c,
                             (CVector2d *)auStack_15c), iVar4 == 0)))))) &&
      (((((((double)CONCAT44 /* combine 2-byte values */(CStack_17c.x._4_4_,CStack_17c.x._0_4_) ==
            (double)CONCAT44 /* combine 2-byte values */(CStack_14c.x._4_4_,CStack_14c.x._0_4_) &&
           ((double)CONCAT44 /* combine 2-byte values */(CStack_17c.y._4_4_,CStack_17c.y._0_4_) ==
            (double)CONCAT44 /* combine 2-byte values */(CStack_14c.y._4_4_,CStack_14c.y._0_4_))) ||
          (((double)CONCAT44 /* combine 2-byte values */(auStack_19c._4_4_,auStack_19c._0_4_) ==
            (double)CONCAT44 /* combine 2-byte values */(local_158,auStack_15c) &&
           ((double)CONCAT44 /* combine 2-byte values */(local_190,auStack_19c._8_4_) == (double)CONCAT44 /* combine 2-byte values */(local_150,local_154)))
          )) || (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                   (&CStack_17c,(CVector2d *)auStack_19c,(CVector2d *)auStack_15c,
                                    &CStack_14c), iVar4 == 0)) &&
        (((((double)CONCAT44 /* combine 2-byte values */(auStack_19c._4_4_,auStack_19c._0_4_) ==
            (double)CONCAT44 /* combine 2-byte values */(local_158,auStack_15c) &&
           ((double)CONCAT44 /* combine 2-byte values */(local_190,auStack_19c._8_4_) == (double)CONCAT44 /* combine 2-byte values */(local_150,local_154)))
          || ((((double)CONCAT44 /* combine 2-byte values */(local_188,local_18c) ==
                (double)CONCAT44 /* combine 2-byte values */(CStack_16c.x._4_4_,CStack_16c.x._0_4_) &&
               ((double)CONCAT44 /* combine 2-byte values */(local_180,local_184) ==
                (double)CONCAT44 /* combine 2-byte values */(CStack_16c.y._4_4_,CStack_16c.y._0_4_))) ||
              (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                 ((CVector2d *)auStack_19c,(CVector2d *)&local_18c,&CStack_16c,
                                  (CVector2d *)auStack_15c), iVar4 == 0)))) &&
         ((((((double)CONCAT44 /* combine 2-byte values */(auStack_19c._4_4_,auStack_19c._0_4_) ==
              (double)CONCAT44 /* combine 2-byte values */(CStack_14c.x._4_4_,CStack_14c.x._0_4_) &&
             ((double)CONCAT44 /* combine 2-byte values */(local_190,auStack_19c._8_4_) ==
              (double)CONCAT44 /* combine 2-byte values */(CStack_14c.y._4_4_,CStack_14c.y._0_4_))) ||
            (((double)CONCAT44 /* combine 2-byte values */(local_188,local_18c) == (double)CONCAT44 /* combine 2-byte values */(local_158,auStack_15c) &&
             ((double)CONCAT44 /* combine 2-byte values */(local_180,local_184) == (double)CONCAT44 /* combine 2-byte values */(local_150,local_154))))) ||
           (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                              ((CVector2d *)auStack_19c,(CVector2d *)&local_18c,
                               (CVector2d *)auStack_15c,&CStack_14c), iVar4 == 0)) &&
          ((((((double)CONCAT44 /* combine 2-byte values */(auStack_19c._4_4_,auStack_19c._0_4_) ==
               (double)CONCAT44 /* combine 2-byte values */(CStack_16c.x._4_4_,CStack_16c.x._0_4_) &&
              ((double)CONCAT44 /* combine 2-byte values */(local_190,auStack_19c._8_4_) ==
               (double)CONCAT44 /* combine 2-byte values */(CStack_16c.y._4_4_,CStack_16c.y._0_4_))) ||
             (((double)CONCAT44 /* combine 2-byte values */(local_188,local_18c) ==
               (double)CONCAT44 /* combine 2-byte values */(CStack_14c.x._4_4_,CStack_14c.x._0_4_) &&
              ((double)CONCAT44 /* combine 2-byte values */(local_180,local_184) ==
               (double)CONCAT44 /* combine 2-byte values */(CStack_14c.y._4_4_,CStack_14c.y._0_4_))))) ||
            (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                               ((CVector2d *)auStack_19c,(CVector2d *)&local_18c,&CStack_14c,
                                &CStack_16c), iVar4 == 0)) &&
           (((((double)CONCAT44 /* combine 2-byte values */(local_188,local_18c) ==
               (double)CONCAT44 /* combine 2-byte values */(CStack_14c.x._4_4_,CStack_14c.x._0_4_) &&
              ((double)CONCAT44 /* combine 2-byte values */(local_180,local_184) ==
               (double)CONCAT44 /* combine 2-byte values */(CStack_14c.y._4_4_,CStack_14c.y._0_4_))) ||
             (((double)CONCAT44 /* combine 2-byte values */(CStack_17c.x._4_4_,CStack_17c.x._0_4_) ==
               (double)CONCAT44 /* combine 2-byte values */(local_158,auStack_15c) &&
              ((double)CONCAT44 /* combine 2-byte values */(CStack_17c.y._4_4_,CStack_17c.y._0_4_) ==
               (double)CONCAT44 /* combine 2-byte values */(local_150,local_154))))) ||
            (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                               ((CVector2d *)&local_18c,&CStack_17c,(CVector2d *)auStack_15c,
                                &CStack_14c), iVar4 == 0)))))))))) &&
       ((((double)CONCAT44 /* combine 2-byte values */(local_188,local_18c) ==
          (double)CONCAT44 /* combine 2-byte values */(CStack_16c.x._4_4_,CStack_16c.x._0_4_) &&
         ((double)CONCAT44 /* combine 2-byte values */(local_180,local_184) ==
          (double)CONCAT44 /* combine 2-byte values */(CStack_16c.y._4_4_,CStack_16c.y._0_4_))) ||
        ((((double)CONCAT44 /* combine 2-byte values */(CStack_17c.x._4_4_,CStack_17c.x._0_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_14c.x._4_4_,CStack_14c.x._0_4_) &&
          ((double)CONCAT44 /* combine 2-byte values */(CStack_17c.y._4_4_,CStack_17c.y._0_4_) ==
           (double)CONCAT44 /* combine 2-byte values */(CStack_14c.y._4_4_,CStack_14c.y._0_4_))) ||
         (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                            ((CVector2d *)&local_18c,&CStack_17c,&CStack_14c,&CStack_16c),
         iVar4 == 0)))))))) &&
     (((((double)CONCAT44 /* combine 2-byte values */(local_188,local_18c) == (double)CONCAT44 /* combine 2-byte values */(local_158,auStack_15c) &&
        ((double)CONCAT44 /* combine 2-byte values */(local_180,local_184) == (double)CONCAT44 /* combine 2-byte values */(local_150,local_154))) ||
       (((double)CONCAT44 /* combine 2-byte values */(CStack_17c.x._4_4_,CStack_17c.x._0_4_) ==
         (double)CONCAT44 /* combine 2-byte values */(CStack_16c.x._4_4_,CStack_16c.x._0_4_) &&
        ((double)CONCAT44 /* combine 2-byte values */(CStack_17c.y._4_4_,CStack_17c.y._0_4_) ==
         (double)CONCAT44 /* combine 2-byte values */(CStack_16c.y._4_4_,CStack_16c.y._0_4_))))) ||
      (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                         ((CVector2d *)&local_18c,&CStack_17c,&CStack_16c,(CVector2d *)auStack_15c),
      iVar4 == 0)))) {
    return 0;
  }
  return 1;
}
