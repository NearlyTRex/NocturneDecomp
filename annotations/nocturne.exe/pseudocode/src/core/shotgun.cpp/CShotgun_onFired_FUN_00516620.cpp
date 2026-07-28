// Name: core_shotgun.cpp_CShotgun_onFired_FUN_00516620
// Address: 00516620
// Address Range: [[00516620, 0051672f]]
// Convention: unknown
// Signature: void core_shotgun_cpp_CShotgun_onFired_FUN_00516620(int param_1)

#include "nocturne.h"

void core_shotgun_cpp_CShotgun_onFired_FUN_00516620(int param_1)

{
  uint uVar1;
  CVector3f *pCVar2;
  CKeyFramedModel *model_ptr;
  CMatrix3x3f local_64;
  byte local_3c [12];
  CVector3f local_30;
  CVector3f local_24;
  byte local_18 [12];
  float local_c;
  
  if (*(int *)(param_1 + 0x560) < 1) {
    return;
  }
  local_30.x = 5.0;
  local_30.y = 6.0;
  local_30.z = -6.0;
  local_24.x = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_c = local_24.x;
  local_24.y = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_24.z = 0.0;
  local_c = local_24.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_64,&local_24);
  uVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_64,local_18,&local_30);
  pCVar2 = (CVector3f *)
           core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_3c,uVar1);
  if (&local_30 != pCVar2) {
    local_30.x = pCVar2->x;
    local_30.y = pCVar2->y;
    local_30.z = pCVar2->z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_004543b0("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
            (0x01C08D04,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30),&local_30,
             model_ptr);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"shotgun-cock.wav");
  return;
}
