// Name: core_moloch.cpp_CMoloch_dtor_FUN_005203b0
// Address: 005203b0
// Address Range: [[005203b0, 0052042e]]
// Convention: __cdecl
// Signature: CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_005203b0(CMoloch *this_ptr,uint flags)

#include "nocturne.h"

CMoloch * __cdecl core_moloch_cpp_CMoloch_dtor_FUN_005203b0(CMoloch *this_ptr,uint flags)

{
  CMorph *pCVar1;
  CDeformableModelInstance *pCVar2;
  CMoloch *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CMolochTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  (this_ptr->base).base.base.vtable._ub = &g_CMolochVTable._ub;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0(&this_ptr->morph,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)&pCVar1[-3].models[0].parts[0].start_vertex,0);
  pCVar3 = (CMoloch *)
           core_hero_cpp_FUN_004ea980(pCVar2[-0xf].bone_transform.bone_model_matrices + 0x2d,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005c0344(pCVar3);
  return pCVar3;
}
