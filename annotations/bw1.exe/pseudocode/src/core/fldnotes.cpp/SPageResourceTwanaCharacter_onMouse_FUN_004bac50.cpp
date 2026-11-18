// Name: core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004bac50
// Address: 004bac50
// Address Range: [[004bac50, 004bac80]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004bac50(SPageResourceTwanaCharacter *this_ptr,int clicked,int x,int y)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004bac50(SPageResourceTwanaCharacter *this_ptr,int clicked,int x,int y)

{
  if (g_INT_01cc4200 == 0) {
    return 0;
  }
  if (clicked != 1) {
    return 1;
  }
  core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004baf50
            ((SPageResourceTwanaEntry *)g_INT_01cc4200,this_ptr->character);
  return 1;
}
