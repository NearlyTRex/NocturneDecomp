// Name: core_dcamera.cpp_FUN_00453560
// Address: 00453560
// Address Range: [[00453560, 004535fe]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00453560(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_00453560(uint param_1,uint param_2,uint param_3)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  float afStackY_1030 [1015];
  int iStack_48;
  float afStack_44 [5];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_24 [3];
  int iStack_18;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar2 = 0;
  core_dcamera_cpp_FUN_0044dd70(param_1,param_2,param_3);
  afStack_24[0] = afStack_44[2];
  afStack_44[(uint)bVar2 * -2 + 9] = afStack_44[(uint)bVar2 * -2 + 3];
  afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 10] =
       afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_dcamera_cpp_FUN_0044de40(param_1,afStack_44 + 8);
  iStack_18 = iStack_48;
  (&fStack_14)[(uint)bVar2 * -2] = afStack_44[(uint)bVar2 * -2];
  (&fStack_14)[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  fVar1 = (float)_DAT_005d7907;
  iStack_c = iStack_10;
  fStack_30 = (float)iStack_18 * fVar1;
  fStack_2c = (float)(int)fStack_14 * fVar1;
  fStack_28 = (float)iStack_10 * fVar1;
  *unaff_ESI = (float)iStack_18 * fVar1;
  unaff_ESI[(uint)bVar2 * -2 + 1] = afStack_44[(uint)bVar2 * -2 + 6];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       afStack_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 7];
  return;
}
