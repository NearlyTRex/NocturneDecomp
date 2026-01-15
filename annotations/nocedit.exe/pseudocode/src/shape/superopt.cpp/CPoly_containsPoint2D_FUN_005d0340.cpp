// Name: shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340
// Address: 005d0340
// Address Range: [[005d0340, 005d0cd2]]
// Convention: __cdecl
// Signature: int shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340(CPoly * this_ptr, CVector2d * point)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CPoly_containsPoint2D_FUN_005d0340(CPoly *this_ptr,CVector2d *point)

{
  int iVar1;
  CVert *pCVar2;
  double dVar3;
  CVector2d *p3;
  double dStack_1cc;
  double dStack_1ac;
  CVector2d local_1a4;
  CVector2d local_194;
  CVector2d local_184;
  CVector2d local_174;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
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
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
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
  uint local_c0;
  uint local_bc;
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
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  double dStack_14;
  
  if (0.0 <= (this_ptr->normal).x) {
    dStack_1cc = (this_ptr->normal).x;
  }
  else {
    dStack_1cc = -(this_ptr->normal).x;
  }
  if ((this_ptr->normal).y < 0.0) {
    dVar3 = -(this_ptr->normal).y;
  }
  else {
    dVar3 = (this_ptr->normal).y;
  }
  p3 = SUB84 /* extract 2-byte value */(dVar3,0);
  if ((this_ptr->normal).z < 0.0) {
    dStack_1ac = -(this_ptr->normal).z;
  }
  else {
    dStack_1ac = (this_ptr->normal).z;
  }
  pCVar2 = this_ptr->parent_obj->vertex_data;
  if ((dStack_1cc < dVar3) || (dStack_1cc < dStack_1ac)) {
    if ((dVar3 < dStack_1cc) || (dVar3 < dStack_1ac)) {
      if (0.0 <= (this_ptr->normal).z) {
        iVar1 = this_ptr->vertex_idx_0;
        local_1a4.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_1a4.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_1a4.y._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
        local_1a4.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
        iVar1 = this_ptr->vertex_idx_1;
        local_174.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_174.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_174.y._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
        local_174.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
        iVar1 = this_ptr->vertex_idx_2;
        local_194.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_194.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_194.y._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
        local_194.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
        local_134 = local_1a4.x._0_4_;
        local_130 = local_1a4.x._4_4_;
        local_114 = local_174.x._0_4_;
        local_110 = local_174.x._4_4_;
        local_ac = local_174.y._0_4_;
        local_a8 = local_174.y._4_4_;
        local_5c = local_1a4.y._0_4_;
        local_58 = local_1a4.y._4_4_;
        local_34 = local_194.y._0_4_;
        local_30 = local_194.y._4_4_;
        local_1c = local_194.x._0_4_;
        local_18 = local_194.x._4_4_;
      }
      else {
        iVar1 = this_ptr->vertex_idx_0;
        local_194.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_194.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_194.y._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
        local_194.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
        iVar1 = this_ptr->vertex_idx_1;
        local_174.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_174.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_174.y._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
        local_174.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
        pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
        local_1a4.x._0_4_ = *(uint *)&(pCVar2->position).x;
        local_1a4.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
        local_1a4.y._0_4_ = *(uint *)&(pCVar2->position).y;
        local_1a4.y._4_4_ = *(uint *)((int)&(pCVar2->position).y + 4);
        local_15c = local_174.x._0_4_;
        local_158 = local_174.x._4_4_;
        local_154 = local_1a4.x._0_4_;
        local_150 = local_1a4.x._4_4_;
        local_b4 = local_194.y._0_4_;
        local_b0 = local_194.y._4_4_;
        local_9c = local_174.y._0_4_;
        local_98 = local_174.y._4_4_;
        local_7c = local_1a4.y._0_4_;
        local_78 = local_1a4.y._4_4_;
        local_24 = local_194.x._0_4_;
        local_20 = local_194.x._4_4_;
      }
      local_184.x._0_4_ = *(uint *)&point->x;
      local_184.x._4_4_ = *(uint *)((int)&point->x + 4);
      local_184.y._0_4_ = *(uint *)&point->y;
      local_184.y._4_4_ = *(uint *)((int)&point->y + 4);
      local_dc = local_184.y._0_4_;
      local_d8 = local_184.y._4_4_;
      local_84 = local_184.x._0_4_;
      local_80 = local_184.x._4_4_;
    }
    else {
      if ((this_ptr->normal).y <= 0.0) {
        iVar1 = this_ptr->vertex_idx_0;
        local_1a4.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_1a4.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_1a4.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
        local_1a4.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
        iVar1 = this_ptr->vertex_idx_1;
        local_174.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_174.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_174.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
        local_174.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
        pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
        local_194.x._0_4_ = *(uint *)&(pCVar2->position).x;
        local_194.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
        local_194.y._0_4_ = *(uint *)&(pCVar2->position).z;
        local_194.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
        local_104 = local_174.x._0_4_;
        local_100 = local_174.x._4_4_;
        local_94 = local_174.y._0_4_;
        local_90 = local_174.y._4_4_;
        local_74 = local_194.y._0_4_;
        local_70 = local_194.y._4_4_;
        local_64 = local_1a4.y._0_4_;
        local_60 = local_1a4.y._4_4_;
        local_54 = local_1a4.x._0_4_;
        local_50 = local_1a4.x._4_4_;
        local_3c = local_194.x._0_4_;
        local_38 = local_194.x._4_4_;
      }
      else {
        iVar1 = this_ptr->vertex_idx_0;
        local_194.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_194.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_194.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
        local_194.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
        iVar1 = this_ptr->vertex_idx_1;
        local_174.x._0_4_ = *(uint *)&pCVar2[iVar1].position.x;
        local_174.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.x + 4);
        local_174.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
        local_174.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
        pCVar2 = pCVar2 + this_ptr->vertex_idx_2;
        local_1a4.x._0_4_ = *(uint *)&(pCVar2->position).x;
        local_1a4.x._4_4_ = *(uint *)((int)&(pCVar2->position).x + 4);
        local_1a4.y._0_4_ = *(uint *)&(pCVar2->position).z;
        local_1a4.y._4_4_ = *(uint *)((int)&(pCVar2->position).z + 4);
        local_164 = local_194.x._0_4_;
        local_160 = local_194.x._4_4_;
        local_13c = local_194.y._0_4_;
        local_138 = local_194.y._4_4_;
        local_11c = local_1a4.y._0_4_;
        local_118 = local_1a4.y._4_4_;
        local_ec = local_174.y._0_4_;
        local_e8 = local_174.y._4_4_;
        local_8c = local_174.x._0_4_;
        local_88 = local_174.x._4_4_;
        local_6c = local_1a4.x._0_4_;
        local_68 = local_1a4.x._4_4_;
      }
      local_184.x._0_4_ = *(uint *)&point->x;
      local_184.x._4_4_ = *(uint *)((int)&point->x + 4);
      local_184.y._0_4_ = *(uint *)&point[1].x;
      local_184.y._4_4_ = *(uint *)((int)&point[1].x + 4);
      local_a4 = local_184.y._0_4_;
      local_a0 = local_184.y._4_4_;
      local_2c = local_184.x._0_4_;
      local_28 = local_184.x._4_4_;
    }
  }
  else {
    if (0.0 <= (this_ptr->normal).x) {
      iVar1 = this_ptr->vertex_idx_0;
      local_1a4.x._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
      local_1a4.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
      local_1a4.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
      local_1a4.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
      iVar1 = this_ptr->vertex_idx_1;
      local_174.x._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
      local_174.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
      local_174.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
      local_174.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
      iVar1 = this_ptr->vertex_idx_2;
      local_194.x._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
      local_194.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
      local_194.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
      local_194.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
      local_10c = local_1a4.y._0_4_;
      local_108 = local_1a4.y._4_4_;
      local_e4 = local_174.y._0_4_;
      local_e0 = local_174.y._4_4_;
      local_d4 = local_194.x._0_4_;
      local_d0 = local_194.x._4_4_;
      local_cc = local_194.y._0_4_;
      local_c8 = local_194.y._4_4_;
      local_4c = local_1a4.x._0_4_;
      local_48 = local_1a4.x._4_4_;
      local_44 = local_174.x._0_4_;
      local_40 = local_174.x._4_4_;
    }
    else {
      iVar1 = this_ptr->vertex_idx_0;
      local_194.x._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
      local_194.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
      local_194.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
      local_194.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
      iVar1 = this_ptr->vertex_idx_1;
      local_174.x._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
      local_174.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
      local_174.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
      local_174.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
      iVar1 = this_ptr->vertex_idx_2;
      local_1a4.x._0_4_ = *(uint *)&pCVar2[iVar1].position.y;
      local_1a4.x._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.y + 4);
      local_1a4.y._0_4_ = *(uint *)&pCVar2[iVar1].position.z;
      local_1a4.y._4_4_ = *(uint *)((int)&pCVar2[iVar1].position.z + 4);
      local_14c = local_174.x._0_4_;
      local_148 = local_174.x._4_4_;
      local_144 = local_174.y._0_4_;
      local_140 = local_174.y._4_4_;
      local_12c = local_1a4.x._0_4_;
      local_128 = local_1a4.x._4_4_;
      local_124 = local_1a4.y._0_4_;
      local_120 = local_1a4.y._4_4_;
      local_fc = local_194.x._0_4_;
      local_f8 = local_194.x._4_4_;
      local_f4 = local_194.y._0_4_;
      local_f0 = local_194.y._4_4_;
    }
    local_184.x._0_4_ = *(uint *)&point->y;
    local_184.x._4_4_ = *(uint *)((int)&point->y + 4);
    local_184.y._0_4_ = *(uint *)&point[1].x;
    local_184.y._4_4_ = *(uint *)((int)&point[1].x + 4);
    local_c4 = local_184.x._0_4_;
    local_c0 = local_184.x._4_4_;
    local_bc = local_184.y._0_4_;
    local_b8 = local_184.y._4_4_;
  }
  dStack_14 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(&local_174,&local_184,p3);
  if (dStack_14 <= 0.0) {
    dStack_14 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(&local_1a4,&local_184,p3);
    if (dStack_14 <= 0.0) {
      dVar3 = shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(&local_194,&local_184,p3);
      if (dVar3 <= 0.0) {
        return 1;
      }
    }
  }
  return 0;
}
