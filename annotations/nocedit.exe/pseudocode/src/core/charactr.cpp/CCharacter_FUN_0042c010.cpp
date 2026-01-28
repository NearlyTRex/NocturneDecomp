// Name: core_charactr.cpp_CCharacter_FUN_0042c010
// Address: 0042c010
// Address Range: [[0042c010, 0042c10e]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042c010(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c010(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *pCVar2;
  CDemonActor *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((in_stack_00000008 != (CDemonActor *)0x0) &&
     (iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).cfunc16)(), iVar1 != 0)) {
    pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                       (in_stack_00000008,&local_44,in_stack_0000000c);
    local_2c = local_20 - pCVar2->x;
    local_24 = local_18 - pCVar2->z;
    local_28 = 0.0;
    local_10 = SQRT(local_24 * local_24 + local_2c * local_2c);
    local_14 = g_CGamePtr->delta_time_float * (float)5;
    if (local_14 < local_10) {
      local_c = local_14 / local_10;
      local_2c = local_2c * local_c;
      local_28 = local_c * 0.0;
      local_24 = local_24 * local_c;
    }
    local_38.x = (in_stack_00000008->location).position.x + local_2c;
    local_38.y = (in_stack_00000008->location).position.y + local_28;
    local_38.z = (in_stack_00000008->location).position.z + local_24;
    (*((in_stack_00000008->vtable)._ub)->setPositionAndOrientation)
              (in_stack_00000008,&local_38,(CVector3f *)&in_stack_00000008->orient);
    return 1;
  }
  return 0;
}
