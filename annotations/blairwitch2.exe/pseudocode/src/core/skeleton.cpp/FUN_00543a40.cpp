// Name: core_skeleton.cpp_FUN_00543a40
// Address: 00543a40
// Address Range: [[00543a40, 00543cf5]]
// Convention: unknown
// Signature: float core_skeleton_cpp_FUN_00543a40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5,byte *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_skeleton_cpp_FUN_00543a40(int param_1,int param_2,uint param_3,uint param_4,int *param_5,byte *param_6)

{
  ushort *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  float afStackY_1034 [997];
  byte local_84 [40];
  float local_5c;
  float local_58;
  float local_4c;
  float local_48 [4];
  uint local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  int local_1c;
  float local_18;
  
  bVar5 = 0;
  if ((DAT_020c4334 & 1) == 0) {
    DAT_020c4334 = DAT_020c4334 | 1;
    __arrinit();
  }
  if (5000 < *(int *)(param_2 * 4 + param_1 + 0x2c)) {
    _DAT_01d046a0 = "..\\core\\skeleton.cpp";
    _DAT_01d046a4 = 0x6e1;
    core_main_c_FUN_004e4500();
  }
  iVar4 = param_2 * 4 + param_1;
  pfVar2 = (float *)&DAT_020b58d4;
  iVar3 = 0;
  if (0 < *(int *)(iVar4 + 0x2c)) {
    do {
      *pfVar2 = (float)*param_5 * _DAT_005fb9a0;
      pfVar2[1] = (float)param_5[1] * _DAT_005fb9a0;
      pfVar2[2] = (float)param_5[2] * _DAT_005fb9a0;
      iVar3 = iVar3 + 1;
      pfVar2 = pfVar2 + 3;
      param_5 = param_5 + 3;
    } while (iVar3 < *(int *)(iVar4 + 0x2c));
  }
  local_20 = 1.01;
  local_28 = 0;
  local_24 = 0;
  if (0 < *(int *)(param_1 + 0xc00)) {
    local_2c = param_1 + param_2 * 4;
    local_34 = param_2 * 4 + param_1;
    local_30 = param_6;
    do {
      iVar3 = *(int *)(local_34 + 0xc24) + local_28;
      if (((*local_30 & 1) != 0) && (local_28 < iVar3)) {
        local_1c = local_28 * 0x12;
        iVar4 = local_28;
        local_28 = iVar3;
        do {
          puVar1 = (ushort *)(*(int *)(local_2c + 0x7c) + local_1c);
          core_dtri_cpp_CDemonTriangle_buildCollision_FUN_004779e0
                    ((CDemonTriangle *)local_84,(CVector3f *)(&DAT_020b58d4 + (uint)*puVar1 * 0xc),
                     (CVector3f *)(&DAT_020b58d4 + (uint)puVar1[1] * 0xc),
                     (CVector3f *)(&DAT_020b58d4 + (uint)puVar1[2] * 0xc));
          local_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_00477a50();
          if (((local_18 < local_20) && (0.0 <= local_18)) && (local_18 <= 1.0)) {
            local_4c = -(float)local_84._36_4_;
            local_48[0] = -local_5c;
            local_48[1] = -local_58;
            local_20 = local_18;
            local_48[2] = -(float)local_84._36_4_;
            local_48[(uint)bVar5 * -2 + 3] = local_48[(uint)bVar5 * -2];
            local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
                 local_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            if (&stack0x00000000 != &g_DeformableModelPool[0].field_0x2c) {
              _DAT_020ccfe0 = local_48[2];
              _DAT_020ccfe4 = local_48[3];
              _DAT_020ccfe8 = local_38;
            }
            _DAT_020ccfdc = local_24;
            _DAT_020ccfec = param_2;
            _DAT_020ccff0 = iVar4;
          }
          local_1c = local_1c + 0x12;
          iVar4 = iVar4 + 1;
          iVar3 = local_28;
        } while (iVar4 < local_28);
      }
      local_28 = iVar3;
      local_30 = local_30 + 4;
      local_34 = local_34 + 0x60;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_1 + 0xc00));
  }
  return local_20;
}
