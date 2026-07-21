// Name: core_charactr.cpp_CCharacter_getCollisionType_FUN_00427da0
// Address: 00427da0
// Address Range: [[00427da0, 00427e30]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(int param_1,int *param_2)

#include "nocturne.h"

uint __cdecl core_charactr_cpp_CCharacter_getCollisionType_FUN_00427da0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 2) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
    if (iVar1 < 2) {
      if ((*param_2 != 1) && (*param_2 != 3)) {
        param_2[6] = (int)(*(float *)(param_1 + 0x2de8) * *(float *)(param_1 + 0x2614));
        param_2[5] = (int)(*(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614));
        if ((float)param_2[6] < (float)param_2[5]) {
          param_2[6] = *(int *)(param_1 + 0x2398);
        }
        param_2[7] = (int)(*(float *)(param_1 + 0x2dd8) * *(float *)(param_1 + 0x2614));
        return 2;
      }
      param_2[8] = param_1 + 0x150;
      return 1;
    }
  }
  return 0;
}
