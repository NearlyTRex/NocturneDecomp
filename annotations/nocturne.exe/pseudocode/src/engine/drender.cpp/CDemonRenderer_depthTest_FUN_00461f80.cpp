// Name: engine_drender.cpp_CDemonRenderer_depthTest_FUN_00461f80
// Address: 00461f80
// Address Range: [[00461f80, 00461fed]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl engine_drender_cpp_CDemonRenderer_depthTest_FUN_00461f80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_2 + 0x13) & 0x80) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 0) {
    engine_prim_c_replaceWWithDepth_FUN_004f99d0(param_2,1);
  }
  iVar1 = (*(int *)(param_2 + 0x10) >> 0x10) * 4;
  iVar2 = (*(int *)(param_2 + 0x14) >> 0x10) * 4;
  if (*(int *)(param_1 + 4) == 0) {
    if (*(int *)(param_2 + 8) < *(int *)(*(int *)(&DAT_01bd4260 + iVar2) + iVar1)) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 8) < *(int *)(*(int *)(&DAT_01bd2fa0 + iVar2) + iVar1)) {
    return 0;
  }
  return 1;
}
