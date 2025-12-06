// Name: core_charactr.cpp_CCharacter_FUN_0042c010
// Address: 0042c010
// Address Range: [[0042c010, 0042c10e]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042c010(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c010(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  float local_2c;
  float local_20;
  float local_18;
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(this_ptr->base_actor).vtable[1].getGroundType)(&this_ptr->base_actor);
    if (iVar3 != 0) {
      pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (in_stack_00000008,(CVector3f *)&stack0xffffffbc,in_stack_0000000c);
      local_2c = local_20 - pCVar4->x;
      fVar1 = local_18 - pCVar4->z;
      fVar1 = SQRT(fVar1 * fVar1 + local_2c * local_2c);
      fVar2 = g_CGamePtr->delta_time_float * (float)5;
      if (fVar2 < fVar1) {
        local_2c = local_2c * (fVar2 / fVar1);
      }
      (*in_stack_00000008->vtable->setPositionAndOrientation)
                (in_stack_00000008,(CVector3f *)&stack0xffffffc8,
                 (CVector3f *)((in_stack_00000008->location).position.x + local_2c));
      return 1;
    }
  }
  return iVar3;
}
