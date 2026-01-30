// Name: core_msnedit.cpp_CDemonMission_FUN_00539060
// Address: 00539060
// Address Range: [[00539060, 005390c4]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_00539060(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_00539060(CDemonMission *this_ptr,int param_2)

{
  int iVar1;
  
  if (param_2 != *(int *)(this_ptr->unk2 + 0x18)) {
    this_ptr->unk2[8] = '\0';
    this_ptr->unk2[9] = '\0';
    this_ptr->unk2[10] = '\0';
    this_ptr->unk2[0xb] = '\0';
    *(int *)(this_ptr->unk2 + 0x18) = param_2;
    iVar1 = *(int *)(this_ptr->unk2 + 0x18);
    this_ptr->unk2[0xc] = '\0';
    this_ptr->unk2[0xd] = '\0';
    this_ptr->unk2[0xe] = '\0';
    this_ptr->unk2[0xf] = '\0';
    if (iVar1 == 0) {
      *(int *)(this_ptr->unk2 + 0x10) = g_WindowWidth;
      *(int *)(this_ptr->unk2 + 0x14) = g_WindowHeight;
    }
    else {
      this_ptr->unk2[0x14] = -0x10;
      this_ptr->unk2[0x15] = '\0';
      this_ptr->unk2[0x16] = '\0';
      this_ptr->unk2[0x17] = '\0';
      this_ptr->unk2[0x10] = '@';
      this_ptr->unk2[0x11] = '\x01';
      this_ptr->unk2[0x12] = '\0';
      this_ptr->unk2[0x13] = '\0';
    }
    core_set_cpp_CDemonSet_FUN_0056b7e0(g_CDemonSetPtr,0,0,*(int *)(this_ptr->unk2 + 0x14));
  }
  return;
}
