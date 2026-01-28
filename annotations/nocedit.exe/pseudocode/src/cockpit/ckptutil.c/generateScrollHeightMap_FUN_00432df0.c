// Name: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
// Address: 00432df0
// Address Range: [[00432df0, 00433022]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0 (void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output, int num_height_rows,int transparency_color)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0
          (void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,
          int num_height_rows,int transparency_color)

{
  int *ptr;
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int *local_1c;
  int *local_18;
  int local_14;
  
  if (bitmap_data != (void *)0x0) {
    if (num_height_rows < (end_x - bitmap_height) + 1) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0x3f8;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid height array size.");
    }
    ptr = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                    (bitmap_height * 4,"..\\cockpit\\ckptutil.c",0x3fc);
    if (ptr == (int *)0x0) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0x3fe;
      core_main_c_displayErrorAndQuit_FUN_00506f10("No room for scroll bitmap height table.");
    }
    iVar5 = 0;
    local_24 = 0;
    if (0 < bitmap_height) {
      local_1c = ptr;
      do {
        iVar4 = start_x + -1;
        for (pbVar3 = (byte *)((int)bitmap_data + iVar5 + (start_x + -1) * end_x);
            (-1 < iVar4 && ((uint)*pbVar3 != transparency_color)); pbVar3 = pbVar3 + -end_x) {
          iVar4 = iVar4 + -1;
        }
        *local_1c = iVar4 + 1;
        if (local_24 <= iVar4) {
          local_24 = iVar4;
        }
        local_1c = local_1c + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < bitmap_height);
    }
    *height_output = local_24;
    local_14 = 1;
    if (1 < num_height_rows) {
      iVar5 = bitmap_height + -1;
      do {
        local_18 = height_output + 1;
        iVar4 = start_x + -1;
        for (pbVar3 = (byte *)((int)bitmap_data + local_14 + iVar5 + (start_x + -1) * end_x);
            (-1 < iVar4 && ((uint)*pbVar3 != transparency_color)); pbVar3 = pbVar3 + -end_x) {
          iVar4 = iVar4 + -1;
        }
        iVar2 = 0;
        piVar1 = ptr;
        if (0 < iVar5) {
          do {
            iVar2 = iVar2 + 1;
            *piVar1 = piVar1[1];
            piVar1 = piVar1 + 1;
          } while (iVar2 < iVar5);
        }
        iVar2 = 0;
        ptr[bitmap_height + -1] = iVar4 + 1;
        iVar4 = 0;
        piVar1 = ptr;
        if (0 < bitmap_height) {
          do {
            if (iVar2 <= *piVar1) {
              iVar2 = *piVar1;
            }
            iVar4 = iVar4 + 1;
            piVar1 = piVar1 + 1;
          } while (iVar4 < bitmap_height);
        }
        local_14 = local_14 + 1;
        *local_18 = iVar2;
        height_output = local_18;
      } while (local_14 < num_height_rows);
    }
    g_CurrentDebugFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentDebugLine = 0x439;
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  }
  return;
}
