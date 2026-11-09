// Name: core_fire.cpp_CToss_dtor_FUN_0049ed50
// Address: 0049ed50
// Address Range: [[0049ed50, 0049ed69]]
// Convention: __cdecl
// Signature: CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_0049ed50(CToss *this_ptr,uint flags)

#include "nocturne.h"

CToss * __cdecl core_fire_cpp_CToss_dtor_FUN_0049ed50(CToss *this_ptr,uint flags)

{
  CBox *pCVar1;
  
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70((CBox *)&this_ptr->field_0x180,0);
  return (CToss *)(pCVar1 + -0x180);
}
