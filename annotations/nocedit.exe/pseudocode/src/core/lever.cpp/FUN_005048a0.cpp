// Name: core_lever.cpp_FUN_005048a0
// Address: 005048a0
// Address Range: [[005048a0, 005048bd]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_FUN_005048a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_lever.cpp_FUN_005048a0(uint param_1) */

void __cdecl core_lever_cpp_FUN_005048a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  CDemonActor *in_stack_00000004;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  if (((char)in_stack_00000004[2].unk5 == '\0') &&
     (iVar2 = stricmp
                        (in_stack_00000004[1].create_event,"elevbutton.kfm"), iVar2 != 0))
  {
    pcVar3 = "lever-metal.wav";
    piVar4 = &in_stack_00000004[2].unk5;
    do {
      cVar1 = *pcVar3;
      *(char *)piVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)piVar4 + 1) = cVar1;
      piVar4 = (int *)((int)piVar4 + 2);
    } while (cVar1 != '\0');
    return;
  }
  return;
}
