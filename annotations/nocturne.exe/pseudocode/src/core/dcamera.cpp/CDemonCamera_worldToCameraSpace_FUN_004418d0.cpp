// Name: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0
// Address: 004418d0
// Address Range: [[004418d0, 00441a07]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_004418d0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int iStack_20;
  int local_18;
  int local_14;
  int local_10;
  
  piVar5 = &local_30;
  local_18 = input_vector->x - (this_ptr->camera_origin).x;
  local_14 = input_vector->y - (this_ptr->camera_origin).y;
  local_10 = input_vector->z - (this_ptr->camera_origin).z;
  lVar2 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)local_18;
  lVar3 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)local_14;
  lVar4 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)local_10;
  local_28 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
             ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
             ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < local_28) {
    lVar2 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)local_18;
    lVar3 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)local_14;
    lVar4 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)local_10;
    local_30 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
               ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if ((local_30 < local_28) && (-local_28 < local_30)) {
      lVar2 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)local_18;
      lVar3 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)local_14;
      lVar4 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)local_10;
      local_2c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                 ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                 ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((local_2c < local_28) && (-local_28 < local_2c)) goto LAB_00441951;
    }
  }
  piVar5 = (int *)&DAT_01410280;
LAB_00441951:
  local_24 = *piVar5;
  iStack_20 = piVar5[1];
  iVar1 = piVar5[2];
  output_vector->x = *piVar5;
  output_vector->y = iStack_20;
  output_vector->z = iVar1;
  return output_vector;
}
