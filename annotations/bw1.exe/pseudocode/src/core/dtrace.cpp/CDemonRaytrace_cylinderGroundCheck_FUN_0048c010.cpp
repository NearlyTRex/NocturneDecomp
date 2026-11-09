// Name: core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010
// Address: 0048c010
// Address Range: [[0048c010, 0048c227]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010(CDemonRaytrace *this_ptr,CVector3f *pos,float radius,int *hit_flag,CVector3f *normal_out)

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
  uint local_58;
  float local_54;
  uint uStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_4c = *(float *)pos;
  local_44 = *(float *)&pos->field_0x8;
  fVar5 = (float10)*(float *)&pos->field_0x4 + (float10)_DAT_005db95c;
  local_58 = *(uint *)pos;
  uStack_50 = *(uint *)&pos->field_0x8;
  local_48 = (float)fVar5;
  fVar1 = 1.0 / *(float *)&this_ptr->field_0x2c;
  fVar6 = (float10)local_4c - (float10)*(float *)&this_ptr->field_0x10;
  local_3c = (float)fVar6;
  fVar7 = (float10)1 / (float10)*(float *)&this_ptr->field_0x28;
  local_54 = *(float *)&pos->field_0x4 + _DAT_005db960;
  fVar8 = (float10)local_44 - (float10)*(float *)&this_ptr->field_0x18;
  local_38 = (float)fVar8;
  local_30 = 1.0 / *(float *)&this_ptr->field_0x30;
  fVar5 = (fVar5 - (float10)*(float *)&this_ptr->field_0x14) * (float10)fVar1;
  fVar9 = ((float10)local_54 - (float10)*(float *)&this_ptr->field_0x14) * (float10)fVar1;
  fVar6 = (fVar6 - (float10)radius) * fVar7;
  fVar8 = (fVar8 - (float10)radius) * (float10)local_30;
  fVar7 = ((float10)local_3c + (float10)radius) * fVar7;
  fVar10 = ((float10)local_38 + (float10)radius) * (float10)local_30;
  bVar2 = false;
  round();
  round();
  local_18 = (int)ROUND(fVar5);
  local_28 = (int)ROUND(fVar9);
  local_40 = extraout_EDX;
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
              this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
                                      (this_ptr,iVar3,local_18,grid_z);
              if (this_ptr_00 != (CDemonCube *)0x0) {
                iVar4 = core_dcube_cpp_FUN_004584a0
                                  (this_ptr_00,(CVector3f *)&local_4c,radius,(CVector3f *)&local_40,
                                   &local_64,&local_34);
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
          *(uint *)normal_out = local_64._0_4_;
          *(uint *)&normal_out->field_0x4 = local_64._4_4_;
          *(uint *)&normal_out->field_0x8 = local_64._8_4_;
        }
        if (hit_flag != (int *)0x0) {
          *hit_flag = local_34;
        }
        return local_40;
      }
      local_18 = local_18 + -1;
    } while (local_28 <= local_18);
  }
  if (hit_flag != (int *)0x0) {
    *hit_flag = 1;
  }
  if (normal_out != (CVector3f *)0x0) {
    *(uint *)&normal_out->field_0x4 = 0x3f800000;
    *(uint *)&normal_out->field_0x8 = 0;
    *(uint *)normal_out = 0;
  }
  return local_54;
}
