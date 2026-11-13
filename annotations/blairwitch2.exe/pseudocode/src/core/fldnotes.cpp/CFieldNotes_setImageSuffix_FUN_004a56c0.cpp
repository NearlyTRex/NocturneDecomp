// Name: core_fldnotes.cpp_CFieldNotes_setImageSuffix_FUN_004a56c0
// Address: 004a56c0
// Address Range: [[004a56c0, 004a56f2]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_setImageSuffix_FUN_004a56c0(CFieldNotes *this_ptr,char *suffix)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_setImageSuffix_FUN_004a56c0(CFieldNotes *this_ptr,char *suffix)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_01cab788;
  do {
    cVar1 = *suffix;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      DAT_00616010 = 1;
      return;
    }
    cVar1 = suffix[1];
    suffix = suffix + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  DAT_00616010 = 1;
  return;
}
