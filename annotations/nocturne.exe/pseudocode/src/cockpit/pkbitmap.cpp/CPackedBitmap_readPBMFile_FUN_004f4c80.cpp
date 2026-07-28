// Name: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
// Address: 004f4c80
// Address Range: [[004f4c80, 004f4e36]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

{
  ulong size;
  SIZE_T SVar1;
  int iVar2;
  int *piVar3;
  ushort *buffer;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte abStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  cockpit_pkbitmap_cpp_FUN_004f3f50(this_ptr);
  do {
    SVar1 = _fread(abStack_2c,0x1c,1,file_handle);
    if (SVar1 != 1) goto LAB_004f4d0f;
    iVar4 = 4;
    bVar7 = false;
    iVar2 = 0;
    bVar8 = true;
    pbVar5 = abStack_2c;
    pbVar6 = (byte *)0x5be17c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (((iVar2 == 0) && (iStack_28 != 0)) && (iStack_24 != 0)) {
      this_ptr->width = iStack_28;
      this_ptr->height = iStack_24;
      if (((iStack_20 != 0) || (iStack_1c != 0)) ||
         ((this_ptr->width + -1 != iStack_18 || (this_ptr->height + -1 != iStack_14))))
      goto LAB_004f4cca;
      piVar3 = shape_memdbg_cpp_malloc_FUN_00564c18((this_ptr->height + 1) * 4);
      this_ptr->row_offsets = piVar3;
      if (piVar3 != (int *)0x0) {
        SVar1 = _fread(this_ptr->row_offsets,(this_ptr->height + 1) * 4,1,file_handle);
        if (SVar1 == 1) {
          iVar2 = 0;
          if (0 < this_ptr->height) {
            piVar3 = this_ptr->row_offsets;
            do {
              if (piVar3[1] < *piVar3) goto LAB_004f4cca;
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < this_ptr->height);
          }
          size = this_ptr->row_offsets[this_ptr->height];
          if (skip_data_load != 0) {
            _fseek(file_handle,size,1);
            return;
          }
          buffer = (ushort *)malloc(size);
          this_ptr->packed_data = buffer;
          if (buffer == (ushort *)0x0) goto LAB_004f4ced;
          SVar1 = _fread(buffer,size,1,file_handle);
          if (SVar1 == 1) {
            return;
          }
        }
LAB_004f4d0f:
        PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
        INT_01cc4804 = 0x4b0;
        core_main_c_FUN_004c8440("IO error reading PBM (possibly corrupt file).");
        goto LAB_004f4cca;
      }
    }
    else {
LAB_004f4cca:
      PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
      INT_01cc4804 = 0x4b1;
      core_main_c_FUN_004c8440("Corrupt data detected reading PBM.");
    }
LAB_004f4ced:
    PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    INT_01cc4804 = 0x4b2;
    core_main_c_FUN_004c8440("Out of memory reading PBM");
  } while( true );
}
