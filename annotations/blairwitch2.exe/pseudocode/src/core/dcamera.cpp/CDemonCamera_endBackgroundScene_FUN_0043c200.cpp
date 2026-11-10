// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0043c200
// Address: 0043c200
// Address Range: [[0043c200, 0043c32b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0043c200(CDemonCamera *this_ptr,int restore_zbuffer)

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
  _DAT_01467158 = _DAT_01467158 + -1;
  if (_DAT_01467158 == 0) {
    engine_matrix_c_popViewport_FUN_0046b740();
    (this_ptr->cached_projection).half_width_fixed = _DAT_01c35e38;
    (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c35e3c;
    (this_ptr->cached_projection).center_x_fixed = _DAT_01c35e40;
    uVar2 = DAT_006141bc;
    (this_ptr->cached_projection).center_y_fixed = _DAT_01c35e44;
    DAT_006141c0 = _DAT_0146715c;
    _DAT_01c37788 = _DAT_01467160;
    puVar5 = (uint *)&DAT_01467164;
    puVar6 = (uint *)&DAT_01c2a38c;
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
    _DAT_01c35814 = _DAT_01468424;
    _DAT_01c35820 = _DAT_01468428;
    _DAT_01c3582c = _DAT_0146842c;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        iVar7 = 0;
        do {
          iVar4 = this_ptr->framebuffer_width * iVar3;
          piVar1 = (int *)(&DAT_01c2b64c + iVar7);
          byte_count = this_ptr->framebuffer_width * 4;
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00470201
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*piVar1 + byte_count),byte_count);
        } while (iVar3 < this_ptr->framebuffer_height);
      }
      if (_DAT_01c37788 != 0) {
        engine_special_cpp_masterZBuffer_FUN_00560030(0);
        return;
      }
    }
  }
  return;
}
