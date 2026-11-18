// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005a7420
// Address: 005a7420
// Address Range: [[005a7420, 005a74f8]]
// Convention: __cdecl
// Signature: CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005a7420(CVampireBoss *this_ptr,uint flags)

#include "nocturne.h"

CVampireBoss * __cdecl core_vampboss_cpp_CVampireBoss_dtor_FUN_005a7420(CVampireBoss *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CCloth *pCVar2;
  CDeformableModelInstance *pCVar3;
  CFlame *pCVar4;
  CClothList *pCVar5;
  CVampireBoss *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CVampireBossTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0(&this_ptr->morph,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043e620
                     ((CCloth *)(pCVar1[-0x4e].models[1].textures[0xd].texture_name + 0x14),0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043e620(pCVar2 + -1,0);
  pCVar2 = core_cloth_cpp_CCloth_dtor_FUN_0043e620(pCVar2 + -1,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)&pCVar2[-1].collide_bones[0x12].euler1.z,0);
  pCVar4 = core_armour_cpp_CFlame_arrdtor50_FUN_0040ee30
                     ((CFlame *)&pCVar3[-4].bone_origins[0x23].z,0);
  pCVar5 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)&pCVar4[-4].base.vtable,0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar5[-0x19].filenames[0] + 0x10),0);
  ptr = (CVampireBoss *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
