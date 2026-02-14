// Name: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// Address: 004b2f90
// Address Range: [[004b2f90, 004b3118]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90(int *user_choice_ptr,char *dialog_message)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90(int *user_choice_ptr,char *dialog_message)

{
  int iVar1;
  CPickList local_3b4;
  
  iVar1 = *(int *)dialog_message;
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    if (iVar1 != 3) {
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
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_3b4,(char *)user_choice_ptr,*(int *)dialog_message,0);
      *(int *)dialog_message = iVar1;
      if (iVar1 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3b4,0);
        return 1;
      }
      if (iVar1 != 1) {
        if ((iVar1 != 2) && (iVar1 != 3)) {
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
