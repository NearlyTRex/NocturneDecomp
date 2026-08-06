// Name: cockpit_pkbitmap.cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0
// Address: 004f4bb0
// Address Range: [[004f4bb0, 004f4c7c]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0(CPackedBitmap *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBMFile_FUN_004f4bb0(CPackedBitmap *this_ptr,_FILE *file_handle)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int aiStack_2c [6];
  int iStack_14;
  
  puVar2 = (uint *)0x5be17c;
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
  if ((file_handle->_flag & 0x20) == 0) {
    return;
  }
  g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
  g_CurrentLineNumber = 1181;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Error writing PBM");
  return;
}
