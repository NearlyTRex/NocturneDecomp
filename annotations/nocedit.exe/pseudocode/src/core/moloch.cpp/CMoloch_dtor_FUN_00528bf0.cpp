// Name: core_moloch.cpp_CMoloch_dtor_FUN_00528bf0
// Address: 00528bf0
// Address Range: [[00528bf0, 00528c6e]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_00528bf0(CMoloch *this_ptr,uint flags)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_00528bf0(CMoloch *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CDeformableModelInstance *pCVar2;
  CMoloch *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMolochTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CMolochVTable;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_0052b330(&this_ptr->morph,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)
                      &pCVar1[-3].models[0].textures[2].textures[0].base.count,0);
  ptr = (CMoloch *)
        core_hero_cpp_CHero_dtor_FUN_004f2470
                  ((CHero *)&pCVar2[-0xf].bone_transform.bone_rotations[0x60].y,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
