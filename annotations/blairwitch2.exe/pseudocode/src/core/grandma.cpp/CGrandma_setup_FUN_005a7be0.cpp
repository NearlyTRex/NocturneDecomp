// Name: core_grandma.cpp_CGrandma_setup_FUN_005a7be0
// Address: 005a7be0
// Address Range: [[005a7be0, 005a7c11]]
// Convention: __cdecl
// Signature: void __cdecl core_grandma_cpp_CGrandma_setup_FUN_005a7be0(CGrandma *this_ptr)

#include "nocturne.h"

void __cdecl core_grandma_cpp_CGrandma_setup_FUN_005a7be0(CGrandma *this_ptr)

{
  int iVar1;
  
  core_basicnpc_cpp_CBasicNPC_setup_FUN_005a4870((CBasicNPC *)this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0x11850 = iVar1;
  *(int *)&this_ptr->field_0x2618 = iVar1;
  return;
}
