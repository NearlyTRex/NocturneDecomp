// Name: core_script.cpp_CScript_ctor_FUN_005436d0
// Address: 005436d0
// Address Range: [[005436d0, 00543706]]
// Convention: __cdecl
// Signature: CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005436d0(CScript *this_ptr)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005436d0(CScript *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_00499380(&this_ptr->script_text);
  pCVar1[-1].data_array = (char **)0x0;
  pCVar1[-1].vtable._us = (CStrList_vtable *)0x0;
  pCVar1[-2].vtable._us = (CStrList_vtable *)0x0;
  pCVar1[-1].item_count = 0;
  pCVar1[-1].capacity = 0;
  return (CScript *)&pCVar1[-4].vtable;
}
