// Name: FUN_005159a0
// Address: 005159a0
// Address Range: [[005159a0, 00515c30]]
// Convention: unknown
// Signature: void FUN_005159a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void FUN_005159a0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  int in_stack_00000004;
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((*(uint *)(in_stack_00000004 + 0x11d4) & 0x7fffffff) == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,in_stack_00000004 + 0x104);
  local_c = 0;
  local_18 = 0;
  do {
    iVar4 = -4;
    iVar3 = local_18 + -0xc0;
    do {
      fVar5 = (float10)local_c * (float10)_DAT_00591001 * (float10)_DAT_00591009 *
              (float10)_DAT_00591011;
      fVar6 = (float10)fsin(fVar5);
      fVar5 = (float10)fcos(fVar5);
      fVar7 = (float10)*(float *)(in_stack_00000004 + 0x11d4) * (float10)_DAT_00590ff9;
      fVar8 = (float10)iVar4 * (float10)_DAT_00591019 * (float10)_DAT_00591009 *
              (float10)_DAT_00591021;
      fVar9 = (float10)fcos(fVar8);
      fVar8 = (float10)fsin(fVar8);
      local_3c = (float)(fVar5 * fVar7 * fVar9);
      local_44 = (float)(fVar6 * fVar7 * fVar9);
      local_40 = (float)(fVar8 * fVar7);
      local_50 = (int)ROUND(local_44 * _DAT_005a1ab0);
      local_4c = (int)ROUND(local_40 * _DAT_005a1ab0);
      local_48 = (int)ROUND(local_3c * _DAT_005a1ab0);
      local_8 = iVar4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar3,&local_50);
      piVar2 = DAT_005ae704;
      *(uint *)(iVar3 + 0x18 + *DAT_005ae704) = 0x800000;
      *(uint *)(iVar3 + 0x1c + *piVar2) = 0x800000;
      iVar1 = *piVar2;
      fVar5 = (float10)round
                                 ((float10)*(float *)(in_stack_00000004 + 0x11c4) *
                                  (float10)_DAT_00591029);
      local_c = (int)ROUND(fVar5);
      *(int *)(iVar3 + 0x20 + iVar1) = local_c;
      iVar1 = *piVar2;
      fVar5 = (float10)round
                                 ((float10)*(float *)(in_stack_00000004 + 0x11c8) *
                                  (float10)_DAT_00591029);
      local_10 = (int)ROUND(fVar5);
      *(int *)(iVar1 + iVar3 + 0x24) = local_10;
      iVar1 = *piVar2;
      fVar5 = (float10)round
                                 ((float10)*(float *)(in_stack_00000004 + 0x11cc) *
                                  (float10)_DAT_00591029);
      local_14 = (int)ROUND(fVar5);
      iVar4 = iVar4 + 1;
      *(int *)(iVar3 + 0x28 + iVar1) = local_14;
      iVar3 = iVar3 + 0x30;
    } while (iVar4 < 5);
    local_18 = local_18 + 1;
    local_24 = local_24 + 0x1e0;
  } while (local_18 < 0x11);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(piVar2,&DAT_005be924);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0x4000);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  local_20 = 10;
  local_1c = 0;
  do {
    iVar3 = -4;
    do {
      iVar3 = iVar3 + 1;
      engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
                (DAT_005ae704,&stack0xffffff7c);
    } while (iVar3 < 4);
    local_1c = local_1c + 10;
    local_20 = local_20 + 10;
  } while (local_1c != 0xa0);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  return;
}
