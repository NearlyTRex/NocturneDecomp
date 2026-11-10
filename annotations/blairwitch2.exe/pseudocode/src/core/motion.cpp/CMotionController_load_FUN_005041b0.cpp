// Name: core_motion.cpp_CMotionController_load_FUN_005041b0
// Address: 005041b0
// Address Range: [[005041b0, 00504243]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_005041b0(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_load_FUN_005041b0(CMotionController *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,&DAT_005dfd30);
  this_ptr->current_motion_name[0] = '\0';
  this_ptr->current_motion_index = -1;
  iVar1 = _fscanf(file_handle,"%d,%f",&this_ptr->current_motion_index,
                     &this_ptr->current_frame_number);
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(file_handle,"\"%[^\"]\" , %f",this_ptr->current_motion_name,
                         &this_ptr->current_frame_number), iVar1 != 2)) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x569;
    core_main_c_FUN_004e4500("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
