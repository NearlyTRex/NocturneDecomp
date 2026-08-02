// Name: core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0
// Address: 004dd9f0
// Address Range: [[004dd9f0, 004dda6e]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(CMoloch *this_ptr,uint flags)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(CMoloch *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CDeformableModelInstance *pCVar2;
  CMoloch *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMolochTypeInfo_005a0c10);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CMolochVTable._ub;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070(&this_ptr->morph,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)
                      &pCVar1[-3].models[0].textures[2].textures[0].base.count,0);
  pCVar3 = (CMoloch *)
           core_hero_cpp_CHero_dtor_FUN_004b4800
                     ((CHero *)(pCVar2[-0xf].bone_transform.bone_scales + 0x58),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_00564494(pCVar3);
  return pCVar3;
}
