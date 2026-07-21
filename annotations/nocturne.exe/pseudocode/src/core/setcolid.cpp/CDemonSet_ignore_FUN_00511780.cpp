// Name: core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
// Address: 00511780
// Address Range: [[00511780, 005117dc]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(int param_1,int param_2)

{
  if ((param_2 != 0) && (-1 < *(int *)(param_1 + 0x15f2ac))) {
    if (9 < *(int *)(param_1 + 0x15f2ac)) {
      _DAT_01cc4800 = "..\\core\\setcolid.cpp";
      _DAT_01cc4804 = 0x473;
      FUN_004c8440("CDemonSet::ignore - ignore list is full");
    }
    *(int *)(param_1 + 0x15f2b4 + *(int *)(param_1 + 0x15f2ac) * 4) = param_2;
    *(int *)(param_1 + 0x15f2ac) = *(int *)(param_1 + 0x15f2ac) + 1;
  }
  return;
}
