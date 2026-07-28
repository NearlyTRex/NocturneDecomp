// Name: core_motion.cpp_CMotionController_save_FUN_004e2220
// Address: 004e2220
// Address Range: [[004e2220, 004e22a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_save_FUN_004e2220(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_save_FUN_004e2220(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  SMotion *pSVar1;
  double dVar2;
  
  if (this_ptr->current_motion_name[0] == '\0') {
    if (this_ptr->motion_list_ptr == (CMotionList *)0x0) {
      PTR_01cc4800 = "..\\core\\motion.cpp";
      INT_01cc4804 = 0x536;
      core_main_c_FUN_004c8440();
    }
    dVar2 = (double)this_ptr->current_frame_number;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(this_ptr);
    _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,pSVar1,dVar2);
    return;
  }
  _fprintf(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,
             this_ptr->current_motion_name,(double)this_ptr->current_frame_number);
  return;
}
