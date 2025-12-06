// Name: core_stranger.cpp_FUN_005c37e0
// Address: 005c37e0
// Address Range: [[005c37e0, 005c395c]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005c37e0()

#include "nocturne.h"

CVector3f * core_stranger_cpp_FUN_005c37e0(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  CVector3f *in_stack_00000004;
  CVector3f *in_stack_00000008;
  float *in_stack_0000000c;
  float local_28;
  float local_20;
  
  core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
            (in_stack_00000004,in_stack_00000008);
  local_28 = SQRT(in_stack_00000008->z * in_stack_00000008->z +
                  in_stack_00000008->x * in_stack_00000008->x +
                  in_stack_00000008->y * in_stack_00000008->y);
  if ((float)0.01 < local_28) {
    fVar2 = -*in_stack_0000000c;
    pfVar1 = &in_stack_00000004->y;
    if ((((float)0.01 <= local_28) &&
        (dVar4 = (double)(SQRT(local_28 * local_28 - fVar2 * fVar2) / local_28), dVar4 < 1.0)) &&
       (0.0 <= dVar4)) {
      dVar4 = crt_math_c_acos_FUN_00600162(dVar4);
      local_28 = (float)dVar4;
      if (0.0 <= local_20) {
        fVar3 = *pfVar1 + local_28;
      }
      else {
        fVar3 = *pfVar1 - local_28;
      }
      *pfVar1 = fVar3;
      fVar3 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(*pfVar1);
      *pfVar1 = fVar3;
    }
    if (((0.01 <= (double)local_28) &&
        (dVar4 = (double)(SQRT(local_28 * local_28 - in_stack_0000000c[1] * in_stack_0000000c[1]) /
                         local_28), dVar4 < 1.0)) && (0.0 <= dVar4)) {
      dVar4 = crt_math_c_acos_FUN_00600162(dVar4);
      if (0.0 <= fVar2) {
        fVar2 = in_stack_00000004->x + (float)dVar4;
      }
      else {
        fVar2 = in_stack_00000004->x - (float)dVar4;
      }
      in_stack_00000004->x = fVar2;
      fVar2 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(in_stack_00000004->x);
      in_stack_00000004->x = fVar2;
    }
  }
  return in_stack_00000004;
}
