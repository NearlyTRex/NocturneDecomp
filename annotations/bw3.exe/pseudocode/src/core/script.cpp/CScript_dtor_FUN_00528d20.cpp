// Name: core_script.cpp_CScript_dtor_FUN_00528d20
// Address: 00528d20
// Address Range: [[00528d20, 00528d40]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00528d20(CScript *this_ptr,uint flags)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00528d20(CScript *this_ptr,uint flags)

{
  CStrList *pCVar1;
  
  core_script_cpp_FUN_00528d50(this_ptr);
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00481f40((CStrList *)&this_ptr->field_0x34,0);
  return (CScript *)&pCVar1[-4].field_0xc;
}
