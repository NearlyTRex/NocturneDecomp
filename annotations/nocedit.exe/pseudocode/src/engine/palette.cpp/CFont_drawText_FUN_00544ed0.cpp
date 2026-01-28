// Name: engine_palette.cpp_CFont_drawText_FUN_00544ed0
// Address: 00544ed0
// Address Range: [[00544ed0, 00544efe]]
// Convention: __cdecl
// Signature: void __cdecl engine_palette_cpp_CFont_drawText_FUN_00544ed0 (CFont *this_ptr,int param1,int param2,int param3,int param4,int param5)

#include "nocturne.h"

void __cdecl
engine_palette_cpp_CFont_drawText_FUN_00544ed0
          (CFont *this_ptr,int param1,int param2,int param3,int param4,int param5)

{
  (*this_ptr->vtable->drawText)(this_ptr,param1,param2,(char *)param3,param4,param5);
  return;
}
