// Name: core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0
// Address: 005a47b0
// Address Range: [[005a47b0, 005a4869]]
// Convention: unknown
// Signature: CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBasicNPC * core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0(CBasicNPC *this_ptr)

{
  uint uVar1;
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = (CBasicNPC *)unkafter_basicene_cpp_FUN_0059e3b0(this_ptr);
  *(CBasicEnemy_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CBasicNPCVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5f03f4);
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 1;
  uVar1 = _DAT_005ff71c;
  *(uint *)&this_ptr_00->field_0x11394 = 0;
  *(uint *)&this_ptr_00->field_0x11344 = 2;
  *(uint *)&this_ptr_00->field_0x11370 = uVar1;
  core_basicnpc_cpp_CBasicNPC_processStates_FUN_005a4880(this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d990(&this_ptr_00->field_0x10af8);
  unkaddr_0059d350_cpp_FUN_0059dc80();
  return this_ptr_00;
}
