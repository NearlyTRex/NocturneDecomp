// Name: core_gore.cpp_CFootstep_render_FUN_004afa20
// Address: 004afa20
// Address Range: [[004afa20, 004afd74]]
// Convention: unknown
// Signature: void core_gore_cpp_CFootstep_render_FUN_004afa20(undefined4 *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_CFootstep_render_FUN_004afa20(uint *param_1)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  _DAT_01c78cc4 = 4;
  _DAT_01c78cd8 = 0;
  _DAT_01c78cdc = 1;
  _DAT_01c78ce0 = 2;
  _DAT_01c78ce4 = 3;
  DAT_005c502c = 0x80000;
  _DAT_005c5030 = 0x80000;
  _DAT_005c505c = 0xf80000;
  _DAT_005c508c = 0xf80000;
  _DAT_005c5090 = 0xf80000;
  _DAT_005c50c0 = 0xf80000;
  _DAT_005c5060 = 0x80000;
  _DAT_005c50bc = 0x80000;
  puVar3 = &DAT_005c5014;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,param_1[0xe]);
  _DAT_01c78cc8 = 0;
  _DAT_01c78ccc = 0;
  _DAT_01c78cd0 = 0;
  _DAT_01c78cd4 = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005ba84c);
  pfVar2 = (float *)(param_1 + 2);
  do {
    local_1c = (int)ROUND(*pfVar2 * 256.0f);
    local_18 = (int)ROUND(pfVar2[1] * 256.0f);
    local_14 = (int)ROUND(pfVar2[2] * 256.0f);
    pfVar2 = pfVar2 + 3;
    engine_special_cpp_transformPoint_FUN_00530a25(puVar3,&local_1c);
    puVar3 = puVar3 + 0xc;
  } while (pfVar2 != (float *)(param_1 + 0xe));
  if (param_1[0xf] == 0) {
    DAT_005c5038 = 0x7ff;
    DAT_005c503c = 0x7ff;
    DAT_005c5064 = 0x7ff;
    DAT_005c5068 = 0x7ff;
    DAT_005c506c = 0x7ff;
    DAT_005c5094 = 0x7ff;
    DAT_005c5098 = 0x7ff;
    DAT_005c509c = 0x7ff;
    DAT_005c50c4 = 0x7ff;
    DAT_005c50c8 = 0x7ff;
    DAT_005c50cc = 0x7ff;
    DAT_005c5034 = 0x7ff;
    goto LAB_004afc11;
  }
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_004afca4:
    DAT_005c5034 = 0x2000;
    DAT_005c5038 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5038 = 0x7f80;
    DAT_005c5034 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004afca4;
    DAT_005c5038 = 0;
    DAT_005c5034 = 0;
  }
  DAT_005c503c = 0;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_004afb8a:
    DAT_005c5064 = 0x2000;
    DAT_005c5068 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5068 = 0x7f80;
    DAT_005c5064 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004afb8a;
    DAT_005c5068 = 0;
    DAT_005c5064 = 0;
  }
  DAT_005c506c = 0;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
LAB_004afbbc:
    DAT_005c5094 = 0x2000;
    DAT_005c5098 = 0;
  }
  else if (uVar1 < 2) {
    DAT_005c5098 = 0x7f80;
    DAT_005c5094 = 0;
  }
  else {
    if (uVar1 != 2) goto LAB_004afbbc;
    DAT_005c5098 = 0;
    DAT_005c5094 = 0;
  }
  DAT_005c509c = 0;
  uVar1 = param_1[1];
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_005c50c8 = 0x7f80;
      DAT_005c50cc = 0;
      DAT_005c50c4 = 0;
      goto LAB_004afc11;
    }
    if (uVar1 == 2) {
      DAT_005c50c8 = 0;
      DAT_005c50cc = 0;
      DAT_005c50c4 = 0;
      goto LAB_004afc11;
    }
  }
  DAT_005c50c4 = 0x2000;
  DAT_005c50c8 = 0;
  DAT_005c50cc = 0;
LAB_004afc11:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0(DAT_005ae704,0x1c78cc0);
  *param_1 = 1;
  return;
}
