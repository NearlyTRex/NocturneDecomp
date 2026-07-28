// Name: core_actor.cpp_CDemonActor_save_FUN_0040c040
// Address: 0040c040
// Address Range: [[0040c040, 0040c151]]
// Convention: unknown
// Signature: void core_actor_cpp_CDemonActor_save_FUN_0040c040(CDemonActor *param_1,int param_2)

#include "nocturne.h"

void core_actor_cpp_CDemonActor_save_FUN_0040c040(CDemonActor *param_1,int param_2)

{
  CDemonActor *pCVar1;
  char *pcVar2;
  uint unaff_EBP;
  int unaff_EDI;
  CDemonActor *deleted_actor;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040d8c0();
  pcVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_1);
  if (param_1->actor_name[0] == '\0') {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x787;
    core_main_c_FUN_004c8440("CDemonActor::save - tried to save actor of class %s with no name",pcVar2);
  }
  _fprintf(param_2,"%s{ %s \"%s\"\n",&DAT_005acc90,pcVar2,param_1);
  pCVar1 = DAT_00763e8c;
  deleted_actor = DAT_00763e88;
  DAT_00763e84 = param_2;
  DAT_00763e8c = param_1;
  DAT_00763e88 = (CDemonActor *)0x2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
  (*((param_1->vtable)._ub)->onActorDeleted)(param_1,deleted_actor);
  core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
  _fprintf(param_2,"%s} %s \"%s\"\n",&DAT_005acc90,pcVar2,param_1);
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\actor.cpp";
    INT_01cc4804 = 0x7a9;
    core_main_c_FUN_004c8440("IO Error after writing actor of type %s",pcVar2);
  }
  DAT_00763e84 = unaff_EDI;
  DAT_00763e8c = pCVar1;
  DAT_00763e88 = (CDemonActor *)unaff_EBP;
  return;
}
