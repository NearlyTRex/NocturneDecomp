// Name: core_lever.cpp_CLever_setup_FUN_004ff110
// Address: 004ff110
// Address Range: [[004ff110, 004ff181]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setup_FUN_004ff110(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setup_FUN_004ff110(CLever *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_004688e0
            ((CKeyFramedModelInstance *)&this_ptr->field_0x158);
  core_actor_cpp_FUN_00408850((CDemonActor *)this_ptr);
  if ((this_ptr->field_0x3a8 == '\0') &&
     (iVar2 = _stricmp(&this_ptr->field_0x1d0,"elevbutton.kfm"),
     iVar2 != 0)) {
    pcVar3 = "lever-metal.wav";
    pcVar4 = &this_ptr->field_0x3a8;
    do {
      cVar1 = *pcVar3;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return;
  }
  return;
}
