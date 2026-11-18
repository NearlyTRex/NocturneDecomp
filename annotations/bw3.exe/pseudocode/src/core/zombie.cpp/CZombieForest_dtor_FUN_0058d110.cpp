// Name: core_zombie.cpp_CZombieForest_dtor_FUN_0058d110
// Address: 0058d110
// Address Range: [[0058d110, 0058d194]]
// Convention: __cdecl
// Signature: CZombieForest * __cdecl core_zombie_cpp_CZombieForest_dtor_FUN_0058d110(CZombieForest *this_ptr,uint flags)

#include "nocturne.h"

CZombieForest * __cdecl core_zombie_cpp_CZombieForest_dtor_FUN_0058d110(CZombieForest *this_ptr,uint flags)

{
  CFlame *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CZombieForestTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_00410370((this_ptr->base).base.base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_0043f900
                     ((CClothList *)((int)&pCVar1[-4].base.previous_transform_state.orientation + 4)
                      ,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar2[-0x1b].filenames[7] + 8),0);
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770
                  ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return (CZombieForest *)ptr;
  }
  debugFreeChecked(ptr);
  return (CZombieForest *)ptr;
}
