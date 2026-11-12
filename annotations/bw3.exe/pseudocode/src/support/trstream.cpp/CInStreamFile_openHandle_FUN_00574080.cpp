// Name: support_trstream.cpp_CInStreamFile_openHandle_FUN_00574080
// Address: 00574080
// Address Range: [[00574080, 00574110]]
// Convention: __cdecl
// Signature: undefined4 __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_00574080(CInStreamFile *this_ptr,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl support_trstream_cpp_CInStreamFile_openHandle_FUN_00574080(CInStreamFile *this_ptr,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  _DAT_01d71de0 = "..\\support\\trstream.cpp";
  _DAT_01d71de4 = 0x714;
  core_main_c_FUN_004e4330("Hey, we're using windows handles for low-level file I/O!");
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  this_ptr->position = 0;
  this_ptr->file_handle = (HANDLE)param_2;
  this_ptr->file_size = param_3;
  this_ptr->file_offset = param_4;
  _fseek(this_ptr->file_handle,param_4 + this_ptr->position,0);
  iVar1 = (**(code **)((int)this_ptr->vtable + 0x1c))(this_ptr);
  if (iVar1 != 0) {
    support_trstream_cpp_CInStreamFile_allocBuffer_FUN_00573e00(this_ptr);
    return 1;
  }
  (**(code **)((int)this_ptr->vtable + 0x24))(this_ptr);
  return 0;
}
