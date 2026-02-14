// Name: core_hero.cpp_CHero_FUN_004f3960
// Address: 004f3960
// Address Range: [[004f3960, 004f3ae7]]
// Convention: __cdecl
// Signature: float __cdecl core_hero_cpp_CHero_FUN_004f3960(CHero *this_ptr)

#include "nocturne.h"

float __cdecl core_hero_cpp_CHero_FUN_004f3960(CHero *this_ptr)

{
  CCharacter *this_ptr_00;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *in_stack_00000008;
  CVector3f aCStack_a8 [10];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CCharacter *local_1c;
  float fStack_18;
  CLocation *local_14;
  
  *in_stack_00000008 = 9999.9;
  iVar3 = 0;
  local_14 = &(this_ptr->base).base.location;
  local_1c = (CCharacter *)0x0;
  for (iVar4 = 0; iVar4 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar4 = iVar4 + 1) {
    this_ptr_00 = *(CCharacter **)(g_CDemonSetPtr->unk4 + iVar3 + 8000);
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (&this_ptr_00->base,g_CVehicleClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (&this_ptr_00->base,g_CMobsterClassInfo.name_hash);
      if ((pCVar1 == (CDemonActor *)0x0) || (*(int *)(pCVar1[0x8e].actor_name + 0x10) == 0)) {
        iVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00);
        if (iVar2 == 0) {
          iVar2 = (*((this_ptr_00->base).vtable._ub)->shouldIgnoreForTargeting)(&this_ptr_00->base);
          if (iVar2 == 0) {
            __arrinit(aCStack_a8,10,&g_CVectorTypeInfo);
            iVar2 = (*((this_ptr_00->base).vtable._ub)->getTargetPoints)
                              (&this_ptr_00->base,aCStack_a8);
            if (0 < iVar2) {
              fStack_30 = (local_14->position).x - (this_ptr_00->base).location.position.x;
              fStack_2c = ((local_14->position).y - (this_ptr_00->base).location.position.y) *
                          (float)2;
              fStack_28 = (local_14->position).z - (this_ptr_00->base).location.position.z;
              fStack_18 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
              if (fStack_18 < *in_stack_00000008) {
                *in_stack_00000008 = fStack_18;
                local_1c = this_ptr_00;
              }
            }
          }
        }
      }
    }
    iVar3 = iVar3 + 4;
  }
  if (local_1c == (CCharacter *)0x0) {
    return 0.0;
  }
  *in_stack_00000008 = SQRT(*in_stack_00000008);
  return (float)local_1c;
}
