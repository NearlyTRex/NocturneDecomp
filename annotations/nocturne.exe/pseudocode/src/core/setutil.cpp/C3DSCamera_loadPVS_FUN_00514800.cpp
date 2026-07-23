// Name: core_setutil.cpp_C3DSCamera_loadPVS_FUN_00514800
// Address: 00514800
// Address Range: [[00514800, 005148aa]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_loadPVS_FUN_00514800(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  _fscanf(param_2,"%d\n",param_1 + 400);
  iVar1 = realloc
                    (*(uint *)(param_1 + 0x194),*(int *)(param_1 + 400) << 2);
  *(int *)(param_1 + 0x194) = iVar1;
  if (0 < *(int *)(param_1 + 400)) {
    if (iVar1 == 0) {
      _DAT_01cc4800 = "..\\core\\setutil.cpp";
      _DAT_01cc4804 = 0xcf;
      FUN_004c8440("Out of memory for pvsList - %d",*(int *)(param_1 + 400));
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 400)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x194) + iVar3;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 4;
        _fscanf(param_2,"\t%d\n",iVar2);
      } while (iVar1 < *(int *)(param_1 + 400));
    }
  }
  return;
}
