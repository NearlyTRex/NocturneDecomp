// Name: core_script.cpp_CScript_dtor_FUN_00559840
// Address: 00559840
// Address Range: [[00559840, 00559860]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00559840(CScript *this_ptr,uint flags)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00559840(CScript *this_ptr,uint flags)

{
  CStrList *pCVar1;
  
  core_script_cpp_CScript_FUN_00559870(this_ptr);
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&this_ptr->script_text,0);
  return (CScript *)&pCVar1[-4].data_array;
}
