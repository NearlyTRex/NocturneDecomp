// Name: core_fire.cpp_FUN_0049c730
// Address: 0049c730
// Address Range: [[0049c730, 0049c881]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_0049c730(float *param_1,float *param_2,float param_3,float param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_0049c730(float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  CDemonSet *this_ptr;
  float fVar1;
  CKeyFramedModel *model_ptr;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1030 [1012];
  CVector3f local_48;
  CVector3f local_3c [3];
  float local_18;
  float local_c;
  
  bVar3 = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  this_ptr = g_CDemonSetPtr;
  param_1[3] = 1.0;
  param_1[7] = param_5;
  param_1[4] = param_3;
  core_set_cpp_CDemonSet_initCameraShake_FUN_0053b440(this_ptr,200.0,0.0,0.0,2.0);
  fVar1 = (float)core_actor_cpp_randomChance_FUN_0040cf40(0.5);
  param_1[6] = fVar1;
  param_1[5] = param_4;
  if (param_5 == 0.0) {
    iVar2 = 0;
    do {
      local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.7853982,1.5707964);
      local_c = local_18;
      local_c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.0,6.2831855);
      fVar4 = (float10)fcos((float10)local_c);
      fVar5 = (float10)fcos((float10)local_18);
      fVar6 = (float10)fsin((float10)local_c);
      fVar7 = (float10)fsin((float10)local_18);
      local_3c[0].y = (float)(fVar7 * (float10)_DAT_005c068c);
      local_3c[0].x = (float)(fVar4 * (float10)_DAT_005c068c * fVar5);
      local_3c[0].z = (float)(fVar6 * (float10)_DAT_005c068c * fVar5);
      local_48.x = *param_1;
      *(float *)((int)local_3c + (uint)bVar3 * -8 + -8) = param_1[(uint)bVar3 * -2 + 1];
      *(float *)((int)local_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4) =
           (param_1 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
      local_48.y = local_48.y + 1.0;
      model_ptr = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
                            ((CKeyFramedModelInstance *)((iVar2 % 5) * 0x17c + 0x1c743fc));
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createRock_FUN_004a28e0(0x01C73654,&local_48,local_3c,model_ptr);
    } while (iVar2 < 10);
  }
  return;
}
