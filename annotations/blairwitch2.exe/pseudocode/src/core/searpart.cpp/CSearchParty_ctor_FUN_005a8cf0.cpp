// Name: core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0
// Address: 005a8cf0
// Address Range: [[005a8cf0, 005a8d9d]]
// Convention: unknown
// Signature: CSearchParty * core_searpart_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSearchParty * core_searpart_cpp_CSearchParty_ctor_FUN_005a8cf0(CSearchParty *this_ptr)

{
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(CBasicEnemy_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CSearchPartyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5f0844);
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x3fc00000;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 1;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  *(uint *)&this_ptr_00->field_0x11394 = 0;
  core_searpart_cpp_CSearchParty_processStates_FUN_005a8db0((CSearchParty *)this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  return (CSearchParty *)this_ptr_00;
}
