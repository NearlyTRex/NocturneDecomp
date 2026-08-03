// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50
// Address: 00440c50
// Address Range: [[00440c50, 00440d3b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera *this_ptr,int restore_zbuffer)

{
  int iVar1;
  int byte_count;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  _DAT_0140efa8 = _DAT_0140efa8 + -1;
  if (_DAT_0140efa8 == 0) {
    DAT_005b7624 = _DAT_0140efac;
    _DAT_01c02594 = _DAT_0140efb0;
    puVar5 = (uint *)&DAT_0140efb4;
    puVar6 = (uint *)&DAT_01bd2fa0;
    for (uVar2 = DAT_005b7620 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)puVar6 = *(byte *)puVar5;
      puVar5 = (uint *)((int)puVar5 + 1);
      puVar6 = (uint *)((int)puVar6 + 1);
    }
    _DAT_01c00624 = _DAT_01410274;
    _DAT_01c00630 = _DAT_01410278;
    _DAT_01c0063c = _DAT_0141027c;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < (int)this_ptr->max_distance) {
        do {
          iVar4 = this_ptr->screen_width * iVar3;
          iVar1 = this_ptr->framebuffer_height + iVar3;
          byte_count = this_ptr->screen_width * 4;
          iVar3 = iVar3 + 1;
          core_dstrender_cpp_memcpyMMX_FUN_00465341
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     (void *)(*(int *)(&DAT_01bd4260 + iVar1 * 4) + byte_count),byte_count);
        } while (iVar3 < (int)this_ptr->max_distance);
      }
      if (_DAT_01c02594 != 0) {
        engine_special_cpp_masterZBuffer_FUN_00532c70(0);
        return;
      }
    }
  }
  return;
}
