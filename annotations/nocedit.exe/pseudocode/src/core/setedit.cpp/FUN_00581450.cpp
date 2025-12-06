// Name: core_setedit.cpp_FUN_00581450
// Address: 00581450
// Address Range: [[00581450, 0058151a]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00581450()

#include "nocturne.h"

uint core_setedit_cpp_FUN_00581450(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int *in_stack_00000008;
  char *in_stack_0000001c;
  CStrList_vtable *in_stack_fffffc70;
  CStrList_vtable *in_stack_fffffc74;
  CStrList_vtable *in_stack_fffffc78;
  CStrList_vtable *in_stack_fffffc7c;
  uint in_stack_fffffc80;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc54);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"Outside");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc5c,"Small");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffc60,"Medium (e.g. Mausoleum)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffc64,"Large (e.g. Warehouse)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc68,"Humongous");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffc6c,in_stack_0000001c,*in_stack_00000008,0);
  if (-1 < iVar1) {
    *in_stack_00000008 = iVar1;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc70,0,(uint)in_stack_fffffc70,(uint)in_stack_fffffc74,
               (uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,in_stack_fffffc80);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc70,0,(uint)in_stack_fffffc70,(uint)in_stack_fffffc74,
             (uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,in_stack_fffffc80);
  return 0;
}
