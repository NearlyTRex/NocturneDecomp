// Name: core_ghostchi.cpp_CGhostChild_setup_FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a94be]]
// Convention: __cdecl
// Signature: void __cdecl core_ghostchi_cpp_CGhostChild_setup_FUN_005a9440(CGhostChild *this_ptr)

#include "nocturne.h"

void __cdecl core_ghostchi_cpp_CGhostChild_setup_FUN_005a9440(CGhostChild *this_ptr)

{
  byte *puVar1;
  int iVar2;
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 Head",1);
  *(int *)&this_ptr->field_0x11850 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 R Hand",1);
  *(int *)&this_ptr->field_0x11854 = iVar2;
  puVar1 = &this_ptr->field_0x264;
  *(uint *)&this_ptr->field_0x10a24 = *(uint *)&this_ptr->field_0x11850;
  unkaddr_005a7eb0_cpp_FUN_005a8030(puVar1,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(puVar1,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a80d0(puVar1,0);
  return;
}
