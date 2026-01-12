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
  float fVar2;
  CDemonActor *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  int iVar5;
  CDemonActor *in_stack_00000004;
  CVector3f CStack_30;
  CVector3f local_24;
  float fStack_18;
  float fStack_14;
  
  in_stack_00000004[0x17a].actor_name[8] = '\0';
  in_stack_00000004[0x17a].actor_name[9] = '\0';
  in_stack_00000004[0x17a].actor_name[10] = '\0';
  in_stack_00000004[0x17a].actor_name[0xb] = '\0';
  fStack_18 = 4.0;
  local_24.x = 1.0;
  local_24.y = 0.0;
  local_24.z = 2.0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&CStack_30,&local_24);
  iVar5 = 0;
  for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
    this_ptr = *(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5);
    pCVar3 = (*this_ptr->vtable->getCarrier)(this_ptr);
    if (pCVar3 == (CDemonActor *)0x0) {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790(this_ptr,g_CTommyGunClassInfo.name_hash);
      if (pCVar3 != (CDemonActor *)0x0) {
        fVar1 = (this_ptr->location).position.x - CStack_30.x;
        fVar2 = (this_ptr->location).position.z - CStack_30.z;
        if ((ABS((this_ptr->location).position.y - CStack_30.y) <= (float)2) &&
           (fStack_14 = fVar1 * fVar1 + fVar2 * fVar2, fStack_14 <= fStack_18)) {
          *(CDemonActor **)(in_stack_00000004[0x17a].actor_name + 8) = this_ptr;
          fStack_18 = fStack_14;
        }
      }
    }
    iVar5 = iVar5 + 4;
  }
  if (*(int *)(in_stack_00000004[0x17a].actor_name + 8) == 0) {
    return 0;
  }
  (in_stack_00000004->location).position.x =
       (*(float *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x20) - CStack_30.x) +
       (in_stack_00000004->location).position.x;
  (in_stack_00000004->location).position.z =
       (*(float *)(*(int *)(in_stack_00000004[0x17a].actor_name + 8) + 0x28) - CStack_30.z) +
       (in_stack_00000004->location).position.z;
  core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
            ((CMotionController *)(in_stack_00000004 + 1),0x13,1);
  return 1;
}
