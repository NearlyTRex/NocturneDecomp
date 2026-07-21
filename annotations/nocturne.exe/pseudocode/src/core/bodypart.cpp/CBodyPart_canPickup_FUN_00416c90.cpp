// Name: core_bodypart.cpp_CBodyPart_canPickup_FUN_00416c90
// Address: 00416c90
// Address Range: [[00416c90, 00416cae]]
// Convention: unknown
// Signature: undefined4 core_bodypart_cpp_CBodyPart_canPickup_FUN_00416c90(int param_1)

#include "nocturne.h"

uint core_bodypart_cpp_CBodyPart_canPickup_FUN_00416c90(int param_1)

{
  if ((*(int *)(param_1 + 0x150) == 0) && (*(int *)(param_1 + 0xcac) == 0)) {
    return 3;
  }
  return 0;
}
