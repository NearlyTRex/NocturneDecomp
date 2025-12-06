// Name: cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0
// Address: 00432df0
// Address Range: [[00432df0, 00433022]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_generateScrollHeightMap_FUN_00432df0(void * bitmap_data, int end_x, int start_x, int bitmap_height, int * height_output, int num_height_rows, int transparency_color)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_generateScrollHeightMap_FUN_00432df0
          (void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,
          int num_height_rows,int transparency_color)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int *in_stack_00000020;
  int in_stack_00000024;
  int local_30;
  int local_18;
  int *local_14;
  int *local_10;
  int *piVar8;
  
  if (bitmap_data != (void *)0x0) {
    if (num_height_rows < (end_x - bitmap_height) + 1) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0x3f8;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid height array size.");
    }
    pvVar1 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (bitmap_height * 4,"..\\cockpit\\ckptutil.c",0x3fc);
    if (pvVar1 == (void *)0x0) {
      g_CurrentFilename = "..\\cockpit\\ckptutil.c";
      g_CurrentLineNumber = 0x3fe;
      core_main_c_displayErrorAndQuit_FUN_00506f10("No room for scroll bitmap height table.");
    }
    iVar7 = 0;
    local_18 = 0;
    if (0 < bitmap_height) {
      local_10 = local_14;
      do {
        iVar3 = num_height_rows + -1;
        for (pbVar5 = (byte *)(local_30 + (num_height_rows + -1) * end_x + iVar7);
            (-1 < iVar3 && ((uint)*pbVar5 != transparency_color)); pbVar5 = pbVar5 + -end_x) {
          iVar3 = iVar3 + -1;
        }
        *local_10 = iVar3 + 1;
        if (local_18 <= iVar3) {
          local_18 = iVar3;
        }
        local_10 = local_10 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < bitmap_height);
    }
    *in_stack_00000020 = local_18;
    iVar7 = 1;
    if (1 < in_stack_00000024) {
      iVar3 = bitmap_height + -1;
      piVar8 = in_stack_00000020 + 1;
      do {
        iVar6 = num_height_rows + -1;
        for (pbVar5 = (byte *)(iVar3 + (num_height_rows + -1) * end_x + local_30 + iVar7);
            (-1 < iVar6 && ((uint)*pbVar5 != transparency_color)); pbVar5 = pbVar5 + -end_x) {
          iVar6 = iVar6 + -1;
        }
        iVar4 = 0;
        piVar2 = local_14;
        if (0 < iVar3) {
          do {
            iVar4 = iVar4 + 1;
            *piVar2 = piVar2[1];
            piVar2 = piVar2 + 1;
          } while (iVar4 < iVar3);
        }
        iVar4 = 0;
        local_14[bitmap_height + -1] = iVar6 + 1;
        iVar6 = 0;
        piVar2 = local_14;
        if (0 < bitmap_height) {
          do {
            if (iVar4 <= *piVar2) {
              iVar4 = *piVar2;
            }
            iVar6 = iVar6 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar6 < bitmap_height);
        }
        iVar7 = iVar7 + 1;
        *piVar8 = iVar4;
        piVar8 = piVar8 + 1;
      } while (iVar7 < in_stack_00000024);
    }
    g_CurrentDebugFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentDebugLine = 0x439;
    shape_memdbg_cpp_debugFree_FUN_0050f210(local_14);
  }
  return;
}
