// Name: core_fire.cpp_CToss_ctor_FUN_00499270
// Address: 00499270
// Address Range: [[00499270, 0049929d]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_00499270(CToss *this_ptr)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_ctor_FUN_00499270(CToss *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  CBox *pCVar2;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)&this_ptr->field_0x4);
  pCVar2 = core_box_cpp_CBox_ctor_FUN_005b1bc0((CBox *)(pCVar1 + 1));
  *(uint *)(pCVar2 + 0x25c) = 0;
  return (CToss *)(pCVar2 + -0x180);
}
