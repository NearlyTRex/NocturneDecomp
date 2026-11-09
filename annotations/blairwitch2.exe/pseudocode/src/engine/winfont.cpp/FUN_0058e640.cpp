// Name: engine_winfont.cpp_FUN_0058e640
// Address: 0058e640
// Address Range: [[0058e640, 0058e6b5]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_FUN_0058e640(CWinFont *this_ptr)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_FUN_0058e640(CWinFont *this_ptr)

{
  if (*(HDC *)&this_ptr->field_0x6a48 != (HDC)0x0) {
    SelectObject(*(HDC *)&this_ptr->field_0x6a48,*(HGDIOBJ *)&this_ptr->field_0x6a54);
    *(uint *)&this_ptr->field_0x6a54 = 0;
    DeleteDC(*(HDC *)&this_ptr->field_0x6a48);
    *(uint *)&this_ptr->field_0x6a48 = 0;
    *(uint *)&this_ptr->field_0x6a4c = 0;
    *(uint *)&this_ptr->field_0x6a58 = 0;
  }
  *(uint *)&this_ptr->field_0x6b6c = 0;
  *(uint *)&this_ptr->field_0x6b68 = *(uint *)&this_ptr->field_0x6b6c;
  *(uint *)&this_ptr->field_0x6b64 = *(uint *)&this_ptr->field_0x6b6c;
  return;
}
