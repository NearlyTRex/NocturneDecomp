// Name: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// Address: 00496c60
// Address Range: [[00496c60, 00496e65]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace * this_ptr, SCapsuleCollision * capsule_data)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00496db8) */
/* WARNING: Removing unreachable block (ram,0x00496dc4) */
/* WARNING: Removing unreachable block (ram,0x00496dd8) */
/* WARNING: Removing unreachable block (ram,0x00496de2) */
/* WARNING: Removing unreachable block (ram,0x00496deb) */
/* WARNING: Removing unreachable block (ram,0x00496df4) */
/* WARNING: Removing unreachable block (ram,0x00496dac) */

void __cdecl
core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
          (CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

{
  int unaff_EBX;
  int unaff_EDI;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  g_TempNormal0.y = g_ZeroVector.y;
  g_TempNormal2.z = g_ZeroVector.z;
  g_TempNormal2.x = g_ZeroVector.x;
  g_TempNormal1.z = g_ZeroVector.z;
  g_TempNormal1.x = g_ZeroVector.x;
  g_TempNormal0.z = g_ZeroVector.z;
  g_TempNormal0.x = g_ZeroVector.x;
  if (capsule_data->dir_x <= 0.0) {
    fVar1 = (((float10)capsule_data->start_x + (float10)capsule_data->dir_x) -
            (float10)(this_ptr->bbox_min).x) - (float10)capsule_data->radius;
    fVar2 = (float10)1 / (float10)(this_ptr->cell_size).x;
    fVar3 = (float10)capsule_data->start_x;
  }
  else {
    fVar1 = ((float10)capsule_data->start_x - (float10)(this_ptr->bbox_min).x) -
            (float10)capsule_data->radius;
    fVar2 = (float10)1 / (float10)(this_ptr->cell_size).x;
    fVar3 = (float10)capsule_data->start_x + (float10)capsule_data->dir_x;
  }
  fVar3 = ((fVar3 - (float10)(this_ptr->bbox_min).x) + (float10)capsule_data->radius) * fVar2;
  g_TempNormal1.y = g_TempNormal0.y;
  g_TempNormal2.y = g_TempNormal0.y;
  crt_math_c_round_FUN_005fe6b0((double)(fVar1 * fVar2));
  crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar2 = (float10)1 / (float10)*(float *)(unaff_EBX + 0x2c);
  fVar3 = ((float10)(float)capsule_data->user_data1 - (float10)*(float *)(unaff_EBX + 0x14)) * fVar2
  ;
  fVar1 = (float10)0;
  crt_math_c_round_FUN_005fe6b0
            ((double)(((float10)(float)capsule_data->user_data2 -
                      (float10)*(float *)(unaff_EBX + 0x14)) * fVar2));
  crt_math_c_round_FUN_005fe6b0((double)fVar3);
  if ((float10)capsule_data->dir_z <= fVar1) {
    fVar1 = (((float10)capsule_data->start_z + (float10)capsule_data->dir_z) -
            (float10)*(float *)(unaff_EDI + 0x18)) - (float10)capsule_data->radius;
    fVar2 = (float10)1 / (float10)*(float *)(unaff_EDI + 0x30);
    fVar3 = (float10)capsule_data->start_z;
  }
  else {
    fVar1 = ((float10)capsule_data->start_z - (float10)*(float *)(unaff_EDI + 0x18)) -
            (float10)capsule_data->radius;
    fVar2 = (float10)1 / (float10)*(float *)(unaff_EDI + 0x30);
    fVar3 = (float10)capsule_data->start_z + (float10)capsule_data->dir_z;
  }
  fVar3 = ((fVar3 - (float10)*(float *)(unaff_EDI + 0x18)) + (float10)capsule_data->radius) * fVar2;
  crt_math_c_round_FUN_005fe6b0((double)(fVar1 * fVar2));
  crt_math_c_round_FUN_005fe6b0((double)fVar3);
  return;
}
