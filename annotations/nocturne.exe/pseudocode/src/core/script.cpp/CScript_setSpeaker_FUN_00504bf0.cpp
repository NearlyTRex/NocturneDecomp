// Name: core_script.cpp_CScript_setSpeaker_FUN_00504bf0
// Address: 00504bf0
// Address Range: [[00504bf0, 00504c09]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00504bf0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_setSpeaker_FUN_00504bf0(int param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 4)) {
    return;
  }
  *(uint *)(param_1 + 4) = 0;
  *(byte *)(param_1 + 0x4c) = 0;
  return;
}
