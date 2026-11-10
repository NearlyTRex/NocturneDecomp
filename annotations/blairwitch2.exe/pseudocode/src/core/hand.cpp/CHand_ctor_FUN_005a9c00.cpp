// Name: core_hand.cpp_CHand_ctor_FUN_005a9c00
// Address: 005a9c00
// Address Range: [[005a9c00, 005a9d2e]]
// Convention: unknown
// Signature: CHand * core_hand_cpp_CHand_ctor_FUN_005a9c00(CHand *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHand * core_hand_cpp_CHand_ctor_FUN_005a9c00(CHand *this_ptr)

{
  CHand *this_ptr_00;
  
  this_ptr_00 = (CHand *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CHand_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CHandVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5f09e9);
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f000000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x3fd9999a;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x113c4 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x2a8 = 0x3dcccccd;
  *(uint *)&this_ptr_00->field_0x11380 = 2;
  *(uint *)&this_ptr_00->field_0x11384 = 2;
  *(uint *)&this_ptr_00->field_0x11388 = 2;
  *(uint *)&this_ptr_00->field_0x1138c = 2;
  *(uint *)&this_ptr_00->field_0x11390 = 2;
  *(uint *)&this_ptr_00->field_0x11858 = 0;
  *(uint *)&this_ptr_00->field_0x1185c = 0;
  *(uint *)&this_ptr_00->field_0x11860 = 0x40a00000;
  *(uint *)&this_ptr_00->field_0x11864 = 0;
  *(uint *)&this_ptr_00->field_0x11854 = 0;
  core_hand_cpp_CHand_processStates_FUN_005a9e10(this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d6f0(&this_ptr_00->field_0x10af8,"SleepComplete");
  unkaddr_0059d350_cpp_FUN_0059d990(&this_ptr_00->field_0x10af8);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  *(uint *)&this_ptr_00->field_0x1137c = 0xffffffff;
  *(uint *)&this_ptr_00->field_0x113fc = 0xffffffff;
  *(uint *)&this_ptr_00->field_0x256c = 0;
  *(uint *)&this_ptr_00->field_0x11868 = 0x40a00000;
  return this_ptr_00;
}
