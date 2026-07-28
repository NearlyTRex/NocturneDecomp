// Name: core_boxactor.cpp_FUN_0041f190
// Address: 0041f190
// Address Range: [[0041f190, 0041f232]]
// Convention: unknown
// Signature: void core_boxactor_cpp_FUN_0041f190(int param_1)

#include "nocturne.h"

void core_boxactor_cpp_FUN_0041f190(int param_1)

{
  CBoundingBox3D *this_ptr;
  CVector3f *pCVar1;
  CVector3f *out_point;
  byte local_40 [24];
  CVector3f CStack_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if (*(CDemonActor **)(param_1 + 0x31c) == (CDemonActor *)0x0) {
    return;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (*(CDemonActor **)(param_1 + 0x31c),&local_1c,(CVector3f *)(param_1 + 0x20));
  pCVar1 = &local_1c;
  out_point = &local_10;
  this_ptr = (CBoundingBox3D *)
             (**(code **)(*(int *)(*(int *)(param_1 + 0x31c) + 0x14c) + 0x14))
                       (*(int *)(param_1 + 0x31c),local_40);
  pCVar1 = core_box_cpp_CBoundingBox3D_clampPoint_FUN_0041e160(this_ptr,out_point,pCVar1);
  if (&local_1c != pCVar1) {
    local_1c.x = pCVar1->x;
    local_1c.y = pCVar1->y;
    local_1c.z = pCVar1->z;
  }
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (*(CDemonActor **)(param_1 + 0x31c),&CStack_28,&local_1c);
  *(float *)(param_1 + 0x20) = pCVar1->x;
  *(float *)(param_1 + 0x24) = pCVar1->y;
  *(float *)(param_1 + 0x28) = pCVar1->z;
  return;
}
