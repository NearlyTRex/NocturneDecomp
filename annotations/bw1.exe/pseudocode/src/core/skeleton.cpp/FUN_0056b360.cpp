// Name: core_skeleton.cpp_FUN_0056b360
// Address: 0056b360
// Address Range: [[0056b360, 0056b51d]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_0056b360(float *param_1,float *param_2,float *param_3,float param_4,CDeformableModelInstance *param_5)

#include "nocturne.h"

void core_skeleton_cpp_FUN_0056b360(float *param_1,float *param_2,float *param_3,float param_4,CDeformableModelInstance *param_5)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float afStackY_1854 [1524];
  float fStack_78;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CSkeleton *pCStack_1c;
  float *pfStack_18;
  float *pfStack_14;
  
  bVar3 = 0;
  if (param_4 < 0.0) {
    param_4 = 0.0;
  }
  if (1.0 < param_4) {
    param_4 = 1.0;
  }
  fStack_68 = *param_3 * param_4;
  fStack_64 = param_3[1] * param_4;
  fStack_60 = param_3[2] * param_4;
  fStack_20 = 1.0 - param_4;
  fStack_5c = *param_2 * fStack_20;
  fStack_58 = param_2[1] * fStack_20;
  fStack_54 = param_2[2] * fStack_20;
  fStack_50 = fStack_5c + fStack_68;
  fStack_4c = fStack_58 + fStack_64;
  fStack_48 = fStack_54 + fStack_60;
  if (&fStack_38 != param_1) {
    *param_1 = fStack_50;
    param_1[1] = fStack_4c;
    param_1[2] = fStack_48;
  }
  iVar1 = 0;
  fStack_44 = fStack_5c;
  fStack_40 = fStack_58;
  fStack_3c = fStack_54;
  fStack_38 = fStack_50;
  fStack_34 = fStack_4c;
  fStack_30 = fStack_48;
  fStack_2c = fStack_68;
  fStack_28 = fStack_64;
  fStack_24 = fStack_60;
  pCStack_1c = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(param_5);
  if (0 < pCStack_1c->bone_count) {
    param_2 = param_2 + 3;
    pfStack_18 = param_3 + 3;
    pfStack_14 = param_1;
    do {
      core_xform_cpp_slerpQuaternion_FUN_005b7940(param_2,pfStack_18,param_4);
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 4;
      pfVar2 = pfStack_14 + (uint)bVar3 * -2 + 4;
      pfStack_14[3] = fStack_78;
      *pfVar2 = *(float *)(&stack0xffffff8c + (uint)bVar3 * -8);
      pfVar2[(uint)bVar3 * -2 + 1] =
           *(float *)(&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      (pfVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
           *(float *)((int)(&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8) +
                     ((uint)bVar3 * -2 + 1) * 4);
      pfStack_14 = pfStack_14 + 4;
      pfStack_18 = pfStack_18 + 4;
    } while (iVar1 < pCStack_1c->bone_count);
  }
  core_skeleton_cpp_computeBoneModelMatrices_FUN_0056b130(param_1,param_5);
  return;
}
