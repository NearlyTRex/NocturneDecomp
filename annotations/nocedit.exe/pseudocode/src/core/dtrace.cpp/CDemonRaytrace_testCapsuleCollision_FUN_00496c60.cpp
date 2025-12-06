// Name: core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
// Address: 00496c60
// Address Range: [[00496c60, 00496e65]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60(CDemonRaytrace * this_ptr, SCapsuleCollision * capsule_data)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_testCapsuleCollision_FUN_00496c60
          (CDemonRaytrace *this_ptr,SCapsuleCollision *capsule_data)

{
  int grid_z;
  CDemonCube *this_ptr_00;
  uint in_EDX;
  int unaff_EBX;
  int unaff_ESI;
  int grid_y;
  int grid_x;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  int in_stack_0000000c;
  int in_stack_00000014;
  CDemonRaytrace *in_stack_0000001c;
  
  g_TempNormal0.y = g_ZeroVector.y;
  g_TempNormal2.z = g_ZeroVector.z;
  g_TempNormal2.x = g_ZeroVector.x;
  g_TempNormal1.z = g_ZeroVector.z;
  g_TempNormal1.x = g_ZeroVector.x;
  g_TempNormal0.z = g_ZeroVector.z;
  g_TempNormal0.x = g_ZeroVector.x;
  g_TempNormal1.y = g_TempNormal0.y;
  g_TempNormal2.y = g_TempNormal0.y;
  dVar5 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,this_ptr));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  fVar1 = (float10)1 / (float10)*(float *)(in_stack_0000000c + 0x2c);
  fVar2 = ((float10)(float)capsule_data->user_data2 - (float10)*(float *)(in_stack_0000000c + 0x14))
          * fVar1;
  fVar1 = ((float10)(float)capsule_data->user_data1 - (float10)*(float *)(in_stack_0000000c + 0x14))
          * fVar1;
  fVar4 = (float10)0;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),in_stack_0000000c));
  dVar5 = crt_math_c_round_FUN_005fe6b0(dVar5);
  grid_x = (int)ROUND(fVar2);
  if ((float10)capsule_data->dir_z <= fVar4) {
    fVar2 = (((float10)capsule_data->start_z + (float10)capsule_data->dir_z) -
            (float10)*(float *)(in_stack_00000014 + 0x18)) - (float10)capsule_data->radius;
    fVar3 = (float10)1 / (float10)*(float *)(in_stack_00000014 + 0x30);
    fVar4 = (float10)capsule_data->start_z;
  }
  else {
    fVar2 = ((float10)capsule_data->start_z - (float10)*(float *)(in_stack_00000014 + 0x18)) -
            (float10)capsule_data->radius;
    fVar3 = (float10)1 / (float10)*(float *)(in_stack_00000014 + 0x30);
    fVar4 = (float10)capsule_data->start_z + (float10)capsule_data->dir_z;
  }
  fVar2 = fVar2 * fVar3;
  fVar3 = ((fVar4 - (float10)*(float *)(in_stack_00000014 + 0x18)) + (float10)capsule_data->radius)
          * fVar3;
  dVar5 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar5 >> 0x20),in_stack_00000014));
  crt_math_c_round_FUN_005fe6b0(dVar5);
  for (; grid_x <= (int)ROUND(fVar1); grid_x = grid_x + 1) {
    grid_z = (int)ROUND(fVar2);
    grid_y = unaff_ESI;
    if (unaff_ESI <= unaff_EBX) {
      do {
        for (; grid_z <= (int)ROUND(fVar3); grid_z = grid_z + 1) {
          this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                  (in_stack_0000001c,grid_x,grid_y,grid_z);
          if (this_ptr_00 != (CDemonCube *)0x0) {
            core_dcube_cpp_CDemonCube_testCapsuleCollision_FUN_00457a90
                      (this_ptr_00,(SIntersectXZCylinder *)capsule_data);
          }
        }
        grid_y = grid_y + 1;
        grid_z = (int)ROUND(fVar2);
      } while (grid_y <= unaff_EBX);
    }
  }
  return;
}
