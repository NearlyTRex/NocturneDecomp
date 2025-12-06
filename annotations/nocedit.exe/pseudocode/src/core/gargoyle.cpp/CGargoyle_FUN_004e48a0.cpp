// Name: core_gargoyle.cpp_CGargoyle_FUN_004e48a0
// Address: 004e48a0
// Address Range: [[004e48a0, 004e49e7]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_FUN_004e48a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e48a0(CGargoyle* param_1) */

uint core_gargoyle_cpp_CGargoyle_FUN_004e48a0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  byte local_24 [8];
  float local_1c;
  CVector3f local_18;
  
  iVar1 = *(int *)(in_stack_00000004 + 0xbe3c);
  *(uint *)(in_stack_00000004 + 0xbf10) = 0;
  if (iVar1 != 0) {
    local_24._0_4_ = *(float *)(in_stack_00000004 + 0x20) - *(float *)(iVar1 + 0x20);
    local_24._4_4_ = *(float *)(in_stack_00000004 + 0x24) - *(float *)(iVar1 + 0x24);
    local_1c = *(float *)(in_stack_00000004 + 0x28) - *(float *)(iVar1 + 0x28);
    if (SQRT(local_1c * local_1c +
             (float)local_24._0_4_ * (float)local_24._0_4_ +
             (float)local_24._4_4_ * (float)local_24._4_4_) <=
        *(float *)(in_stack_00000004 + 0xbe34)) {
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&local_18,(CVector3f *)local_24);
      if ((CVector3f *)(local_24 + 4) != pCVar4) {
        local_24._4_4_ = pCVar4->x;
        local_1c = pCVar4->y;
        local_18.x = pCVar4->z;
      }
      fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (*(float *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x34) - local_1c);
      if ((fVar5 < (float)-0.31415926534999999) || ((float)0.31415926534999999 < fVar5)) {
        return 1;
      }
    }
    else {
      iVar1 = *(int *)(in_stack_00000004 + 0xbef8);
      if (iVar1 != 0) {
        fVar5 = *(float *)(iVar1 + 0x20) - *(float *)(in_stack_00000004 + 0x20);
        fVar2 = *(float *)(iVar1 + 0x24) - *(float *)(in_stack_00000004 + 0x24);
        fVar3 = *(float *)(iVar1 + 0x28) - *(float *)(in_stack_00000004 + 0x28);
        if (1.0 <= SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2)) {
          *(uint *)(in_stack_00000004 + 0xbf10) = 1;
          return 1;
        }
      }
    }
  }
  return 0;
}
