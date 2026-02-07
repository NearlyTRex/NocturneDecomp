// Name: core_charactr.cpp_CCharacter_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042c180(CCharacter *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  SDamageInfo *in_stack_00000010;
  CVector3f *in_stack_00000014;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  byte local_60 [12];
  byte local_54 [12];
  CVector3f local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base,&local_48,in_stack_00000008);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base,(CVector3f *)local_54,in_stack_0000000c);
  iVar2 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,&local_48,(CVector3f *)local_54,(CVector3f *)local_60);
  if (iVar2 != 0) {
    if (in_stack_00000014 != (CVector3f *)0x0) {
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,(CVector3f *)(local_60 + 4),(CVector3f *)(local_54 + 4));
      if (in_stack_00000014 != pCVar3) {
        in_stack_00000014->x = pCVar3->x;
        in_stack_00000014->y = pCVar3->y;
        in_stack_00000014->z = pCVar3->z;
      }
    }
    if (0.0 < (double)in_stack_00000010->damage_amount) {
      fStack_68 = in_stack_0000000c->x - in_stack_00000008->x;
      fStack_64 = in_stack_0000000c->y - in_stack_00000008->y;
      local_60._0_4_ = in_stack_0000000c->z - in_stack_00000008->z;
      fVar1 = SQRT((float)local_60._0_4_ * (float)local_60._0_4_ +
                   fStack_68 * fStack_68 + fStack_64 * fStack_64);
      round((double)in_stack_00000010->damage_amount * 0.40000000000000002);
      if (fVar1 <= 0.0) {
        fStack_68 = 0.0;
        fStack_6c = 0.0;
        fStack_64 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fStack_6c = fStack_6c * fVar1;
        fStack_68 = fStack_68 * fVar1;
        fStack_64 = fStack_64 * fVar1;
      }
      fStack_30 = fStack_6c * 10.0f;
      fStack_2c = fStack_68 * 10.0f;
      fStack_28 = fStack_64 * 10.0f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,(CVector3f *)&stack0xffffffe8,(CVector3f *)local_54);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
    }
    fStack_24 = (fStack_3c + local_48.x) * 0.5f;
    fStack_20 = (fStack_38 + local_48.y) * 0.5f;
    fStack_1c = (fStack_34 + local_48.z) * 0.5f;
    if (&in_stack_00000010->impact_direction != (CVector3f *)&fStack_24) {
      (in_stack_00000010->impact_direction).x = fStack_24;
      (in_stack_00000010->impact_direction).y = fStack_20;
      (in_stack_00000010->impact_direction).z = fStack_1c;
    }
    (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,in_stack_00000010);
    return 1;
  }
  in_stack_00000010->damage_amount = 0.0;
  return 0;
}
