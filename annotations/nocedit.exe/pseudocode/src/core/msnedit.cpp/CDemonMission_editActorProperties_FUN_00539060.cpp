// Name: core_msnedit.cpp_CDemonMission_editActorProperties_FUN_00539060
// Address: 00539060
// Address Range: [[00539060, 005390c4]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_editActorProperties_FUN_00539060(CDemonMission *this_ptr,int param_2)

{
  if (param_2 != this_ptr->show_3d_viewport) {
    this_ptr->unk1 = 0;
    this_ptr->show_3d_viewport = param_2;
    this_ptr->unk2 = 0;
    if (this_ptr->show_3d_viewport == 0) {
      this_ptr->unk3 = g_WindowWidth;
      this_ptr->unk4 = g_WindowHeight;
    }
    else {
      this_ptr->unk4 = 0xf0;
      this_ptr->unk3 = 0x140;
    }
    core_set_cpp_CDemonSet_FUN_0056b7e0(g_CDemonSetPtr,0,0,this_ptr->unk4);
  }
  return;
}
