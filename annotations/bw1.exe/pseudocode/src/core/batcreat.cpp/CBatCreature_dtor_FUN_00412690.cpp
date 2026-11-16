// Name: core_batcreat.cpp_CBatCreature_dtor_FUN_00412690
// Address: 00412690
// Address Range: [[00412690, 00412714]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_00412690(CBatCreature *this_ptr,uint flags)

#include "nocturne.h"

CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_dtor_FUN_00412690(CBatCreature *this_ptr,uint flags)

{
  CFlame *pCVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CBatCreature *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBatCreatureTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_armour_cpp_CFlame_arrdtor50_FUN_0040ee30((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)&pCVar1[-4].base.vtable,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  ptr = (CBatCreature *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
