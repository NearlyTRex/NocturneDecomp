// Name: core_dcamera.cpp_FUN_00441ea0
// Address: 00441ea0
// Address Range: [[00441ea0, 00441f3e]]
// Convention: unknown
// Signature: void core_dcamera_cpp_FUN_00441ea0(CDemonCamera *param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcamera_cpp_FUN_00441ea0(CDemonCamera *param_1,uint param_2,uint param_3)

{
  float fVar1;
  float *unaff_ESI;
  byte bVar2;
  int aiStackY_1030 [3];
  float afStackY_1024 [9];
  int aiStackY_1000 [1003];
  CVector3i CStack_48;
  int iStack_3c;
  float afStack_38 [4];
  float fStack_28;
  CVector3i CStack_24;
  int iStack_18;
  int aiStack_14 [3];
  
  bVar2 = 0;
  core_dcamera_cpp_FUN_0043c6b0(param_1,param_2,param_3);
  CStack_24.x = iStack_3c;
  *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + 4) = afStack_38[(uint)bVar2 * -2];
  *(float *)((int)&CStack_24 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
       afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780(param_1,&CStack_24,&CStack_48);
  iStack_18 = CStack_48.x;
  aiStack_14[(uint)bVar2 * -2] = *(int *)((int)&CStack_48 + (uint)bVar2 * -8 + 4);
  aiStack_14[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       *(int *)((int)&CStack_48 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
  fVar1 = (float)_DAT_005ce63e;
  aiStack_14[2] = aiStack_14[1];
  afStack_38[2] = (float)iStack_18 * fVar1;
  afStack_38[3] = (float)aiStack_14[0] * fVar1;
  fStack_28 = (float)aiStack_14[1] * fVar1;
  *unaff_ESI = (float)iStack_18 * fVar1;
  unaff_ESI[(uint)bVar2 * -2 + 1] = afStack_38[(uint)bVar2 * -2 + 3];
  (unaff_ESI + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1] =
       afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  return;
}
