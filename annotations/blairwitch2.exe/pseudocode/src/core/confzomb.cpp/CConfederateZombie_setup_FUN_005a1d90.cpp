// Name: core_confzomb.cpp_CConfederateZombie_setup_FUN_005a1d90
// Address: 005a1d90
// Address Range: [[005a1d90, 005a1e02]]
// Convention: __cdecl
// Signature: void __cdecl core_confzomb_cpp_CConfederateZombie_setup_FUN_005a1d90(CConfederateZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_confzomb_cpp_CConfederateZombie_setup_FUN_005a1d90(CConfederateZombie *this_ptr)

{
  byte *puVar1;
  int iVar2;
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 L Finger1",1);
  *(int *)&this_ptr->field_0x11850 = iVar2;
  iVar2 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (*(CSkeleton **)&this_ptr->field_0x113b0,"Bip01 R Finger1",1);
  puVar1 = &this_ptr->field_0x264;
  *(int *)&this_ptr->field_0x11854 = iVar2;
  unkaddr_005a7eb0_cpp_FUN_005a8030(puVar1,0x100);
  unkaddr_005a7eb0_cpp_FUN_005a8050(puVar1,this_ptr);
  unkaddr_005a7eb0_cpp_FUN_005a80d0(puVar1,0);
  return;
}
