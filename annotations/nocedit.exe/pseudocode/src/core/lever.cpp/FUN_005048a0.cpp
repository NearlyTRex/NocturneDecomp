// Name: core_lever.cpp_FUN_005048a0
// Address: 005048a0
// Address Range: [[005048a0, 005048bd]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_005048a0()
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_005048a0(undefined4 param_1) */

void core_lever_cpp_FUN_005048a0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  CDemonActor *in_stack_00000004;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(in_stack_00000004);
  if (((char)in_stack_00000004[2].field14_0xf8 == '\0') &&
     (iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        (in_stack_00000004[1].create_event,"elevbutton.kfm"), iVar2 != 0))
  {
    pcVar3 = "lever-metal.wav";
    piVar4 = &in_stack_00000004[2].field14_0xf8;
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


// Assembly code:
// 005048a0: PUSH EBX
//   Label: core_lever.cpp_FUN_005048a0
// 005048a1: PUSH ESI
// 005048a2: PUSH EDI
// 005048a3: PUSH EBP
// 005048a4: MOV EBP,ESP
// 005048a6: MOV EBX,dword ptr [EBP + 0x14]
// 005048a9: LEA EAX,[EBX + 0x158]
// 005048af: PUSH EAX
// 005048b0: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005048b5: ADD ESP,0x4
// 005048b8: PUSH EBX
// 005048b9: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
