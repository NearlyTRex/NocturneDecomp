// Name: core_scat.cpp_FUN_00557df0
// Address: 00557df0
// Address Range: [[00557df0, 00557e9b]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557df0()

#include "nocturne.h"

/* Signature: byte actors_hero_scat.cpp_FUN_00557df0(uint param_1) */

int core_scat_cpp_FUN_00557df0(void)

{
  int iVar1;
  float fVar2;
  CCharacter *in_stack_00000004;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0(in_stack_00000004);
  if (iVar1 != 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0) {
      (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 8))();
      if (*(int *)(in_stack_00000004[2].cloth_data + 0x5508) != 0) {
        switch(*(uint *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x2e0)) {
        default:
          break;
        case 8:
        }
      }
      fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
      if ((float)0.94999999999999996 < fVar2) {
        (**(code **)(*(int *)(*(int *)(in_stack_00000004[2].cloth_data + 0x5508) + 0x154) + 0x104))
                  ();
        return 1;
      }
      return 1;
    }
    iVar1 = 1;
  }
  return iVar1;
}
