// Name: core_script.cpp_CScript_dtor_FUN_004fe4d0
// Address: 004fe4d0
// Address Range: [[004fe4d0, 004fe4f0]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_dtor_FUN_004fe4d0(CScript *this_ptr,uint flags)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_dtor_FUN_004fe4d0(CScript *this_ptr,uint flags)

{
  CStrList *pCVar1;
  
  core_script_cpp_CScript_FUN_004fe500(this_ptr);
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_00473b80(&this_ptr->script_text,0);
  return (CScript *)(pCVar1 + -3);
}
