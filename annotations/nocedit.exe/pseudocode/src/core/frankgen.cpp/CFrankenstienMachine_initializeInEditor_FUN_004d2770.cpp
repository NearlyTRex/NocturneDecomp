// Name: core_frankgen.cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770
// Address: 004d2770
// Address Range: [[004d2770, 004d2870]]
// Convention: __cdecl
// Signature: int __cdecl core_frankgen_cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770 (CFrankenstienMachine *this_ptr)

#include "nocturne.h"

int __cdecl
core_frankgen_cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770
          (CFrankenstienMachine *this_ptr)

{
  int iVar1;
  CPickList local_3ac;
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3ac);
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Bed");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Crane1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Crane2");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Crane3");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Stitcher");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Arm");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Flap1");
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3ac.base,"Flap2");
  iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_3ac,"Create which part?",-1,0);
  this_ptr->which_part = iVar1;
  if (-1 < iVar1) {
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
    return 1;
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3ac,0);
  return 0;
}
