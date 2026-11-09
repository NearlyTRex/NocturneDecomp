// Name: core_door.cpp_CDoor_ctor_FUN_00477270
// Address: 00477270
// Address Range: [[00477270, 00477447]]
// Convention: unknown
// Signature: CDoor * core_door_cpp_CDoor_ctor_FUN_00477270(CDoor *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoor * core_door_cpp_CDoor_ctor_FUN_00477270(CDoor *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004085c0((CDemonActor *)this_ptr);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00468860
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  core_event_cpp_CRuleList_clear_FUN_004aacc0((CRuleList *)&this_ptr_00[2].field_0x28);
  *(byte **)&this_ptr_00[-1].field_0x178 = &g_CDoorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(this_ptr_00,(char *)0x5da752);
  *(uint *)&this_ptr_00[1].field_0x4 = 0;
  *(uint *)&this_ptr_00[1].field_0x8 = 1;
  *(uint *)&this_ptr_00[1].field_0xc = 0;
  *(uint *)&this_ptr_00[1].field_0x10 = 0;
  if (&this_ptr_00[5].field_0xd0 != &this_ptr_00[-1].field_0x44) {
    *(uint *)&this_ptr_00[5].field_0xd0 = *(uint *)&this_ptr_00[-1].field_0x44;
    *(uint *)&this_ptr_00[5].field_0xd4 = *(uint *)&this_ptr_00[-1].field_0x48;
    *(uint *)&this_ptr_00[5].field_0xd8 = *(uint *)&this_ptr_00[-1].field_0x4c;
  }
  pcVar3 = "defaultDoorOpen";
  pcVar4 = &this_ptr_00[1].field_0x14;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "defaultDoorClose";
  pcVar4 = &this_ptr_00[1].field_0x78;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar3 = "door-locked.wav";
  this_ptr_00[4].field_0x11c = 0;
  pcVar4 = &this_ptr_00[5].field_0x68;
  this_ptr_00[5].field_0x4 = 0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[5].field_0xcc = 0;
  *(uint *)&this_ptr_00[5].field_0xe8 = 0;
  *(uint *)&this_ptr_00[5].field_0xec = 0x3f800000;
  *(uint *)&this_ptr_00[5].field_0xf0 = 0x3f800000;
  *(uint *)&this_ptr_00[5].field_0xf4 = 0x3f800000;
  *(uint *)(this_ptr_00 + 1) = 0;
  this_ptr_00[1].field_0xdc = 0;
  this_ptr_00[1].field_0x140 = 0;
  *(uint *)&this_ptr_00[5].field_0x104 = 0;
  *(uint *)&this_ptr_00[5].field_0x108 = 0;
  *(uint *)&this_ptr_00[5].field_0x10c = 1;
  *(uint *)&this_ptr_00[5].field_0x110 = 0;
  pcVar3 = "shakeDoor";
  *(uint *)&this_ptr_00[5].field_0x114 = 3;
  pcVar4 = &this_ptr_00[5].field_0x120;
  *(uint *)&this_ptr_00[5].field_0x118 = 1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  *(uint *)&this_ptr_00[5].field_0x11c = 0;
  *(uint *)&this_ptr_00[6].field_0x8 = 0;
  return (CDoor *)&this_ptr_00[-1].field_0x24;
}
