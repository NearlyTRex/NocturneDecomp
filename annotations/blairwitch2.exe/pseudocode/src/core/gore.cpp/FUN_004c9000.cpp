// Name: core_gore.cpp_FUN_004c9000
// Address: 004c9000
// Address Range: [[004c9000, 004c93b5]]
// Convention: unknown
// Signature: void core_gore_cpp_FUN_004c9000(undefined4 *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gore_cpp_FUN_004c9000(uint *param_1,int param_2)

{
  uint uVar1;
  float *pfVar2;
  SProjectedVertex *output;
  CVector3i local_1c;
  
  _DAT_01cb82cc = 4;
  _DAT_01cb82e0 = 0;
  _DAT_01cb82e4 = 1;
  _DAT_01cb82e8 = 2;
  _DAT_01cb82ec = 3;
  DAT_0062202c = 0x80000;
  _DAT_00622030 = 0x80000;
  _DAT_0062205c = 0xf80000;
  _DAT_0062208c = 0xf80000;
  DAT_00622090 = 0xf80000;
  _DAT_006220c0 = 0xf80000;
  _DAT_00622060 = 0x80000;
  _DAT_006220bc = 0x80000;
  output = (SProjectedVertex *)&DAT_00622014;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,param_1[0xe]);
  _DAT_01cb82d0 = 0;
  _DAT_01cb82d4 = 0;
  _DAT_01cb82d8 = 0;
  _DAT_01cb82dc = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
            (DAT_0060b280,(SMRGLTextureBasic *)&DAT_00617968);
  pfVar2 = (float *)(param_1 + 2);
  do {
    local_1c.x = (int)ROUND(*pfVar2 * _DAT_005f7ba8);
    local_1c.y = (int)ROUND(pfVar2[1] * _DAT_005f7ba8);
    local_1c.z = (int)ROUND(pfVar2[2] * _DAT_005f7ba8);
    pfVar2 = pfVar2 + 3;
    engine_special_cpp_FUN_0055d9ec(output,&local_1c);
    output = output + 0x30;
  } while (pfVar2 != (float *)(param_1 + 0xe));
  if (param_1[0xf] == 0) {
    DAT_00622038 = 0x7ff;
    DAT_0062203c = 0x7ff;
    DAT_00622064 = 0x7ff;
    DAT_00622068 = 0x7ff;
    DAT_0062206c = 0x7ff;
    DAT_00622094 = 0x7ff;
    DAT_00622098 = 0x7ff;
    DAT_0062209c = 0x7ff;
    DAT_006220c4 = 0x7ff;
    DAT_006220c8 = 0x7ff;
    DAT_006220cc = 0x7ff;
    DAT_00622034 = 0x7ff;
    goto LAB_004c915e;
  }
  uVar1 = param_1[1];
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c91eb:
    DAT_00622034 = 0x2000;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622038 = 0x9a80;
    DAT_0062203c = 0xb100;
    DAT_00622034 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c91eb;
    DAT_00622038 = 0;
    DAT_0062203c = 0;
    DAT_00622034 = 0;
  }
  uVar1 = param_1[1];
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c922c:
    DAT_00622064 = 0x2000;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622068 = 0x9a80;
    DAT_0062206c = 0xb100;
    DAT_00622064 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c922c;
    DAT_00622068 = 0;
    DAT_0062206c = 0;
    DAT_00622064 = 0;
  }
  uVar1 = param_1[1];
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 == 0) {
LAB_004c926d:
    DAT_00622094 = 0x2000;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
  }
  else if (uVar1 < 2) {
    DAT_00622098 = 0x9a80;
    DAT_0062209c = 0xb100;
    DAT_00622094 = 0x9000;
  }
  else {
    if (uVar1 != 2) goto LAB_004c926d;
    DAT_00622098 = 0;
    DAT_0062209c = 0;
    DAT_00622094 = 0;
  }
  uVar1 = param_1[1];
  core_actor_cpp_getRandomInt_FUN_0040cfc0(0x40,0xc0);
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      DAT_006220c8 = 0x9a80;
      DAT_006220cc = 0xb100;
      DAT_006220c4 = 0x9000;
      goto LAB_004c915e;
    }
    if (uVar1 == 2) {
      DAT_006220c8 = 0;
      DAT_006220cc = 0;
      DAT_006220c4 = 0;
      goto LAB_004c915e;
    }
  }
  DAT_006220c4 = 0x2000;
  DAT_006220c8 = 0;
  DAT_006220cc = 0;
LAB_004c915e:
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_0046ab50
            (DAT_0060b280,(SMRGLHeaderPrimitive *)0x1cb82c8);
  if (param_2 != 0) {
    *param_1 = 1;
    return;
  }
  return;
}
