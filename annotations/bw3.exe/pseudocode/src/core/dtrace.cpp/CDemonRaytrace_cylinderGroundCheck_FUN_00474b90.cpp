// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90
// Address: 00474b90
// Address Range: [[00474b90, 00474da7]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_00474b90(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  CDemonCube *this_ptr_00;
  int iVar4;
  int extraout_ECX;
  float extraout_EDX;
  int grid_z;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  CVector3f local_64;
  float local_58;
  float local_54;
  float fStack_50;
  CVector3f local_4c;
  CVector3f local_40;
  uint local_34;
  float local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_4c.x = pos->x;
  local_4c.z = pos->z;
  fVar5 = (float10)pos->y + (float10)_DAT_005bca19;
  local_58 = pos->x;
  fStack_50 = pos->z;
  local_4c.y = (float)fVar5;
  fVar1 = 1.0 / (this_ptr->cell_size).y;
  fVar6 = (float10)local_4c.x - (float10)(this_ptr->bbox_min).x;
  local_40.y = (float)fVar6;
  fVar7 = (float10)1 / (float10)(this_ptr->cell_size).x;
  local_54 = pos->y + _DAT_005bca1d;
  fVar8 = (float10)local_4c.z - (float10)(this_ptr->bbox_min).z;
  local_40.z = (float)fVar8;
  local_30 = 1.0 / (this_ptr->cell_size).z;
  fVar5 = (fVar5 - (float10)(this_ptr->bbox_min).y) * (float10)fVar1;
  fVar9 = ((float10)local_54 - (float10)(this_ptr->bbox_min).y) * (float10)fVar1;
  fVar6 = (fVar6 - (float10)radius) * fVar7;
  fVar8 = (fVar8 - (float10)radius) * (float10)local_30;
  fVar7 = ((float10)local_40.y + (float10)radius) * fVar7;
  fVar10 = ((float10)local_40.z + (float10)radius) * (float10)local_30;
  bVar2 = false;
  round();
  round();
  local_18 = (int)ROUND(fVar5);
  local_28 = (int)ROUND(fVar9);
  local_40.x = extraout_EDX;
  round();
  round();
  round();
  iVar3 = round();
  local_24 = (int)ROUND(fVar6);
  local_1c = (int)ROUND(fVar8);
  local_20 = (int)ROUND(fVar7);
  local_14 = (int)ROUND(fVar10);
  if (extraout_ECX <= iVar3) {
    do {
      iVar3 = local_24;
      if (local_24 <= local_20) {
        do {
          grid_z = local_1c;
          if (local_1c <= local_14) {
            do {
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
                                      (this_ptr,iVar3,local_18,grid_z);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar4 = core_dcube_cpp_FUN_004545f0
                                  (this_ptr_00,&local_4c,radius,&local_40,&local_64,&local_34);
                if (iVar4 != 0) {
                  bVar2 = true;
                }
              }
              grid_z = grid_z + 1;
            } while (grid_z <= local_14);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_20);
      }
      if (bVar2) {
        if ((normal_out != (CVector3f *)0x0) && (&local_64 != normal_out)) {
          normal_out->x = local_64.x;
          normal_out->y = local_64.y;
          normal_out->z = local_64.z;
        }
        if (hit_flag != (int *)0x0) {
          *hit_flag = local_34;
        }
        return local_40.x;
      }
      local_18 = local_18 + -1;
    } while (local_28 <= local_18);
  }
  if (hit_flag != (int *)0x0) {
    *hit_flag = 1;
  }
  if (normal_out != (CVector3f *)0x0) {
    normal_out->y = 1.0;
    normal_out->z = 0.0;
    normal_out->x = 0.0;
  }
  return local_54;
}
