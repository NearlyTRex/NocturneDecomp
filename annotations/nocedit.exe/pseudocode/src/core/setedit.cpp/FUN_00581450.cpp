// Name: core_setedit.cpp_FUN_00581450
// Address: 00581450
// Address Range: [[00581450, 0058151a]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_FUN_00581450(void)

#include "nocturne.h"

int __cdecl core_setedit_cpp_FUN_00581450(void)

{
  int iVar1;
  char *in_stack_00000004;
  int *in_stack_00000008;
  CPickList local_3ac;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3ac);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Outside");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Small");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Medium (e.g. Mausoleum)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Large (e.g. Warehouse)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Humongous");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3ac,in_stack_00000004,*in_stack_00000008,0);
  if (-1 < iVar1) {
    *in_stack_00000008 = iVar1;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
  return 0;
}
