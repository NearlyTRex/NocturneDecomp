// Name: engine_drender.cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0
// Address: 00461ad0
// Address Range: [[00461ad0, 00461bcc]]
// Convention: unknown
// Signature: void engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void engine_drender_cpp_CDemonRenderer_processQuadPrimitive_FUN_00461ad0(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  
  if ((*(int *)(param_1 + 0xc) != 0) &&
     (iVar1 = engine_3d_c_isVisiblePlane_FUN_00404610(param_2 + 8), iVar1 == 0)) {
    return;
  }
  local_24 = *(ushort *)(param_2 + 0x18);
  local_22 = *(ushort *)(param_2 + 0x24);
  local_20 = *(ushort *)(param_2 + 0x30);
  local_1e = (ushort)((uint)*(uint *)(param_2 + 0x1c) >> 8);
  local_1c = (ushort)((uint)*(uint *)(param_2 + 0x28) >> 8);
  local_1a = (ushort)((uint)*(uint *)(param_2 + 0x34) >> 8);
  local_18 = (ushort)((uint)*(uint *)(param_2 + 0x20) >> 8);
  local_16 = (ushort)((uint)*(uint *)(param_2 + 0x2c) >> 8);
  local_14 = (ushort)((uint)*(uint *)(param_2 + 0x38) >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(param_1,&local_24,param_3);
  if (*(int *)(param_2 + 4) < 4) {
    return;
  }
  local_22 = *(ushort *)(param_2 + 0x30);
  local_20 = *(ushort *)(param_2 + 0x3c);
  local_1c = (ushort)((uint)*(uint *)(param_2 + 0x34) >> 8);
  local_1a = (ushort)((uint)*(uint *)(param_2 + 0x40) >> 8);
  local_16 = (ushort)((uint)*(uint *)(param_2 + 0x38) >> 8);
  local_14 = (ushort)((uint)*(uint *)(param_2 + 0x44) >> 8);
  engine_drender_cpp_CDemonRenderer_captureFace_FUN_00461bd0(param_1,&local_24,param_3);
  return;
}
