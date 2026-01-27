// Name: core_script.cpp_CScript_ctor_FUN_005597f0
// Address: 005597f0
// Address Range: [[005597f0, 00559834]]
// Convention: __cdecl
// Signature: CScript * core_script.cpp_CScript_ctor_FUN_005597f0(CScript * this_ptr)

#include "nocturne.h"

CScript * __cdecl core_script_cpp_CScript_ctor_FUN_005597f0(CScript *this_ptr)

{
  CStrList *pCVar1;
  
  pCVar1 = shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)(this_ptr->unk4 + 0x20));
  pCVar1[-1].data_array = (char **)0x0;
  pCVar1[-1].vtable = (CStrList_vtable *)0x0;
  pCVar1[-2].capacity = 0;
  pCVar1[-2].data_array = (char **)0x0;
  pCVar1[-2].vtable = (CStrList_vtable *)0x0;
  pCVar1[-1].item_count = 0;
  pCVar1[-1].capacity = 0;
  return (CScript *)&pCVar1[-4].data_array;
}
