// Name: core_motion.cpp_CMotionController_load_FUN_00525380
// Address: 00525380
// Address Range: [[00525380, 00525413]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_CMotionController_load_FUN_00525380(CMotionController *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_CMotionController_load_FUN_00525380(CMotionController *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,&DAT_005eaf8b);
  this_ptr->field_0x30 = 0;
  *(uint *)&this_ptr->field_0x4 = 0xffffffff;
  iVar1 = _fscanf(file_handle,"%d,%f",&this_ptr->field_0x4,&this_ptr->field_0x8);
  if ((iVar1 != 2) &&
     (iVar1 = _fscanf(file_handle,"\"%[^\"]\" , %f",&this_ptr->field_0x30,&this_ptr->field_0x8),
     iVar1 != 2)) {
    _DAT_01d1d400 = "..\\core\\motion.cpp";
    _DAT_01d1d404 = 0x57e;
    core_main_c_FUN_005030e0("CMotionController::load - error parsing file");
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
