// Name: core_setedit.cpp_pickRoomSize_FUN_00581450
// Address: 00581450
// Address Range: [[00581450, 0058151a]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_pickRoomSize_FUN_00581450(char *title,int *room_size)

#include "nocturne.h"

int __cdecl core_setedit_cpp_pickRoomSize_FUN_00581450(char *title,int *room_size)

{
  int iVar1;
  CPickList local_3ac;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3ac);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Outside");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Small");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Medium (e.g. Mausoleum)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Large (e.g. Warehouse)");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Humongous");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3ac,title,*room_size,0);
  if (-1 < iVar1) {
    *room_size = iVar1;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
  return 0;
}
