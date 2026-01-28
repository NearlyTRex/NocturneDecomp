// Name: core_boxactor.cpp_CLightActor_FUN_00423110
// Address: 00423110
// Address Range: [[00423110, 0042314a] [00423150, 00423168] [0042316e, 00423186] [0042318c, 0042320f] [0042322e, 00423237] [00423256, 0042325f] [0042327e, 004232f5]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_FUN_00423110(CLightActor *this_ptr)

#include "nocturne.h"

int __cdecl core_boxactor_cpp_CLightActor_FUN_00423110(CLightActor *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  uint in_stack_0000000c;
  uint in_stack_fffffc50;
  uint in_stack_fffffc54;
  char **in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  uint in_stack_fffffc60;
  
  iVar1 = -1;
  switch(in_stack_0000000c) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar1 = 3;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc50);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,"Flashlight");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,"Lantern");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,"Globe");
  if (in_stack_00000008 != 0) {
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,"Custom");
  }
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc50,(char *)this_ptr,iVar1,0);
  switch(iVar1) {
  case 0:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc50,0,in_stack_fffffc50,in_stack_fffffc54,
               (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
    return 1;
  case 1:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc50,0,in_stack_fffffc50,in_stack_fffffc54,
               (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
    return 2;
  case 2:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc50,0,in_stack_fffffc50,in_stack_fffffc54,
               (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
    return 3;
  case 3:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc50,0,in_stack_fffffc50,in_stack_fffffc54,
               (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
    return 0;
  default:
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc50,0,in_stack_fffffc50,in_stack_fffffc54,
               (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,in_stack_fffffc60);
    return -1;
  }
}
