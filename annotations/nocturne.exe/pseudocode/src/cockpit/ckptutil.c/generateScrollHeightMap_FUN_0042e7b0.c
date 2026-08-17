// Name: cockpit_ckptutil.c_generateScrollHeightMap_FUN_0042e7b0
// Address: 0042e7b0
// Address Range: [[0042e7b0, 0042e9c2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_0042e7b0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_0042e7b0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)

{
  int *ptr;
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  
  if (bitmap_data != (void *)0x0) {
    if (num_height_rows < (end_x - bitmap_height) + 1) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 1008;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid height array size.");
    }
    ptr = shape_memdbg_cpp_malloc_FUN_00564c18(bitmap_height * 4);
    if (ptr == (int *)0x0) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 1014;
      core_main_c_displayErrorAndQuit_FUN_004c8440("No room for scroll bitmap height table.");
    }
    iVar5 = 0;
    iStack_24 = 0;
    if (0 < bitmap_height) {
      piStack_1c = ptr;
      do {
        iVar4 = start_x + -1;
        for (pbVar3 = (byte *)((int)bitmap_data + iVar5 + (start_x + -1) * end_x);
            (-1 < iVar4 && ((uint)*pbVar3 != transparency_color)); pbVar3 = pbVar3 + -end_x) {
          iVar4 = iVar4 + -1;
        }
        *piStack_1c = iVar4 + 1;
        if (iStack_24 <= iVar4) {
          iStack_24 = iVar4;
        }
        piStack_1c = piStack_1c + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < bitmap_height);
    }
    *height_output = iStack_24;
    iStack_14 = 1;
    if (1 < num_height_rows) {
      iVar5 = bitmap_height + -1;
      do {
        piStack_18 = height_output + 1;
        iVar4 = start_x + -1;
        for (pbVar3 = (byte *)((int)bitmap_data + iStack_14 + iVar5 + (start_x + -1) * end_x);
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
        iStack_14 = iStack_14 + 1;
        *piStack_18 = iVar2;
        height_output = piStack_18;
      } while (iStack_14 < num_height_rows);
    }
    operator_delete(ptr);
  }
  return;
}
