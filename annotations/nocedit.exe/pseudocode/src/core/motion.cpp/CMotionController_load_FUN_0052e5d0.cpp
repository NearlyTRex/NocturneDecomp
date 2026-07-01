// Name: core_motion.cpp_CMotionController_load_FUN_0052e5d0
// Address: 0052e5d0
// Address Range: [[0052e5d0, 0052e663]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_0052e5d0(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_load_FUN_0052e5d0(CMotionController *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle," ");
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->current_motion_index = -1;
  iVar1 = _fscanf(file_handle,"%d,%f",&this_ptr->current_motion_index,
                     &this_ptr->current_frame_number);
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(file_handle,"\"%[^\"]\" , %f",this_ptr->current_motion_name,
                         &this_ptr->current_frame_number), iVar1 != 2)) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 1310;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
