// Name: core_script.cpp_CScript_FUN_00559870
// Address: 00559870
// Address Range: [[00559870, 005598ee]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00559870(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00559870(CScript *this_ptr)

{
  void *ptr;
  
  shape_edittool_cpp_CStrList_clear_FUN_004a2b10((CStrList *)(this_ptr->unk4 + 0x20));
  core_script_cpp_CScript_FUN_005598f0(this_ptr);
  if (*(void **)(this_ptr->unk4 + 8) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(this_ptr->unk4 + 8),"..\\core\\script.cpp",0x1b5);
    this_ptr->unk4[8] = '\0';
    this_ptr->unk4[9] = '\0';
    this_ptr->unk4[10] = '\0';
    this_ptr->unk4[0xb] = '\0';
  }
  ptr = *(void **)(this_ptr->unk4 + 0x14);
  this_ptr->unk4[4] = '\0';
  this_ptr->unk4[5] = '\0';
  this_ptr->unk4[6] = '\0';
  this_ptr->unk4[7] = '\0';
  if (ptr != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\script.cpp",0x1bc);
    this_ptr->unk4[0x14] = '\0';
    this_ptr->unk4[0x15] = '\0';
    this_ptr->unk4[0x16] = '\0';
    this_ptr->unk4[0x17] = '\0';
  }
  this_ptr->unk4[0x10] = '\0';
  this_ptr->unk4[0x11] = '\0';
  this_ptr->unk4[0x12] = '\0';
  this_ptr->unk4[0x13] = '\0';
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&DAT_0310f4b0);
  return;
}
