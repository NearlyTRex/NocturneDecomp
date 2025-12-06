// Name: core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
// Address: 005711b0
// Address Range: [[005711b0, 0057122a]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// Set state version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// Camera count, enabled list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",this_ptr->camera_count);
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000008,"%d\n",pCVar2->cameras[0].field17_0x1a0);
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
