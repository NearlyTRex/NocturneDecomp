// Name: core_motion.cpp_FUN_00504250
// Address: 00504250
// Address Range: [[00504250, 005042d6]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00504250(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_00504250(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  uint uVar1;
  
  if (this_ptr->field_0x30 == '\0') {
    if (*(int *)this_ptr == 0) {
      _DAT_01d046a0 = "..\\core\\motion.cpp";
      _DAT_01d046a4 = 0x581;
      core_main_c_FUN_004e4500();
    }
    uVar1 = core_motion_cpp_FUN_005035c0(this_ptr,(double)*(float *)&this_ptr->field_0x8);
    FUN_005b8010(file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,uVar1);
    return;
  }
  FUN_005b8010
            (file_handle,"%s\"%s\",%g // current motion name, curFrameNumber\n",indent_prefix,&this_ptr->field_0x30,
             (double)*(float *)&this_ptr->field_0x8);
  return;
}
