// Name: support_trstream.cpp_COutStreamDebug_tell_FUN_00574fa0
// Address: 00574fa0
// Address Range: [[00574fa0, 00574fc8]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamDebug_tell_FUN_00574fa0(COutStreamDebug *this_ptr)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamDebug_tell_FUN_00574fa0(COutStreamDebug *this_ptr)

{
  g_CHAR_PTR_01d71de0 = "..\\support\\trstream.cpp";
  g_INT_01d71de4 = 0xabc;
  core_main_c_displayErrorAndQuit_FUN_004e4330("COutStreamDebug::tell - invalid operation");
  return -1;
}
