// Name: core_moloch.cpp_CMoloch_dtor_FUN_004dd9f0
// Address: 004dd9f0
// Address Range: [[004dd9f0, 004dda6e]]
// Convention: unknown
// Signature: CHero * core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(CHero *param_1,byte param_2)

#include "nocturne.h"

CHero * core_moloch_cpp_CMoloch_dtor_FUN_004dd9f0(CHero *param_1,byte param_2)

{
  CMorph *pCVar1;
  CDeformableModelInstance *pCVar2;
  CHero *pCVar3;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CMolochTypeInfo_005a0c10);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  (param_1->base).base.vtable._ub =
       (CDemonActor_vtable *)&PTR_core_moloch_cpp_CMoloch_setup_FUN_004dda70_005a0ac4;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_004e0070((CMorph *)&param_1[1].base.model.bounding_box,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0051b6e0
                     ((CDeformableModelInstance *)
                      &pCVar1[-3].models[0].textures[2].textures[0].base.count,0);
  pCVar3 = core_hero_cpp_CHero_dtor_FUN_004b4800
                     ((CHero *)(pCVar2[-0xf].bone_transform.bone_scales + 0x58),1);
  if ((param_2 & 2) == 0) {
    return pCVar3;
  }
  FUN_00564494(pCVar3);
  return pCVar3;
}
