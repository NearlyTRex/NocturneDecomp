// Name: support_trstream.cpp_COutStreamDebug_seek_FUN_005a1f80
// Address: 005a1f80
// Address Range: [[005a1f80, 005a1fa5]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamDebug_seek_FUN_005a1f80(COutStreamDebug *this_ptr,int offset,int origin)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamDebug_seek_FUN_005a1f80(COutStreamDebug *this_ptr,int offset,int origin)

{
  g_CHAR_PTR_01d1d400 = "..\\support\\trstream.cpp";
  g_INT_01d1d404 = 0xab7;
  core_main_c_displayErrorAndQuit_FUN_005030e0("COutStreamDebug::seek - invalid operation");
  return 0;
}
