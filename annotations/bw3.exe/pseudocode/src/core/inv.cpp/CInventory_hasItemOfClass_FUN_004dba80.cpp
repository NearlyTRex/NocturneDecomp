// Name: core_inv.cpp_CInventory_hasItemOfClass_FUN_004dba80
// Address: 004dba80
// Address Range: [[004dba80, 004dba9c]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004dba80(CInventory *this_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004dba80(CInventory *this_ptr,char *class_name)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_inv_cpp_CInventory_findItemOfClass_FUN_004db9e0(this_ptr,class_name);
  return (uint)(pCVar1 != (CDemonActor *)0x0);
}
