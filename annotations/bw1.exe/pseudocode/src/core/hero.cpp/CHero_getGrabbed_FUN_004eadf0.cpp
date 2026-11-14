// Name: core_hero.cpp_CHero_getGrabbed_FUN_004eadf0
// Address: 004eadf0
// Address Range: [[004eadf0, 004eaf18]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004eadf0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_getGrabbed_FUN_004eadf0(CHero *this_ptr,CDemonActor *grabber,int grab_type)

{
  CMotionList *pCVar1;
  int iVar2;
  CDeformableModelInstance *this_ptr_00;
  byte bVar3;
  float afStackY_1010 [1014];
  char *pcVar4;
  uint local_28;
  uint local_1c;
  float local_14;
  
  bVar3 = 0;
  if (grabber == (CDemonActor *)0x0) {
    return 0;
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"CHero::startGettingGrabbed by %s, type %d\n")
  ;
  this_ptr_00 = &(this_ptr->base).model;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(&this_ptr_00->base);
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  current motion is %s\n");
  if (grab_type == 0) {
    pcVar4 = "GETGRABBED";
    iVar2 = grab_type;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150(pCVar1,pcVar4,iVar2);
    if (iVar2 < 0) {
      return 0;
    }
    pcVar4 = "GETGRABBED_FRONT";
    iVar2 = grab_type;
    pCVar1 = core_motion_cpp_CMotionController_getMotionList_FUN_00524a00(&this_ptr_00->base);
    iVar2 = core_motion_cpp_CMotionList_findStateIndex_FUN_00524150(pCVar1,pcVar4,iVar2);
    if (iVar2 < 0) {
      pcVar4 = "GETGRABBED";
    }
    else {
      core_actor_cpp_FUN_00408bb0(this_ptr,&grabber->location);
      local_1c = local_28;
      *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8);
      *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      if (local_14 <= 0.0) {
        pcVar4 = "GETGRABBED_BACK";
      }
      else {
        pcVar4 = "GETGRABBED_FRONT";
      }
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_00524850
              (&this_ptr_00->base,pcVar4,1);
  }
  engine_console_cpp_CConsole_printf_FUN_00445430(g_CConsolePtr,"  We are grabbed\n");
  (this_ptr->base).grabbed_by = grabber;
  (this_ptr->base).grabbed_type = grab_type;
  return 1;
}
