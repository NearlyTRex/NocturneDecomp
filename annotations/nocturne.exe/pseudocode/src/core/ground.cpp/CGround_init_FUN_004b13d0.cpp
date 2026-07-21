// Name: core_ground.cpp_CGround_init_FUN_004b13d0
// Address: 004b13d0
// Address Range: [[004b13d0, 004b1466]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_init_FUN_004b13d0(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ground_cpp_CGround_init_FUN_004b13d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  core_ground_cpp_CGround_free_FUN_004b1470(param_1);
  iVar1 = malloc(*param_1 * param_1[1] * 4);
  param_1[9] = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\core\\ground.cpp";
    _DAT_01cc4804 = 0xd3;
    FUN_004c8440("CGround::init - Out of memory");
  }
  iVar2 = FUN_0056497c(0x6d64);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = core_texlist_cpp_CTextureList_ctor_FUN_00544930(iVar2);
  }
  param_1[10] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\ground.cpp";
  _DAT_01cc4804 = 0xd8;
  FUN_004c8440("CGround::init - Out of memory2");
  return;
}
