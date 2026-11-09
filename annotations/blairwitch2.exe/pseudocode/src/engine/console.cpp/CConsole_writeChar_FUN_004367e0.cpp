// Name: engine_console.cpp_CConsole_writeChar_FUN_004367e0
// Address: 004367e0
// Address Range: [[004367e0, 004368a8]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_writeChar_FUN_004367e0(CConsole *this_ptr,char character)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_writeChar_FUN_004367e0(CConsole *this_ptr,char character)

{
  int iVar1;
  int iVar2;
  
  if (character == '\n') {
    *(uint *)&this_ptr->field_0xfa8 = 0;
    iVar2 = *(int *)&this_ptr->field_0xfac + 1;
    iVar1 = *(int *)&this_ptr->field_0xfb4 + -1;
    *(int *)&this_ptr->field_0xfac = iVar2;
    if (iVar1 < iVar2) {
LAB_00436875:
      *(int *)&this_ptr->field_0xfac = iVar1;
      engine_console_cpp_FUN_004368f0(this_ptr);
      return;
    }
  }
  else {
    if (character == '\0') {
      (&this_ptr->field_0x8)[*(int *)&this_ptr->field_0xfa8 + *(int *)&this_ptr->field_0xfac * 0x50]
           = 0;
      return;
    }
    (&this_ptr->field_0x8)[*(int *)&this_ptr->field_0xfa8 + *(int *)&this_ptr->field_0xfac * 0x50] =
         character;
    iVar1 = *(int *)&this_ptr->field_0xfa8 + 1;
    *(int *)&this_ptr->field_0xfa8 = iVar1;
    if (*(int *)&this_ptr->field_0xfb0 + -1 < iVar1) {
      *(uint *)&this_ptr->field_0xfa8 = 0;
      iVar2 = *(int *)&this_ptr->field_0xfac + 1;
      iVar1 = *(int *)&this_ptr->field_0xfb4 + -1;
      *(int *)&this_ptr->field_0xfac = iVar2;
      if (iVar1 < iVar2) goto LAB_00436875;
    }
  }
  return;
}
