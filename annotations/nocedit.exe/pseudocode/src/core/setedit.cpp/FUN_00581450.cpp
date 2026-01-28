// Name: core_setedit.cpp_FUN_00581450
// Address: 00581450
// Address Range: [[00581450, 0058151a]]
// Convention: unknown
// Signature: undefined4 core_setedit_cpp_FUN_00581450(void)

#include "nocturne.h"

uint core_setedit_cpp_FUN_00581450(void)

{
  int iVar1;
  char *in_stack_00000004;
  int *in_stack_00000008;
  uint in_stack_fffffc54;
  uint in_stack_fffffc58;
  char **in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  uint in_stack_fffffc64;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Outside");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Small");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffc54,"Medium (e.g. Mausoleum)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffc54,"Large (e.g. Warehouse)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc54,"Humongous");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc54,in_stack_00000004,*in_stack_00000008,0);
  if (-1 < iVar1) {
    *in_stack_00000008 = iVar1;
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
