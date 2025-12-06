// Name: core_boxactor.cpp_FUN_00423110
// Address: 00423110
// Address Range: [[00423110, 0042314a] [00423150, 00423168] [0042316e, 00423186] [0042318c, 0042320f] [0042322e, 00423237] [00423256, 0042325f] [0042327e, 004232f5]]
// Convention: unknown
// Signature: undefined core_boxactor.cpp_FUN_00423110()

#include "nocturne.h"

uint core_boxactor_cpp_FUN_00423110(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  uint in_stack_0000000c;
  char *in_stack_00000018;
  CStrList_vtable *in_stack_fffffc68;
  CStrList_vtable *in_stack_fffffc6c;
  CStrList_vtable *in_stack_fffffc70;
  CStrList_vtable *in_stack_fffffc74;
  uint in_stack_fffffc78;
  
  iVar1 = -1;
  switch(in_stack_0000000c) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar1 = 3;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc50);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Flashlight");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"Lantern");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc5c,"Globe");
  if (in_stack_00000018 != (char *)0x0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc60,"Custom");
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc64,in_stack_00000018,iVar1,0);
  switch(iVar1) {
  case 0:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 1;
  case 1:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 2;
  case 2:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 3;
  case 3:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 0;
  default:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc68,0,(uint)in_stack_fffffc68,(uint)in_stack_fffffc6c,
               (uint)in_stack_fffffc70,(uint)in_stack_fffffc74,in_stack_fffffc78);
    return 0xffffffff;
  }
}
