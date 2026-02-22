// Name: core_set.cpp_transformToWorldSpace_FUN_0056e890
// Address: 0056e890
// Address Range: [[0056e890, 0056e959]]
// Convention: __stack_esi
// Signature: CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_0056e890(CVector3i *input,CVector3i *output)

#include "nocturne.h"

CVector3i * __stack_esi core_set_cpp_transformToWorldSpace_FUN_0056e890(CVector3i *input,CVector3i *output)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar1 = (longlong)g_InverseMatrix.m[0].x * (longlong)input->x;
  lVar2 = (longlong)g_InverseMatrix.m[1].x * (longlong)input->y;
  lVar3 = (longlong)g_InverseMatrix.m[2].x * (longlong)input->z;
  lVar4 = (longlong)g_InverseMatrix.m[0].y * (longlong)input->x;
  lVar5 = (longlong)g_InverseMatrix.m[1].y * (longlong)input->y;
  lVar6 = (longlong)g_InverseMatrix.m[2].y * (longlong)input->z;
  iVar7 = g_CameraOriginY +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  lVar4 = (longlong)g_InverseMatrix.m[0].z * (longlong)input->x;
  lVar5 = (longlong)g_InverseMatrix.m[1].z * (longlong)input->y;
  lVar6 = (longlong)g_InverseMatrix.m[2].z * (longlong)input->z;
  iVar8 = g_CameraOriginZ +
          ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10) +
          ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10) +
          ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  output->x = g_CameraOriginX +
              ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) +
              ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) +
              ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  output->y = iVar7;
  output->z = iVar8;
  return output;
}
