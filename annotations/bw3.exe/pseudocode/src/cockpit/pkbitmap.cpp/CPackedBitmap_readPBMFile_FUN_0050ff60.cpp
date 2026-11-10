// Name: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60
// Address: 0050ff60
// Address Range: [[0050ff60, 0051015b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

{
  ulong size;
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  byte abStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar10 = 0;
  cockpit_pkbitmap_cpp_FUN_0050f230(this_ptr);
  do {
    iVar1 = _fread(abStack_2c,0x1c,1,file_handle);
    if (iVar1 != 1) goto LAB_0050ffee;
    iVar5 = 4;
    bVar8 = false;
    iVar1 = 0;
    bVar9 = true;
    pbVar6 = abStack_2c;
    pbVar7 = (byte *)0x6036f8;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar8 = *pbVar6 < *pbVar7;
      bVar9 = *pbVar6 == *pbVar7;
      pbVar6 = pbVar6 + (uint)bVar10 * -2 + 1;
      pbVar7 = pbVar7 + (uint)bVar10 * -2 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar1 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (((iVar1 == 0) && (iStack_28 != 0)) && (iStack_24 != 0)) {
      this_ptr->width = iStack_28;
      this_ptr->height = iStack_24;
      if (((iStack_20 != 0) || (iStack_1c != 0)) ||
         ((this_ptr->width + -1 != iStack_18 || (this_ptr->height + -1 != iStack_14))))
      goto LAB_0050ffaa;
      piVar2 = (int *)FUN_005a40df((this_ptr->height + 1) * 4);
      this_ptr->row_offsets = piVar2;
      if (piVar2 != (int *)0x0) {
        iVar1 = _fread(this_ptr->row_offsets,(this_ptr->height + 1) * 4,1,file_handle);
        if (iVar1 == 1) {
          for (iVar1 = 0; iVar1 < this_ptr->height + 1; iVar1 = iVar1 + 1) {
          }
          iVar1 = 0;
          if (0 < this_ptr->height) {
            piVar2 = this_ptr->row_offsets;
            do {
              if (piVar2[1] < *piVar2) goto LAB_0050ffaa;
              iVar1 = iVar1 + 1;
              piVar2 = piVar2 + 1;
            } while (iVar1 < this_ptr->height);
          }
          size = this_ptr->row_offsets[this_ptr->height];
          if (skip_data_load != 0) {
            _fseek(file_handle,size,1);
            return;
          }
          puVar3 = FUN_005a3650(size);
          this_ptr->packed_data = puVar3;
          if (puVar3 == (ushort *)0x0) goto LAB_0050ffcd;
          iVar1 = _fread(puVar3,size,1,file_handle);
          if (iVar1 == 1) {
            for (uVar4 = *this_ptr->row_offsets + (int)this_ptr->packed_data;
                uVar4 < (uint)((int)this_ptr->packed_data + this_ptr->row_offsets[this_ptr->height])
                ; uVar4 = (*(ushort *)(uVar4 + 2) + 3 & 0xfffffffc) + uVar4 + 4) {
            }
            return;
          }
        }
LAB_0050ffee:
        _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
        _DAT_01d71de4 = 0x4b1;
        core_main_c_FUN_004e4330("IO error reading PBM (possibly corrupt file).");
        goto LAB_0050ffaa;
      }
    }
    else {
LAB_0050ffaa:
      _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d71de4 = 0x4b2;
      core_main_c_FUN_004e4330("Corrupt data detected reading PBM.");
    }
LAB_0050ffcd:
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d71de4 = 0x4b3;
    core_main_c_FUN_004e4330("Out of memory reading PBM");
  } while( true );
}
