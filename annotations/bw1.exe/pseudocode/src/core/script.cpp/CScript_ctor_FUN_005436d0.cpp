// Name: core_script.cpp_CScript_ctor_FUN_005436d0
// Address: 005436d0
// Address Range: [[005436d0, 00543706]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005436d0(CScript *this_ptr)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005436d0(CScript *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00499380((CStrList *)&this_ptr->field_0x34);
  *(uint *)&pCVar1[-1].field_0x8 = 0;
  *(uint *)&pCVar1[-1].field_0xc = 0;
  *(uint *)&pCVar1[-2].field_0xc = 0;
  *(uint *)(pCVar1 + -1) = 0;
  *(uint *)&pCVar1[-1].field_0x4 = 0;
  return (CScript *)&pCVar1[-4].field_0xc;
}
