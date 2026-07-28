// Name: core_script.cpp_CScript_computeChecksum_FUN_00505820
// Address: 00505820
// Address Range: [[00505820, 00505875]]
// Convention: __cdecl
// Signature: uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(CScript *this_ptr)

#include "nocturne.h"

uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00505820(CScript *this_ptr)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint local_14;
  
  local_14 = 0;
  iVar4 = 0;
  if (0 < this_ptr->xref_count) {
    iVar3 = 0;
    do {
      pcVar2 = *(char **)(this_ptr->xref_entries->name + iVar3 + 4);
      cVar1 = *pcVar2;
      while (cVar1 != '\0') {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
        core_actor_cpp_crc32ProcessByte_FUN_0040dfc0(&local_14,cVar1);
        cVar1 = *pcVar2;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 8;
    } while (iVar4 < this_ptr->xref_count);
  }
  return local_14;
}
