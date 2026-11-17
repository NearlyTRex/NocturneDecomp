// Name: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0
// Address: 00530aa0
// Address Range: [[00530aa0, 005311d9]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_00530aa0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  C3DSLight *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float afStackY_10c8 [1013];
  CVector3f *input;
  float local_e0;
  float local_dc;
  float local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  CVector3f local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a4;
  float local_a0 [2];
  CVector3f local_98;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c [4];
  float local_6c;
  CVector3f local_68;
  float local_5c;
  float local_58 [2];
  CVector3f local_50;
  CVector3f local_44 [3];
  int local_18;
  int local_14;
  
  bVar9 = 0;
  if (position == (CVector3f *)0x0) {
    g_INT_0200e3c0 = (int)position;
    if (0 < g_INT_01fc9608) {
      iVar8 = g_INT_01fc9608 * 4;
      iVar5 = 0;
      iVar6 = 0;
      do {
        iVar7 = iVar6;
        if (*(int *)(*(int *)((int)g_CDemonLight_PTR_ARRAY_01fc960c + iVar5) + 0x1cb4) != 0) {
          iVar7 = iVar6 + 4;
          g_INT_0200e3c0 = g_INT_0200e3c0 + 1;
          *(int *)((int)g_CDemonLight_PTR_ARRAY_0200e3c4 + iVar6) =
               *(int *)((int)g_CDemonLight_PTR_ARRAY_01fc960c + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar6 = iVar7;
      } while (iVar5 < iVar8);
    }
    g_INT_0200e23c = 0;
    if (0 < g_INT_01fc8e84) {
      iVar5 = g_INT_01fc8e84 * 4;
      iVar6 = 0;
      iVar8 = 0;
      do {
        iVar7 = iVar8;
        if (*(int *)(*(int *)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar6) + 0x1cb4) != 0) {
          iVar7 = iVar8 + 4;
          g_INT_0200e23c = g_INT_0200e23c + 1;
          *(int *)((int)g_CDemonLight_PTR_ARRAY_0200e240 + iVar8) =
               *(int *)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar6);
        }
        iVar6 = iVar6 + 4;
        iVar8 = iVar7;
      } while (iVar6 < iVar5);
    }
    g_INT_0200e3d4 = g_INT_01fc961c;
    if (0 < g_INT_01fc961c) {
      iVar6 = g_INT_01fc961c * 4;
      iVar8 = 0;
      do {
        iVar5 = iVar8 + 4;
        *(uint *)((int)&g_INT_0200e3d8 + iVar8) =
             *(uint *)((int)g_CDemonGlobe_PTR_ARRAY_01fc9620 + iVar8);
        iVar8 = iVar5;
      } while (iVar5 < iVar6);
    }
    g_INT_0200e568 = g_INT_01fc9cd4;
    local_cc = g_INT_01fc9cd4;
    if (0 < g_INT_01fc9cd4) {
      iVar6 = g_INT_01fc9cd4 * 4;
      iVar8 = 0;
      do {
        local_cc = iVar8 + 4;
        *(uint *)((int)g_C3DSLight_PTR_ARRAY_0200e56c + iVar8) =
             *(uint *)((int)&g_INT_01fc9cd8 + iVar8);
        iVar8 = local_cc;
      } while (local_cc < iVar6);
    }
  }
  else {
    iVar8 = 0;
    g_INT_0200e3c0 = 0;
    if (0 < g_INT_01fc9608) {
      iVar6 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + iVar6))[1].rect_array[0x61]
             .y_min != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
                              (*(CDemonCamera **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + iVar6),
                               position,orientation,aabb_min,aabb_max), iVar5 != 0)) {
          g_CDemonLight_PTR_ARRAY_0200e3c4[g_INT_0200e3c0] =
               *(CDemonLight **)((int)g_CDemonLight_PTR_ARRAY_01fc960c + iVar6);
          g_INT_0200e3c0 = g_INT_0200e3c0 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar8 < g_INT_01fc9608);
    }
    iVar8 = 0;
    g_INT_0200e23c = 0;
    if (0 < g_INT_01fc8e84) {
      iVar6 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar6))[1].rect_array[0x61]
             .y_min != 0) &&
           (iVar5 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00441720
                              (*(CDemonCamera **)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar6),
                               position,orientation,aabb_min,aabb_max), iVar5 != 0)) {
          g_INT_0200e23c = g_INT_0200e23c + 1;
          (&g_INT_0200e23c)[g_INT_0200e23c] =
               *(int *)((int)g_CDemonLight_PTR_ARRAY_01fc8e88 + iVar6);
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar8 < g_INT_01fc8e84);
    }
    local_14 = 0;
    g_INT_0200e568 = 0;
    if (0 < g_INT_01fc9cd4) {
      local_18 = 0;
      do {
        pCVar1 = *(C3DSLight **)((int)&g_INT_01fc9cd8 + local_18);
        input = &local_68;
        local_5c = (pCVar1->pos).x - position->x;
        local_58[0] = (pCVar1->pos).y - position->y;
        local_58[1] = (pCVar1->pos).z - position->z;
        local_68.x = local_5c;
        *(float *)((int)&local_68 + (uint)bVar9 * -8 + 4) = local_58[(uint)bVar9 * -2];
        *(float *)((int)&local_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             local_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_004495a0
                  (rotation_matrix,input,&local_50);
        local_c8.x = local_50.x;
        *(uint *)((int)&local_c8 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)local_44 + (uint)bVar9 * -8 + -8);
        *(uint *)((int)&local_c8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)local_44 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + -4);
        if (&local_68 != &local_c8) {
          local_68.x = local_c8.x;
          local_68.y = local_c8.y;
          local_68.z = local_c8.z;
        }
        if ((((aabb_min->x <= local_68.x + pCVar1->atten_end) &&
             (aabb_min->y <= local_68.y + pCVar1->atten_end)) &&
            (aabb_min->z <= local_68.z + pCVar1->atten_end)) &&
           (((local_68.x - pCVar1->atten_end <= aabb_max->x &&
             (local_68.y - pCVar1->atten_end <= aabb_max->y)) &&
            (local_68.z - pCVar1->atten_end <= aabb_max->z)))) {
          g_C3DSLight_PTR_ARRAY_0200e56c[g_INT_0200e568] = pCVar1;
          g_INT_0200e568 = g_INT_0200e568 + 1;
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + 4;
      } while (local_14 < g_INT_01fc9cd4);
    }
    iVar8 = 0;
    g_INT_0200e3d4 = 0;
    if (0 < g_INT_01fc961c) {
      iVar6 = 0;
      do {
        iVar5 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00448c90
                          (*(CDemonGlobe **)((int)g_CDemonGlobe_PTR_ARRAY_01fc9620 + iVar6),position
                           ,rotation_matrix,aabb_min,aabb_max);
        if (iVar5 != 0) {
          (&g_INT_0200e3d8)[g_INT_0200e3d4] =
               *(int *)((int)g_CDemonGlobe_PTR_ARRAY_01fc9620 + iVar6);
          g_INT_0200e3d4 = g_INT_0200e3d4 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar8 < g_INT_01fc961c);
    }
    iVar8 = 0;
    local_cc = g_INT_01fc9ad4;
    if (0 < g_INT_01fc9ad4) {
      iVar6 = 0;
      do {
        iVar5 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00448c90
                          (*(CDemonGlobe **)((int)g_CDemonGlobe_PTR_ARRAY_01fc9ad8 + iVar6),position
                           ,rotation_matrix,aabb_min,aabb_max);
        local_cc = 0;
        if (iVar5 != 0) {
          local_cc = *(int *)((int)g_CDemonGlobe_PTR_ARRAY_01fc9ad8 + iVar6);
          (&g_INT_0200e3d8)[g_INT_0200e3d4] = local_cc;
          g_INT_0200e3d4 = g_INT_0200e3d4 + 1;
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar8 < g_INT_01fc9ad4);
    }
    if (0 < g_INT_0200e568) {
      local_e0 = aabb_max->x - aabb_min->x;
      local_dc = aabb_max->y - aabb_min->y;
      local_d8 = aabb_max->z - aabb_min->z;
      local_98.x = local_e0;
      *(uint *)((int)&local_98 + (uint)bVar9 * -8 + 4) =
           *(uint *)((int)&stack0xffffff24 + (uint)bVar9 * -8);
      *(uint *)((int)&local_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
           *(uint *)((int)&stack0xffffff28 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530(rotation_matrix,&local_98,local_44);
      local_a4 = local_44[0].x;
      local_a0[(uint)bVar9 * -2] = *(float *)((int)local_44 + (uint)bVar9 * -8 + 4);
      local_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
           *(float *)((int)local_44 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
      local_80 = position->x + local_a4;
      local_7c[0] = position->y + local_a0[0];
      local_7c[1] = position->z + local_a0[1];
      local_b4 = 0.0;
      local_b8 = 0.0;
      local_bc = 0.0;
      local_84 = 0.0;
      local_88 = 0.0;
      local_8c = 0.0;
      local_7c[2] = local_80;
      local_7c[(uint)bVar9 * -2 + 3] = local_7c[(uint)bVar9 * -2];
      local_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
           local_7c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
      iVar8 = 0;
      if (0 < g_INT_0200e568) {
        iVar6 = 0;
        do {
          iVar5 = *(int *)((int)g_C3DSLight_PTR_ARRAY_0200e56c + iVar6);
          if ((*(uint *)(iVar5 + 0x11d4) & 0x7fffffff) == 0) {
            local_8c = *(float *)(iVar5 + 0x11c4) + local_8c;
            local_88 = *(float *)(iVar5 + 0x11c8) + local_88;
            local_84 = *(float *)(iVar5 + 0x11cc) + local_84;
            iVar8 = iVar8 + 1;
          }
          else {
            fVar4 = *(float *)(iVar5 + 0x104) - local_7c[2];
            fVar2 = *(float *)(iVar5 + 0x108) - local_7c[3];
            fVar3 = *(float *)(iVar5 + 0x10c) - local_6c;
            fVar2 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
            if (fVar2 <= *(float *)(iVar5 + 0x11d8)) {
              fVar2 = (1.0 - (float)(((int)fVar2 >> 1) + g_INT_01caf5b4) *
                             *(float *)(iVar5 + 0x11dc)) * 0.666f;
              fVar3 = (float)2;
              local_bc = fVar2 * *(float *)(iVar5 + 0x11c4) * fVar3 + local_bc;
              local_b8 = fVar2 * *(float *)(iVar5 + 0x11c8) * fVar3 + local_b8;
              local_b4 = fVar2 * *(float *)(iVar5 + 0x11cc) * fVar3 + local_b4;
            }
          }
          iVar6 = iVar6 + 4;
        } while (iVar6 < g_INT_0200e568 * 4);
      }
      if (iVar8 == 0) {
        local_d0 = 0xaaaa;
        local_cc = 0xaaaa;
        local_d4 = 0xaaaa;
      }
      else {
        local_d4 = (int)ROUND(local_8c * 256.0f);
        local_d0 = (int)ROUND(local_88 * 256.0f);
        local_cc = (int)ROUND(local_84 * 256.0f);
      }
      g_INT_0200e8e8 = (int)ROUND(local_bc * 256.0f) + local_d4;
      g_INT_0200e8ec = (int)ROUND(local_b8 * 256.0f) + local_d0;
      local_cc = (int)ROUND(local_b4 * 256.0f) + local_cc;
      if (0xffff < g_INT_0200e8e8) {
        g_INT_0200e8e8 = 0xffff;
      }
      if (0xffff < g_INT_0200e8ec) {
        g_INT_0200e8ec = 0xffff;
      }
      g_INT_0200e8f0 = local_cc;
      if (0xffff < local_cc) {
        g_INT_0200e8f0 = 0xffff;
        return local_cc;
      }
    }
  }
  return local_cc;
}
