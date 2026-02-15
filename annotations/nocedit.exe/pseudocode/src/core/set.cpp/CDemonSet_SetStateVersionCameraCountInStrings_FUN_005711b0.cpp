// Name: core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
// Address: 005711b0
// Address Range: [[005711b0, 0057122a]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  _FILE *in_stack_00000008;
  
  _fprintf(in_stack_00000008,"// Set state version\n");
  _fprintf(in_stack_00000008,"1\n");
  _fprintf(in_stack_00000008,"// Camera count, enabled list\n");
  iVar1 = 0;
  _fprintf(in_stack_00000008,"%d\n",this_ptr->camera_count);
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      _fprintf(in_stack_00000008,"%d\n",pCVar2->cameras[0].enabled);
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].enabled;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}
