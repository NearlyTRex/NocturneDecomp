// Name: core_hero.cpp_FUN_004d06c0
// Address: 004d06c0
// Address Range: [[004d06c0, 004d072f] [004d0733, 004d0745]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d06c0(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d06c0(CCharacter *param_1,uint param_2)

{
  int iVar1;
  
  if ((((*(int *)&param_1[2].field_0x4158 == 0) && (*(int *)&param_1[2].field_0x4144 == 0)) &&
      (*(int *)&param_1[2].field_0x4148 == 0)) &&
     (((*(int *)&param_1[2].field_0x414c == 0 && (*(int *)&param_1[2].field_0x4150 == 0)) &&
      ((*(int *)&param_1[2].field_0x4154 == 0 && (*(int *)&param_1[2].field_0x415c == 0)))))) {
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
      iVar1 = core_charactr_cpp_FUN_00429180(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
      return 1;
    case 9:
      iVar1 = core_charactr_cpp_FUN_00429180(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
