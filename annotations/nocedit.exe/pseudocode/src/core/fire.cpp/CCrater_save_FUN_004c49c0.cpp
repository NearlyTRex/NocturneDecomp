// Name: core_fire.cpp_CCrater_save_FUN_004c49c0
// Address: 004c49c0
// Address Range: [[004c49c0, 004c4afa]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_save_FUN_004c49c0(CCrater *this_ptr,_FILE *file_handle)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _fprintf(file_handle,"%d,%d,%f,%f\n",*(uint *)this_ptr->unk,
             *(uint *)(this_ptr->unk + 4),(double)*(float *)(this_ptr->unk + 8),
             (double)*(float *)(this_ptr->unk + 0x18));
  _fprintf(file_handle,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 0xc),
             (double)*(float *)(this_ptr->unk + 0x10),(double)*(float *)(this_ptr->unk + 0x14));
  pcVar4 = this_ptr->unk;
  do {
    pcVar1 = pcVar4 + 0x24;
    pcVar2 = pcVar4 + 0x20;
    pcVar3 = pcVar4 + 0x1c;
    pcVar4 = pcVar4 + 0xc;
    _fprintf(file_handle,"%f,%f,%f\n",(double)*(float *)pcVar3,(double)*(float *)pcVar2,
               (double)*(float *)pcVar1);
  } while (pcVar4 != this_ptr->unk + 0x24);
  _fprintf(file_handle,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 0x40),
             (double)*(float *)(this_ptr->unk + 0x44),(double)*(float *)(this_ptr->unk + 0x48));
  _fprintf(file_handle,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 0x4c),
             (double)*(float *)(this_ptr->unk + 0x50),(double)*(float *)(this_ptr->unk + 0x54));
  _fprintf(file_handle,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 0x58),
             (double)*(float *)(this_ptr->unk + 0x5c),(double)*(float *)(this_ptr->unk + 0x60));
  _fprintf(file_handle,"%f,%f,%f\n",(double)*(float *)(this_ptr->unk + 100),
             (double)*(float *)(this_ptr->unk + 0x68),(double)*(float *)(this_ptr->unk + 0x6c));
  return;
}
