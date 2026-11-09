// Name: core_motion.cpp_FUN_00525420
// Address: 00525420
// Address Range: [[00525420, 005254a6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_00525420(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  SMotion *pSVar1;
  double dVar2;
  
  if (this_ptr->field_0x30 == '\0') {
    if (*(int *)this_ptr == 0) {
      _DAT_01d1d400 = "..\\core\\motion.cpp";
      _DAT_01d1d404 = 0x596;
      core_main_c_FUN_005030e0();
    }
    dVar2 = (double)*(float *)&this_ptr->field_0x8;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    FUN_005c03c0
              (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,pSVar1,dVar2);
    return;
  }
  FUN_005c03c0
            (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,&this_ptr->field_0x30,
             (double)*(float *)&this_ptr->field_0x8);
  return;
}
