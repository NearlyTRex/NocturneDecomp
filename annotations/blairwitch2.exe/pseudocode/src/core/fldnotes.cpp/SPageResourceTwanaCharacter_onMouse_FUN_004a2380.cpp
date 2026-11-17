// Name: core_fldnotes.cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a2380
// Address: 004a2380
// Address Range: [[004a2380, 004a23b0]]
// Convention: __cdecl
// Signature: int __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a2380(SPageResourceTwanaCharacter *this_ptr,int clicked,int x,int y)

#include "nocturne.h"

int __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_onMouse_FUN_004a2380(SPageResourceTwanaCharacter *this_ptr,int clicked,int x,int y)

{
  if (g_INT_01cab780 == 0) {
    return 0;
  }
  if (clicked != 1) {
    return 1;
  }
  core_fldnotes_cpp_SPageResourceTwanaEntry_addCharacter_FUN_004a2620
            ((SPageResourceTwanaEntry *)g_INT_01cab780,this_ptr->character);
  return 1;
}
