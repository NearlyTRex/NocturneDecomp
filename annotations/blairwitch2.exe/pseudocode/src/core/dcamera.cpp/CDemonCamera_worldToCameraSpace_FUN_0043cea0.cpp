// Name: core_dcamera.cpp_CDemonCamera_worldToCameraSpace_FUN_0043cea0
// Address: 0043cea0
// Address Range: [[0043cea0, 0043cfd7]]
// Convention: __stack2_esi
// Signature: CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0043cea0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

#include "nocturne.h"

CVector3i * __stack2_esi core_dcamera_cpp_CDemonCamera_worldToCameraSpace_FUN_0043cea0(CDemonCamera *this_ptr,CVector3i *input_vector,CVector3i *output_vector)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  CVector3i *pCVar5;
  CVector3i CStack_30;
  int iStack_24;
  int iStack_20;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  pCVar5 = &CStack_30;
  iStack_18 = input_vector->x - (this_ptr->camera_origin).x;
  iStack_14 = input_vector->y - (this_ptr->camera_origin).y;
  iStack_10 = input_vector->z - (this_ptr->camera_origin).z;
  lVar2 = (longlong)(this_ptr->source_matrix).m[0].z * (longlong)iStack_18;
  lVar3 = (longlong)(this_ptr->source_matrix).m[1].z * (longlong)iStack_14;
  lVar4 = (longlong)(this_ptr->source_matrix).m[2].z * (longlong)iStack_10;
  CStack_30.z = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  if (0 < CStack_30.z) {
    lVar2 = (longlong)(this_ptr->source_matrix).m[0].x * (longlong)iStack_18;
    lVar3 = (longlong)(this_ptr->source_matrix).m[1].x * (longlong)iStack_14;
    lVar4 = (longlong)(this_ptr->source_matrix).m[2].x * (longlong)iStack_10;
    CStack_30.x = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                  ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                  ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
    if ((CStack_30.x < CStack_30.z) && (-CStack_30.z < CStack_30.x)) {
      lVar2 = (longlong)(this_ptr->source_matrix).m[0].y * (longlong)iStack_18;
      lVar3 = (longlong)(this_ptr->source_matrix).m[1].y * (longlong)iStack_14;
      lVar4 = (longlong)(this_ptr->source_matrix).m[2].y * (longlong)iStack_10;
      CStack_30.y = ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10) +
                    ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
                    ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
      if ((CStack_30.y < CStack_30.z) && (-CStack_30.z < CStack_30.y)) goto LAB_0043cf21;
    }
  }
  pCVar5 = &g_CameraOutOfBoundsCoord;
LAB_0043cf21:
  iStack_24 = pCVar5->x;
  iStack_20 = pCVar5->y;
  iVar1 = pCVar5->z;
  output_vector->x = pCVar5->x;
  output_vector->y = iStack_20;
  output_vector->z = iVar1;
  return output_vector;
}
