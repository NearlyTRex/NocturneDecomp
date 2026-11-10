// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070
// Address: 0044b070
// Address Range: [[0044b070, 0044b499]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(CDemonCamera *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(CDemonCamera *this_ptr)

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
  uint local_84;
  uint local_78;
  uint local_6c;
  uint local_60;
  int local_58;
  uint local_54;
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
      local_24 = *(uint **)(&DAT_01c5faec + local_38 * this_ptr->scale_factor * 4);
      if (1 < this_ptr->display_width) {
        local_30 = local_44 + 0xc;
        local_2c = local_40 + 4;
        iVar7 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor;
          core_dcamera_cpp_FUN_00449eb0
                    (this_ptr,local_28 * this_ptr->scale_factor,local_38 * this_ptr->scale_factor);
          local_60 = local_84;
          *(uint *)((int)&stack0xffffffa4 + (uint)bVar10 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffff80 + (uint)bVar10 * -8);
          *(uint *)((int)&stack0xffffffa8 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
               *(uint *)(&stack0xffffff84 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          if ((local_58 != 0x7fffffff) && (local_88 < local_58)) {
            local_88 = local_58;
          }
          core_dcamera_cpp_FUN_00449f80(this_ptr,&stack0xffffffa0);
          local_6c = local_54;
          *(uint *)(&stack0xffffff98 + (uint)bVar10 * -8) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar10 * -8);
          *(uint *)(&stack0xffffff9c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          puVar8 = (uint *)(local_30 + 0x95648c + (uint)bVar10 * -8);
          *(uint *)(local_30 + 0x956488) = local_54;
          *puVar8 = *(uint *)(&stack0xffffffb0 + (uint)bVar10 * -8);
          puVar8[(uint)bVar10 * -2 + 1] =
               *(uint *)(&stack0xffffffb4 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          if (*local_24 >> 0x18 != 0) {
            core_dcamera_cpp_FUN_00450820(this_ptr,&stack0xffffffa0,*local_24 >> 0x18);
            local_6c = local_78;
            *(uint *)(&stack0xffffff98 + (uint)bVar10 * -8) =
                 *(uint *)(&stack0xffffff8c + (uint)bVar10 * -8);
            *(uint *)(&stack0xffffff9c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
                 *(uint *)(&stack0xffffff90 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          }
          puVar8 = (uint *)(iVar7 + 0x87458c + (uint)bVar10 * -8);
          *(uint *)(iVar7 + 0x874588) = local_6c;
          *puVar8 = *(uint *)(&stack0xffffff98 + (uint)bVar10 * -8);
          puVar8[(uint)bVar10 * -2 + 1] =
               *(uint *)(&stack0xffffff9c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
          *(int *)(local_2c + 0xb52a48) = local_58;
          uVar9 = *local_24;
          uVar3 = *local_24;
          fVar1 = (float)_DAT_005b9d86;
          local_14 = (uint)(ushort)(short)(char)uVar3;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)(iVar7 + 0xa38388) = (float)(short)(char)(*local_24 >> 0x10) * fVar1;
          *(float *)(iVar7 + 0xa3838c) = (float)(short)(char)(uVar9 >> 8) * fVar1;
          *(float *)(iVar7 + 0xa38390) = (float)(short)(char)uVar3 * fVar1;
          iVar7 = iVar7 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_44 = local_44 + 0xf00;
      local_40 = local_40 + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  local_18 = local_88;
  this_ptr->max_distance = (float)local_88 * (float)_DAT_005b9d7e;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(this_ptr);
  _DAT_00b9e554 = 0;
  _DAT_012a6558 = 0;
  _DAT_013405b4 = 0;
  if (0x1df < this_ptr->framebuffer_height) {
    local_1c = this_ptr->scale_factor;
    local_48 = local_1c << 2;
    for (; (int)local_1c < this_ptr->framebuffer_height - this_ptr->scale_factor;
        local_1c = local_1c + 1) {
      uVar9 = this_ptr->scale_factor;
      local_34 = uVar9 * 4;
      for (; (int)uVar9 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar9 = uVar9 + 1) {
        if ((_DAT_013405b4 < 10000) && (((uVar9 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar7 = 0x7fffffff;
          if (*(int *)(*(int *)(&DAT_01c60dac + local_48) + local_34) == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = (int)(0x7fffffff /
                         (longlong)*(int *)(*(int *)(&DAT_01c60dac + local_48) + local_34));
          }
          uVar5 = iVar4 - *(int *)(((int)local_1c >> (DAT_013405b0 & 0x1f)) * 0x500 + 0xb52a48 +
                                  ((int)uVar9 >> (DAT_013405b0 & 0x1f)) * 4);
          uVar3 = (int)uVar5 >> 0x1f;
          if (0x400 < (int)((uVar5 ^ uVar3) - uVar3)) {
            iVar6 = 0;
            do {
              uVar3 = iVar4 - *(int *)((((int)local_1c >> (DAT_013405b0 & 0x1f)) +
                                       *(int *)((int)&DAT_005f1810 + iVar6)) * 0x500 + 0xb52a48 +
                                      (((int)uVar9 >> (DAT_013405b0 & 0x1f)) +
                                      *(int *)((int)&DAT_005f17f0 + iVar6)) * 4);
              uVar5 = (int)uVar3 >> 0x1f;
              iVar2 = (uVar3 ^ uVar5) - uVar5;
              if (iVar2 < iVar7) {
                *(int *)(_DAT_013405b4 * 0xc + 0x13405b8) =
                     *(int *)((int)&DAT_005f17f0 + iVar6) +
                     *(int *)((int)&DAT_005f1810 + iVar6) * 0x140;
                iVar7 = iVar2;
              }
              iVar6 = iVar6 + 4;
            } while (iVar6 != 0x20);
            iVar7 = _DAT_013405b4 * 0xc;
            if (*(int *)(iVar7 + 0x13405b8) != 0) {
              *(uint *)(iVar7 + 0x13405bc) = uVar9;
              *(uint *)(iVar7 + 0x13405c0) = local_1c;
              _DAT_013405b4 = _DAT_013405b4 + 1;
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
