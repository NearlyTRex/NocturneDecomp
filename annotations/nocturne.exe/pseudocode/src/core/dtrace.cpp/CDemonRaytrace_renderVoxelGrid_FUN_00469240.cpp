// Name: core_dtrace.cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240
// Address: 00469240
// Address Range: [[00469240, 0046938f]]
// Convention: unknown
// Signature: void core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_CDemonRaytrace_renderVoxelGrid_FUN_00469240(CDemonRaytrace *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CVector3f local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  fVar1 = (param_1->cell_size).x;
  fVar2 = (param_1->bbox_min).x;
  fVar3 = (param_1->cell_size).y;
  fVar4 = (param_1->bbox_min).y;
  fVar5 = (param_1->cell_size).z;
  local_1c = 0;
  fVar6 = (param_1->bbox_min).z;
  local_28 = 0;
  do {
    iVar8 = 0;
    local_24 = local_28;
    local_20 = local_28;
    do {
      if ((*param_2 != 0) && (*(char *)(*param_2 + local_24) != '\0')) {
        iVar7 = 0;
        local_18 = local_20;
        do {
          if ((*(byte *)(*param_2 + local_18) & (&DAT_005b6d08)[iVar7]) != 0) {
            local_34.x = (float)iVar7 * (param_1->cell_size).x * _DAT_0057e1fa +
                         (float)param_3 * fVar1 + fVar2;
            local_14 = local_1c;
            local_34.y = (float)iVar8 * (param_1->cell_size).y * _DAT_0057e1fa +
                         (float)param_4 * fVar3 + fVar4;
            local_34.z = (float)local_1c * (param_1->cell_size).z * _DAT_0057e1fa +
                         (float)param_5 * fVar5 + fVar6;
            core_dtrace_cpp_CDemonRaytrace_renderGridCube_FUN_00468d00(param_1,&local_34);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      iVar8 = iVar8 + 1;
      local_20 = local_20 + 1;
      local_24 = local_24 + 1;
    } while (iVar8 < 8);
    local_1c = local_1c + 1;
    local_28 = local_28 + 8;
  } while (local_1c < 8);
  return;
}
