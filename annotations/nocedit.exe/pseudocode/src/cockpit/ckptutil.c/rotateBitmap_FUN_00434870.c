// Name: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
// Address: 00434870
// Address Range: [[00434870, 00434a41]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_rotateBitmap_FUN_00434870 (uchar *source_data,int width,int height,int bytes_per_pixel)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_rotateBitmap_FUN_00434870
          (uchar *source_data,int width,int height,int bytes_per_pixel)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  uchar *puVar6;
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
  local_18 = width * bytes_per_pixel;
  iVar3 = width * height * bytes_per_pixel;
  local_24 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(iVar3,"..\\cockpit\\ckptutil.c",0x807);
  if (local_24 == (uchar *)0x0) {
    _sprintf(local_78,"Unable to allocate %u bytes for temporary rotated bitmap.",iVar3);
    g_CurrentLineNumber = 0x80a;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_78);
  }
  if (bytes_per_pixel == 1) {
    uVar5 = 0;
    if (height != 0) {
      local_28 = local_18;
      iVar3 = 0;
      do {
        puVar2 = source_data + iVar3;
        puVar4 = local_24 + (height - uVar5) + -1;
        uVar1 = 0;
        if (local_18 != 0) {
          do {
            *puVar4 = *puVar2;
            uVar1 = uVar1 + 1;
            puVar4 = puVar4 + height;
            puVar2 = puVar2 + 1;
          } while (uVar1 < local_18);
        }
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + local_18;
      } while (uVar5 < (uint)height);
    }
  }
  else {
    local_20 = 0;
    if (height != 0) {
      local_1c = height * bytes_per_pixel;
      do {
        puVar4 = local_24 + ((height - local_20) + -1) * bytes_per_pixel;
        puVar2 = source_data + local_20 * local_18;
        local_14 = 0;
        if (local_18 != 0) {
          do {
            puVar6 = puVar2;
            puVar7 = puVar4;
            for (uVar5 = (uint)bytes_per_pixel >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(uint *)puVar7 = *(uint *)puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -8 + 4;
              puVar7 = puVar7 + (uint)bVar8 * -8 + 4;
            }
            for (uVar5 = bytes_per_pixel & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
              puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
            }
            puVar2 = puVar2 + bytes_per_pixel;
            local_14 = local_14 + 1;
            puVar4 = puVar4 + local_1c;
          } while (local_14 < local_18);
        }
        local_20 = local_20 + 1;
      } while (local_20 < (uint)height);
    }
  }
  uVar1 = width * height * bytes_per_pixel;
  puVar2 = local_24;
  for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)source_data = *(uint *)puVar2;
    puVar2 = puVar2 + (uint)bVar8 * -8 + 4;
    source_data = source_data + (uint)bVar8 * -8 + 4;
  }
  for (uVar1 = uVar1 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *source_data = *puVar2;
    puVar2 = puVar2 + (uint)bVar8 * -2 + 1;
    source_data = source_data + (uint)bVar8 * -2 + 1;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(local_24,"..\\cockpit\\ckptutil.c",0x82b);
  return;
}
