// Name: support_newmsg.cpp_freeSkullBitmaps_FUN_00544750
// Address: 00544750
// Address Range: [[00544750, 00544764]]
// Convention: __cdecl
// Signature: void __cdecl support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap *bitmap)

#include "nocturne.h"

void __cdecl support_newmsg_cpp_freeSkullBitmaps_FUN_00544750(CAlphaBitmap *bitmap)

{
  __arrfini(&bitmap->raw,0xf,&g_CAlphaBitmapTypeInfo);
  return;
}
