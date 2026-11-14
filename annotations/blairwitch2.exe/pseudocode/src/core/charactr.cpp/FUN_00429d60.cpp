// Name: core_charactr.cpp_FUN_00429d60
// Address: 00429d60
// Address Range: [[00429d60, 00429e5b]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00429d60(CDemonActor *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_charactr_cpp_FUN_00429d60(CDemonActor *param_1,float *param_2)

{
  float *pfVar1;
  byte bVar2;
  int aiStackY_1058 [15];
  void *apvStackY_101c [1001];
  int *piVar3;
  float local_70;
  float fStack_6c;
  int iStack_68;
  float local_64;
  float local_60;
  int local_5c [4];
  int local_4c [3];
  uint local_40;
  int local_34;
  void *local_30 [2];
  int local_28;
  uint auStack_24 [5];
  
  bVar2 = 0;
  core_actor_cpp_FUN_00408cf0(param_1,&param_1[0xd].particle_systems[2].position.z);
  piVar3 = &param_1[0xd].particle_systems[3].standalone;
  local_5c[1] = auStack_24[2];
  local_5c[(uint)bVar2 * 0xfffffffe + 2] = auStack_24[(uint)bVar2 * -2 + 3];
  local_5c[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 3] =
       auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
  core_actor_cpp_FUN_00408cf0(param_1,piVar3);
  local_4c[0] = local_40;
  local_5c[(uint)bVar2 * 0xfffffffe + 5] = local_5c[(uint)bVar2 * 0xfffffffe + 8];
  local_5c[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 6] =
       local_5c[(uint)bVar2 * 0xfffffffe + (uint)bVar2 * 0xfffffffe + 9];
  if (&param_1->orient != (UOrientationVector *)param_2) {
    (param_1->orient).vec.x = *param_2;
    (param_1->orient).vec.y = param_2[1];
    (param_1->orient).vec.z = param_2[2];
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(param_1);
  core_actor_cpp_FUN_00408d30(param_1,local_5c + 1);
  pfVar1 = &param_1[0xd].particle_systems[2].position.z;
  local_64 = local_70;
  (&local_60)[(uint)bVar2 * -2] = (&fStack_6c)[(uint)bVar2 * -2];
  local_5c[(uint)bVar2 * -2 + (uint)bVar2 * -2] = (&iStack_68)[(uint)bVar2 * -2 + (uint)bVar2 * -2];
  if (pfVar1 != &local_64) {
    *pfVar1 = local_64;
    param_1[0xd].particle_systems[2].fade_current = local_60;
    param_1[0xd].particle_systems[2].active = local_5c[0];
  }
  core_actor_cpp_FUN_00408d30(param_1,local_5c + 4);
  piVar3 = &param_1[0xd].particle_systems[3].standalone;
  local_34 = local_28;
  local_30[(uint)bVar2 * -2] = (void *)auStack_24[(uint)bVar2 * -2];
  local_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
       (void *)auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if (piVar3 == local_5c + 10) {
    return;
  }
  *piVar3 = local_34;
  param_1[0xd].particle_systems[3].particles = local_30[0];
  param_1[0xd].particle_systems[3].vtable = local_30[1];
  return;
}
