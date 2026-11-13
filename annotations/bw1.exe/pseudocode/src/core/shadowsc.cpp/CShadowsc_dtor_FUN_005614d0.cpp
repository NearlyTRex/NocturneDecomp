// Name: core_shadowsc.cpp_CShadowsc_dtor_FUN_005614d0
// Address: 005614d0
// Address Range: [[005614d0, 00561554]]
// Convention: __cdecl
// Signature: CShadowsc * __cdecl core_shadowsc_cpp_CShadowsc_dtor_FUN_005614d0(CShadowsc *this_ptr,uint flags)

#include "nocturne.h"

CShadowsc * __cdecl core_shadowsc_cpp_CShadowsc_dtor_FUN_005614d0(CShadowsc *this_ptr,uint flags)

{
  int iVar1;
  CClothList *pCVar2;
  CDeformableModelInstance *pCVar3;
  CShadowsc *pCVar4;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CShadowscTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  iVar1 = core_armour_cpp_FUN_0040ee30((this_ptr->base).base.flames,0);
  pCVar2 = core_cloth_cpp_CClothList_dtor_FUN_00441ca0((CClothList *)(iVar1 + -0x93c),0);
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar2[-0x19].filenames[0] + 0x10),0);
  pCVar4 = (CShadowsc *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408730
                     ((CDemonActor *)(pCVar3[-1].part_data.texture_set_indices + 7),1);
  if ((flags & 2) == 0) {
    return pCVar4;
  }
  FUN_005c0344(pCVar4);
  return pCVar4;
}
