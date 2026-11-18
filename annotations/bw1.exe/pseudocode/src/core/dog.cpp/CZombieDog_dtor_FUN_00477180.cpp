// Name: core_dog.cpp_CZombieDog_dtor_FUN_00477180
// Address: 00477180
// Address Range: [[00477180, 00477204]]
// Convention: __cdecl
// Signature: CZombieDog * __cdecl core_dog_cpp_CZombieDog_dtor_FUN_00477180(CZombieDog *this_ptr,uint flags)

#include "nocturne.h"

CZombieDog * __cdecl core_dog_cpp_CZombieDog_dtor_FUN_00477180(CZombieDog *this_ptr,uint flags)

{
  CFlame *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CZombieDog *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CZombieDogTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_0040ee30((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)&pCVar1[-4].base.vtable,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  ptr = (CZombieDog *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
