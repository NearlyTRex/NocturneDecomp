// Name: engine_mini3d.cpp_FUN_004f34d0
// Address: 004f34d0
// Address Range: [[004f34d0, 004f351f] [004f3528, 004f354c]]
// Convention: unknown
// Signature: undefined4 engine_mini3d_cpp_FUN_004f34d0(undefined2 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_mini3d_cpp_FUN_004f34d0(ushort *param_1,int param_2)

{
  int iVar1;
  
  if (3000 < param_2) {
    _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
    _DAT_01d046a4 = 0x5ad;
    core_main_c_FUN_004e4500("CMini3D::mirrorFaces - Too many of them!!!");
  }
  if (0 < param_2) {
    iVar1 = 0;
    do {
      *(ushort *)(iVar1 + 0x1d1215c) = param_1[2];
      *(ushort *)(iVar1 + 0x1d1215e) = param_1[1];
      param_2 = param_2 + -1;
      *(ushort *)(iVar1 + 0x1d12160) = *param_1;
      iVar1 = iVar1 + 6;
      param_1 = param_1 + 3;
    } while (0 < param_2);
  }
  return 0x1d1215c;
}
