// Name: core_fldnotes.cpp_FUN_004bbad0
// Address: 004bbad0
// Address Range: [[004bbad0, 004bbb21]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004bbad0(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint core_fldnotes_cpp_FUN_004bbad0(int param_1,int param_2,int param_3)

{
  while( true ) {
    if ((*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x18)) &&
       (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x18) + param_3)) {
      return 0;
    }
    if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x1c)) ||
       (*(int *)(param_1 + 0x14) + param_2 <= *(int *)(param_1 + 0x24))) break;
    core_fldnotes_cpp_FUN_004bb630(param_1);
  }
  return 1;
}
