// Name: core_dlight.cpp_CDemonLight_beginScene_FUN_0044e470
// Address: 0044e470
// Address Range: [[0044e470, 0044e658]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginScene_FUN_0044e470(int param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x11e4) != 0) {
    PTR_01cc4800 = "..\\core\\dlight.cpp";
    INT_01cc4804 = 0xf3;
    core_main_c_FUN_004c8440("CDemonLight::beginScene - Scene already open");
  }
  *(uint *)(param_1 + 0x11e4) = 1;
  core_dcamera_cpp_CDemonCamera_setSceneCamera_FUN_00440240(param_1,param_2);
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
            (DAT_005ae704,0,0,*(int *)(param_1 + 0x1cc0) + -1,*(int *)(param_1 + 0x1cc4) + -1);
  *(int *)(param_1 + 0x11dc) = *(int *)(param_1 + 0x1cc0) + -1;
  *(uint *)(param_1 + 0x11d4) = 0;
  *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x1cc4) + -1;
  *(uint *)(param_1 + 0x11d8) = 0;
  uVar2 = DAT_005ae704;
  *(uint *)(param_1 + 0x1d0) = 0;
  *(int *)(param_1 + 0x168) = param_2;
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
            (uVar2,param_1 + 0x104);
  engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
            (DAT_005ae704,*(uint *)(param_1 + 0x138));
  engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_004607b0
            (DAT_005ae704,param_1 + 0x110);
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c039ec;
  _DAT_01c039ec = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c039f8;
  _DAT_01c039f8 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)*(int *)(param_1 + 0x2fa4) * (longlong)(int)_DAT_01c03a04;
  _DAT_01c03a04 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  if (param_2 == 0) {
    _memset(*(int *)(param_1 + 0x1cc0) * *(int *)(param_1 + 0x1cc4) * 2);
  }
  iVar3 = 0;
  iVar4 = param_1;
  if (0 < *(int *)(param_1 + 0x1cc4)) {
    do {
      *(uint *)(iVar4 + 0x1cd4) = *(uint *)(&DAT_01bd2fa0 + iVar3 * 4);
      *(int *)(&DAT_01bd2fa0 + iVar3 * 4) =
           *(int *)(param_1 + 0x1cc0) * iVar3 * 2 + *(int *)(param_1 + 0x2f94);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x1cc4));
  }
  core_dcamera_cpp_CDemonCamera_updateTransformMatrices_FUN_00440fe0(param_1);
  engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(DAT_005ae704,1);
  if (param_2 == 0) {
    _DAT_01b4d1fc = param_2;
    return;
  }
  _DAT_01b4d1fc = 0x8000;
  return;
}
