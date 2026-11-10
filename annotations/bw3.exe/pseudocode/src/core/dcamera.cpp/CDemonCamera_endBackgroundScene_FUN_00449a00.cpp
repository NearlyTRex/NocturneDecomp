// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00449a00
// Address: 00449a00
// Address Range: [[00449a00, 00449b2b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00449a00(CDemonCamera *this_ptr,int restore_zbuffer)

{
  int *piVar1;
  int byte_count;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  
  bVar8 = 0;
  _DAT_0149ef08 = _DAT_0149ef08 + -1;
  if (_DAT_0149ef08 == 0) {
    engine_matrix_c_popViewport_FUN_0046d320();
    (this_ptr->cached_projection).half_width_fixed = _DAT_01c6b598;
    (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c6b59c;
    (this_ptr->cached_projection).center_x_fixed = _DAT_01c6b5a0;
    uVar2 = DAT_005fba1c;
    (this_ptr->cached_projection).center_y_fixed = _DAT_01c6b5a4;
    DAT_005fba20 = _DAT_0149ef0c;
    _DAT_01c6cee8 = _DAT_0149ef10;
    puVar5 = (uint *)&DAT_0149ef14;
    puVar6 = (uint *)&DAT_01c5faec;
    for (uVar2 = uVar2 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
      puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + (uint)bVar8 * -2 + 1);
      puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
    }
    _DAT_01c6af74 = _DAT_014a01d4;
    _DAT_01c6af80 = _DAT_014a01d8;
    _DAT_01c6af8c = _DAT_014a01dc;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        iVar7 = 0;
        do {
          iVar4 = this_ptr->framebuffer_width * iVar3;
          piVar1 = (int *)(&DAT_01c60dac + iVar7);
          byte_count = this_ptr->framebuffer_width * 4;
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00471271
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*piVar1 + byte_count),byte_count);
        } while (iVar3 < this_ptr->framebuffer_height);
      }
      if (_DAT_01c6cee8 != 0) {
        engine_special_cpp_masterZBuffer_FUN_00566350(0);
        return;
      }
    }
  }
  return;
}
