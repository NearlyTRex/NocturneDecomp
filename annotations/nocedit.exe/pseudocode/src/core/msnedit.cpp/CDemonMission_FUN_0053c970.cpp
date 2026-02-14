// Name: core_msnedit.cpp_CDemonMission_FUN_0053c970
// Address: 0053c970
// Address Range: [[0053c970, 0053c9f9]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c970(CDemonMission *this_ptr,int param_2,int param_3,int param_4)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053c970(CDemonMission *this_ptr,int param_2,int param_3,int param_4)

{
  float *pfVar1;
  float local_14 [3];
  
  if ((((param_2 != 0) && (DAT_02f7c53c != 3)) && (DAT_02f7c53c != 4)) &&
     (((this_ptr->unk1 < param_3 && (param_3 < this_ptr->unk3)) &&
      ((this_ptr->unk2 < param_4 && (param_4 < this_ptr->unk4)))))) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    pfVar1 = core_msnedit_cpp_FUN_00535c60(local_14,param_3,param_4);
    *(float *)(param_2 + 0x20) = *pfVar1;
    *(float *)(param_2 + 0x24) = pfVar1[1];
    *(float *)(param_2 + 0x28) = pfVar1[2];
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    return;
  }
  return;
}
