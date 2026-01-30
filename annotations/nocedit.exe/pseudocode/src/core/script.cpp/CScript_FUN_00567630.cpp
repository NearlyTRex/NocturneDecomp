// Name: core_script.cpp_CScript_FUN_00567630
// Address: 00567630
// Address Range: [[00567630, 005676d3]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567630(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567630(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_124 [65];
  uint local_20;
  uint local_18;
  
  this_ptr->unk4[0x10] = '\0';
  this_ptr->unk4[0x11] = '\0';
  this_ptr->unk4[0x12] = '\0';
  this_ptr->unk4[0x13] = '\0';
  core_script_cpp_CScript_FUN_0055a370(this_ptr);
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 0x18)) {
    iVar2 = 0;
    do {
      local_20 = 0;
      local_18 = *(uint *)(iVar2 + *(int *)(this_ptr->unk4 + 0x1c));
      iVar1 = iVar2 + 4;
      iVar2 = iVar2 + 8;
      iVar3 = iVar3 + 1;
      core_script_cpp_CScript_FUN_00567080
                (this_ptr,*(char **)(iVar1 + *(int *)(this_ptr->unk4 + 0x1c)),aiStack_124);
    } while (iVar3 < *(int *)(this_ptr->unk4 + 0x18));
  }
  core_msnedit_cpp_CDemonMission_FUN_0053ea30(g_CDemonMissionPtr);
  qsort
            (*(void **)(this_ptr->unk4 + 0x14),*(SIZE_T *)(this_ptr->unk4 + 0x10),0x114,
             core_script_cpp_FUN_005675a0);
  return;
}
