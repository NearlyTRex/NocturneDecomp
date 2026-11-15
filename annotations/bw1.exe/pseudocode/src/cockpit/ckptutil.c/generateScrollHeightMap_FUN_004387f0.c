// Name: cockpit_ckptutil.c_generateScrollHeightMap_FUN_004387f0
// Address: 004387f0
// Address Range: [[004387f0, 00438a02]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_004387f0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_generateScrollHeightMap_FUN_004387f0(void *bitmap_data,int end_x,int start_x,int bitmap_height,int *height_output,int num_height_rows,int transparency_color)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iStack_24;
  int *piStack_1c;
  int *piStack_18;
  int iStack_14;
  
  if (bitmap_data != (void *)0x0) {
    if (num_height_rows < (end_x - bitmap_height) + 1) {
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x3d7;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid height array size.");
    }
    piVar1 = (int *)operator_new_array(bitmap_height * 4);
    if (piVar1 == (int *)0x0) {
      _DAT_01d1d400 = "..\\cockpit\\ckptutil.c";
      _DAT_01d1d404 = 0x3dd;
      core_main_c_displayErrorAndQuit_FUN_005030e0("No room for scroll bitmap height table.");
    }
    iVar6 = 0;
    iStack_24 = 0;
    if (0 < bitmap_height) {
      piStack_1c = piVar1;
      do {
        iVar5 = start_x + -1;
        for (pbVar4 = (byte *)((int)bitmap_data + iVar6 + (start_x + -1) * end_x);
            (-1 < iVar5 && ((uint)*pbVar4 != transparency_color)); pbVar4 = pbVar4 + -end_x) {
          iVar5 = iVar5 + -1;
        }
        *piStack_1c = iVar5 + 1;
        if (iStack_24 <= iVar5) {
          iStack_24 = iVar5;
        }
        piStack_1c = piStack_1c + 1;
        iVar6 = iVar6 + 1;
      } while (iVar6 < bitmap_height);
    }
    *height_output = iStack_24;
    iStack_14 = 1;
    if (1 < num_height_rows) {
      iVar6 = bitmap_height + -1;
      do {
        piStack_18 = height_output + 1;
        iVar5 = start_x + -1;
        for (pbVar4 = (byte *)((int)bitmap_data + iStack_14 + iVar6 + (start_x + -1) * end_x);
            (-1 < iVar5 && ((uint)*pbVar4 != transparency_color)); pbVar4 = pbVar4 + -end_x) {
          iVar5 = iVar5 + -1;
        }
        iVar3 = 0;
        piVar2 = piVar1;
        if (0 < iVar6) {
          do {
            iVar3 = iVar3 + 1;
            *piVar2 = piVar2[1];
            piVar2 = piVar2 + 1;
          } while (iVar3 < iVar6);
        }
        iVar3 = 0;
        piVar1[bitmap_height + -1] = iVar5 + 1;
        iVar5 = 0;
        piVar2 = piVar1;
        if (0 < bitmap_height) {
          do {
            if (iVar3 <= *piVar2) {
              iVar3 = *piVar2;
            }
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar5 < bitmap_height);
        }
        iStack_14 = iStack_14 + 1;
        *piStack_18 = iVar3;
        height_output = piStack_18;
      } while (iStack_14 < num_height_rows);
    }
    FUN_005c0344(piVar1);
  }
  return;
}
