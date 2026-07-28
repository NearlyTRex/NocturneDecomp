// Name: core_elephant.cpp_CElephantGun_onFired_FUN_00477fd0
// Address: 00477fd0
// Address Range: [[00477fd0, 004780d1]]
// Convention: unknown
// Signature: void core_elephant_cpp_CElephantGun_onFired_FUN_00477fd0(int param_1)

#include "nocturne.h"

void core_elephant_cpp_CElephantGun_onFired_FUN_00477fd0(int param_1)

{
  uint uVar1;
  CVector3f *pCVar2;
  CKeyFramedModel *model_ptr;
  CMatrix3x3f local_6c;
  byte local_44 [12];
  CVector3f local_38;
  CVector3f local_2c;
  byte local_20 [12];
  float local_14;
  
  local_38.x = 5.0;
  local_38.y = 6.0;
  local_38.z = -6.0;
  local_2c.x = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_14 = local_2c.x;
  local_2c.y = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xbec90fdb,0x3ec90fdb);
  local_2c.z = 0.0;
  local_14 = local_2c.y;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(&local_6c,&local_2c);
  uVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(&local_6c,local_20,&local_38);
  pCVar2 = (CVector3f *)
           core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_44,uVar1);
  if (&local_38 != pCVar2) {
    local_38.x = pCVar2->x;
    local_38.y = pCVar2->y;
    local_38.z = pCVar2->z;
  }
  model_ptr = core_dmodel_cpp_loadModel_FUN_004543b0("shell.kfm");
  core_fire_cpp_CFireEffect_createShell_FUN_0048c6b0
            (0x01C08D04,(CVector3f *)(param_1 + 0x20),(CVector3f *)(param_1 + 0x30),&local_38,
             model_ptr);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"sh-cock.wav");
  return;
}
