// Name: FUN_00437ab0
// Address: 00437ab0
// Address Range: [[00437ab0, 00437cbc]]
// Convention: unknown
// Signature: void FUN_00437ab0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437ab0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  int iVar6;
  int local_64;
  int local_60;
  int local_5c;
  byte local_58 [12];
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = param_2 * 0xac + param_1 + 0x37b50;
  core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(iVar3 + 0x78,local_58);
  iVar2 = 0;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
            (DAT_005ae704,local_58,iVar3 + 0xa0);
  local_20 = 0x270;
  local_1c = 0;
  iVar6 = 0;
  local_24 = 0xc;
  local_18 = -1;
  do {
    fVar4 = (float10)iVar6 * (float10)3.1415926535000001 * (float10)0.083333333333333301;
    fVar5 = (float10)fsin(fVar4);
    fVar4 = (float10)fcos(fVar4);
    local_40 = (float)(fVar5 * (float10)*(float *)(iVar3 + 0x14));
    local_38 = 0.0;
    local_3c = (float)(fVar4 * (float10)*(float *)(iVar3 + 0x18));
    local_64 = (int)ROUND(local_40 * _DAT_0059b360);
    local_60 = (int)ROUND(local_3c * _DAT_0059b360);
    local_5c = (int)ROUND(_DAT_0059b360 * 0.0);
    local_14 = iVar6;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + local_1c,&local_64);
    local_38 = *(float *)(iVar3 + 0x44);
    local_28 = iVar2 + 0xd;
    local_4c = (int)ROUND(local_40 * _DAT_0059b360);
    local_48 = (int)ROUND(local_3c * _DAT_0059b360);
    local_44 = (int)ROUND(local_38 * _DAT_0059b360);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + local_20,&local_4c);
    if (0 < iVar2) {
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(DAT_005ae704,iVar2,local_28);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0(DAT_005ae704,iVar2,local_18);
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0
                (DAT_005ae704,local_28,local_24);
    }
    iVar2 = iVar2 + 1;
    local_20 = local_20 + 0x30;
    local_1c = local_1c + 0x30;
    iVar6 = iVar6 + 2;
    local_24 = local_24 + 1;
    local_18 = local_18 + 1;
  } while (iVar2 < 0xd);
  if (param_3 != 0) {
    uVar1 = shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(0x01BCD074,iVar6);
    FUN_00472de0(0x01BCD074,*(float *)(iVar3 + 0x14) + *(float *)(iVar3 + 0x18),uVar1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  return;
}
