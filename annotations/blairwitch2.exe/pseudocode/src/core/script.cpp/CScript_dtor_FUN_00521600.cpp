// Name: core_script.cpp_CScript_dtor_FUN_00521600
// Address: 00521600
// Address Range: [[00521600, 00521620]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00521600(CScript *this_ptr,uint flags)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00521600(CScript *this_ptr,uint flags)

{
  CStrList *pCVar1;
  
  core_script_cpp_FUN_00521630(this_ptr);
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00480d40((CStrList *)&this_ptr->field_0x34,0);
  return (CScript *)&pCVar1[-4].field_0xc;
}
