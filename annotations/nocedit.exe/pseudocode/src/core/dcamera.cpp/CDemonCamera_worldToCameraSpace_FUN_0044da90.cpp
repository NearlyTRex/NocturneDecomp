// Name: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90
// Address: 0044da90
// Address Range: [[0044da90, 0044dbc7]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044da90(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  longlong lVar1;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CVector3i *pCVar5;
  CVector3i local_30;
  int local_24;
  int iStack_20;
  int local_18;
  int local_14;
  int local_10;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  pCVar5 = &local_30;
  iVar7 = input_vector->x - (this_ptr->camera_origin).x;
  iVar8 = input_vector->y - (this_ptr->camera_origin).y;
  iVar9 = input_vector->z - (this_ptr->camera_origin).z;
  lVar2 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)iVar7;
  lVar3 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)iVar8;
  lVar4 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)iVar9;
  local_30.z = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < local_30.z) {
    lVar1 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)iVar7;
    lVar5 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)iVar8;
    lVar6 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)iVar9;
    local_30.x = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                 ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                 ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
    if ((local_30.x < local_30.z) && (-local_30.z < local_30.x)) {
      lVar1 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)iVar7;
      lVar5 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)iVar8;
      lVar6 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)iVar9;
      local_30.y = ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
                   ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) +
                   ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
      if ((local_30.y < local_30.z) && (-local_30.z < local_30.y)) goto LAB_0044db11;
    }
  }
  pCVar5 = &g_CameraOutOfBoundsCoord;
LAB_0044db11:
  iVar7 = pCVar5->y;
  iVar1 = pCVar5->z;
  output_vector->x = pCVar5->x;
  output_vector->y = iVar7;
  output_vector->z = iVar1;
  return output_vector;
}
