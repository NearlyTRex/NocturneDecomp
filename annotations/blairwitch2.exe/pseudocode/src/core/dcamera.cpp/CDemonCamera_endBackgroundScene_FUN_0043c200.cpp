// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200
// Address: 0043c200
// Address Range: [[0043c200, 0043c32b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera *this_ptr,int restore_zbuffer)

{
  int *piVar1;
  int byte_count;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte **ppuVar5;
  byte **ppuVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = 0;
  g_INT_01467158 = g_INT_01467158 + -1;
  if (g_INT_01467158 == 0) {
    engine_drender_cpp_popViewport_FUN_0046b740();
    (this_ptr->cached_projection).half_width_fixed = g_INT_01c35e38;
    (this_ptr->cached_projection).neg_half_height_fixed = g_INT_01c35e3c;
    (this_ptr->cached_projection).center_x_fixed = g_INT_01c35e40;
    iVar3 = g_INT_006141bc;
    (this_ptr->cached_projection).center_y_fixed = g_INT_01c35e44;
    g_INT_006141c0 = g_INT_0146715c;
    g_INT_01c37788 = g_INT_01467160;
    ppuVar5 = g_ARRAY_PTR_01467164;
    ppuVar6 = g_ARRAY_PTR_01c2a38c;
    for (uVar2 = iVar3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *ppuVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + (uint)bVar8 * -2 + 1;
      ppuVar6 = ppuVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)ppuVar6 = *(byte *)ppuVar5;
      ppuVar5 = (byte **)((int)ppuVar5 + (uint)bVar8 * -2 + 1);
      ppuVar6 = (byte **)((int)ppuVar6 + (uint)bVar8 * -2 + 1);
    }
    g_BIT_INTEGER32_01c35814.dword = g_INT_01468424;
    g_BIT_INTEGER32_01c35820.dword = g_INT_01468428;
    g_BIT_INTEGER32_01c3582c.dword = g_INT_0146842c;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        iVar7 = 0;
        do {
          iVar4 = this_ptr->framebuffer_width * iVar3;
          piVar1 = (int *)((int)g_UINT_PTR_ARRAY_01c2b64c + iVar7);
          byte_count = this_ptr->framebuffer_width * 4;
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00470201
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*piVar1 + byte_count),byte_count);
        } while (iVar3 < this_ptr->framebuffer_height);
      }
      if (g_INT_01c37788 != 0) {
        engine_special_cpp_masterZBuffer_FUN_00560030(0);
        return;
      }
    }
  }
  return;
}
