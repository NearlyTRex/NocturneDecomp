// Name: core_baron.cpp_CBaron_FUN_004135e0
// Address: 004135e0
// Address Range: [[004135e0, 004136a2]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_004135e0(CBaron * this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_004135e0(CBaron *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  CVector3f *pCVar2;
  CCharacter *this_ptr_00;
  int iVar3;
  CVector3f *new_orientation;
  float local_34;
  CVector3f local_1c;
  
  if (*(int *)(this_ptr->unk + 0xd8) != 0) {
    new_orientation = (CVector3f *)(*(int *)(this_ptr->unk + 0xd8) + 0x30);
    pCVar1 = (this_ptr->base).base.base.vtable._ub;
    local_1c.z = -2.0;
    local_1c.x = 0.0;
    local_1c.y = 0.0;
    pCVar2 = core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                       (*(CDemonActor **)(this_ptr->unk + 0xd8),(CVector3f *)&stack0xffffffd8,
                        &local_1c);
    local_34 = *(float *)(*(int *)(this_ptr->unk + 0xd8) + 0x20) + pCVar2->x;
    (*pCVar1->setPositionAndOrientation)
              ((CDemonActor *)this_ptr,(CVector3f *)&local_34,new_orientation);
    local_34 = 5.98883e-39;
    this_ptr_00 = (CCharacter *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(this_ptr->unk + 0xd8),g_CCharacterClassInfo.name_hash
                            );
    if (this_ptr_00 != (CCharacter *)0x0) {
      iVar3 = (*(((this_ptr_00->base).vtable._uc)->_uc).isDamageable)(this_ptr_00);
      if (iVar3 == 2) {
        core_baron_cpp_CBaron_FUN_004135a0(this_ptr,*(int *)(this_ptr->unk + 0xd8));
        return;
      }
    }
  }
  return;
}
