// Name: core_script.cpp_CScript_computeChecksum_FUN_00505820
// Address: 00505820
// Address Range: [[00505820, 00505875]]
// Convention: __cdecl
// Signature: uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(CScript *this_ptr)

#include "nocturne.h"

uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(CScript *this_ptr)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  local_14 = 0;
  iVar4 = 0;
  if (0 < this_ptr->xref_count) {
    iVar3 = 0;
    do {
      pbVar2 = *(byte **)(this_ptr->xref_entries->name + iVar3 + 4);
      bVar1 = *pbVar2;
      while (bVar1 != 0) {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(&local_14,bVar1);
        bVar1 = *pbVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < this_ptr->xref_count);
  }
  return local_14;
}
