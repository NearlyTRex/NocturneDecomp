// Name: core_dtrace.cpp_FUN_00472c60
// Address: 00472c60
// Address Range: [[00472c60, 00473386]]
// Convention: unknown
// Signature: float core_dtrace_cpp_FUN_00472c60(CDemonRaytrace *param_1,CVector3f *param_2,float *param_3,CVector3f *param_4,uint *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_dtrace_cpp_FUN_00472c60(CDemonRaytrace *param_1,CVector3f *param_2,float *param_3,CVector3f *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDemonCube *this_ptr;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_107c [1002];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  CVector3f local_a0;
  float local_94;
  float local_90 [2];
  CVector3f local_88;
  double local_7c;
  uint local_74 [3];
  float local_68;
  float local_64;
  int local_60;
  int local_5c;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  float local_18;
  
  bVar5 = 0;
  local_b4 = (param_2->x - (param_1->bbox_min).x) / (param_1->cell_size).x;
  local_b0 = (param_2->y - (param_1->bbox_min).y) / (param_1->cell_size).y;
  local_b8 = (param_2->z - (param_1->bbox_min).z) / (param_1->cell_size).z;
  local_7c = floor((double)local_b4);
  fVar6 = (float10)local_7c;
  round();
  local_38 = (int)ROUND(fVar6);
  local_7c = floor((double)local_b0);
  fVar6 = (float10)local_7c;
  round();
  local_3c = (int)ROUND(fVar6);
  local_7c = floor((double)local_b8);
  fVar7 = (float10)local_7c;
  fVar6 = ((float10)*param_3 - (float10)(param_1->bbox_min).x) / (float10)(param_1->cell_size).x;
  fVar8 = ((float10)param_3[1] - (float10)(param_1->bbox_min).y) / (float10)(param_1->cell_size).y;
  fVar9 = ((float10)param_3[2] - (float10)(param_1->bbox_min).z) / (float10)(param_1->cell_size).z;
  round();
  local_34 = (int)ROUND(fVar7);
  local_bc = (float)fVar6;
  local_a4 = (float)fVar8;
  local_ac = (float)fVar9;
  local_7c = floor((double)local_bc);
  fVar6 = (float10)local_7c;
  round();
  local_5c = (int)ROUND(fVar6);
  local_7c = floor((double)local_a4);
  fVar6 = (float10)local_7c;
  round();
  local_24 = (int)ROUND(fVar6);
  local_7c = floor((double)local_ac);
  fVar6 = (float10)local_7c;
  round();
  local_60 = (int)ROUND(fVar6);
  if ((-1 < local_38) || (-1 < local_5c)) {
    if ((local_3c < 0) && (local_24 < 0)) {
      return -1.0;
    }
    if ((local_34 < 0) && (local_60 < 0)) {
      return -1.0;
    }
    iVar4 = (param_1->grid_coord).x;
    if ((((local_38 < iVar4) || (local_5c < iVar4)) &&
        ((iVar4 = (param_1->grid_coord).y, local_3c < iVar4 || (local_24 < iVar4)))) &&
       ((iVar4 = (param_1->grid_coord).z, local_34 < iVar4 || (local_60 < iVar4)))) {
      local_94 = *param_3 - param_2->x;
      local_90[0] = param_3[1] - param_2->y;
      local_90[1] = param_3[2] - param_2->z;
      local_88.x = local_94;
      *(float *)((int)&local_88 + (uint)bVar5 * -8 + 4) = local_90[(uint)bVar5 * -2];
      *(float *)((int)&local_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
           local_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      iVar4 = 1;
      if ((local_38 != local_5c) || ((local_3c != local_24 || (local_34 != local_60)))) {
        local_c0 = SQRT(local_88.z * local_88.z + local_88.x * local_88.x + local_88.y * local_88.y)
        ;
        if (local_c0 <= 0.0) {
          return -1.0;
        }
        fVar7 = (float10)_DAT_005d1b53 / (float10)local_c0;
        fVar6 = ABS((float10)local_bc - (float10)local_b4) * fVar7;
        fVar9 = ABS((float10)local_a4 - (float10)local_b0) * fVar7;
        fVar7 = ABS((float10)local_ac - (float10)local_b8) * fVar7;
        round();
        local_44 = (int)ROUND(fVar6);
        fVar8 = (float10)local_88.x;
        round();
        local_40 = (int)ROUND(fVar9);
        fVar6 = (float10)0;
        round();
        local_48 = (float)(int)ROUND(fVar7);
        if (fVar8 < fVar6) {
          iVar2 = local_38 - local_5c;
          local_68 = local_b4 - (float)local_38;
          local_54 = -1;
        }
        else {
          iVar2 = local_5c - local_38;
          local_68 = (float)(local_38 + 1) - local_b4;
          local_54 = 1;
        }
        if (local_88.y < 0.0) {
          local_50 = -1;
          iVar3 = local_3c - local_24;
          local_64 = local_b0 - (float)local_3c;
        }
        else {
          iVar3 = local_24 - local_3c;
          local_64 = (float)(local_3c + 1) - local_b0;
          local_50 = 1;
        }
        if (local_88.z < 0.0) {
          local_20 = -1;
          iVar4 = local_34 - local_60;
          local_4c = local_b8 - (float)local_34;
        }
        else {
          iVar4 = local_60 - local_34;
          local_4c = (float)(local_34 + 1) - local_b8;
          local_20 = 1;
        }
        iVar4 = iVar2 + 1 + iVar3 + iVar4;
        fVar9 = (float10)local_40 * (float10)local_4c;
        fVar7 = (float10)(int)local_48 * (float10)local_68;
        fVar6 = (float10)(int)local_48 * (float10)local_64;
        fVar8 = (float10)local_40 * (float10)local_68 - (float10)local_44 * (float10)local_64;
        fVar10 = (float10)local_44 * (float10)local_4c;
        local_18 = local_48;
        round();
        fVar9 = fVar9 - fVar6;
        local_30 = (int)ROUND(fVar8);
        round();
        fVar7 = fVar7 - fVar10;
        local_28 = (int)ROUND(fVar9);
        round();
        local_2c = (int)ROUND(fVar7);
      }
      local_a8 = 1.0001;
      iVar2 = local_34;
      iVar3 = local_2c;
      iVar1 = local_28;
      while( true ) {
        local_28 = iVar1;
        local_2c = iVar3;
        local_34 = iVar2;
        this_ptr = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                             (param_1,local_38,local_3c,local_34);
        if (this_ptr != (CDemonCube *)0x0) {
          local_1c = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00446b60
                               (this_ptr,param_2,&local_88,&local_a0,local_74);
          if (local_1c < local_a8) {
            if ((param_4 != (CVector3f *)0x0) && (param_4 != &local_a0)) {
              param_4->x = local_a0.x;
              param_4->y = local_a0.y;
              param_4->z = local_a0.z;
            }
            local_a8 = local_1c;
            if (param_5 != (uint *)0x0) {
              *param_5 = local_74[0];
            }
          }
          local_18 = local_1c;
          if (local_a8 <= 1.0) {
            return local_a8;
          }
        }
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) break;
        iVar2 = local_34 + local_20;
        iVar3 = local_2c - local_44;
        iVar1 = local_28 + local_40;
        if (local_30 < 0) {
          if (local_2c < 0) {
            local_38 = local_38 + local_54;
            local_30 = local_30 + local_40;
            iVar2 = local_34;
            iVar3 = local_2c + (int)local_48;
            iVar1 = local_28;
          }
        }
        else if (-1 < local_28) {
          local_3c = local_3c + local_50;
          local_30 = local_30 - local_44;
          iVar2 = local_34;
          iVar3 = local_2c;
          iVar1 = local_28 - (int)local_48;
        }
      }
      if (param_5 != (uint *)0x0) {
        *param_5 = 1;
        return -1.0;
      }
    }
  }
  return -1.0;
}
