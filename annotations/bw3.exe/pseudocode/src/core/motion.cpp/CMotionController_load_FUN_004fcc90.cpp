// Name: core_motion.cpp_CMotionController_load_FUN_004fcc90
// Address: 004fcc90
// Address Range: [[004fcc90, 004fcd23]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_004fcc90(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_load_FUN_004fcc90(CMotionController *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,&DAT_005c9d9c);
  this_ptr->field_0x30 = 0;
  *(uint *)&this_ptr->field_0x4 = 0xffffffff;
  iVar1 = _fscanf(file_handle,"%d,%f",&this_ptr->field_0x4,&this_ptr->field_0x8);
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(file_handle,"\"%[^\"]\" , %f",&this_ptr->field_0x30,&this_ptr->field_0x8),
     iVar1 != 2)) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x583;
    core_main_c_FUN_004e4330("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
