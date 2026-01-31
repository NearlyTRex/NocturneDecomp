// Name: core_icepick.cpp_CIcePick_FUN_004f8970
// Address: 004f8970
// Address Range: [[004f8970, 004f8ac6]]
// Convention: __cdecl
// Signature: int __cdecl core_icepick_cpp_CIcePick_FUN_004f8970(CIcePick *this_ptr)

#include "nocturne.h"

int __cdecl core_icepick_cpp_CIcePick_FUN_004f8970(CIcePick *this_ptr)

{
  CDemonActor *this_ptr_00;
  float fVar1;
  CDemonActor *pCVar2;
  int iVar3;
  int iVar4;
  CVector3f local_34;
  CVector3f local_28;
  uint local_1c;
  float fStack_18;
  float fStack_14;
  
  this_ptr->unk[0x24] = '\0';
  this_ptr->unk[0x25] = '\0';
  this_ptr->unk[0x26] = '\0';
  this_ptr->unk[0x27] = '\0';
  local_1c = 0x40800000;
  local_28.x = 1.0;
  local_28.y = 0.0;
  local_28.z = 2.0;
  iVar3 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_34,&local_28);
  iVar4 = 0;
  while( true ) {
    if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar3) break;
    this_ptr_00 = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4);
    pCVar2 = (*((this_ptr_00->vtable)._ub)->getCarrier)(this_ptr_00);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (this_ptr_00,g_CTommyGunClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar1 = (this_ptr_00->location).position.x - local_34.y;
        local_34.x = (this_ptr_00->location).position.z - local_28.x;
        if ((ABS((this_ptr_00->location).position.y - local_34.z) <= (float)2) &&
           (fStack_14 = fVar1 * fVar1 + local_34.x * local_34.x, fStack_14 <= fStack_18)) {
          *(CDemonActor **)(this_ptr->unk + 0x24) = this_ptr_00;
          fStack_18 = fStack_14;
        }
      }
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
  }
  if (*(int *)(this_ptr->unk + 0x24) == 0) {
    return 0;
  }
  (this_ptr->base).base.base.location.position.x =
       (*(float *)(*(int *)(this_ptr->unk + 0x24) + 0x20) - local_34.x) +
       (this_ptr->base).base.base.location.position.x;
  (this_ptr->base).base.base.location.position.z =
       (*(float *)(*(int *)(this_ptr->unk + 0x24) + 0x28) - local_34.z) +
       (this_ptr->base).base.base.location.position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            (&(this_ptr->base).base.model.motion_controller,0x13,1);
  return 1;
}
