// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0
// Address: 0044d8c0
// Address Range: [[0044d8c0, 0044d9eb]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_0044d8c0(CDemonCamera *this_ptr,int restore_zbuffer)

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
  _DAT_01482658 = _DAT_01482658 + -1;
  if (_DAT_01482658 == 0) {
    engine_matrix_c_popViewport_FUN_00483c40();
    (this_ptr->cached_projection).half_width_fixed = _DAT_01c4eff8;
    (this_ptr->cached_projection).neg_half_height_fixed = _DAT_01c4effc;
    (this_ptr->cached_projection).center_x_fixed = _DAT_01c4f000;
    uVar2 = DAT_0061b49c;
    (this_ptr->cached_projection).center_y_fixed = _DAT_01c4f004;
    DAT_0061b4a0 = _DAT_0148265c;
    _DAT_01c50948 = _DAT_01482660;
    puVar5 = (uint *)&DAT_01482664;
    puVar6 = (uint *)&DAT_01c4354c;
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
    _DAT_01c4e9d4 = _DAT_01483924;
    _DAT_01c4e9e0 = _DAT_01483928;
    _DAT_01c4e9ec = _DAT_0148392c;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < this_ptr->framebuffer_height) {
        iVar7 = 0;
        do {
          iVar4 = this_ptr->framebuffer_width * iVar3;
          piVar1 = (int *)(&DAT_01c4480c + iVar7);
          byte_count = this_ptr->framebuffer_width * 4;
          iVar7 = iVar7 + 4;
          iVar3 = iVar3 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_004886f1
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*piVar1 + byte_count),byte_count);
        } while (iVar3 < this_ptr->framebuffer_height);
      }
      if (_DAT_01c50948 != 0) {
        engine_special_cpp_masterZBuffer_FUN_00582a80(0);
        return;
      }
    }
  }
  return;
}
