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
  double local_1d0;
  double local_1c8;
  double local_1b0;
  CVector2d local_1a0;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  CVector2d local_180;
  CVector2d local_170;
  byte local_160 [8];
  int local_158;
  int local_154;
  CVector2d local_150;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  int local_124;
  uint local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
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
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
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
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  CVert *local_1c;
  CVert *local_18;
  
  if (0.0 <= (this_ptr->normal).x) {
    local_1d0 = (this_ptr->normal).x;
  }
  else {
    local_1d0 = -(this_ptr->normal).x;
  }
  if ((this_ptr->normal).y < 0.0) {
    local_1c8 = -(this_ptr->normal).y;
  }
  else {
    local_1c8 = (this_ptr->normal).y;
  }
  if ((this_ptr->normal).z < 0.0) {
    local_1b0 = -(this_ptr->normal).z;
  }
  else {
    local_1b0 = (this_ptr->normal).z;
  }
  pCVar3 = this_ptr->parent_obj->vertex_data;
  local_1c = pCVar3 + this_ptr->vertex_idx_0;
  local_18 = pCVar3 + this_ptr->vertex_idx_1;
  pCVar3 = pCVar3 + this_ptr->vertex_idx_2;
  pCVar5 = other->parent_obj->vertex_data;
  pCVar1 = pCVar5 + other->vertex_idx_0;
  pCVar2 = pCVar5 + other->vertex_idx_1;
  local_20 = other->vertex_idx_2 * 8;
  pCVar5 = pCVar5 + other->vertex_idx_2;
  if ((local_1d0 < local_1c8) || (local_1d0 < local_1b0)) {
    if ((local_1c8 < local_1d0) || (local_1c8 < local_1b0)) {
      local_180.x._0_4_ = *(uint *)&(local_1c->position).x;
      local_180.x._4_4_ = *(uint *)((int)&(local_1c->position).x + 4);
      local_180.y._0_4_ = *(uint *)&(local_1c->position).y;
      local_180.y._4_4_ = *(uint *)((int)&(local_1c->position).y + 4);
      local_1a0.x._0_4_ = *(uint *)&(local_18->position).x;
      local_1a0.x._4_4_ = *(uint *)((int)&(local_18->position).x + 4);
      local_1a0.y._0_4_ = *(uint *)&(local_18->position).y;
      local_1a0.y._4_4_ = *(uint *)((int)&(local_18->position).y + 4);
      local_190 = *(int *)&(pCVar3->position).x;
      local_18c = *(int *)((int)&(pCVar3->position).x + 4);
      local_188 = *(int *)&(pCVar3->position).y;
      local_184 = *(int *)((int)&(pCVar3->position).y + 4);
      local_150.x._0_4_ = *(uint *)&(pCVar1->position).x;
      local_150.x._4_4_ = *(uint *)((int)&(pCVar1->position).x + 4);
      local_150.y._0_4_ = *(uint *)&(pCVar1->position).y;
      local_150.y._4_4_ = *(uint *)((int)&(pCVar1->position).y + 4);
      local_170.x._0_4_ = *(uint *)&(pCVar2->position).x;
      local_170.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
      local_170.y._0_4_ = *(uint *)&(pCVar2->position).y;
      local_170.y._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
      local_160._0_4_ = *(uint *)&(pCVar5->position).x;
      local_160._4_4_ = *(uint *)((int)&(pCVar5->position).x + 4);
      local_158 = *(int *)&(pCVar5->position).y;
      local_154 = *(int *)((int)&(pCVar5->position).y + 4);
      local_138 = local_180.x._0_4_;
      local_134 = local_180.x._4_4_;
      local_120 = local_180.y._0_4_;
      local_11c = local_180.y._4_4_;
      local_118 = local_1a0.x._0_4_;
      local_114 = local_1a0.x._4_4_;
      local_b0 = local_1a0.y._0_4_;
      local_ac = local_1a0.y._4_4_;
      local_80 = local_170.y._0_4_;
      local_7c = local_170.y._4_4_;
      local_78 = local_160._0_4_;
      local_74 = local_160._4_4_;
      local_70 = local_158;
      local_6c = local_154;
      local_68 = local_150.x._0_4_;
      local_64 = local_150.x._4_4_;
      local_60 = local_150.y._0_4_;
      local_5c = local_150.y._4_4_;
      local_58 = local_170.x._0_4_;
      local_54 = local_170.x._4_4_;
      local_50 = local_188;
      local_4c = local_184;
      local_38 = local_190;
      local_34 = local_18c;
    }
    else {
      local_180.x._0_4_ = *(uint *)&(local_1c->position).x;
      local_180.x._4_4_ = *(uint *)((int)&(local_1c->position).x + 4);
      local_180.y._0_4_ = *(uint *)&(local_1c->position).z;
      local_180.y._4_4_ = *(uint *)((int)&(local_1c->position).z + 4);
      local_1a0.x._0_4_ = *(uint *)&(local_18->position).x;
      local_1a0.x._4_4_ = *(uint *)((int)&(local_18->position).x + 4);
      local_1a0.y._0_4_ = *(uint *)&(local_18->position).z;
      local_1a0.y._4_4_ = *(uint *)((int)&(local_18->position).z + 4);
      local_190 = *(int *)&(pCVar3->position).x;
      local_18c = *(int *)((int)&(pCVar3->position).x + 4);
      local_188 = *(int *)&(pCVar3->position).z;
      local_184 = *(int *)((int)&(pCVar3->position).z + 4);
      local_150.x._0_4_ = *(uint *)&(pCVar1->position).x;
      local_150.x._4_4_ = *(uint *)((int)&(pCVar1->position).x + 4);
      local_150.y._0_4_ = *(uint *)&(pCVar1->position).z;
      local_150.y._4_4_ = *(uint *)((int)&(pCVar1->position).z + 4);
      local_170.x._0_4_ = *(uint *)&(pCVar2->position).x;
      local_170.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
      local_170.y._0_4_ = *(uint *)&(pCVar2->position).z;
      local_170.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
      local_160._0_4_ = *(uint *)&(pCVar5->position).x;
      local_160._4_4_ = *(uint *)((int)&(pCVar5->position).x + 4);
      local_158 = *(int *)&(pCVar5->position).z;
      local_154 = *(int *)((int)&(pCVar5->position).z + 4);
      local_140 = local_170.x._0_4_;
      local_13c = local_170.x._4_4_;
      local_130 = local_150.y._0_4_;
      local_12c = local_150.y._4_4_;
      local_128 = local_158;
      local_124 = local_154;
      local_110 = local_170.y._0_4_;
      local_10c = local_170.y._4_4_;
      local_108 = local_160._0_4_;
      local_104 = local_160._4_4_;
      local_b8 = local_180.x._0_4_;
      local_b4 = local_180.x._4_4_;
      local_90 = local_188;
      local_8c = local_184;
      local_88 = local_150.x._0_4_;
      local_84 = local_150.x._4_4_;
      local_48 = local_1a0.x._0_4_;
      local_44 = local_1a0.x._4_4_;
      local_40 = local_180.y._0_4_;
      local_3c = local_180.y._4_4_;
      local_30 = local_190;
      local_2c = local_18c;
      local_28 = local_1a0.y._0_4_;
      local_24 = local_1a0.y._4_4_;
    }
  }
  else {
    local_180.x._0_4_ = *(uint *)&(local_1c->position).y;
    local_180.x._4_4_ = *(uint *)((int)&(local_1c->position).y + 4);
    local_180.y._0_4_ = *(uint *)&(local_1c->position).z;
    local_180.y._4_4_ = *(uint *)((int)&(local_1c->position).z + 4);
    local_1a0.x._0_4_ = *(uint *)&(local_18->position).y;
    local_1a0.x._4_4_ = *(uint *)((int)&(local_18->position).y + 4);
    local_1a0.y._0_4_ = *(uint *)&(local_18->position).z;
    local_1a0.y._4_4_ = *(uint *)((int)&(local_18->position).z + 4);
    local_190 = *(int *)&(pCVar3->position).y;
    local_18c = *(int *)((int)&(pCVar3->position).y + 4);
    local_188 = *(int *)&(pCVar3->position).z;
    local_184 = *(int *)((int)&(pCVar3->position).z + 4);
    local_150.x._0_4_ = *(uint *)&(pCVar1->position).y;
    local_150.x._4_4_ = *(uint *)((int)&(pCVar1->position).y + 4);
    local_150.y._0_4_ = *(uint *)&(pCVar1->position).z;
    local_150.y._4_4_ = *(uint *)((int)&(pCVar1->position).z + 4);
    local_170.x._0_4_ = *(uint *)&(pCVar2->position).y;
    local_170.x._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
    local_170.y._0_4_ = *(uint *)&(pCVar2->position).z;
    local_170.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
    local_160._0_4_ = *(uint *)&(pCVar5->position).y;
    local_160._4_4_ = *(uint *)((int)&(pCVar5->position).y + 4);
    local_158 = *(int *)&(pCVar5->position).z;
    local_154 = *(int *)((int)&(pCVar5->position).z + 4);
    local_100 = local_1a0.y._0_4_;
    local_fc = local_1a0.y._4_4_;
    local_f8 = local_190;
    local_f4 = local_18c;
    local_f0 = local_188;
    local_ec = local_184;
    local_e8 = local_150.x._0_4_;
    local_e4 = local_150.x._4_4_;
    local_e0 = local_150.y._0_4_;
    local_dc = local_150.y._4_4_;
    local_d8 = local_170.x._0_4_;
    local_d4 = local_170.x._4_4_;
    local_d0 = local_170.y._0_4_;
    local_cc = local_170.y._4_4_;
    local_c8 = local_160._0_4_;
    local_c4 = local_160._4_4_;
    local_c0 = local_158;
    local_bc = local_154;
    local_a8 = local_180.x._0_4_;
    local_a4 = local_180.x._4_4_;
    local_a0 = local_180.y._0_4_;
    local_9c = local_180.y._4_4_;
    local_98 = local_1a0.x._0_4_;
    local_94 = local_1a0.x._4_4_;
  }
  if ((((((((double)CONCAT44(local_180.x._4_4_,local_180.x._0_4_) ==
            (double)CONCAT44(local_170.x._4_4_,local_170.x._0_4_)) &&
          ((double)CONCAT44(local_180.y._4_4_,local_180.y._0_4_) ==
           (double)CONCAT44(local_170.y._4_4_,local_170.y._0_4_))) ||
         (((double)CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_) ==
           (double)CONCAT44(local_150.x._4_4_,local_150.x._0_4_) &&
          ((double)CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_) ==
           (double)CONCAT44(local_150.y._4_4_,local_150.y._0_4_))))) ||
        (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                           (&local_180,&local_1a0,&local_150,&local_170), iVar4 == 0)) &&
       ((((double)CONCAT44(local_180.x._4_4_,local_180.x._0_4_) ==
          (double)CONCAT44(local_160._4_4_,local_160._0_4_) &&
         ((double)CONCAT44(local_180.y._4_4_,local_180.y._0_4_) ==
          (double)CONCAT44(local_154,local_158))) ||
        ((((double)CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_) ==
           (double)CONCAT44(local_170.x._4_4_,local_170.x._0_4_) &&
          ((double)CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_) ==
           (double)CONCAT44(local_170.y._4_4_,local_170.y._0_4_))) ||
         (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                            (&local_180,&local_1a0,&local_170,(CVector2d *)local_160), iVar4 == 0)))
        ))) && (((((((double)CONCAT44(local_180.x._4_4_,local_180.x._0_4_) ==
                     (double)CONCAT44(local_150.x._4_4_,local_150.x._0_4_) &&
                    ((double)CONCAT44(local_180.y._4_4_,local_180.y._0_4_) ==
                     (double)CONCAT44(local_150.y._4_4_,local_150.y._0_4_))) ||
                   (((double)CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_) ==
                     (double)CONCAT44(local_160._4_4_,local_160._0_4_) &&
                    ((double)CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_) ==
                     (double)CONCAT44(local_154,local_158))))) ||
                  (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                     (&local_180,&local_1a0,(CVector2d *)local_160,&local_150),
                  iVar4 == 0)) &&
                 (((((double)CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_) ==
                     (double)CONCAT44(local_160._4_4_,local_160._0_4_) &&
                    ((double)CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_) ==
                     (double)CONCAT44(local_154,local_158))) ||
                   ((((double)CONCAT44(local_18c,local_190) ==
                      (double)CONCAT44(local_170.x._4_4_,local_170.x._0_4_) &&
                     ((double)CONCAT44(local_184,local_188) ==
                      (double)CONCAT44(local_170.y._4_4_,local_170.y._0_4_))) ||
                    (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                       (&local_1a0,(CVector2d *)&local_190,&local_170,
                                        (CVector2d *)local_160), iVar4 == 0)))) &&
                  ((((((double)CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_) ==
                       (double)CONCAT44(local_150.x._4_4_,local_150.x._0_4_) &&
                      ((double)CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_) ==
                       (double)CONCAT44(local_150.y._4_4_,local_150.y._0_4_))) ||
                     (((double)CONCAT44(local_18c,local_190) ==
                       (double)CONCAT44(local_160._4_4_,local_160._0_4_) &&
                      ((double)CONCAT44(local_184,local_188) ==
                       (double)CONCAT44(local_154,local_158))))) ||
                    (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                       (&local_1a0,(CVector2d *)&local_190,(CVector2d *)local_160,
                                        &local_150), iVar4 == 0)) &&
                   ((((((double)CONCAT44(local_1a0.x._4_4_,local_1a0.x._0_4_) ==
                        (double)CONCAT44(local_170.x._4_4_,local_170.x._0_4_) &&
                       ((double)CONCAT44(local_1a0.y._4_4_,local_1a0.y._0_4_) ==
                        (double)CONCAT44(local_170.y._4_4_,local_170.y._0_4_))) ||
                      (((double)CONCAT44(local_18c,local_190) ==
                        (double)CONCAT44(local_150.x._4_4_,local_150.x._0_4_) &&
                       ((double)CONCAT44(local_184,local_188) ==
                        (double)CONCAT44(local_150.y._4_4_,local_150.y._0_4_))))) ||
                     (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                        (&local_1a0,(CVector2d *)&local_190,&local_150,&local_170),
                     iVar4 == 0)) &&
                    (((((double)CONCAT44(local_18c,local_190) ==
                        (double)CONCAT44(local_150.x._4_4_,local_150.x._0_4_) &&
                       ((double)CONCAT44(local_184,local_188) ==
                        (double)CONCAT44(local_150.y._4_4_,local_150.y._0_4_))) ||
                      (((double)CONCAT44(local_180.x._4_4_,local_180.x._0_4_) ==
                        (double)CONCAT44(local_160._4_4_,local_160._0_4_) &&
                       ((double)CONCAT44(local_180.y._4_4_,local_180.y._0_4_) ==
                        (double)CONCAT44(local_154,local_158))))) ||
                     (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                        ((CVector2d *)&local_190,&local_180,(CVector2d *)local_160,
                                         &local_150), iVar4 == 0)))))))))) &&
                ((((double)CONCAT44(local_18c,local_190) ==
                   (double)CONCAT44(local_170.x._4_4_,local_170.x._0_4_) &&
                  ((double)CONCAT44(local_184,local_188) ==
                   (double)CONCAT44(local_170.y._4_4_,local_170.y._0_4_))) ||
                 ((((double)CONCAT44(local_180.x._4_4_,local_180.x._0_4_) ==
                    (double)CONCAT44(local_150.x._4_4_,local_150.x._0_4_) &&
                   ((double)CONCAT44(local_180.y._4_4_,local_180.y._0_4_) ==
                    (double)CONCAT44(local_150.y._4_4_,local_150.y._0_4_))) ||
                  (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                                     ((CVector2d *)&local_190,&local_180,&local_150,&local_170),
                  iVar4 == 0)))))))) &&
     (((((double)CONCAT44(local_18c,local_190) == (double)CONCAT44(local_160._4_4_,local_160._0_4_)
        && ((double)CONCAT44(local_184,local_188) == (double)CONCAT44(local_154,local_158))) ||
       (((double)CONCAT44(local_180.x._4_4_,local_180.x._0_4_) ==
         (double)CONCAT44(local_170.x._4_4_,local_170.x._0_4_) &&
        ((double)CONCAT44(local_180.y._4_4_,local_180.y._0_4_) ==
         (double)CONCAT44(local_170.y._4_4_,local_170.y._0_4_))))) ||
      (iVar4 = shape_superopt_cpp_segmentsIntersect2D_FUN_005d5bb0
                         ((CVector2d *)&local_190,&local_180,&local_170,(CVector2d *)local_160),
      iVar4 == 0)))) {
    return 0;
  }
  return 1;
}
