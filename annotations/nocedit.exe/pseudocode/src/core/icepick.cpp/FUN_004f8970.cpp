// Name: core_icepick.cpp_FUN_004f8970
// Address: 004f8970
// Address Range: [[004f8970, 004f8ac6]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8970()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f8970(uint param_1) */

uint core_icepick_cpp_FUN_004f8970(void)

{
  CDemonActor *this_ptr;
  float fVar1;
  CDemonActor *pCVar2;
  BADSPACEBASE *in_ESP;
  float unaff_ESI;
  int iVar3;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float fStack_30;
  CVector3f local_28;
  float local_1c;
  float fStack_18;
  
  in_stack_00000004[0x17a].actor_name[8] = '\0';
  in_stack_00000004[0x17a].actor_name[9] = '\0';
  in_stack_00000004[0x17a].actor_name[10] = '\0';
  in_stack_00000004[0x17a].actor_name[0xb] = '\0';
  local_1c = 4.0;
  local_28.x = 1.0;
  local_28.y = 0.0;
  local_28.z = 2.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)&stack0xffffffcc,&local_28);
  iVar4 = 0;
  for (iVar3 = 0; iVar3 < (int)g_CDemonSetPtr->actor_list_ptr; iVar3 = iVar3 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar4);
    pCVar2 = (*this_ptr->vtable->getCarrier)(this_ptr);
    if (pCVar2 == (CDemonActor *)0x0) {
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr,g_CTommyGunClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        fVar1 = (this_ptr->location).position.x - local_28.z;
        local_28.x = (this_ptr->location).position.y - local_1c;
        local_28.y = (this_ptr->location).position.z - fStack_18;
        if ((ABS(local_28.x) <= (float)2) &&
           (fVar1 = fVar1 * fVar1 + local_28.y * local_28.y, fVar1 <= unaff_ESI)) {
          *(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8) = this_ptr;
          unaff_ESI = fVar1;
        }
      }
    }
    iVar4 = iVar4 + 4;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
    return 0;
  }
  (in_stack_00000004->location).position.x =
       (*(float *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x20) - fStack_30) +
       (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.z =
       (*(float *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x28) - local_28.x) +
       (in_stack_00000004->location).position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 1),0x13,1);
  return 1;
}
