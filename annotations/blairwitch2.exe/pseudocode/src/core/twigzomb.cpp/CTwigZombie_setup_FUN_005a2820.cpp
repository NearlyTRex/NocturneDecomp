// Name: core_twigzomb.cpp_CTwigZombie_setup_FUN_005a2820
// Address: 005a2820
// Address Range: [[005a2820, 005a2895]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_setup_FUN_005a2820(CTwigZombie *this_ptr)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_setup_FUN_005a2820(CTwigZombie *this_ptr)

{
  SBone *pSVar1;
  SBone SVar2;
  SBone SVar3;
  SBone SVar4;
  CSkeleton *this_ptr_00;
  int iVar5;
  
  unkafter_basicene_cpp_FUN_0059e6a0(this_ptr);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                          ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
  iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80
                    (this_ptr_00,"Bip01 L Finger0",1);
  *(int *)&this_ptr->field_0x11854 = iVar5;
  pSVar1 = this_ptr_00->bone_list + iVar5 * 0x24 + 0x20;
  SVar2 = pSVar1[1];
  SVar3 = pSVar1[2];
  SVar4 = pSVar1[3];
  this_ptr->field_0x11850 = pSVar1[0];
  this_ptr->field_0x11851 = SVar2;
  this_ptr->field_0x11852 = SVar3;
  this_ptr->field_0x11853 = SVar4;
  iVar5 = _strcmp(&this_ptr->field_0x2514,"SM_TWIG.DFM");
  if (iVar5 != 0) {
    return;
  }
  *(uint *)&this_ptr->field_0x11388 = 6;
  return;
}
