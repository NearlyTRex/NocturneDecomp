// Name: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
// Address: 00460a00
// Address Range: [[00460a00, 00460a42]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(uint param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  uint uStack_18;
  uint uStack_14;
  int iStack_10;
  
  fVar1 = (float10)_DAT_0057dc25;
  uStack_14 = 0x460a16;
  fVar2 = (float10)round((float10)*param_2 * fVar1);
  iStack_10 = (int)ROUND(fVar2);
  uStack_18 = 0x460a24;
  fVar2 = (float10)round((float10)param_2[1] * fVar1);
  iStack_10 = (int)ROUND(fVar2);
  uVar3 = 0x460a32;
  fVar1 = (float10)round(fVar1 * (float10)param_2[2]);
  iStack_10 = (int)ROUND(fVar1);
  engine_3d_c_processCameraRelativePoint_FUN_004044d0(&uStack_18,uVar3);
  return;
}
