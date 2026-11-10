// Name: core_robin.cpp_CRobin_ctor_FUN_005a5e70
// Address: 005a5e70
// Address Range: [[005a5e70, 005a5f4e]]
// Convention: unknown
// Signature: CRobin * core_robin_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CRobin * core_robin_cpp_CRobin_ctor_FUN_005a5e70(CRobin *this_ptr)

{
  CRobin *this_ptr_00;
  
  this_ptr_00 = (CRobin *)core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(CRobin_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CRobinVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5f062d);
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f000000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x3f99999a;
  *(uint *)&this_ptr_00->field_0xfc = 1;
  *(uint *)&this_ptr_00->field_0x113c4 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x2a8 = 0x3dcccccd;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 2;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  core_robin_cpp_CRobin_processStates_FUN_005a60d0(this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d7f0(&this_ptr_00->field_0x10af8);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  *(uint *)&this_ptr_00->field_0x2ac = 0;
  return this_ptr_00;
}
