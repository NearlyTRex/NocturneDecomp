// Name: core_fldnotes.cpp_FUN_004a5430
// Address: 004a5430
// Address Range: [[004a5430, 004a548d]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a5430(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a545f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a5430(uint param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  SNotesSection *this_ptr;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    this_ptr = SNotesSection_ARRAY_01cab9f4;
    do {
      iVar1 = core_fldnotes_cpp_SNotesSection_findEntry_FUN_004a35e0(this_ptr,param_2);
      if (iVar1 != 0) {
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        return *(uint *)(iVar1 + 0x140);
      }
      iVar2 = iVar2 + 1;
      this_ptr = this_ptr + 1;
    } while (iVar2 < _DAT_01cab9f0);
  }
  return 0xffffffff;
}
