// Name: core_motion.cpp_CMotionController_save_FUN_00525420
// Address: 00525420
// Address Range: [[00525420, 005254a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_save_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  SMotion *pSVar1;
  double dVar2;
  
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      _DAT_01d1d400 = "..\\core\\motion.cpp";
      _DAT_01d1d404 = 0x596;
      core_main_c_FUN_005030e0();
    }
    dVar2 = (double)this_ptr->current_frame_number;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    FUN_005c03c0
              (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,pSVar1,dVar2);
    return;
  }
  FUN_005c03c0
            (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,
             this_ptr->current_motion_name,(double)this_ptr->current_frame_number);
  return;
}
