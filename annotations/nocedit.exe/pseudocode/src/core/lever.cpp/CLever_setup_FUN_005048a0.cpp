// Name: core_lever.cpp_CLever_setup_FUN_005048a0
// Address: 005048a0
// Address Range: [[005048a0, 005048bd]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_setup_FUN_005048a0(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_setup_FUN_005048a0(CLever *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char **ppcVar4;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)&this_ptr->model_name);
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base);
  if ((*(char *)&this_ptr->sound == '\0') &&
     (iVar2 = stricmp(&this_ptr->model_name_alt,"elevbutton.kfm")
     , iVar2 != 0)) {
    pcVar3 = "lever-metal.wav";
    ppcVar4 = &this_ptr->sound;
    do {
      cVar1 = *pcVar3;
      *(char *)ppcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)ppcVar4 + 1) = cVar1;
      ppcVar4 = (char **)((int)ppcVar4 + 2);
    } while (cVar1 != '\0');
    return;
  }
  return;
}
