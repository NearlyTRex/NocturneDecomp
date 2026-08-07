// Name: core_dcamera.cpp_CDemonCamera_FUN_004421b0
// Address: 004421b0
// Address Range: [[004421b0, 004425cf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_FUN_004421b0(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_FUN_004421b0(CDemonCamera *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int *piVar10;
  uint uVar11;
  byte bVar12;
  int aiStackY_1064 [1014];
  int local_80;
  CVector3i local_7c;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i local_58;
  int local_4c;
  int aiStack_48 [6];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_1c;
  int local_18;
  uint local_14;
  
  bVar12 = 0;
  aiStack_48[4] = 1;
  local_80 = 0;
  if (1 < this_ptr->display_height) {
    aiStack_48[2] = 0x500;
    aiStack_48[3] = 0xf00;
    do {
      local_28 = 1;
      puVar4 = (uint *)((int)g_ScreenBufferArray
                             [aiStack_48[4] * this_ptr->scale_factor + this_ptr->framebuffer_height]
                       + this_ptr->framebuffer_width * 4);
      if (1 < this_ptr->display_width) {
        aiStack_48[5] = aiStack_48[3] + 0xc;
        local_2c = aiStack_48[2] + 4;
        local_24 = aiStack_48[5];
        do {
          puVar4 = puVar4 + this_ptr->scale_factor;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_004410c0
                    (this_ptr,local_28 * this_ptr->scale_factor,
                     aiStack_48[4] * this_ptr->scale_factor,&local_64);
          local_7c.x = local_64.x;
          *(uint *)((int)&local_7c + (uint)bVar12 * -8 + 4) =
               *(uint *)((int)&local_64 + (uint)bVar12 * -8 + 4);
          *(uint *)((int)&local_7c + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
               *(uint *)((int)&local_64 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          if ((local_7c.z != 0x7fffffff) && (local_80 < local_7c.z)) {
            local_80 = local_7c.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_004411b0
                    (this_ptr,&local_7c,&local_70);
          local_4c = local_70.x;
          aiStack_48[(uint)bVar12 * -2] = *(int *)((int)&local_70 + (uint)bVar12 * -8 + 4);
          aiStack_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
               *(int *)((int)&local_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          puVar9 = (uint *)(aiStack_48[5] + 0x8d927c + (uint)bVar12 * -8);
          *(int *)(aiStack_48[5] + 0x8d9278) = local_70.x;
          *puVar9 = *(uint *)((int)&local_70 + (uint)bVar12 * -8 + 4);
          puVar9[(uint)bVar12 * -2 + 1] =
               *(uint *)((int)&local_70 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          if (*puVar4 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00447910
                      (this_ptr,&local_7c,*puVar4 >> 0x18,&local_58);
            local_4c = local_58.x;
            aiStack_48[(uint)bVar12 * -2] = *(int *)((int)&local_58 + (uint)bVar12 * -8 + 4);
            aiStack_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
                 *(int *)((int)&local_58 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
          }
          piVar10 = (int *)(local_24 + 0x7f737c + (uint)bVar12 * -8);
          *(int *)(local_24 + 0x7f7378) = local_4c;
          *piVar10 = aiStack_48[(uint)bVar12 * -2];
          piVar10[(uint)bVar12 * -2 + 1] = aiStack_48[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          *(int *)(local_2c + 0xac2af8) = local_7c.z;
          uVar11 = *puVar4;
          fVar1 = (float)0.0078740157480314994;
          uVar3 = *puVar4;
          *(float *)((int)&g_CVector3f_ARRAY_009bb178[0].x + local_24) =
               (float)(short)(char)(*puVar4 >> 0x10) * fVar1;
          *(float *)((int)&g_CVector3f_ARRAY_009bb178[0].y + local_24) =
               (float)(short)(char)(uVar11 >> 8) * fVar1;
          local_14 = CONCAT22((short)((uint)local_24 >> 0x10),(short)(char)uVar3);
          aiStack_48[5] = aiStack_48[5] + 0xc;
          local_2c = local_2c + 4;
          iVar5 = local_24 + 0xc;
          *(float *)((int)&g_CVector3f_ARRAY_009bb178[0].z + local_24) =
               (float)(short)(char)uVar3 * fVar1;
          local_28 = local_28 + 1;
          local_24 = iVar5;
        } while (local_28 < this_ptr->display_width);
      }
      aiStack_48[3] = aiStack_48[3] + 0xf00;
      aiStack_48[2] = aiStack_48[2] + 0x500;
      aiStack_48[4] = aiStack_48[4] + 1;
    } while (aiStack_48[4] < this_ptr->display_height);
  }
  local_18 = local_80;
  this_ptr->fixed_point_scale = (float)local_80 * (float)0.00390625;
  core_dcamera_cpp_CDemonCamera_FUN_00446810(this_ptr);
  _DAT_00b0e604 = 0;
  _DAT_01216608 = 0;
  _DAT_012b0664 = 0;
  if (0x1df < (int)this_ptr->max_distance) {
    for (local_1c = this_ptr->scale_factor; uVar11 = this_ptr->scale_factor,
        (int)local_1c < (int)((int)this_ptr->max_distance - uVar11); local_1c = local_1c + 1) {
      local_30 = uVar11 * 4;
      for (; (int)uVar11 < this_ptr->screen_width + this_ptr->scale_factor * -2; uVar11 = uVar11 + 1
          ) {
        if ((_DAT_012b0664 < 10000) && (((uVar11 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar5 = *(int *)((int)g_ZBufferScanlineArray[local_1c + this_ptr->framebuffer_height] +
                          this_ptr->framebuffer_width * 4 + local_30);
          iVar8 = 0x7fffffff;
          if (iVar5 == 0) {
            iVar5 = 0x7fffffff;
          }
          else {
            iVar5 = (int)(0x7fffffff / (longlong)iVar5);
          }
          uVar6 = iVar5 - *(int *)(((int)local_1c >> (DAT_012b0660 & 0x1f)) * 0x500 + 0xac2af8 +
                                  ((int)uVar11 >> (DAT_012b0660 & 0x1f)) * 4);
          uVar3 = (int)uVar6 >> 0x1f;
          if (0x400 < (int)((uVar6 ^ uVar3) - uVar3)) {
            iVar7 = 0;
            do {
              uVar3 = iVar5 - *(int *)((((int)local_1c >> (DAT_012b0660 & 0x1f)) +
                                       *(int *)((int)&DAT_005ad47c + iVar7)) * 0x500 + 0xac2af8 +
                                      (((int)uVar11 >> (DAT_012b0660 & 0x1f)) +
                                      *(int *)((int)&DAT_005ad45c + iVar7)) * 4);
              uVar6 = (int)uVar3 >> 0x1f;
              iVar2 = (uVar3 ^ uVar6) - uVar6;
              if (iVar2 < iVar8) {
                *(int *)(_DAT_012b0664 * 0xc + 0x12b0668) =
                     *(int *)((int)&DAT_005ad47c + iVar7) * 0x140 +
                     *(int *)((int)&DAT_005ad45c + iVar7);
                iVar8 = iVar2;
              }
              iVar7 = iVar7 + 4;
            } while (iVar7 != 0x20);
            iVar5 = _DAT_012b0664 * 0xc;
            if (*(int *)(iVar5 + 0x12b0668) != 0) {
              *(uint *)(iVar5 + 0x12b066c) = uVar11;
              *(uint *)(iVar5 + 0x12b0670) = local_1c;
              _DAT_012b0664 = _DAT_012b0664 + 1;
            }
          }
        }
        local_30 = local_30 + 4;
      }
    }
  }
  return;
}
