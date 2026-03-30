// Name: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0054b690
// Address: 0054b690
// MANUAL RECONSTRUCTION
// Address Range: [[0054b690, 0054b85a]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(CPackedBitmap *this_ptr,_FILE *file_handle,int skip_data_load)

{
  SIZE_T SVar1;
  int iVar2;
  void **ppvVar3;
  SIZE_T SVar2;
  void **ppvVar4;
  char *buffer;
  int iVar4;
  int iVar5;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *size;
  
  bVar9 = 0;
  cockpit_pkbitmap_cpp_CPackedBitmap_free_FUN_0054a8e0(this_ptr);
  do {
    SVar1 = _fread(local_2c,0x1c,1,file_handle);
    if (SVar1 != 1) goto LAB_0054b71f;
    iVar4 = 4;
    bVar7 = false;
    iVar2 = 0;
    bVar8 = true;
    pbVar5 = local_2c;
    pbVar6 = (byte *)"PBM\032PBG\032";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
      pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5;
      pbVar6 = pbVar6;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (((iVar2 == 0) && (local_28 != 0)) && (local_24 != 0)) {
      this_ptr->width = local_28;
      this_ptr->height = local_24;
      if (((local_20 != 0) || (local_1c != 0)) ||
         ((this_ptr->width + -1 != local_18 || (this_ptr->height + -1 != local_14))))
      goto LAB_0054b6da;
      ppvVar3 = (void **)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                          ((this_ptr->height + 1) * 4,"..\\cockpit\\pkbitmap.cpp",0x4c6);
      this_ptr->row_pointers = ppvVar3;
      if (ppvVar3 != (void **)0x0) {
        SVar2 = _fread(this_ptr->row_pointers,(this_ptr->height + 1) * 4,1,file_handle);
        if (SVar2 == 1) {
          iVar5 = 0;
          if (0 < this_ptr->height) {
            ppvVar4 = this_ptr->row_pointers;
            do {
              if ((int)ppvVar4[1] < (int)*ppvVar4) goto LAB_0054b6da;
              iVar5 = iVar5 + 1;
              ppvVar4 = ppvVar4 + 1;
            } while (iVar5 < this_ptr->height);
          }
          size = this_ptr->row_pointers[this_ptr->height];
          if (skip_data_load != 0) {
            _fseek(file_handle,(long)size,1);
            return;
          }
          buffer = (char *)shape_memdbg_cpp_debugMalloc_FUN_0050f250
                             ((int)size,"..\\cockpit\\pkbitmap.cpp",0x4de);
          this_ptr->packed_data = (ushort *)buffer;
          if (buffer == (char *)0x0) goto LAB_0054b6fd;
          SVar2 = _fread(buffer,(SIZE_T)size,1,file_handle);
          if (SVar2 == 1) {
            return;
          }
        }
LAB_0054b71f:
        g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
        g_CurrentLineNumber = 0x4ad;
        core_main_c_displayErrorAndQuit_FUN_00506f10("IO error reading PBM (possibly corrupt file).");
        goto LAB_0054b6da;
      }
    }
    else {
LAB_0054b6da:
      g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
      g_CurrentLineNumber = 0x4ae;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Corrupt data detected reading PBM.");
    }
LAB_0054b6fd:
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 0x4af;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory reading PBM");
  } while( true );
}
