// Name: core_hero.cpp_FUN_004ec950
// Address: 004ec950
// Address Range: [[004ec950, 004ec9bf] [004ec9c3, 004ec9d5]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004ec950(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004ec950(CCharacter *param_1,uint param_2)

{
  int iVar1;
  
  if ((((*(int *)&param_1[2].field_0x7be8 == 0) && (*(int *)&param_1[2].field_0x7bd4 == 0)) &&
      (*(int *)&param_1[2].field_0x7bd8 == 0)) &&
     (((*(int *)&param_1[2].field_0x7bdc == 0 && (*(int *)&param_1[2].field_0x7be0 == 0)) &&
      ((*(int *)&param_1[2].field_0x7be4 == 0 && (*(int *)&param_1[2].field_0x7bec == 0)))))) {
    switch(param_2) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
      iVar1 = core_charactr_cpp_FUN_00432c40(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
      return 1;
    case 9:
      iVar1 = core_charactr_cpp_FUN_00432c40(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
