// Name: core_dtrace.cpp_CDemonRaytrace_savePVS_FUN_0046ae40
// Address: 0046ae40
// Address Range: [[0046ae40, 0046af6e]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40(int param_1,int *param_2,int *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_savePVS_FUN_0046ae40(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (_DAT_01b7b748 == 0) {
    PTR_01cc4800 = "..\\core\\dtrace.cpp";
    INT_01cc4804 = 0x8ea;
    core_main_c_FUN_004c8440("CDemonRenderer::getPVS - PVS is not valid!");
  }
  iVar1 = _DAT_01b7b744;
  *param_2 = _DAT_01b7b744;
  iVar1 = realloc(*param_3,iVar1 << 2);
  *param_3 = iVar1;
  if (*param_2 < 1) {
    PTR_01cc4800 = "..\\core\\dtrace.cpp";
    INT_01cc4804 = 0x8f6;
    core_main_c_FUN_004c8440("CDemonRaytrace::getPVS - no cubes rendered???");
  }
  if (*param_3 == 0) {
    PTR_01cc4800 = "..\\core\\dtrace.cpp";
    INT_01cc4804 = 0x8fa;
    core_main_c_FUN_004c8440("CDemonRaytrace::getPVS - out of memory");
  }
  iVar4 = *(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44);
  iVar1 = 0;
  if (0 < _DAT_01b7b744) {
    iVar5 = 0;
    do {
      iVar3 = 0;
      if (0 < iVar4) {
        iVar2 = *(int *)(param_1 + 0x50);
        do {
          if (iVar2 == *(int *)(iVar5 + 0x1b7b74c)) break;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x34;
        } while (iVar3 < iVar4);
      }
      if (iVar4 <= iVar3) {
        PTR_01cc4800 = "..\\core\\dtrace.cpp";
        INT_01cc4804 = 0x907;
        core_main_c_FUN_004c8440("CDemonRenderer::savePVS - can't find drawn cube!");
      }
      iVar2 = _DAT_01b7b744;
      iVar1 = iVar1 + 1;
      *(int *)(iVar5 + *param_3) = iVar3;
      iVar5 = iVar5 + 4;
    } while (iVar1 < iVar2);
  }
  return;
}
