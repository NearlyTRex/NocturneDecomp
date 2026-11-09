// Name: core_fire.cpp_FUN_0049c730
// Address: 0049c730
// Address Range: [[0049c730, 0049c881]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049c730(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049c730(uint *param_1,uint *param_2,uint param_3,uint param_4,int param_5)

{
  CDemonSet *this_ptr;
  int iVar1;
  CKeyFramedModel *model_ptr;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1030 [1012];
  byte local_48 [4];
  float local_44 [2];
  byte local_3c [8];
  float local_34;
  float local_18;
  float local_c;
  
  bVar2 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  this_ptr = g_CDemonSetPtr;
  param_1[3] = 0x3f800000;
  param_1[7] = param_5;
  param_1[4] = param_3;
  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(this_ptr,200.0,0.0,0.0,2.0);
  iVar1 = core_actor_cpp_FUN_0040cf40(0.5);
  param_1[6] = iVar1;
  param_1[5] = param_4;
  if (param_5 == 0) {
    iVar1 = 0;
    do {
      local_18 = (float)core_actor_cpp_FUN_0040ce40(0x3f490fdb,0x3fc90fdb);
      local_c = local_18;
      local_c = (float)core_actor_cpp_FUN_0040ce40(0,0x40c90fdb);
      fVar3 = (float10)fcos((float10)local_c);
      fVar4 = (float10)fcos((float10)local_18);
      fVar5 = (float10)fsin((float10)local_c);
      fVar6 = (float10)fsin((float10)local_18);
      local_3c._4_4_ = (uint)(fVar6 * (float10)_DAT_005c068c);
      local_3c._0_4_ = (uint)(fVar3 * (float10)_DAT_005c068c * fVar4);
      local_34 = (float)(fVar5 * (float10)_DAT_005c068c * fVar4);
      local_48 = (byte  [4])*param_1;
      local_44[(uint)bVar2 * -2] = (float)param_1[(uint)bVar2 * -2 + 1];
      local_44[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           (float)(param_1 + (uint)bVar2 * -2 + 1)[(uint)bVar2 * -2 + 1];
      local_44[0] = local_44[0] + 1.0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                            ((CKeyFramedModelInstance *)((iVar1 % 5) * 0x17c + 0x1c743fc));
      iVar1 = iVar1 + 1;
      core_fire_cpp_FUN_004a28e0(0x01C73654,(CVector3f *)local_48,(CVector3f *)local_3c,model_ptr)
      ;
    } while (iVar1 < 10);
  }
  return;
}
