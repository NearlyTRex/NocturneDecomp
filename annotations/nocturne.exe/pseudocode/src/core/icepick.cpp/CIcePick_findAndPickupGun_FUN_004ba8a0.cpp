// Name: core_icepick.cpp_CIcePick_findAndPickupGun_FUN_004ba8a0
// Address: 004ba8a0
// Address Range: [[004ba8a0, 004ba9f6]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(CDemonActor *param_1)

#include "nocturne.h"

uint __cdecl core_icepick_cpp_CIcePick_findAndPickupGun_FUN_004ba8a0(CDemonActor *param_1)

{
  CDemonActor *this_ptr;
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  int iVar5;
  CVector3f local_34;
  CVector3f local_28;
  float local_1c;
  float fStack_18;
  
  param_1[0x181].scale.z = 0;
  local_1c = 4.0;
  local_28.x = 1.0;
  local_28.y = 0.0;
  local_28.z = 2.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_34,&local_28);
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
    this_ptr = *(CDemonActor **)(iVar5 + 0x14cd70 + 0x01E57284);
    pCVar3 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
    if (pCVar3 == (CDemonActor *)0x0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                         (this_ptr,g_CTommyGunActorType_02dd0fd0.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar1 = (this_ptr->location).position.x - local_34.x;
        fVar2 = (this_ptr->location).position.z - local_34.z;
        if ((ABS((this_ptr->location).position.y - local_34.y) <= (float)2) &&
           (fStack_18 = fVar1 * fVar1 + fVar2 * fVar2, fStack_18 <= local_1c)) {
          param_1[0x181].scale.z = (int)this_ptr;
          local_1c = fStack_18;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  iVar4 = param_1[0x181].scale.z;
  if (iVar4 == 0) {
    return 0;
  }
  (param_1->location).position.x =
       (*(float *)(iVar4 + 0x20) - local_34.x) + (param_1->location).position.x;
  (param_1->location).position.z =
       (*(float *)(param_1[0x181].scale.z + 0x28) - local_34.z) + (param_1->location).position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
            ((CMotionController *)(param_1 + 1),0x13,1);
  return 1;
}
