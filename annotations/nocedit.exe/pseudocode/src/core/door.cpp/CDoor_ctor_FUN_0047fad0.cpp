// Name: core_door.cpp_CDoor_ctor_FUN_0047fad0
// Address: 0047fad0
// Address Range: [[0047fad0, 0047fc6e]]
// Convention: __cdecl
// Signature: CDoor * core_door.cpp_CDoor_ctor_FUN_0047fad0(CDoor * this_ptr)

#include "nocturne.h"

CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_0047fad0(CDoor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  core_event_cpp_FUN_004b1670();
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&PTR_core_door_cpp_FUN_0065cbf4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"churchd01.kfm");
  this_ptr_00[1].part_visibility_flags[1] = 0;
  this_ptr_00[1].part_visibility_flags[2] = 1;
  this_ptr_00[1].part_visibility_flags[3] = 0;
  this_ptr_00[1].part_visibility_flags[4] = 0;
  if ((int *)(this_ptr_00[5].model_name + 0x58) != this_ptr_00[-1].part_visibility_flags + 0x11) {
    *(int *)(this_ptr_00[5].model_name + 0x58) = this_ptr_00[-1].part_visibility_flags[0x11];
    *(int *)(this_ptr_00[5].model_name + 0x5c) = this_ptr_00[-1].part_visibility_flags[0x12];
    *(int *)(this_ptr_00[5].model_name + 0x60) = this_ptr_00[-1].part_visibility_flags[0x13];
  }
  pcVar3 = "defaultDoorOpen";
  piVar5 = this_ptr_00[1].part_visibility_flags + 5;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pcVar4 = "defaultDoorClose";
  pcVar3 = this_ptr_00[1].model_name;
  do {
    cVar1 = *pcVar4;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "door-locked.wav";
  this_ptr_00[4].animation_state[0x40] = '\0';
  piVar5 = this_ptr_00[5].part_visibility_flags + 0x1a;
  *(byte *)(this_ptr_00[5].part_visibility_flags + 1) = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[5].model_name[0x54] = '\0';
  this_ptr_00[5].model_name[0x55] = '\0';
  this_ptr_00[5].model_name[0x56] = '\0';
  this_ptr_00[5].model_name[0x57] = '\0';
  this_ptr_00[5].animation_state[0xc] = '\0';
  this_ptr_00[5].animation_state[0xd] = '\0';
  this_ptr_00[5].animation_state[0xe] = '\0';
  this_ptr_00[5].animation_state[0xf] = '\0';
  this_ptr_00[5].animation_state[0x10] = '\0';
  this_ptr_00[5].animation_state[0x11] = '\0';
  this_ptr_00[5].animation_state[0x12] = -0x80;
  this_ptr_00[5].animation_state[0x13] = '?';
  this_ptr_00[5].animation_state[0x14] = '\0';
  this_ptr_00[5].animation_state[0x15] = '\0';
  this_ptr_00[5].animation_state[0x16] = -0x80;
  this_ptr_00[5].animation_state[0x17] = '?';
  this_ptr_00[5].animation_state[0x18] = '\0';
  this_ptr_00[5].animation_state[0x19] = '\0';
  this_ptr_00[5].animation_state[0x1a] = -0x80;
  this_ptr_00[5].animation_state[0x1b] = '?';
  this_ptr_00[1].part_visibility_flags[0] = 0;
  this_ptr_00[1].animation_state[0] = '\0';
  this_ptr_00[1].animation_state[100] = '\0';
  this_ptr_00[5].animation_state[0x28] = '\0';
  this_ptr_00[5].animation_state[0x29] = '\0';
  this_ptr_00[5].animation_state[0x2a] = '\0';
  this_ptr_00[5].animation_state[0x2b] = '\0';
  this_ptr_00[5].animation_state[0x2c] = '\0';
  this_ptr_00[5].animation_state[0x2d] = '\0';
  this_ptr_00[5].animation_state[0x2e] = '\0';
  this_ptr_00[5].animation_state[0x2f] = '\0';
  this_ptr_00[5].animation_state[0x30] = '\x01';
  this_ptr_00[5].animation_state[0x31] = '\0';
  this_ptr_00[5].animation_state[0x32] = '\0';
  this_ptr_00[5].animation_state[0x33] = '\0';
  this_ptr_00[5].animation_state[0x34] = '\0';
  this_ptr_00[5].animation_state[0x35] = '\0';
  this_ptr_00[5].animation_state[0x36] = '\0';
  this_ptr_00[5].animation_state[0x37] = '\0';
  this_ptr_00[5].animation_state[0x38] = '\x03';
  this_ptr_00[5].animation_state[0x39] = '\0';
  this_ptr_00[5].animation_state[0x3a] = '\0';
  this_ptr_00[5].animation_state[0x3b] = '\0';
  this_ptr_00[5].animation_state[0x3c] = '\x01';
  this_ptr_00[5].animation_state[0x3d] = '\0';
  this_ptr_00[5].animation_state[0x3e] = '\0';
  this_ptr_00[5].animation_state[0x3f] = '\0';
  return (CDoor *)(this_ptr_00[-1].part_visibility_flags + 9);
}
