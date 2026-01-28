// Name: core_frankgen.cpp_FUN_004d2770
// Address: 004d2770
// Address Range: [[004d2770, 004d2870]]
// Convention: unknown
// Signature: undefined4 core_frankgen_cpp_FUN_004d2770(void)

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d2770(uint param_1) */

uint core_frankgen_cpp_FUN_004d2770(void)

{
  int iVar1;
  int in_stack_00000004;
  uint in_stack_fffffc54;
  uint in_stack_fffffc58;
  char **in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  uint in_stack_fffffc64;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Bed");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Crane1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Crane2");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Crane3");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Stitcher");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Arm");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Flap1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Flap2");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc54,"Create which part?",-1,0);
  *(int *)(in_stack_00000004 + 0x158) = iVar1;
  if (-1 < iVar1) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc54,0,in_stack_fffffc54,in_stack_fffffc58,
               (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc54,0,in_stack_fffffc54,in_stack_fffffc58,
             (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
  return 0;
}
