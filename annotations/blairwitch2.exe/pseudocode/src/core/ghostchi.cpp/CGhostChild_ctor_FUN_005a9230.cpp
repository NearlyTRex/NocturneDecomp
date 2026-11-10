// Name: core_ghostchi.cpp_CGhostChild_ctor_FUN_005a9230
// Address: 005a9230
// Address Range: [[005a9230, 005a9367]]
// Convention: unknown
// Signature: CGhostChild * core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(CGhostChild *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CGhostChild * core_ghostchi_cpp_CGhostChild_ctor_FUN_005a9230(CGhostChild *this_ptr)

{
  byte *puVar1;
  CGhostChild *this_ptr_00;
  
  this_ptr_00 = (CGhostChild *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CGhostChild_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CGhostChildVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,"SHChild1.dfm");
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f000000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x40200000;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x113c4 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x2a8 = 0x3dcccccd;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 2;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  *(uint *)&this_ptr_00->field_0x1185c = 0;
  *(uint *)&this_ptr_00->field_0x11860 = 0x40a00000;
  *(uint *)&this_ptr_00->field_0x11864 = 0;
  *(uint *)&this_ptr_00->field_0x11858 = 0;
  core_ghostchi_cpp_CGhostChild_processStates_FUN_005a94c0(this_ptr_00,0.0,0);
  puVar1 = &this_ptr_00->field_0x10af8;
  unkaddr_0059d350_cpp_FUN_0059d6f0(puVar1,"SleepComplete");
  unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete");
  unkaddr_0059d350_cpp_FUN_0059d990(puVar1);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  *(uint *)&this_ptr_00->field_0x10a28 = 1;
  *(uint *)&this_ptr_00->field_0x280c = 1;
  *(uint *)&this_ptr_00->field_0x11348 = 1;
  *(uint *)&this_ptr_00->field_0x2ac = 0;
  return this_ptr_00;
}
