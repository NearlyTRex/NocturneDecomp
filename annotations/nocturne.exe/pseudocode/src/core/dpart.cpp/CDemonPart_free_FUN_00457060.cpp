// Name: core_dpart.cpp_CDemonPart_free_FUN_00457060
// Address: 00457060
// Address Range: [[00457060, 004570b5]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00457060(int param_1)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_free_FUN_00457060(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x2c));
    *(uint *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_005638d0(*(int *)(param_1 + 0x34));
    *(uint *)(param_1 + 0x34) = 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_005638d0(*(int *)(param_1 + 0x30));
  *(uint *)(param_1 + 0x30) = 0;
  return;
}
