// Name: crt_iostream.cpp_ios_clear_FUN_00565e94
// Address: 00565e94
// Address Range: [[00565e94, 00565eb4]]
// Convention: __cdecl
// Signature: uint __cdecl crt_iostream_cpp_ios_clear_FUN_00565e94(ios *this_ptr,uint state_flags)

#include "nocturne.h"

uint __cdecl crt_iostream_cpp_ios_clear_FUN_00565e94(ios *this_ptr,uint state_flags)

{
  uint uVar1;
  
  uVar1 = this_ptr->__enabled_exceptions;
  this_ptr->__enabled_exceptions = 0;
  reportStreamError((FileEmbeddedData *)this_ptr,state_flags);
  return uVar1;
}
