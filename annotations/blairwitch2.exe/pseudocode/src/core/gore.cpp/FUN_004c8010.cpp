// Name: core_gore.cpp_FUN_004c8010
// Address: 004c8010
// Address Range: [[004c8010, 004c8680]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004c8010(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004c8010(uint *param_1,int param_2)

{
  uint uVar1;
  CVector3i *input;
  float10 fVar2;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  input = (CVector3i *)&local_9c;
  fVar2 = (float10)(float)param_1[9] * (float10)_DAT_005d945a + (float10)_DAT_005d9462;
  round();
  local_14 = (int)ROUND(fVar2);
  if (local_14 < 0) {
    local_14 = 0;
  }
  else if ((0xf < local_14) && (local_14 = 0xf, param_2 != 0)) {
    *param_1 = 1;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 1));
  if (param_1[4] == 1) {
    _DAT_01cb8290 = 0;
    _DAT_01cb8298 = 0xffff;
    _DAT_01cb8294 = 0;
    _DAT_01cb829c = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,
               (SMRGLTextureBasic *)(&DAT_00616868 + local_14 * 0x18 + param_1[10] * 0x180));
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
              (DAT_0060b280,(CVector3f *)(param_1 + 6),(CVector3f *)0x0);
    local_84 = 0xbf000000;
    local_80 = 0xbf000000;
    local_7c = 0;
    local_78 = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_74 = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_70 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_78);
    local_84 = 0x3f000000;
    local_7c = 0;
    local_80 = 0xbf000000;
    local_54 = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_50 = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_4c = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_54);
    local_84 = 0x3f000000;
    local_7c = 0;
    local_80 = 0x3f000000;
    local_30 = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_2c = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_28 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_30);
    local_84 = 0xbf000000;
    local_7c = 0;
    local_80 = 0x3f000000;
    local_9c = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_98 = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_94 = (int)ROUND(_DAT_005f7ba8 * 0.0);
  }
  else {
    if (param_2 != 0) {
      *param_1 = 1;
    }
    _DAT_01cb8294 = 0xffff;
    _DAT_01cb8290 = 0;
    _DAT_01cb8298 = 0;
    _DAT_01cb829c = 0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)(&DAT_00616808 + param_1[10] * 0x18));
    local_60 = 0xbf000000;
    local_5c = 0;
    local_58 = 0xbf000000;
    local_48 = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_44 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_40 = (int)ROUND(_DAT_005f7ba8 * -0.5);
    engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_48);
    local_60 = 0x3f000000;
    local_58 = 0xbf000000;
    local_5c = 0;
    local_3c = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_38 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_34 = (int)ROUND(_DAT_005f7ba8 * -0.5);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_3c);
    local_60 = 0x3f000000;
    local_5c = 0;
    local_58 = 0x3f000000;
    local_90 = (int)ROUND(_DAT_005f7ba8 * 0.5);
    local_8c = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_88 = (int)ROUND(_DAT_005f7ba8 * 0.5);
    engine_special_cpp_FUN_0055d723
              ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_90);
    local_60 = 0xbf000000;
    local_58 = 0x3f000000;
    local_5c = 0;
    local_6c = (int)ROUND(_DAT_005f7ba8 * -0.5);
    local_68 = (int)ROUND(_DAT_005f7ba8 * 0.0);
    local_64 = (int)ROUND(_DAT_005f7ba8 * 0.5);
    input = (CVector3i *)&local_6c;
  }
  engine_special_cpp_FUN_0055d723((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),input);
  uVar1 = param_1[5];
  local_24 = &DAT_0062203c;
  core_actor_cpp_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c827a:
    DAT_00622034 = 0x2000;
    DAT_00622038 = 0;
    *local_24 = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622038 = 0x9a80;
    DAT_0062203c = 0xb100;
    DAT_00622034 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c827a;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
    DAT_00622034 = 0;
  }
  uVar1 = param_1[5];
  local_18 = &DAT_00622068;
  core_actor_cpp_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c82c2:
    DAT_00622064 = 0x2000;
    *local_18 = 0;
    DAT_0062206c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622068 = 0x9a80;
    DAT_0062206c = 0xb100;
    DAT_00622064 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c82c2;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
    DAT_00622064 = 0;
  }
  uVar1 = param_1[5];
  local_20 = &DAT_00622098;
  core_actor_cpp_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c830d:
    DAT_00622094 = 0x2000;
    *local_20 = 0;
    DAT_0062209c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622098 = 0x9a80;
    DAT_0062209c = 0xb100;
    DAT_00622094 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c830d;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
    DAT_00622094 = 0;
  }
  uVar1 = param_1[5];
  local_1c = &DAT_006220c8;
  core_actor_cpp_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006220c8 = 0x9a80;
      DAT_006220cc = 0xb100;
      DAT_006220c4 = 0x9000;
      goto LAB_004c836f;
    }
    if (uVar1 == 2) {
      DAT_006220c8 = 0;
      DAT_006220cc = 0;
      DAT_006220c4 = 0;
      goto LAB_004c836f;
    }
  }
  DAT_006220c4 = 0x2000;
  *local_1c = 0;
  DAT_006220cc = 0;
LAB_004c836f:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb8288);
  if (param_1[4] == 1) {
    engine_matrix_c_pop_FUN_0046b4a0();
    return;
  }
  return;
}
