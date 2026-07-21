// Name: core_fire.cpp_CCrater_load_FUN_00487d50
// Address: 00487d50
// Address Range: [[00487d50, 00487e8b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_load_FUN_00487d50(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_00487d50(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  _fscanf(param_2,"%d,%d,%f,%f\n",param_1,param_1 + 4,param_1 + 8,param_1 + 0x18);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0xc,param_1 + 0x10,param_1 + 0x14);
  iVar2 = 0;
  iVar3 = param_1 + 0x24;
  iVar4 = param_1 + 0x20;
  do {
    iVar1 = iVar2 * 0xc;
    iVar2 = iVar2 + 1;
    _fscanf(param_2,"%f,%f,%f\n",iVar1 + param_1 + 0x1c,iVar4,iVar3);
    iVar3 = iVar3 + 0xc;
    iVar4 = iVar4 + 0xc;
  } while (iVar2 < 3);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x40,param_1 + 0x44,param_1 + 0x48);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x4c,param_1 + 0x50,param_1 + 0x54);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x58,param_1 + 0x5c,param_1 + 0x60);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 100,param_1 + 0x68,param_1 + 0x6c);
  return;
}
