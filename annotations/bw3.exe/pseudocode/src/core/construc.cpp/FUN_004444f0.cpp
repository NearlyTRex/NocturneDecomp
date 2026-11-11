// Name: core_construc.cpp_FUN_004444f0
// Address: 004444f0
// Address Range: [[004444f0, 00444518]]
// Convention: unknown
// Signature: EDeathState core_construc_cpp_FUN_004444f0(CCharacter *param_1)

#include "nocturne.h"

EDeathState core_construc_cpp_FUN_004444f0(CCharacter *param_1)

{
  EDeathState EVar1;
  
  EVar1 = core_charactr_cpp_CCharacter_getDeathState_FUN_00431000(param_1);
  if ((EVar1 == DEATH_STATE_ALIVE) &&
     (param_1[1].model.bone_transform.pose_data.bone_rotations[0x27].w != 0.0)) {
    return ~DEATH_STATE_DYING;
  }
  return EVar1;
}
