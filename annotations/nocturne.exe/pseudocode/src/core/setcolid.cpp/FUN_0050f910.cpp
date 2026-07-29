// Name: core_setcolid.cpp_FUN_0050f910
// Address: 0050f910
// Address Range: [[0050f910, 0050fa27]]
// Convention: unknown
// Signature: float core_setcolid_cpp_FUN_0050f910(CDemonSet *param_1,CVector3f *param_2)

#include "nocturne.h"

float core_setcolid_cpp_FUN_0050f910(CDemonSet *param_1,CVector3f *param_2)

{
  float fVar1;
  float local_30;
  CVector3f local_2c;
  CVector3f local_20;
  float local_10;
  
  if (&local_20 != param_2) {
    local_20.x = param_2->x;
    local_20.y = param_2->y;
    local_20.z = param_2->z;
  }
  if (&local_2c != param_2) {
    local_2c.x = param_2->x;
    local_2c.y = param_2->y;
    local_2c.z = param_2->z;
  }
  local_20.y = local_20.y + -1.0f;
  local_2c.y = local_2c.y + 150.0f;
  local_10 = core_dtrace_cpp_CDemonRaytrace_rayVoxelIntersection_FUN_00467a00
                       ((CDemonRaytrace *)&DAT_01fba938,&local_20,&local_2c,
                        (CVector3f *)(param_1->lights[199].filter_names[0x12] + 0x24),
                        (int *)(param_1->lights[199].filter_names[0x13] + 8));
  local_30 = local_10;
  if (local_10 < 0.0) {
    local_30 = 1.01;
  }
  if ((local_30 < 1.0) && (*(int *)(param_1->lights[199].filter_names[0x13] + 8) == 0)) {
    *(float *)(param_1->lights[199].filter_names[0x13] + 8) = param_1->vdir_boxes[0xeb].extents.z;
  }
  fVar1 = core_setcolid_cpp_CDemonSet_raycastAgainstActors_FUN_0050ffe0
                    (param_1,-1.0,&local_20,&local_2c,local_30);
  return (local_2c.y - local_20.y) * fVar1 + local_20.y;
}
