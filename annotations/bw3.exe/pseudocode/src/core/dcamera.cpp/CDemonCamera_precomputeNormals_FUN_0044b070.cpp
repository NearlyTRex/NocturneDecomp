// Name: core_dcamera.cpp_CDemonCamera_precomputeNormals_FUN_0044b070
// Address: 0044b070
// Address Range: [[0044b070, 0044b499]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_precomputeNormals_FUN_0044b070(CDemonCamera *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  byte bVar10;
  int aiStackY_106c [1014];
  int local_88;
  CVector3i local_84;
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
      local_24 = (uint *)g_ARRAY_PTR_01c5faec[local_38 * this_ptr->scale_factor];
      if (1 < this_ptr->display_width) {
        local_30 = local_44 + 0xc;
        local_2c = local_40 + 4;
        iVar4 = local_30;
        do {
          local_24 = local_24 + this_ptr->scale_factor;
          core_dcamera_cpp_CDemonCamera_screenToWorldCoord_FUN_00449eb0
                    (this_ptr,local_28 * this_ptr->scale_factor,local_38 * this_ptr->scale_factor,
                     &local_84);
          local_60.x = local_84.x;
          *(uint *)((int)&local_60 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&local_84 + (uint)bVar10 * -8 + 4);
          *(uint *)((int)&local_60 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&local_84 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          if ((local_60.z != 0x7fffffff) && (local_88 < local_60.z)) {
            local_88 = local_60.z;
          }
          core_dcamera_cpp_CDemonCamera_screenToWorldTransform_FUN_00449f80
                    (this_ptr,&local_60,&local_54);
          local_6c = local_54.x;
          aiStack_68[(uint)bVar10 * -2] = *(int *)((int)&local_54 + (uint)bVar10 * -8 + 4);
          aiStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               *(int *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          puVar7 = (uint *)(local_30 + 0x95648c + (uint)bVar10 * -8);
          *(int *)((int)&g_CVector3i_ARRAY_00956488[0].x + local_30) = local_54.x;
          *puVar7 = *(uint *)((int)&local_54 + (uint)bVar10 * -8 + 4);
          puVar7[(uint)bVar10 * -2 + 1] =
               *(uint *)((int)&local_54 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          if (*local_24 >> 0x18 != 0) {
            core_dcamera_cpp_CDemonCamera_restoreAlphaTransform_FUN_00450820
                      (this_ptr,&local_60,*local_24 >> 0x18,&local_78);
            local_6c = local_78.x;
            aiStack_68[(uint)bVar10 * -2] = *(int *)((int)&local_78 + (uint)bVar10 * -8 + 4);
            aiStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 *(int *)((int)&local_78 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          }
          piVar8 = (int *)(iVar4 + 0x87458c + (uint)bVar10 * -8);
          *(int *)((int)&g_CVector3i_ARRAY_00874588[0].x + iVar4) = local_6c;
          *piVar8 = aiStack_68[(uint)bVar10 * -2];
          piVar8[(uint)bVar10 * -2 + 1] = aiStack_68[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          *(int *)((int)g_INT_ARRAY_00b52a48 + local_2c) = local_60.z;
          uVar9 = *local_24;
          uVar3 = *local_24;
          fVar1 = (float)0.0078740157480314994;
          local_14 = (uint)(ushort)(short)(char)uVar3;
          local_30 = local_30 + 0xc;
          local_28 = local_28 + 1;
          local_2c = local_2c + 4;
          *(float *)((int)&g_CVector3f_ARRAY_00a38388[0].x + iVar4) =
               (float)(short)(char)(*local_24 >> 0x10) * fVar1;
          *(float *)((int)&g_CVector3f_ARRAY_00a38388[0].y + iVar4) =
               (float)(short)(char)(uVar9 >> 8) * fVar1;
          *(float *)((int)&g_CVector3f_ARRAY_00a38388[0].z + iVar4) =
               (float)(short)(char)uVar3 * fVar1;
          iVar4 = iVar4 + 0xc;
        } while (local_28 < this_ptr->display_width);
      }
      local_44 = local_44 + 0xf00;
      local_40 = local_40 + 0x500;
      local_38 = local_38 + 1;
    } while (local_38 < this_ptr->display_height);
  }
  local_18 = local_88;
  this_ptr->max_distance = (float)local_88 * (float)0.00390625;
  core_dcamera_cpp_CDemonCamera_saveBackdrop_FUN_0044f750(this_ptr);
  g_INT_00b9e554 = 0;
  g_INT_012a6558 = 0;
  g_INT_013405b4 = 0;
  if (0x1df < this_ptr->framebuffer_height) {
    local_1c = this_ptr->scale_factor;
    local_48 = local_1c << 2;
    for (; (int)local_1c < this_ptr->framebuffer_height - this_ptr->scale_factor;
        local_1c = local_1c + 1) {
      uVar9 = this_ptr->scale_factor;
      local_34 = uVar9 * 4;
      for (; (int)uVar9 < this_ptr->framebuffer_width + this_ptr->scale_factor * -2;
          uVar9 = uVar9 + 1) {
        if ((g_INT_013405b4 < 10000) && (((uVar9 & 1) != 0 || ((local_1c & 1) != 0)))) {
          iVar4 = *(int *)(*(int *)((int)g_UINT_PTR_ARRAY_01c60dac + local_48) + local_34);
          iVar6 = 0x7fffffff;
          if (iVar4 == 0) {
            iVar4 = 0x7fffffff;
          }
          else {
            iVar4 = (int)(0x7fffffff / (longlong)iVar4);
          }
          uVar3 = iVar4 - g_INT_ARRAY_00b52a48
                          [((int)local_1c >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) * 0x140 +
                           ((int)uVar9 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f))] >> 0x1f;
          if (0x400 < (int)((iVar4 - g_INT_ARRAY_00b52a48
                                     [((int)local_1c >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f))
                                      * 0x140 + ((int)uVar9 >>
                                                (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f))] ^ uVar3
                            ) - uVar3)) {
            iVar5 = 0;
            do {
              uVar3 = iVar4 - g_INT_ARRAY_00b52a48
                              [(((int)local_1c >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) +
                               *(int *)((int)g_INT_ARRAY_005f1810 + iVar5)) * 0x140 +
                               ((int)uVar9 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) +
                               *(int *)((int)g_INT_ARRAY_005f17f0 + iVar5)] >> 0x1f;
              iVar2 = (iVar4 - g_INT_ARRAY_00b52a48
                               [(((int)local_1c >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) +
                                *(int *)((int)g_INT_ARRAY_005f1810 + iVar5)) * 0x140 +
                                ((int)uVar9 >> (g_BIT_INTEGER32_013405b0.bytes[0] & 0x1f)) +
                                *(int *)((int)g_INT_ARRAY_005f17f0 + iVar5)] ^ uVar3) - uVar3;
              if (iVar2 < iVar6) {
                *(int *)(g_INT_013405b4 * 0xc + 0x13405b8) =
                     *(int *)((int)g_INT_ARRAY_005f17f0 + iVar5) +
                     *(int *)((int)g_INT_ARRAY_005f1810 + iVar5) * 0x140;
                iVar6 = iVar2;
              }
              iVar5 = iVar5 + 4;
            } while (iVar5 != 0x20);
            iVar4 = g_INT_013405b4 * 0xc;
            if (*(int *)(iVar4 + 0x13405b8) != 0) {
              *(uint *)(iVar4 + 0x13405bc) = uVar9;
              *(uint *)(iVar4 + 0x13405c0) = local_1c;
              g_INT_013405b4 = g_INT_013405b4 + 1;
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
