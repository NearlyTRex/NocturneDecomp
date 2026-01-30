// Name: core_script.cpp_CScript_FUN_00560d80
// Address: 00560d80
// Address Range: [[00560d80, 00560dd5]]
// Convention: __cdecl
// Signature: uint __cdecl core_script_cpp_CScript_FUN_00560d80(CScript *this_ptr)

#include "nocturne.h"

uint __cdecl core_script_cpp_CScript_FUN_00560d80(CScript *this_ptr)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  local_14 = 0;
  iVar4 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 0x18)) {
    iVar3 = 0;
    do {
      pbVar2 = *(byte **)(iVar3 + 4 + *(int *)(this_ptr->unk4 + 0x1c));
      bVar1 = *pbVar2;
      while (bVar1 != 0) {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        core_actor_cpp_crc32ProcessByte_FUN_0040ce30(&local_14,bVar1);
        bVar1 = *pbVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < *(int *)(this_ptr->unk4 + 0x18));
  }
  return local_14;
}
