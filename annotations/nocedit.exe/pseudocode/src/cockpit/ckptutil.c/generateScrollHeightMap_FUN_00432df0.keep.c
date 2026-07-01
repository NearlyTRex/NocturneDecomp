// Name: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
// Address: 00432df0
// MANUAL RECONSTRUCTION
// Address Range: [[00432df0, 00433022]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)

{
  int *ptr;
  byte *pbVar1;
  int iVar3;
  int iVar2;
  int iVar6;
  byte *pbVar3;
  int iVar4;
  int iVar7;
  int iVar5;
  int local_24;
  int local_14;
  
  if (bitmap_data != (void *)0x0) {
    if (num_height_rows < (end_x - bitmap_height) + 1) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 1016;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid height array size.");
    }
    ptr = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                    (bitmap_height * 4,"..\\cockpit\\ckptutil.c",1020);
    if (ptr == (int *)0x0) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 1022;
      core_main_c_displayErrorAndQuit_FUN_00506f10("No room for scroll bitmap height table.");
    }
    local_24 = 0;
    for (iVar5 = 0; iVar5 < bitmap_height; iVar5 = iVar5 + 1) {
      iVar3 = start_x + -1;
      for (pbVar3 = (byte *)bitmap_data + iVar5 + (start_x + -1) * end_x;
          (-1 < iVar3 && ((uint)*pbVar3 != transparency_color)); pbVar3 = pbVar3 + -end_x) {
        iVar3 = iVar3 + -1;
      }
      ptr[iVar5] = iVar3 + 1;
      if (local_24 <= iVar3) {
        local_24 = iVar3;
      }
    }
    *height_output = local_24;
    local_14 = 1;
    if (1 < num_height_rows) {
      iVar3 = bitmap_height + -1;
      do {
        height_output = height_output + 1;
        iVar7 = start_x + -1;
        for (pbVar1 = (byte *)bitmap_data + local_14 + iVar3 + (start_x + -1) * end_x;
            (-1 < iVar7 && ((uint)*pbVar1 != transparency_color)); pbVar1 = pbVar1 + -end_x) {
          iVar7 = iVar7 + -1;
        }
        for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
          ptr[iVar2] = ptr[iVar2 + 1];
        }
        iVar6 = 0;
        ptr[bitmap_height + -1] = iVar7 + 1;
        for (iVar4 = 0; iVar4 < bitmap_height; iVar4 = iVar4 + 1) {
          if (iVar6 <= ptr[iVar4]) {
            iVar6 = ptr[iVar4];
          }
        }
        local_14 = local_14 + 1;
        *height_output = iVar6;
      } while (local_14 < num_height_rows);
    }
    g_CurrentDebugFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentDebugLine = 0x439;
    shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
  }
  return;
}
