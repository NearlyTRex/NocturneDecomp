// Name: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0044e560
// Address: 0044e560
// Address Range: [[0044e560, 0044e697]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044e560(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0044e560(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  piVar5 = &iStack_30;
  iStack_18 = input_vector->x - (this_ptr->camera_origin).x;
  iStack_14 = input_vector->y - (this_ptr->camera_origin).y;
  iStack_10 = input_vector->z - (this_ptr->camera_origin).z;
  lVar2 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)iStack_18;
  lVar3 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)iStack_14;
  lVar4 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)iStack_10;
  iStack_28 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < iStack_28) {
    lVar2 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)iStack_18;
    lVar3 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)iStack_14;
    lVar4 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)iStack_10;
    iStack_30 = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if ((iStack_30 < iStack_28) && (-iStack_28 < iStack_30)) {
      lVar2 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)iStack_18;
      lVar3 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)iStack_14;
      lVar4 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)iStack_10;
      iStack_2c = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((iStack_2c < iStack_28) && (-iStack_28 < iStack_2c)) goto LAB_0044e5e1;
    }
  }
  piVar5 = (int *)&DAT_01483a40;
LAB_0044e5e1:
  iStack_24 = *piVar5;
  iStack_20 = piVar5[1];
  iVar1 = piVar5[2];
  output_vector->x = *piVar5;
  output_vector->y = iStack_20;
  output_vector->z = iVar1;
  return output_vector;
}
