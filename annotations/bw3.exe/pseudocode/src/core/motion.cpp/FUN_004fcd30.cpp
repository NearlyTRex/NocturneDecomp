// Name: core_motion.cpp_FUN_004fcd30
// Address: 004fcd30
// Address Range: [[004fcd30, 004fcdb6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_004fcd30(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_004fcd30(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  SMotion *pSVar1;
  double dVar2;
  
  if (this_ptr->field_0x30 == '\0') {
    if (*(int *)this_ptr == 0) {
      _DAT_01d71de0 = "..\\core\\motion.cpp";
      _DAT_01d71de4 = 0x59b;
      core_main_c_FUN_004e4330();
    }
    dVar2 = (double)*(float *)&this_ptr->field_0x8;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    FUN_005a3140
              (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,pSVar1,dVar2);
    return;
  }
  FUN_005a3140
            (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,&this_ptr->field_0x30,
             (double)*(float *)&this_ptr->field_0x8);
  return;
}
