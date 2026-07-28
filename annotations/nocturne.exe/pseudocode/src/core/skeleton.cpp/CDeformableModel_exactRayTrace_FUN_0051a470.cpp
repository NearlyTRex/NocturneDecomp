// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
// Address: 0051a470
// Address Range: [[0051a470, 0051a6f4]]
// Convention: unknown
// Signature: float core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(int param_1,int param_2,uint param_3,uint param_4,int *param_5,byte *param_6)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CDemonTriangle local_6c;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  if ((DAT_02684230 & 1) == 0) {
    DAT_02684230 = DAT_02684230 | 1;
    __arrinit(&DAT_026757d0,5000,&g_CVectorTypeInfo_005993b0);
  }
  if (5000 < *(int *)(param_2 * 4 + param_1 + 0x2c)) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x6d2;
    core_main_c_FUN_004c8440();
  }
  iVar1 = param_2 * 4 + param_1;
  pfVar2 = (float *)&DAT_026757d0;
  iVar5 = 0;
  if (0 < *(int *)(iVar1 + 0x2c)) {
    do {
      *pfVar2 = (float)*param_5 * _DAT_005a1eb0;
      pfVar2[1] = (float)param_5[1] * _DAT_005a1eb0;
      pfVar2[2] = (float)param_5[2] * _DAT_005a1eb0;
      iVar5 = iVar5 + 1;
      pfVar2 = pfVar2 + 3;
      param_5 = param_5 + 3;
    } while (iVar5 < *(int *)(iVar1 + 0x2c));
  }
  local_18 = 1.01;
  local_28 = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_1c = param_1 + param_2 * 4;
    local_20 = param_2 * 4 + param_1;
    local_24 = param_6;
    do {
      iVar5 = *(int *)(local_20 + 0xc24) + local_28;
      if (((*local_24 & 1) != 0) && (local_28 < iVar5)) {
        iVar4 = local_28 * 0x12;
        iVar3 = local_28;
        local_28 = iVar5;
        do {
          iVar5 = *(int *)(local_1c + 0x7c);
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                    (&local_6c,(CVector3f *)(&DAT_026757d0 + (uint)*(ushort *)(iVar4 + iVar5) * 0xc)
                     ,(CVector3f *)(&DAT_026757d0 + (uint)*(ushort *)(iVar4 + 2 + iVar5) * 0xc),
                     (CVector3f *)(&DAT_026757d0 + (uint)*(ushort *)(iVar4 + 4 + iVar5) * 0xc));
          local_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620();
          if (((local_14 < local_18) && (0.0 <= local_14)) && (local_14 <= 1.0)) {
            local_34 = -local_6c.normal.x;
            local_30 = -local_6c.normal.y;
            local_2c = -local_6c.normal.z;
            if (&stack0x00000000 != (byte *)0x268cf10) {
              _DAT_0268cedc = local_34;
              _DAT_0268cee0 = local_30;
              _DAT_0268cee4 = local_2c;
            }
            _DAT_0268cee8 = param_2;
            _DAT_0268ced8 = iVar1;
            _DAT_0268ceec = iVar3;
            local_18 = local_14;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x12;
          iVar5 = local_28;
        } while (iVar3 < local_28);
      }
      local_28 = iVar5;
      iVar1 = iVar1 + 1;
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x60;
    } while (iVar1 < *(int *)(param_1 + 0xc00));
  }
  return local_18;
}
