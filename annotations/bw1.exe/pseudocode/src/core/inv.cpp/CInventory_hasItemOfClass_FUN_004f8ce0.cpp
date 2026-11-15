// Name: core_inv.cpp_CInventory_hasItemOfClass_FUN_004f8ce0
// Address: 004f8ce0
// Address Range: [[004f8ce0, 004f8cfc]]
// Convention: __cdecl
// Signature: int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004f8ce0(CInventory *this_ptr,char *class_name)

#include "nocturne.h"

int __cdecl core_inv_cpp_CInventory_hasItemOfClass_FUN_004f8ce0(CInventory *this_ptr,char *class_name)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_inv_cpp_CInventory_findItemOfClass_FUN_004f8c90(this_ptr,class_name);
  return (uint)(pCVar1 != (CDemonActor *)0x0);
}
