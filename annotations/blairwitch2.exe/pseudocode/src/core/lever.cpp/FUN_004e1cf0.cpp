// Name: core_lever.cpp_FUN_004e1cf0
// Address: 004e1cf0
// Address Range: [[004e1cf0, 004e1d61]]
// Convention: unknown
// Signature: void core_lever_cpp_FUN_004e1cf0(CDemonActor *param_1)

#include "nocturne.h"

void core_lever_cpp_FUN_004e1cf0(CDemonActor *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_0044fd00
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_FUN_00408a80(param_1);
  if ((param_1[1].field_0x250 == '\0') &&
     (iVar2 = _stricmp(&param_1[1].field_0x78,"elevbutton.kfm"),
     iVar2 != 0)) {
    pcVar3 = "lever-metal.wav";
    pcVar4 = &param_1[1].field_0x250;
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
