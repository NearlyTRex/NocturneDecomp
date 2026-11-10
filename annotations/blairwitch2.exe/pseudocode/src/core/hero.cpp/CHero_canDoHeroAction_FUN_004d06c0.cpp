// Name: core_hero.cpp_CHero_canDoHeroAction_FUN_004d06c0
// Address: 004d06c0
// Address Range: [[004d06c0, 004d072f] [004d0733, 004d0745]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_canDoHeroAction_FUN_004d06c0(CHero *this_ptr,int action_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_canDoHeroAction_FUN_004d06c0(CHero *this_ptr,int action_type)

{
  int iVar1;
  
  if ((((*(int *)(this_ptr + 0x25618) == 0) && (*(int *)(this_ptr + 0x25604) == 0)) &&
      (*(int *)(this_ptr + 0x25608) == 0)) &&
     (((*(int *)(this_ptr + 0x2560c) == 0 && (*(int *)(this_ptr + 0x25610) == 0)) &&
      ((*(int *)(this_ptr + 0x25614) == 0 && (*(int *)(this_ptr + 0x2561c) == 0)))))) {
    switch(action_type) {
    case 0:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00429180((CCharacter *)this_ptr);
      if (iVar1 == 0) {
        return 1;
      }
      break;
    case 1:
    case 2:
      return 1;
    case 9:
      iVar1 = core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00429180((CCharacter *)this_ptr);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}
