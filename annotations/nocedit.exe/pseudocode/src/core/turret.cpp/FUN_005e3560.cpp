// Name: core_turret.cpp_FUN_005e3560
// Address: 005e3560
// Address Range: [[005e3560, 005e3610]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3560()

#include "nocturne.h"

/* Signature: byte actors_weapon_turret.cpp_FUN_005e3560(uint param_1, uint
   param_2) */

void core_turret_cpp_FUN_005e3560(void)

{
  CVector3f *input_local_point;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float fStack_54;
  uint uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_14;
  
  if (*(float *)(in_stack_00000004 + 0x86c) <= 0.0) {
    if (*(int *)(in_stack_00000004 + 0x780) != 0) {
      input_local_point = (CVector3f *)(in_stack_00000004 + 0x84c);
      iVar7 = core_turret_cpp_FUN_005e3280();
      if (iVar7 != 0) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x780) + 0x154) + 0x14))();
        fVar1 = input_local_point->x;
        fVar2 = *(float *)(in_stack_00000004 + 0x850);
        iVar7 = 0;
        fVar3 = *(float *)(in_stack_00000004 + 0x854);
        while( true ) {
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(in_stack_00000004 + 0x84c) =
               fStack_54 * fStack_24 + (1.0 - fStack_24) * fStack_48;
          fStack_14 = fStack_24;
          fStack_24 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.1,0.9);
          *(float *)(in_stack_00000004 + 0x854) =
               fStack_4c * fStack_24 + (1.0 - fStack_24) * fStack_40;
          *(uint *)(in_stack_00000004 + 0x850) = uStack_50;
          fStack_14 = fStack_24;
          pCVar8 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (*(CDemonActor **)(in_stack_00000004 + 0x780),&CStack_30,
                              input_local_point);
          if (input_local_point != pCVar8) {
            input_local_point->x = pCVar8->x;
            *(float *)(in_stack_00000004 + 0x850) = pCVar8->y;
            *(float *)(in_stack_00000004 + 0x854) = pCVar8->z;
          }
          fVar4 = input_local_point->x - fVar1;
          fVar6 = *(float *)(in_stack_00000004 + 0x850) - fVar2;
          fVar5 = *(float *)(in_stack_00000004 + 0x854) - fVar3;
          if (25f < fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) break;
          iVar7 = iVar7 + 1;
          if (4 < iVar7) {
            return;
          }
        }
      }
    }
  }
  else if (*(float *)(in_stack_00000004 + 0x300) <= 0.0) {
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0xf8))();
  }
  return;
}
