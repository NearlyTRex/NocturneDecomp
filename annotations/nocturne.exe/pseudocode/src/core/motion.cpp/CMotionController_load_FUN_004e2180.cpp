// Name: core_motion.cpp_CMotionController_load_FUN_004e2180
// Address: 004e2180
// Address Range: [[004e2180, 004e2213]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_004e2180(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_motion_cpp_CMotionController_load_FUN_004e2180(CMotionController *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle," ");
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->current_motion_index = -1;
  iVar1 = _fscanf(file_handle,"%d,%f");
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(file_handle,"\"%[^\"]\" , %f"), iVar1 != 2)) {
    g_CHAR_PTR_01cc4800 = "..\\core\\motion.cpp";
    g_INT_01cc4804 = 0x51e;
    core_main_c_FUN_004c8440("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
