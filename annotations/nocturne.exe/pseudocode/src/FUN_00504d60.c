// Name: FUN_00504d60
// Address: 00504d60
// Address Range: [[00504d60, 00504d81]]
// Convention: unknown
// Signature: void FUN_00504d60(int param_1)

#include "nocturne.h"

void FUN_00504d60(int param_1)

{
  core_script_cpp_CScript_setSpeaker_FUN_00504bf0(param_1,*(uint *)(param_1 + 4));
  *(uint *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 0x48) = 0;
  return;
}
