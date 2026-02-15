// Name: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// Address: 00496c60
// Address Range: [[00496c60, 00496e65]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00496db8) */
/* WARNING: Removing unreachable block (ram,0x00496dc4) */
/* WARNING: Removing unreachable block (ram,0x00496dd8) */
/* WARNING: Removing unreachable block (ram,0x00496de2) */
/* WARNING: Removing unreachable block (ram,0x00496deb) */
/* WARNING: Removing unreachable block (ram,0x00496df4) */
/* WARNING: Removing unreachable block (ram,0x00496dac) */

void __cdecl core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  int unaff_EBX;
  int unaff_EDI;
  float10 fVar7;
  
  g_TempNormal0.y = g_ZeroVector.y;
  g_TempNormal2.z = g_ZeroVector.z;
  g_TempNormal2.x = g_ZeroVector.x;
  g_TempNormal1.z = g_ZeroVector.z;
  g_TempNormal1.x = g_ZeroVector.x;
  g_TempNormal0.z = g_ZeroVector.z;
  g_TempNormal0.x = g_ZeroVector.x;
  if (capsule_data->dir_x <= 0.0) {
    fVar6 = ((capsule_data->start_x + capsule_data->dir_x) - (this_ptr->bbox_min).x) -
            capsule_data->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar5 = capsule_data->start_x;
  }
  else {
    fVar6 = (capsule_data->start_x - (this_ptr->bbox_min).x) - capsule_data->radius;
    fVar1 = (this_ptr->cell_size).x;
    fVar5 = capsule_data->start_x + capsule_data->dir_x;
  }
  fVar2 = (this_ptr->bbox_min).x;
  fVar3 = capsule_data->radius;
  g_TempNormal1.y = g_TempNormal0.y;
  g_TempNormal2.y = g_TempNormal0.y;
  round((double)(fVar6 * (1.0 / fVar1)));
  round((double)(((fVar5 - fVar2) + fVar3) * (1.0 / fVar1)));
  fVar5 = 1.0 / *(float *)(unaff_EBX + 0x2c);
  pvVar4 = capsule_data->top_y;
  fVar1 = *(float *)(unaff_EBX + 0x14);
  fVar7 = (float10)0;
  round
            ((double)(((float)capsule_data->bottom_y - *(float *)(unaff_EBX + 0x14)) * fVar5));
  round((double)(((float)pvVar4 - fVar1) * fVar5));
  if ((float10)capsule_data->dir_z <= fVar7) {
    fVar6 = ((capsule_data->start_z + capsule_data->dir_z) - *(float *)(unaff_EDI + 0x18)) -
            capsule_data->radius;
    fVar1 = *(float *)(unaff_EDI + 0x30);
    fVar5 = capsule_data->start_z;
  }
  else {
    fVar6 = (capsule_data->start_z - *(float *)(unaff_EDI + 0x18)) - capsule_data->radius;
    fVar1 = *(float *)(unaff_EDI + 0x30);
    fVar5 = capsule_data->start_z + capsule_data->dir_z;
  }
  fVar2 = *(float *)(unaff_EDI + 0x18);
  fVar3 = capsule_data->radius;
  round((double)(fVar6 * (1.0 / fVar1)));
  round((double)(((fVar5 - fVar2) + fVar3) * (1.0 / fVar1)));
  return;
}
