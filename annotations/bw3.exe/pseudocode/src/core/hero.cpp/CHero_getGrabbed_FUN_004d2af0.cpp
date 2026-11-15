// Name: core_hero.cpp_CHero_getGrabbed_FUN_004d2af0
// Address: 004d2af0
// Address Range: [[004d2af0, 004d2c18]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004d2af0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004d2af0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CMotionList *pCVar1;
  int iVar2;
  CDeformableModelInstance *this_ptr_00;
  byte bVar3;
  float afStackY_1010 [1014];
  char *pcVar4;
  CVector3f local_28;
  float local_1c;
  float afStack_18 [2];
  
  bVar3 = 0;
  if (grabber == (CDemonActor *)0x0) {
    return 0;
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"CHero::startGettingGrabbed by %s, type %d\n")
  ;
  this_ptr_00 = &(this_ptr->base).model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&this_ptr_00->base);
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  current motion is %s\n");
  if (grab_type == 0) {
    pcVar4 = "GETGRABBED";
    iVar2 = grab_type;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr_00->base);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(pCVar1,pcVar4,iVar2);
    if (iVar2 < 0) {
      return 0;
    }
    pcVar4 = "GETGRABBED_FRONT";
    iVar2 = grab_type;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&this_ptr_00->base);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_004fba50(pCVar1,pcVar4,iVar2);
    if (iVar2 < 0) {
      pcVar4 = "GETGRABBED";
    }
    else {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                ((CDemonActor *)this_ptr,&(grabber->location).position,&local_28);
      local_1c = local_28.x;
      afStack_18[(uint)bVar3 * -2] = *(float *)((int)&local_28 + (uint)bVar3 * -8 + 4);
      afStack_18[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
           *(float *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (afStack_18[1] <= 0.0) {
        pcVar4 = "GETGRABBED_BACK";
      }
      else {
        pcVar4 = "GETGRABBED_FRONT";
      }
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004fc160
              (&this_ptr_00->base,pcVar4,1);
  }
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"  We are grabbed\n");
  (this_ptr->base).grabbed_by = grabber;
  (this_ptr->base).grabbed_type = grab_type;
  return 1;
}
