// Name: core_frankgen.cpp_FUN_004d2770
// Address: 004d2770
// Address Range: [[004d2770, 004d2870]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d2770()

#include "nocturne.h"

/* Signature: byte actors_other_frankgen.cpp_FUN_004d2770(uint param_1) */

uint core_frankgen_cpp_FUN_004d2770(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CStrList_vtable *in_stack_fffffc7c;
  CStrList_vtable *in_stack_fffffc80;
  CStrList_vtable *in_stack_fffffc84;
  CStrList_vtable *in_stack_fffffc88;
  uint in_stack_fffffc8c;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"Bed");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc5c,"Crane1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc60,"Crane2");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc64,"Crane3");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc68,"Stitcher");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc6c,"Arm");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc70,"Flap1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc74,"Flap2");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc78,"Create which part?",-1,0);
  *(int *)(in_stack_00000004 + 0x158) = iVar1;
  if (-1 < iVar1) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc7c,0,(uint)in_stack_fffffc7c,(uint)in_stack_fffffc80,
               (uint)in_stack_fffffc84,(uint)in_stack_fffffc88,in_stack_fffffc8c);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc7c,0,(uint)in_stack_fffffc7c,(uint)in_stack_fffffc80,
             (uint)in_stack_fffffc84,(uint)in_stack_fffffc88,in_stack_fffffc8c);
  return 0;
}
