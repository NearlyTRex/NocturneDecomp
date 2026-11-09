// Name: core_schngeis.cpp_FUN_005a3420
// Address: 005a3420
// Address Range: [[005a3420, 005a355b]]
// Convention: unknown
// Signature: void core_schngeis_cpp_FUN_005a3420(CDemonActor *param_1,undefined4 param_2)

#include "nocturne.h"

void core_schngeis_cpp_FUN_005a3420(CDemonActor *param_1,uint param_2)

{
  CSound *this_ptr;
  uint uVar1;
  uint uVar2;
  
  this_ptr = 0x0264B290;
  switch(param_2) {
  case 8000:
    uVar2 = *(uint *)&param_1[0x67].field_0x1ec;
    uVar1 = 0x41700000;
    goto LAB_005a344f;
  case 0x1f41:
    *(uint *)&param_1[0x67].field_0x1f8 = 1;
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (this_ptr,param_1,"schnellbreath01",(CVector3f *)&param_1->field_0x20);
    break;
  case 0x1f42:
    *(uint *)&param_1[0x67].field_0x1f8 = 0;
    unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
    return;
  case 0x1f43:
    uVar2 = *(uint *)&param_1[0x67].field_0x1ec;
    uVar1 = 0x41A00000;
    goto LAB_005a344f;
  case 0x1f44:
    uVar2 = *(uint *)&param_1[0x67].field_0x1f0;
    uVar1 = 0x41200000;
LAB_005a344f:
    unkafter_basicene_cpp_FUN_0059f740(param_1,uVar1,uVar2,0x40000000);
    break;
  case 0x1f45:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"schnellarm0?.wav",(CVector3f *)&param_1->field_0x20);
    break;
  case 0x1f46:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"schnellbite01.wav",(CVector3f *)&param_1->field_0x20);
    break;
  case 0x1f47:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"schnellfootsteps0?.wav",
               (CVector3f *)&param_1->field_0x20);
    break;
  case 0x1f48:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"schnelljump.wav",(CVector3f *)&param_1->field_0x20);
    break;
  case 0x1f49:
    core_sound_cpp_CSound_playActorSound_FUN_0055ae50
              (0x0264B290,param_1,"schnelldeath01.wav",(CVector3f *)&param_1->field_0x20)
    ;
  }
  unkafter_basicene_cpp_FUN_0059e880(param_1,param_2);
  return;
}
