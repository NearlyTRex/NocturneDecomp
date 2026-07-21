// Name: core_gore.cpp_CGore_process_FUN_004b0030
// Address: 004b0030
// Address Range: [[004b0030, 004b00e5]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_gore_cpp_CGore_process_FUN_004b0030(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_gore_cpp_CGore_process_FUN_004b0030(void)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (byte *)0x1c78cec;
  do {
    if (0.0 < *(float *)(puVar2 + 0x18)) {
      (**(code **)(*(int *)(puVar2 + 0x34) + 4))(puVar2);
    }
    puVar2 = puVar2 + 0x40;
  } while (puVar2 != &DAT_01c7ccec);
  iVar3 = 0;
  if (0 < _DAT_01c7ccf0) {
    iVar4 = 0x1c7ccf4;
    do {
      core_gore_cpp_CBloodSplat_processAge_FUN_004af130(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x44;
    } while (iVar3 < _DAT_01c7ccf0);
  }
  uVar1 = core_gore_cpp_CBloodPool_setupRenderState_FUN_004af2a0(0x1c9e03c);
  iVar3 = 0;
  if (0 < _DAT_01c9e038) {
    iVar4 = 0x1c9e03c;
    do {
      uVar1 = core_gore_cpp_CBloodPool_processAge_FUN_004af700(iVar4);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x28;
    } while (iVar3 < _DAT_01c9e038);
  }
  return uVar1;
}
