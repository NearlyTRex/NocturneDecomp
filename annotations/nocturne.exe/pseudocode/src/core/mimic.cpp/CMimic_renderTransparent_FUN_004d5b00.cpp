// Name: core_mimic.cpp_CMimic_renderTransparent_FUN_004d5b00
// Address: 004d5b00
// Address Range: [[004d5b00, 004d5b0f]]
// Convention: unknown
// Signature: undefined4 core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(int param_1)

#include "nocturne.h"

uint core_mimic_cpp_CMimic_renderTransparent_FUN_004d5b00(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0xfc) == 0) {
    return 0;
  }
  uVar1 = core_mimic_cpp_CMimic_renderMirrored_FUN_004d5860(param_1);
  return uVar1;
}
