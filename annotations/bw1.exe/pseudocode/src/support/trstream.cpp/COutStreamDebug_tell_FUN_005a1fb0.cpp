// Name: support_trstream.cpp_COutStreamDebug_tell_FUN_005a1fb0
// Address: 005a1fb0
// Address Range: [[005a1fb0, 005a1fd8]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamDebug_tell_FUN_005a1fb0(COutStreamDebug *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamDebug_tell_FUN_005a1fb0(COutStreamDebug *this_ptr)

{
  g_CHAR_PTR_01d1d400 = "..\\support\\trstream.cpp";
  g_INT_01d1d404 = 0xabc;
  core_main_c_displayErrorAndQuit_FUN_005030e0("COutStreamDebug::tell - invalid operation");
  return -1;
}
