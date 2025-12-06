// Name: cockpit_ckptutil.c_rotateBitmap_FUN_00434870
// Address: 00434870
// Address Range: [[00434870, 00434a41]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_rotateBitmap_FUN_00434870(uchar * source_data, int width, int height, int bytes_per_pixel)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_rotateBitmap_FUN_00434870
          (uchar *source_data,int width,int height,int bytes_per_pixel)

{
  uint *ptr;
  void *pvVar1;
  uint uVar2;
  byte *puVar3;
  uint *puVar4;
  int size;
  byte *puVar5;
  uint *puVar6;
  BADSPACEBASE *in_ESP;
  uint uVar7;
  uint *puVar8;
  uint unaff_EDI;
  byte *puVar9;
  uint *puVar10;
  byte bVar11;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint local_14;
  
  bVar11 = 0;
  ptr = (uint *)(width * bytes_per_pixel);
  size = width * height * bytes_per_pixel;
  pvVar1 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(size,"..\\cockpit\\ckptutil.c",0x807);
  if (pvVar1 == (void *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffff8c,"Unable to allocate %u bytes for temporary rotated bitmap.",size);
    g_CurrentLineNumber = 0x80a;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffff90);
  }
  if (bytes_per_pixel == 1) {
    uVar7 = 0;
    if (in_stack_00000018 != 0) {
      puVar9 = (byte *)0x0;
      do {
        puVar5 = (byte *)((int)ptr + (in_stack_00000018 - uVar7) + -1);
        uVar2 = 0;
        puVar3 = puVar9;
        if (unaff_EDI != 0) {
          do {
            puVar3 = puVar3 + 1;
            *puVar5 = *puVar3;
            uVar2 = uVar2 + 1;
            puVar5 = puVar5 + in_stack_00000018;
          } while (uVar2 < unaff_EDI);
        }
        uVar7 = uVar7 + 1;
        puVar9 = puVar9 + unaff_EDI;
      } while (uVar7 < in_stack_00000018);
    }
  }
  else {
    local_14 = 0;
    if (in_stack_00000018 != 0) {
      do {
        puVar4 = (uint *)(local_14 * unaff_EDI);
        puVar6 = (uint *)((int)ptr + ((in_stack_00000018 - local_14) + -1) * bytes_per_pixel);
        uVar7 = 0;
        if (unaff_EDI != 0) {
          do {
            puVar4 = (uint *)((int)puVar4 + bytes_per_pixel);
            puVar8 = puVar4;
            puVar10 = puVar6;
            for (uVar2 = (uint)bytes_per_pixel >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + (uint)bVar11 * -2 + 1;
              puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
            }
            for (uVar2 = bytes_per_pixel & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(byte *)puVar10 = *(byte *)puVar8;
              puVar8 = (uint *)((int)puVar8 + (uint)bVar11 * -2 + 1);
              puVar10 = (uint *)((int)puVar10 + (uint)bVar11 * -2 + 1);
            }
            uVar7 = uVar7 + 1;
            puVar6 = (uint *)((int)puVar6 + in_stack_00000018 * bytes_per_pixel);
          } while (uVar7 < unaff_EDI);
        }
        local_14 = local_14 + 1;
      } while (local_14 < in_stack_00000018);
    }
  }
  uVar2 = in_stack_00000014 * in_stack_00000018 * bytes_per_pixel;
  puVar4 = ptr;
  for (uVar7 = uVar2 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(uint *)bytes_per_pixel = *puVar4;
    puVar4 = puVar4 + (uint)bVar11 * -2 + 1;
    bytes_per_pixel = (int)(bytes_per_pixel + ((uint)bVar11 * -2 + 1) * 4);
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(byte *)bytes_per_pixel = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + (uint)bVar11 * -2 + 1);
    bytes_per_pixel = (int)(bytes_per_pixel + (uint)bVar11 * -2 + 1);
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\cockpit\\ckptutil.c",0x82b);
  return;
}
