// Name: core_script.cpp_CScript_computeChecksum_FUN_00560d80
// Address: 00560d80
// MANUAL RECONSTRUCTION
// Address Range: [[00560d80, 00560dd5]]
// Convention: __cdecl
// Signature: uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00560d80(CScript *this_ptr)

#include "nocturne.h"

uint __cdecl core_script_cpp_CScript_computeChecksum_FUN_00560d80(CScript *this_ptr)

{
  byte *pbVar2;
  int iVar4;
  uint local_14;

  local_14 = 0;
  for (iVar4 = 0; iVar4 < this_ptr->parsed_line_count; iVar4 = iVar4 + 1) {
    pbVar2 = (byte *)this_ptr->parsed_lines[iVar4].text;
    while (*pbVar2 != 0) {
      core_actor_cpp_crc32ProcessByte_FUN_0040ce30(&local_14,*pbVar2);
      pbVar2 = pbVar2 + 1;
    }
  }
  return local_14;
}
