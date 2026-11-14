// Name: core_hero.cpp_FUN_004d4840
// Address: 004d4840
// Address Range: [[004d4840, 004d48c5]]
// Convention: unknown
// Signature: undefined4 core_hero_cpp_FUN_004d4840(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_hero_cpp_FUN_004d4840(CCharacter *param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_1[2].flames[0x15].base.orient_matrix.m[0].y == 0.0) &&
       (param_1[2].flames[0x15].base.location.area_id == 0)) &&
      (param_1[2].flames[0x15].base.orient.vec.x == 0.0)) &&
     (((param_1[2].flames[0x15].base.orient.vec.y == 0.0 &&
       (param_1[2].flames[0x15].base.orient.vec.z == 0.0)) &&
      ((param_1[2].flames[0x15].base.orient_matrix.m[0].x == 0.0 &&
       (param_1[2].flames[0x15].base.orient_matrix.m[0].z == 0.0)))))) {
    switch(param_2) {
    case 0:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(param_1);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
    case 3:
      return 1;
    case 10:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00432060(param_1);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
