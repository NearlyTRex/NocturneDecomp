// Name: core_trigger.cpp_CTrigger_setup_FUN_00547a00
// Address: 00547a00
// Address Range: [[00547a00, 00547af0]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_setup_FUN_00547a00(int param_1)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_setup_FUN_00547a00(int param_1)

{
  uint uVar1;
  int iVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar2 = 0x01CC9450;
  *(uint *)(param_1 + 0xf8) = 0;
  uVar1 = *(uint *)(iVar2 + 4);
  *(uint *)(param_1 + 0x100) = 1;
  *(uint *)(param_1 + 0xfc) = uVar1;
  if (*(int *)(param_1 + 0x16c) == 5) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x16c) == 4) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  if (*(int *)(param_1 + 0x16c) == 7) {
    *(uint *)(param_1 + 0x100) = 0;
  }
  *(uint *)(param_1 + 0x2e8) = 0;
  *(uint *)(param_1 + 0x360) = 0;
  iVar2 = _stricmp(param_1 + 0x21c,"none");
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x21c) = 0;
  }
  iVar2 = _stricmp(param_1 + 0x280,"none");
  if (iVar2 == 0) {
    *(byte *)(param_1 + 0x280) = 0;
  }
  *(uint *)(param_1 + 0x104) = 0;
  if ((*(char *)(param_1 + 0x21c) == '\0') && (*(char *)(param_1 + 0x280) == '\0')) {
    *(uint *)(param_1 + 0x104) = 1;
    return;
  }
  return;
}
