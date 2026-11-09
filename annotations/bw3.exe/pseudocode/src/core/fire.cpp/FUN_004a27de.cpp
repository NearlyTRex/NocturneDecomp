// Name: core_fire.cpp_FUN_004a27de
// Address: 004a27de
// Address Range: [[004a27de, 004a282f]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004a27de(undefined4 param_1,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_FUN_004a27de(uint param_1,CVector3f *param_2,CVector3f *param_3,CKeyFramedModel *param_4,float param_5)

{
  int iVar1;
  
  iVar1 = _DAT_01cefd10 * 0x24;
  _DAT_01cefd10 = _DAT_01cefd10 + 1;
  if (9 < _DAT_01cefd10) {
    _DAT_01cefd10 = 0;
  }
  core_fire_cpp_CBulletTrail_init_FUN_0049aca0
            ((CBulletTrail *)(iVar1 + 0x1cefd14),param_2,param_3,param_4,param_5);
  return;
}
