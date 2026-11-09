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
  *(byte ***)&this_ptr->field_0x154 = &g_CMolochVTable;
  pCVar1 = core_morph_cpp_CMorph_dtor_FUN_00522fc0((CMorph *)&this_ptr->field_0x22424,0);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_005673f0
                     ((CDeformableModelInstance *)(pCVar1 + -0x2478),0);
  pCVar3 = (CMoloch *)core_hero_cpp_FUN_004ea980(&pCVar2[-0xf].field_0x16f0,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005c0344(pCVar3);
  return pCVar3;
}
