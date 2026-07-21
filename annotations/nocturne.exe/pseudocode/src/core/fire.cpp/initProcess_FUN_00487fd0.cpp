// Name: core_fire.cpp_initProcess_FUN_00487fd0
// Address: 00487fd0
// Address Range: [[00487fd0, 004880ca]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_initProcess_FUN_00487fd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_initProcess_FUN_00487fd0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  _DAT_01c09e08 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14ecb0); iVar4 = iVar4 + 1) {
    iVar2 = *(int *)(iVar3 + 0x14ecb4 + 0x01E57284);
    iVar1 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x104))(iVar2);
    if (iVar1 == 0) {
      iVar1 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004b45b0(iVar2 + 0x20,0x42480000);
      if (iVar1 != 0) {
        if (0x31 < _DAT_01c09e08) {
          _DAT_01cc4800 = "..\\core\\fire.cpp";
          _DAT_01cc4804 = 0xd03;
          FUN_004c8440("CGunFlame::initProcess - too many characters!");
        }
        *(int *)(&DAT_01c09e0c + _DAT_01c09e08 * 4) = iVar2;
        _DAT_01c09e08 = _DAT_01c09e08 + 1;
      }
    }
    iVar3 = iVar3 + 4;
  }
  iVar4 = 0;
  _DAT_01c09ed4 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(0x01E57284 + 0x14cd6c); iVar3 = iVar3 + 1) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                      (*(uint *)(iVar4 + 0x14cd70 + 0x01E57284),_DAT_01c7068c);
    if ((iVar2 != 0) && (_DAT_01c09ed4 < 0x96)) {
      *(int *)(&DAT_01c09ed8 + _DAT_01c09ed4 * 4) = iVar2;
      _DAT_01c09ed4 = _DAT_01c09ed4 + 1;
    }
    iVar4 = iVar4 + 4;
  }
  return;
}
