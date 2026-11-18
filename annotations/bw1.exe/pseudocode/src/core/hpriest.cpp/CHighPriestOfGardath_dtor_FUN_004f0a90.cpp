// Name: core_hpriest.cpp_CHighPriestOfGardath_dtor_FUN_004f0a90
// Address: 004f0a90
// Address Range: [[004f0a90, 004f0b24]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f0a90(CHighPriestOfGardath *this_ptr,uint flags)

#include "nocturne.h"

CHighPriestOfGardath * __cdecl core_hpriest_cpp_CHighPriestOfGardath_dtor_FUN_004f0a90(CHighPriestOfGardath *this_ptr,uint flags)

{
  CPathMap *pCVar1;
  CFlame *pCVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CHighPriestOfGardath *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CHighPriestOfGardathTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_00533060(&(this_ptr->base).path_map,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_0040ee30
                     ((CFlame *)(pCVar1[-1].height_cache_tags[10] + 0x36),0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)&pCVar2[-4].base.vtable,0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar3[-0x19].filenames[0] + 0x10),0);
  ptr = (CHighPriestOfGardath *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
