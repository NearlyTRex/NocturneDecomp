// Name: core_fire.cpp_CFireEffect_FUN_004c8c90
// Address: 004c8c90
// Address Range: [[004c8c90, 004c8dc9]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireEffect_FUN_004c8c90(CFireEffect * this_ptr)

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireEffect_FUN_004c8c90(CFireEffect *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CExplosion *pCVar5;
  float *in_stack_00000008;
  float in_stack_0000000c;
  float *in_stack_00000010;
  uint *in_stack_00000014;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [6];
  float local_24 [5];
  
  pCVar5 = g_ExplosionPool;
  iVar4 = 0;
  do {
    if ((float)0.5 < *(float *)(pCVar5->field0_0x0 + 0xc)) {
      if (&local_48 != local_24) {
        local_48 = *in_stack_00000008 - *(float *)pCVar5->field0_0x0;
        local_44 = in_stack_00000008[1] - *(float *)(pCVar5->field0_0x0 + 4);
        local_40 = in_stack_00000008[2] - *(float *)(pCVar5->field0_0x0 + 8);
      }
      fVar1 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
      if (fVar1 < *(float *)(pCVar5->field0_0x0 + 0x10) * (float)0.5 + in_stack_0000000c
         ) {
        if (in_stack_00000010 != (float *)0x0) {
          fVar1 = 1.0 / fVar1;
          fVar2 = local_44 * fVar1 * 40.0f;
          fVar3 = local_40 * fVar1 * 40.0f;
          if (local_3c != in_stack_00000010) {
            *in_stack_00000010 = local_48 * fVar1 * 40.0f;
            in_stack_00000010[1] = fVar2;
            in_stack_00000010[2] = fVar3;
          }
        }
        if (in_stack_00000014 != (uint *)0x0) {
          *in_stack_00000014 = *(uint *)(pCVar5->field0_0x0 + 0x14);
        }
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    pCVar5 = pCVar5 + 1;
    if (9 < iVar4) {
      return 0;
    }
  } while( true );
}
