// Name: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// Address: 004b2f90
// Address Range: [[004b2f90, 004b3118]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char *dialog_title,int *overwrite_state)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90(char *dialog_title,int *overwrite_state)

{
  int iVar2;
  int iVar1;
  CPickList local_3b4;
  
  iVar2 = *overwrite_state;
  if (iVar2 == 1) {
    iVar1 = 1;
  }
  else if (iVar2 < 0) {
    iVar1 = -1;
  }
  else {
    if (iVar2 != 3) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3b4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,"[Y]es");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,"Yes to [A]ll");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,"[N]o");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,"N[o] to all");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3b4.base,"Cancel");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_3b4,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_3b4,1,0x1e);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_3b4,2,0x31);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540(&local_3b4,3,0x18);
      iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_3b4,dialog_title,*overwrite_state,0);
      *overwrite_state = iVar2;
      if (iVar2 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
        return 1;
      }
      if (iVar2 != 1) {
        if ((iVar2 != 2) && (iVar2 != 3)) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
          return -1;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
        return 0;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}
