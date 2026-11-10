// Name: core_robin.cpp_CRobin_setup_FUN_005a6030
// Address: 005a6030
// Address Range: [[005a6030, 005a60c1]]
// Convention: __cdecl
// Signature: void __cdecl core_robin_cpp_CRobin_setup_FUN_005a6030(CRobin *this_ptr)

#include "nocturne.h"

void __cdecl core_robin_cpp_CRobin_setup_FUN_005a6030(CRobin *this_ptr)

{
  int iVar1;
  
  core_basicnpc_cpp_CBasicNPC_setup_FUN_005a4870((CBasicNPC *)this_ptr);
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 Head",1);
  *(int *)&this_ptr->field_0x11850 = iVar1;
  *(int *)&this_ptr->field_0x10a24 = iVar1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0x11854 = iVar1;
  *(int *)&this_ptr->field_0x2618 = iVar1;
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x154,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x154,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a8030(&this_ptr->field_0x198,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(&this_ptr->field_0x198,this_ptr);
  return;
}
