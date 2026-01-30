// Name: core_gargoyle.cpp_CGargoyle_FUN_004e48a0
// Address: 004e48a0
// Address Range: [[004e48a0, 004e49e7]]
// Convention: __cdecl
// Signature: int __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e48a0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e48a0(CGargoyle* param_1) */

int __cdecl core_gargoyle_cpp_CGargoyle_FUN_004e48a0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  float fVar5;
  int in_stack_00000004;
  CVector3f local_24;
  CVector3f local_18;
  
  iVar1 = *(int *)(in_stack_00000004 + 0xbe3c);
  *(uint *)(in_stack_00000004 + 0xbf10) = 0;
  if (iVar1 != 0) {
    local_24.x = *(float *)(in_stack_00000004 + 0x20) - *(float *)(iVar1 + 0x20);
    local_24.y = *(float *)(in_stack_00000004 + 0x24) - *(float *)(iVar1 + 0x24);
    local_24.z = *(float *)(in_stack_00000004 + 0x28) - *(float *)(iVar1 + 0x28);
    if (SQRT(local_24.z * local_24.z + local_24.x * local_24.x + local_24.y * local_24.y) <=
        *(float *)(in_stack_00000004 + 0xbe34)) {
      pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                         (&local_18,&local_24);
      if (&local_24 != pCVar4) {
        local_24.x = pCVar4->x;
        local_24.y = pCVar4->y;
        local_24.z = pCVar4->z;
      }
      fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70
                        (*(float *)(*(int *)(in_stack_00000004 + 0xbe3c) + 0x34) - local_24.y);
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
