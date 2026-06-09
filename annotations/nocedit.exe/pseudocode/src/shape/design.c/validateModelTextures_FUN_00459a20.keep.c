// Name: shape_design.c_validateModelTextures_FUN_00459a20
// Address: 00459a20
// MANUAL RECONSTRUCTION
// Address Range: [[00459a20, 00459dd9]]
// Convention: __cdecl
// Signature: int __cdecl shape_design_c_validateModelTextures_FUN_00459a20(char *directory_path,int mode)

#include "nocturne.h"

int __cdecl shape_design_c_validateModelTextures_FUN_00459a20(char *directory_path,int mode)

{
  int iVar1;
  bool bVar3;
  uint uVar4;
  int iVar2;
  char *pcVar5;
  bool bVar7;
  char local_3fcc [16000];
  char local_14c [200];
  char local_84 [80];
  int local_34;
  int local_20;
  int local_1c;
  int local_14;
  
  if ((mode == 0) || (mode == 1)) {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Checking texture files...",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    local_14 = 0;
    for (local_1c = 0; local_1c < 200; local_1c = local_1c + 1) {
      local_3fcc[local_1c * 0x50] = '\0';
    }
    for (local_1c = 0; local_1c < g_PolygonCount; local_1c = local_1c + 1) {
      strcpy(local_84,g_ModelPolygonData[local_1c].texture_name);
      bVar7 = local_84[0] == '\0';
      if (mode == 1) {
        pcVar5 = strchr(local_84,'.');
        if (pcVar5 != (char *)0x0) {
          strcpy(pcVar5,".TGA");
        }
      }
      uVar4 = engine_dosio_cpp_getFileSize_FUN_00481880(directory_path,local_84);
      bVar3 = false;
      if (mode == 0) {
        if (uVar4 < 0x4000) {
          if (uVar4 < 0x400) {
            if (uVar4 != 0x100) goto LAB_00459b94;
          }
          else if ((0x400 < uVar4) && (uVar4 != 0x1000)) {
LAB_00459b94:
            bVar3 = true;
          }
        }
        else if (0x4000 < uVar4) {
          if (uVar4 < 0x40000) {
            if (uVar4 != 0x10000) goto LAB_00459b94;
          }
          else if ((0x40000 < uVar4) && (uVar4 != 0xffffffff)) goto LAB_00459b94;
        }
      }
      if ((uVar4 == 0xffffffff) || (bVar3)) {
        bVar3 = false;
        for (local_34 = 0; local_34 < local_14; local_34 = local_34 + 1) {
          iVar2 = _strcmp(local_84,local_3fcc + local_34 * 0x50);
          if (iVar2 == 0) {
            bVar3 = true;
            break;
          }
        }
        if ((!bVar3) || (bVar7)) {
          if ((local_14 < 200) && (!bVar7)) {
            strcpy(local_3fcc + local_14 * 0x50,local_84);
          }
          iVar1 = local_14 + 1;
          if (iVar1 == 1) {
            wincore_windll_cpp_clearScreen_FUN_005b3e70();
            engine_2d_c_drawText_FUN_00401fd0("WARNING: The following textures were invalid:",0,0);
          }
          if (bVar7) {
            _sprintf(local_14c,"  NO TEXTURE    (object not mapped)");
            engine_2d_c_drawText_FUN_00401fd0(local_14c,0,(local_14 + 2) * 0xb);
            local_14 = iVar1;
          }
          else if (uVar4 == 0xffffffff) {
            _sprintf(local_14c,"  %-12s  (texture not found)",local_84);
            engine_2d_c_drawText_FUN_00401fd0(local_14c,0,(local_14 + 2) * 0xb);
            local_14 = iVar1;
          }
          else {
            _sprintf(local_14c,"  %-12s  (invalid texture size)",local_84)
            ;
            engine_2d_c_drawText_FUN_00401fd0(local_14c,0,(local_14 + 2) * 0xb);
            local_14 = iVar1;
          }
        }
        g_ModelPolygonData[local_1c].texture_name[0] = '\0';
      }
    }
    if (local_14 != 0) {
      engine_2d_c_drawText_FUN_00401fd0("Hit a key...",0,(local_14 + 3) * 0xb);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    local_20 = local_14;
  }
  else {
    local_20 = -1;
  }
  return local_20;
}
