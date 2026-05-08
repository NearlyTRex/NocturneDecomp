// Name: core_msnedit.cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970
// Address: 0053c970
// MANUAL RECONSTRUCTION
// Address Range: [[0053c970, 0053c9f9]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970(CDemonMission *this_ptr,CDemonActor *actor,int screen_x,int screen_y)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_moveActorToScreenPos_FUN_0053c970(CDemonMission *this_ptr,CDemonActor *actor,int screen_x,int screen_y)

{
  CVector3f *pCVar1;
  CVector3f local_14;
  
  if ((((actor != (CDemonActor *)0x0) && (INT_02f7c53c != 3)) && (INT_02f7c53c != 4)) &&
     ((((this_ptr->viewport).left < screen_x && (screen_x < (this_ptr->viewport).right)) &&
      (((this_ptr->viewport).top < screen_y && (screen_y < (this_ptr->viewport).bottom)))))) {
    core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430(&g_CDemonCameraInstance,1);
    pCVar1 = core_msnedit_cpp_screenToWorldPosition_FUN_00535c60(&local_14,screen_x,screen_y);
    (actor->location).position = *pCVar1;
    core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80(&g_CDemonCameraInstance,0);
    return;
  }
  return;
}
