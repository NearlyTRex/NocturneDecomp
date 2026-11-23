// Name: core_motion.cpp_CMotionController_load_FUN_005041b0
// Address: 005041b0
// Address Range: [[005041b0, 00504243]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_005041b0(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_load_FUN_005041b0(CMotionController *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle," ");
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->current_motion_index = -1;
  iVar1 = _fscanf(file_handle,"%d,%f");
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(file_handle,"\"%[^\"]\" , %f"), iVar1 != 2)) {
    g_CurrentFilename = "..\\core\\motion.cpp";
    g_CurrentLineNumber = 1385;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
