// Name: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
// Address: 00434870
// MANUAL RECONSTRUCTION
// Address Range: [[00434870, 00434a41]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rotateBitmap_FUN_00434870(uchar *source_data,int width,int height,int bytes_per_pixel)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_rotateBitmap_FUN_00434870(uchar *source_data,int width,int height,int bytes_per_pixel)

{
  uint uVar2;
  uchar *ptr;
  uint uVar1;
  uint uVar3;
  uchar *puVar2;
  uchar *puVar5;
  int iVar3;
  uchar *puVar4;
  uchar *puVar8;
  uint uVar5;
  uchar *puVar6;
  int iVar9;
  uchar *puVar7;
  byte bVar8;
  char local_78 [80];
  uint local_28;
  uchar *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  
  bVar8 = 0;
  uVar2 = width * bytes_per_pixel;
  iVar3 = width * height * bytes_per_pixel;
  ptr = (uchar *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar3,"..\\cockpit\\ckptutil.c",0x807);
  if (ptr == (uchar *)0x0) {
    _sprintf(local_78,"Unable to allocate %u bytes for temporary rotated bitmap.",iVar3);
    g_CurrentLineNumber = 0x80a;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_78);
  }
  if (bytes_per_pixel == 1) {
    uVar5 = 0;
    if (height != 0) {
      iVar9 = 0;
      do {
        puVar2 = source_data + iVar9;
        puVar4 = ptr + (height - uVar5) + -1;
        uVar1 = 0;
        if (uVar2 != 0) {
          do {
            *puVar4 = *puVar2;
            uVar1 = uVar1 + 1;
            puVar4 = puVar4 + height;
            puVar2 = puVar2 + 1;
          } while (uVar1 < uVar2);
        }
        uVar5 = uVar5 + 1;
        iVar9 = iVar9 + uVar2;
      } while (uVar5 < (uint)height);
    }
  }
  else {
    local_20 = 0;
    if (height != 0) {
      do {
        puVar8 = ptr + ((height - local_20) + -1) * bytes_per_pixel;
        puVar5 = source_data + local_20 * uVar2;
        local_14 = 0;
        if (uVar2 != 0) {
          do {
            memcpy(puVar8,puVar5,bytes_per_pixel);
            puVar5 = puVar5 + bytes_per_pixel;
            local_14 = local_14 + 1;
            puVar8 = puVar8 + height * bytes_per_pixel;
          } while (local_14 < uVar2);
        }
        local_20 = local_20 + 1;
      } while (local_20 < (uint)height);
    }
  }
  memcpy(source_data,ptr,iVar3);
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\cockpit\\ckptutil.c",0x82b);
  return;
}
