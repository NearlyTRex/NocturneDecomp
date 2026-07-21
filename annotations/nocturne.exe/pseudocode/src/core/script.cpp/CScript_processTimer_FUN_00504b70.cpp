// Name: core_script.cpp_CScript_processTimer_FUN_00504b70
// Address: 00504b70
// Address Range: [[00504b70, 00504bef]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(int param_1,float param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_script_cpp_CScript_processTimer_FUN_00504b70(int param_1,float param_2,float *param_3)

{
  if (param_2 < 0.0) {
    _DAT_01cc4800 = "?..\\core\\script.cpp" + 1;
    _DAT_01cc4804 = 0xdf7;
    FUN_004c8440("CScript::processTimer - invalidTimeToWait");
  }
  if (*(float *)(param_1 + 0x44) < 0.0) {
    *(float *)(param_1 + 0x44) = param_2;
  }
  if (*(float *)(param_1 + 0x44) <= *param_3) {
    *param_3 = *param_3 - *(float *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x44) = 0;
    return 1;
  }
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - *param_3;
  *param_3 = 0.0;
  return 0;
}
