// Name: core_steuben.cpp_CSteuben_ctor_FUN_005a5b40
// Address: 005a5b40
// Address Range: [[005a5b40, 005a5c01]]
// Convention: unknown
// Signature: CSteuben * core_steuben_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSteuben * core_steuben_cpp_CSteuben_ctor_FUN_005a5b40(CSteuben *this_ptr)

{
  CBasicNPC *this_ptr_00;
  
  this_ptr_00 = core_basicnpc_cpp_CBasicNPC_ctor_FUN_005a47b0((CBasicNPC *)this_ptr);
  *(CBasicEnemy_full_vtable **)&this_ptr_00->field_0x2b0 = &g_CSteubenVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&this_ptr_00->field_0x2b4,(char *)0x5f05eb);
  *(uint *)&this_ptr_00->field_0x3434 = 0x3f800000;
  *(uint *)&this_ptr_00->field_0x1134c = 0x3fc00000;
  *(uint *)&this_ptr_00->field_0x11380 = 0;
  *(uint *)&this_ptr_00->field_0x11384 = 0;
  *(uint *)&this_ptr_00->field_0x11388 = 1;
  *(uint *)&this_ptr_00->field_0x1138c = 1;
  *(uint *)&this_ptr_00->field_0x11390 = 0;
  *(uint *)&this_ptr_00->field_0x11394 = 0;
  core_cloth_cpp_CClothList_add_FUN_005b15c0
            ((CClothList *)&this_ptr_00->field_0x2d0c,"steubencloth.cth");
  core_steuben_cpp_CSteuben_processStates_FUN_005a5c20((CSteuben *)this_ptr_00,0.0,0);
  unkaddr_0059d350_cpp_FUN_0059d990();
  unkaddr_0059d350_cpp_FUN_0059dc80();
  return (CSteuben *)this_ptr_00;
}
