// Name: core_dcube.cpp_CDemonCube_rotateVertices_FUN_0044aff0
// Address: 0044aff0
// Address Range: [[0044aff0, 0044b256]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(int param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(int param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,&DAT_02dd1184);
  if (20000 < *(int *)(param_1 + 0x20)) {
    PTR_01cc4800 = "..\\core\\dcube.cpp";
    INT_01cc4804 = 0x7bb;
    core_main_c_FUN_004c8440("CDemonCube::rotateVerticies - tried to rotate %d vertices, but GLOBAL_VERTEX_COUNT = %d",*(int *)(param_1 + 0x20),20000);
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  pfVar1 = *(float **)(param_1 + 0x24);
  local_20 = 0;
  local_1c = 0;
  iVar3 = *DAT_005ae704;
  if (0 < *(int *)(param_1 + 0x20)) {
    do {
      local_48 = (int)ROUND(*pfVar1 * _DAT_0059be10);
      local_44 = (int)ROUND(pfVar1[1] * _DAT_0059be10);
      local_40 = (int)ROUND(pfVar1[2] * _DAT_0059be10);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(iVar3,&local_48);
      if ((*(byte *)(iVar3 + 0x13) & 0x80) == 0) {
        local_20 = local_20 + 1;
      }
      iVar3 = iVar3 + 0x30;
      pfVar1 = pfVar1 + 3;
      local_1c = local_1c + 1;
    } while (local_1c < *(int *)(param_1 + 0x20));
  }
  if (local_20 == *(int *)(param_1 + 0x20)) {
    if (DAT_005ae704[6] == 0) {
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,0);
    }
  }
  if ((DAT_014b8488 & 1) == 0) {
    DAT_014b8488 = DAT_014b8488 | 1;
    _DAT_014b847c = 0x3f13cd3a;
    _DAT_014b8484 = 0x3f13cd3a;
    _DAT_014b8480 = 0xbf13cd3a;
  }
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    local_24 = param_2 << 2;
    local_18 = 0;
    do {
      if (param_2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x0044b10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&PTR_LAB_0044afd0 + local_24))();
        return;
      }
      iVar3 = *(int *)(param_1 + 0x2c) + local_18;
      if (&local_3c != (float *)(iVar3 + 0xc)) {
        local_3c = *(float *)(iVar3 + 0xc);
        local_38 = *(float *)(iVar3 + 0x10);
        local_34 = *(float *)(iVar3 + 0x14);
      }
      local_3c = local_3c * 127.0f;
      local_38 = local_38 * 127.0f;
      local_34 = 127.0f * local_34;
      local_28 = (uint)ROUND(local_34);
      local_2c = (uint)ROUND(local_38);
      local_30 = (uint)ROUND(local_3c);
      engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_00460f20
                (DAT_005ae704,local_30 & 0xff,local_2c & 0xff,local_28 & 0xff);
      iVar3 = local_18 + 0x20;
      iVar2 = local_14 + 1;
      core_dcube_cpp_buildAndRenderTrianglePrimitive_FUN_0044ab60
                (*(int *)(param_1 + 0x2c) + local_18,*(uint *)(param_1 + 0x24));
      local_18 = iVar3;
      local_14 = iVar2;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  return;
}
