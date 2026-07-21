// Name: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
// Address: 004e31f0
// Address Range: [[004e31f0, 004e331f]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  
  iVar8 = *(int *)(param_3 + 0x18);
  iVar1 = *(int *)(param_3 + 0x10);
  iVar5 = *(int *)(param_3 + 0x14);
  iVar7 = *(int *)(param_3 + 8);
  if (0 < iVar5) {
    local_14 = 0;
    local_18 = iVar7;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)(local_14 + param_2);
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0
                            (param_1,*(uint *)(local_18 + 4));
          iVar6 = iVar6 + 1;
          *puVar3 = uVar2 & 0xff;
          puVar3 = puVar3 + 0x20;
        } while (iVar6 < iVar1);
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 0x100;
    } while (local_14 < iVar5 * 4);
  }
  if (iVar5 < iVar8) {
    iVar7 = iVar5 * 0x100 + iVar7;
    puVar3 = (uint *)(iVar5 * 4 + param_2);
    do {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(param_1,*(uint *)(iVar7 + 4))
      ;
      iVar7 = iVar7 + 0x100;
      puVar3[0x20] = uVar2 & 0xff;
      iVar5 = iVar5 + 1;
      *puVar3 = uVar2 & 0xff;
      puVar3 = puVar3 + 1;
    } while (iVar5 < iVar8);
  }
  if (iVar8 < 0x20) {
    iVar8 = iVar8 * 4;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        puVar4 = (uint *)(param_2 + iVar8);
        do {
          iVar5 = iVar5 + 1;
          *puVar4 = 0;
          puVar4 = puVar4 + 0x20;
        } while (iVar5 < iVar1);
      }
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0x80);
  }
  return;
}
