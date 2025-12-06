// Name: engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90
// Address: 004b2f90
// Address Range: [[004b2f90, 004b3118]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_showOverwriteConfirmationDialog_FUN_004b2f90(int * user_choice_ptr, char * dialog_message)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_showOverwriteConfirmationDialog_FUN_004b2f90
          (int *user_choice_ptr,char *dialog_message)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  char *in_stack_0000002c;
  CStrList_vtable *in_stack_fffffc78;
  CStrList_vtable *in_stack_fffffc7c;
  CStrList_vtable *in_stack_fffffc80;
  CStrList_vtable *in_stack_fffffc84;
  uint in_stack_fffffc88;
  
  iVar1 = *(int *)dialog_message;
  if (iVar1 == 1) {
    iVar1 = 1;
  }
  else if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    if (iVar1 != 3) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc4c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc50,"[Y]es");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffffc54,"Yes to [A]ll");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc58,"[N]o");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffffc5c,"N[o] to all");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffc60,"Cancel");
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc64,0,0x15);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc68,1,0x1e);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc6c,2,0x31);
      shape_edittool_cpp_CPickList_setItemHotKey_FUN_004a5540((CPickList *)&stack0xfffffc70,3,0x18);
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffffc74,in_stack_0000002c,*(int *)dialog_message,0);
      *(int *)dialog_message = iVar1;
      if (iVar1 == 0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,
                   (uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
        return 1;
      }
      if (iVar1 != 1) {
        if ((iVar1 != 2) && (iVar1 != 3)) {
          shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                    ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c
                     ,(uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
          return -1;
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,
                   (uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
        return 0;
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc78,0,(uint)in_stack_fffffc78,(uint)in_stack_fffffc7c,
                 (uint)in_stack_fffffc80,(uint)in_stack_fffffc84,in_stack_fffffc88);
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}
