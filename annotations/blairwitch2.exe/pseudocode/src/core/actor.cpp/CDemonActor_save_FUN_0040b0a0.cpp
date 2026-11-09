// Name: core_actor.cpp_CDemonActor_save_FUN_0040b0a0
// Address: 0040b0a0
// Address Range: [[0040b0a0, 0040b1b1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_actor_cpp_CDemonActor_save_FUN_0040b0a0(CDemonActor *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  core_actor_cpp_syncActorTypeIDs_FUN_0040c920();
  uVar4 = core_actor_cpp_FUN_00408a50(this_ptr);
  if (*(char *)this_ptr == '\0') {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x7ea;
    core_main_c_FUN_004e4500("CDemonActor::save - tried to save actor of class %s with no name",uVar4);
  }
  FUN_005b8010(file_handle,"%s{ %s \"%s\"\n",&DAT_00609590,uVar4,this_ptr);
  uVar3 = DAT_007bc03c;
  uVar2 = DAT_007bc038;
  uVar1 = DAT_007bc034;
  DAT_007bc034 = file_handle;
  DAT_007bc03c = this_ptr;
  DAT_007bc038 = 2;
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xdc))(this_ptr);
  core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
  FUN_005b8010(file_handle,"%s} %s \"%s\"\n",&DAT_00609590,uVar4,this_ptr);
  if (((byte)file_handle[0xc] & 0x20) != 0) {
    _DAT_01d046a0 = "..\\core\\actor.cpp";
    _DAT_01d046a4 = 0x80c;
    core_main_c_FUN_004e4500("IO Error after writing actor of type %s",uVar4);
  }
  DAT_007bc034 = (_FILE *)uVar1;
  DAT_007bc03c = (CDemonActor *)uVar3;
  DAT_007bc038 = uVar2;
  return;
}
