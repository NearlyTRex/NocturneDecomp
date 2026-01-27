// Name: core_morph.cpp_CMorphModel_free_FUN_0052a510
// Address: 0052a510
// Address Range: [[0052a510, 0052a573]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_free_FUN_0052a510(CMorphModel * this_ptr)

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_free_FUN_0052a510(CMorphModel *this_ptr)

{
  if (*(void **)this_ptr->unk2 != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(*(void **)this_ptr->unk2,"..\\core\\morph.cpp",0x5c)
    ;
    this_ptr->unk2[0] = '\0';
    this_ptr->unk2[1] = '\0';
    this_ptr->unk2[2] = '\0';
    this_ptr->unk2[3] = '\0';
  }
  if (*(void **)(this_ptr->unk2 + 8) != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(this_ptr->unk2 + 8),"..\\core\\morph.cpp",0x60);
    this_ptr->unk2[8] = '\0';
    this_ptr->unk2[9] = '\0';
    this_ptr->unk2[10] = '\0';
    this_ptr->unk2[0xb] = '\0';
  }
  this_ptr->unk2[4] = '\0';
  this_ptr->unk2[5] = '\0';
  this_ptr->unk2[6] = '\0';
  this_ptr->unk2[7] = '\0';
  this_ptr->unk2[0xc] = '\0';
  this_ptr->unk2[0xd] = '\0';
  this_ptr->unk2[0xe] = '\0';
  this_ptr->unk2[0xf] = '\0';
  this_ptr->unk1[0] = '\0';
  this_ptr->unk1[1] = '\0';
  this_ptr->unk1[2] = '\0';
  this_ptr->unk1[3] = '\0';
  this_ptr->num_points = 0;
  return;
}
