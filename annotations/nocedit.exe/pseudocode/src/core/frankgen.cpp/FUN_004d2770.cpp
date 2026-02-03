// Name: core_frankgen.cpp_FUN_004d2770
// Address: 004d2770
// Address Range: [[004d2770, 004d2870]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_FUN_004d2770(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d2770(uint param_1) */

int __cdecl core_frankgen_cpp_FUN_004d2770(void)

{
  int iVar1;
  int in_stack_00000004;
  CPickList local_3ac;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3ac);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Bed");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Crane1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Crane2");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Crane3");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Stitcher");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Arm");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Flap1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Flap2");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3ac,"Create which part?",-1,0);
  *(int *)(in_stack_00000004 + 0x158) = iVar1;
  if (-1 < iVar1) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
  return 0;
}
