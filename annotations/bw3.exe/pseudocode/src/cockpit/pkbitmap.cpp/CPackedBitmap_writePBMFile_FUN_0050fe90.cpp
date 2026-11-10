// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_0050fe90
// Address: 0050fe90
// Address Range: [[0050fe90, 0050ff5c]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0050fe90(CPackedBitmap *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_0050fe90(CPackedBitmap *this_ptr,_FILE *file_handle)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int aiStack_2c [6];
  int iStack_14;
  
  puVar2 = (uint *)0x6036f8;
  piVar3 = aiStack_2c;
  for (iVar1 = 1; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(byte *)piVar3 = *(byte *)puVar2;
    puVar2 = (uint *)((int)puVar2 + 1);
    piVar3 = (uint *)((int)piVar3 + 1);
  }
  aiStack_2c[1] = this_ptr->width;
  aiStack_2c[2] = this_ptr->height;
  aiStack_2c[3] = 0;
  aiStack_2c[4] = 0;
  aiStack_2c[5] = this_ptr->width + -1;
  iStack_14 = this_ptr->height + -1;
  _fwrite(aiStack_2c,0x1c,1,file_handle);
  _fwrite(this_ptr->row_offsets,4,this_ptr->height + 1,file_handle);
  _fwrite(this_ptr->packed_data,this_ptr->row_offsets[this_ptr->height],1,file_handle);
  if (((byte)file_handle[0xc] & 0x20) == 0) {
    return;
  }
  _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
  _DAT_01d71de4 = 0x49e;
  core_main_c_FUN_004e4330("Error writing PBM");
  return;
}
