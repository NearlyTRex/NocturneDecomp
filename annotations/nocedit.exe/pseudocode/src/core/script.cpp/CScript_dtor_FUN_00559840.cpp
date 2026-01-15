// Name: core_script.cpp_CScript_dtor_FUN_00559840
// Address: 00559840
// Address Range: [[00559840, 00559860]]
// Convention: __cdecl
// Signature: CScript * core_script.cpp_CScript_dtor_FUN_00559840(CScript * this_ptr)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_dtor_FUN_00559840(CScript *this_ptr)

{
  CStrList *pCVar1;
  uint unaff_EBX;
  
  core_script_cpp_CScript_FreeSomething1_FUN_00559870();
  pCVar1 = shape_edittool_cpp_CStrList_dtor_FUN_004a2a40
                     ((CStrList *)(this_ptr->padding_0x18 + 0x20),0,unaff_EBX);
  return (CScript *)&pCVar1[-4].data_array;
}
