// Name: core_msnedit.cpp_CDemonMission_editActorProperties_FUN_00539060
// Address: 00539060
// Address Range: [[00539060, 005390c4]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(CDemonMission *this_ptr,int param_2)

{
  int iVar1;
  
  if (param_2 != this_ptr->show_3d_viewport) {
    (this_ptr->viewport).left = 0;
    this_ptr->show_3d_viewport = param_2;
    iVar1 = this_ptr->show_3d_viewport;
    (this_ptr->viewport).top = 0;
    if (iVar1 == 0) {
      (this_ptr->viewport).right = g_WindowWidth;
      (this_ptr->viewport).bottom = g_WindowHeight;
    }
    else {
      (this_ptr->viewport).bottom = 0xf0;
      (this_ptr->viewport).right = 0x140;
    }
    core_set_cpp_CDemonSet_reinitCamera_FUN_0056b7e0(g_CDemonSetPtr,0,0,(this_ptr->viewport).bottom)
    ;
  }
  return;
}
