// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0043d870
// Address: 0043d870
// Address Range: [[0043d870, 0043dc99]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0043d870(CDemonCamera *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  int aiStackY_106c [1014];
  int local_88;
  int local_84;
  CVector3i local_78;
  int local_6c;
  int aiStack_68 [2];
  CVector3i local_60;
  CVector3i local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  bVar10 = 0;
  local_38 = 1;
  local_88 = 0;
  if (1 < this_ptr->display_height) {
    local_40 = 0x500;
    local_44 = 0xf00;
    do {
      local_28 = 1;
      local_24 = *(uint **)(&DAT_01c2a38c + local_38 * this_ptr->scale_factor * 4);
      if (1 < this_ptr->display_width) {
        local_30 = local_44 + 0xc;
        local_2c = local_40 + 4;
        iVar7 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor;
          core_dcamera_cpp_FUN_0043c6b0
                    (this_ptr,local_28 * this_ptr->scale_factor,local_38 * this_ptr->scale_factor);
          local_60.x = local_84;
          *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4) =
               *(uint *)(&stack0xffffff80 + (uint)bVar10 * -8);
          *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)(&stack0xffffff84 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          if ((local_60.z != 0x7fffffff) && (local_88 < local_60.z)) {
            local_88 = local_60.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_0043c780
                    (this_ptr,&local_60,&local_54);
          local_6c = local_54.x;
          aiStack_68[(uint)bVar10 * -2] = *(int *)((int)&local_54 + (uint)bVar10 * -8 + 4);
          aiStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               *(int *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar8 = (uint *)(local_30 + 0x91e6d8 + (uint)bVar10 * -8);
          *(int *)(local_30 + 0x91e6d4) = local_54.x;
          *puVar8 = *(uint *)((int)&local_54 + (uint)bVar10 * -8 + 4);
          puVar8[(uint)bVar10 * -2 + 1] =
               *(uint *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          if (*local_24 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00443020
                      (this_ptr,&local_60,*local_24 >> 0x18,&local_78);
            local_6c = local_78.x;
            aiStack_68[(uint)bVar10 * -2] = *(int *)((int)&local_78 + (uint)bVar10 * -8 + 4);
            aiStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(int *)((int)&local_78 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          }
          *(int *)(&DAT_0083c7d4 + iVar7) = local_6c;
          *(int *)(&DAT_0083c7d8 + (uint)bVar10 * -8 + iVar7) = aiStack_68[(uint)bVar10 * -2];
          *(int *)((int)(&DAT_0083c7d8 + (uint)bVar10 * -8 + iVar7) + ((uint)bVar10 * -2 + 1) * 4) =
               aiStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          *(int *)(local_2c + 0xb1ac98) = local_60.z;
          uVar9 = *local_24;
          uVar3 = *local_24;
          fVar1 = (float)_DAT_005ce456;
          local_14 = (uint)(ushort)(short)(char)uVar3;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)(iVar7 + 0xa005d4) = (float)(short)(char)(*local_24 >> 0x10) * fVar1;
          *(float *)(iVar7 + 0xa005d8) = (float)(short)(char)(uVar9 >> 8) * fVar1;
          *(float *)(iVar7 + 0xa005dc) = (float)(short)(char)uVar3 * fVar1;
          iVar7 = iVar7 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_44 = local_44 + 0xf00;
      local_40 = local_40 + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  local_18 = local_88;
  this_ptr->max_distance = (float)local_88 * (float)_DAT_005ce44e;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_00441f50(this_ptr);
  _DAT_00b667a4 = 0;
  _DAT_0126e7a8 = 0;
  _DAT_01308804 = 0;
  if (0x1df < this_ptr->framebuffer_height) {
    local_1c = this_ptr->scale_factor;
    local_48 = local_1c << 2;
    for (; (int)local_1c < this_ptr->framebuffer_height - this_ptr->scale_factor;
        local_1c = local_1c + 1) {
      uVar9 = this_ptr->scale_factor;
      local_34 = uVar9 * 4;
      for (; (int)uVar9 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar9 = uVar9 + 1) {
        if ((_DAT_01308804 < 10000) && (((uVar9 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar7 = 0x7fffffff;
          if (*(int *)(*(int *)(&DAT_01c2b64c + local_48) + local_34) == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = (int)(0x7fffffff /
                         (longlong)*(int *)(*(int *)(&DAT_01c2b64c + local_48) + local_34));
          }
          uVar5 = iVar4 - *(int *)(((int)local_1c >> (DAT_01308800 & 0x1f)) * 0x500 + 0xb1ac98 +
                                  ((int)uVar9 >> (DAT_01308800 & 0x1f)) * 4);
          uVar3 = (int)uVar5 >> 0x1f;
          if (0x400 < (int)((uVar5 ^ uVar3) - uVar3)) {
            iVar6 = 0;
            do {
              uVar3 = iVar4 - *(int *)((((int)local_1c >> (DAT_01308800 & 0x1f)) +
                                       *(int *)((int)&DAT_00609fd0 + iVar6)) * 0x500 + 0xb1ac98 +
                                      (((int)uVar9 >> (DAT_01308800 & 0x1f)) +
                                      *(int *)((int)&DAT_00609fb0 + iVar6)) * 4);
              uVar5 = (int)uVar3 >> 0x1f;
              iVar2 = (uVar3 ^ uVar5) - uVar5;
              if (iVar2 < iVar7) {
                *(int *)(_DAT_01308804 * 0xc + 0x1308808) =
                     *(int *)((int)&DAT_00609fb0 + iVar6) +
                     *(int *)((int)&DAT_00609fd0 + iVar6) * 0x140;
                iVar7 = iVar2;
              }
              iVar6 = iVar6 + 4;
            } while (iVar6 != 0x20);
            iVar7 = _DAT_01308804 * 0xc;
            if (*(int *)(iVar7 + 0x1308808) != 0) {
              *(uint *)(iVar7 + 0x130880c) = uVar9;
              *(uint *)(iVar7 + 0x1308810) = local_1c;
              _DAT_01308804 = _DAT_01308804 + 1;
            }
          }
        }
        local_34 = local_34 + 4;
      }
      local_48 = local_48 + 4;
    }
  }
  return;
}
