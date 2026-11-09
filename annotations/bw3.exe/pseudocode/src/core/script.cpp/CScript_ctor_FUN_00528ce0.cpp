// Name: core_script.cpp_CScript_ctor_FUN_00528ce0
// Address: 00528ce0
// Address Range: [[00528ce0, 00528d16]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_ctor_FUN_00528ce0(CScript *this_ptr)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_ctor_FUN_00528ce0(CScript *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00481f20((CStrList *)&this_ptr->field_0x34);
  *(uint *)&pCVar1[-1].field_0x8 = 0;
  *(uint *)&pCVar1[-1].field_0xc = 0;
  *(uint *)&pCVar1[-2].field_0xc = 0;
  *(uint *)(pCVar1 + -1) = 0;
  *(uint *)&pCVar1[-1].field_0x4 = 0;
  return (CScript *)&pCVar1[-4].field_0xc;
}
