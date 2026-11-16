// Name: core_darkwolf.cpp_CWhitewolf_dtor_FUN_00599030
// Address: 00599030
// Address Range: [[00599030, 005990c4]]
// Convention: __cdecl
// Signature: CWhitewolf * __cdecl core_darkwolf_cpp_CWhitewolf_dtor_FUN_00599030(CWhitewolf *this_ptr,uint flags)

#include "nocturne.h"

CWhitewolf * __cdecl core_darkwolf_cpp_CWhitewolf_dtor_FUN_00599030(CWhitewolf *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CFlame *pCVar2;
  CClothList *pCVar3;
  CDeformableModelInstance *pCVar4;
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWhitewolfTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004fa8c0(&(this_ptr->base).morph,0);
  pCVar2 = core_armour_cpp_CFlame_arrdtor50_FUN_00410370
                     ((CFlame *)&pCVar1[-0xd].models[1].parts[2].start_vertex,0);
  pCVar3 = core_cloth_cpp_CClothList_dtor_FUN_0043f900
                     ((CClothList *)((int)&pCVar2[-4].base.previous_transform_state.orientation + 4)
                      ,0);
  pCVar4 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)(pCVar3[-0x1b].filenames[7] + 8),0);
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408770
                  ((CDemonActor *)(pCVar4[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return (CWhitewolf *)ptr;
  }
  debugFreeChecked(ptr);
  return (CWhitewolf *)ptr;
}
