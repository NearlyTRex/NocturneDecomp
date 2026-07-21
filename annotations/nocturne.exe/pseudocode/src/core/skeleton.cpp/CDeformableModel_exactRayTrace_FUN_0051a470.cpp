// Name: core_skeleton.cpp_CDeformableModel_exactRayTrace_FUN_0051a470
// Address: 0051a470
// Address Range: [[0051a470, 0051a6f4]]
// Convention: unknown
// Signature: float core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_skeleton_cpp_CDeformableModel_exactRayTrace_FUN_0051a470(int param_1,int param_2,uint param_3,uint param_4,int *param_5,byte *param_6)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  byte local_6c [36];
  float local_48;
  float local_44;
  float local_40;
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
    __arrinit();
  }
  if (5000 < *(int *)(param_2 * 4 + param_1 + 0x2c)) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x6d2;
    FUN_004c8440();
  }
  iVar2 = param_2 * 4 + param_1;
  pfVar3 = (float *)&DAT_026757d0;
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 0x2c)) {
    do {
      *pfVar3 = (float)*param_5 * _DAT_005a1eb0;
      pfVar3[1] = (float)param_5[1] * _DAT_005a1eb0;
      pfVar3[2] = (float)param_5[2] * _DAT_005a1eb0;
      iVar5 = iVar5 + 1;
      pfVar3 = pfVar3 + 3;
      param_5 = param_5 + 3;
    } while (iVar5 < *(int *)(iVar2 + 0x2c));
  }
  local_18 = 1.01;
  local_28 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_1c = param_1 + param_2 * 4;
    local_20 = param_2 * 4 + param_1;
    local_24 = param_6;
    do {
      iVar5 = *(int *)(local_20 + 0xc24) + local_28;
      if (((*local_24 & 1) != 0) &&
         (bVar1 = local_28 < iVar5, iVar4 = local_28, local_28 = iVar5, bVar1)) {
        do {
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0(local_6c);
          local_14 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620();
          if ((local_14 < local_18) && ((0.0 <= local_14 && (local_14 <= 1.0)))) {
            local_34 = -local_48;
            local_30 = -local_44;
            local_2c = -local_40;
            if (&stack0x00000000 != (byte *)0x268cf10) {
              _DAT_0268cedc = local_34;
              _DAT_0268cee0 = local_30;
              _DAT_0268cee4 = local_2c;
            }
            _DAT_0268cee8 = param_2;
            _DAT_0268ced8 = iVar2;
            _DAT_0268ceec = iVar4;
            local_18 = local_14;
          }
          iVar4 = iVar4 + 1;
          iVar5 = local_28;
        } while (iVar4 < local_28);
      }
      local_28 = iVar5;
      iVar2 = iVar2 + 1;
      local_24 = local_24 + 4;
      local_20 = local_20 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0xc00));
  }
  return local_18;
}
