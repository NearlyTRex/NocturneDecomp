// Name: core_fire.cpp_CCrater_load_FUN_004c4880
// Address: 004c4880
// Address Range: [[004c4880, 004c49bb]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004c4880(CCrater *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  _fscanf(file_handle,"%d,%d,%f,%f\n",this_ptr,this_ptr->unk + 4,this_ptr->unk + 8,
             this_ptr->unk + 0x18);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->unk + 0xc,this_ptr->unk + 0x10,
             this_ptr->unk + 0x14);
  iVar2 = 0;
  pcVar3 = this_ptr->unk + 0x24;
  pcVar4 = this_ptr->unk + 0x20;
  do {
    iVar1 = iVar2 * 0xc;
    iVar2 = iVar2 + 1;
    _fscanf(file_handle,"%f,%f,%f\n",this_ptr->unk + iVar1 + 0x1c,pcVar4,pcVar3);
    pcVar3 = pcVar3 + 0xc;
    pcVar4 = pcVar4 + 0xc;
  } while (iVar2 < 3);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->unk + 0x40,this_ptr->unk + 0x44,
             this_ptr->unk + 0x48);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->unk + 0x4c,this_ptr->unk + 0x50,
             this_ptr->unk + 0x54);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->unk + 0x58,this_ptr->unk + 0x5c,
             this_ptr->unk + 0x60);
  _fscanf(file_handle,"%f,%f,%f\n",this_ptr->unk + 100,this_ptr->unk + 0x68,
             this_ptr->unk + 0x6c);
  return;
}
