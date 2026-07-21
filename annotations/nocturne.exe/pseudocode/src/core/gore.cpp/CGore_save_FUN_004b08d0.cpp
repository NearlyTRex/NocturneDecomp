// Name: core_gore.cpp_CGore_save_FUN_004b08d0
// Address: 004b08d0
// Address Range: [[004b08d0, 004b0974]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_gore_cpp_CGore_save_FUN_004b08d0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  _fprintf(param_2,"--- Gore ---\n");
  iVar3 = 0;
  _fprintf(param_2,&DAT_005851ee,_DAT_01c9e038);
  if (0 < _DAT_01c9e038) {
    iVar2 = 0x1c9e03c;
    do {
      iVar3 = iVar3 + 1;
      core_gore_cpp_CBloodPool_save_FUN_004af820(iVar2,param_2);
      iVar2 = iVar2 + 0x28;
    } while (iVar3 < _DAT_01c9e038);
  }
  iVar3 = 0;
  uVar1 = _fprintf(param_2,&DAT_005851f2,_DAT_01c7ccf0);
  if (0 < _DAT_01c7ccf0) {
    iVar2 = 0x1c7ccf4;
    do {
      iVar3 = iVar3 + 1;
      uVar1 = core_gore_cpp_CBloodSplat_save_FUN_004af1f0(iVar2,param_2);
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < _DAT_01c7ccf0);
  }
  return uVar1;
}
