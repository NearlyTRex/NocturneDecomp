// Name: core_set.cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0
// Address: 0056d4a0
// Address Range: [[0056d4a0, 0056db79]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

#include "nocturne.h"

int __cdecl core_set_cpp_CDemonSet_gatherVisibleLights_FUN_0056d4a0(CDemonSet *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *aabb_min,CVector3f *aabb_max,CMatrix3x3f *rotation_matrix)

{
  float fVar1;
  float fVar5;
  int iVar5;
  int iVar6;
  int iVar7;
  CVector3f *pCVar7;
  CVector3f *pCVar8;
  int iVar8;
  int iVar10;
  int iVar9;
  int iVar11;
  float local_b8;
  float local_b4;
  float local_b0;
  CVector3f local_ac;
  CVector3f local_a0 [2];
  float local_88;
  float local_84;
  float local_80;
  int local_7c;
  int local_78;
  int local_74;
  CVector3f local_64;
  CVector3f local_58 [3];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float fVar2;
  C3DSLight *pCVar1;
  float fVar4;
  float fVar3;
  
  if (position == (CVector3f *)0x0) {
    g_PrimaryDirectionalLightCount = (int)position;
    if (0 < g_DynamicLightCount) {
      iVar7 = g_DynamicLightCount * 4;
      iVar5 = 0;
      iVar11 = 0;
      do {
        iVar8 = iVar11;
        if (*(int *)(*(int *)((int)g_DynamicLights + iVar5) + 0x1cb4) != 0) {
          iVar8 = iVar11 + 4;
          g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
          *(int *)((int)g_PrimaryDirectionalLights + iVar11) =
               *(int *)((int)g_DynamicLights + iVar5);
        }
        iVar5 = iVar5 + 4;
        iVar11 = iVar8;
      } while (iVar5 < iVar7);
    }
    g_SecondaryDirectionalLightCount = 0;
    if (0 < g_SpotLightCount) {
      iVar11 = g_SpotLightCount * 4;
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar10 = iVar7;
        if (*(int *)(*(int *)((int)g_SpotLightList + iVar6) + 0x1cb4) != 0) {
          iVar10 = iVar7 + 4;
          g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
          *(int *)((int)g_SecondaryDirectionalLights + iVar7) =
               *(int *)((int)g_SpotLightList + iVar6);
        }
        iVar6 = iVar6 + 4;
        iVar7 = iVar10;
      } while (iVar6 < iVar11);
    }
    g_GlobeLightCount = g_CoronaGlobeCount;
    if (0 < g_CoronaGlobeCount) {
      iVar11 = g_CoronaGlobeCount * 4;
      iVar7 = 0;
      do {
        iVar10 = iVar7 + 4;
        *(uint *)((int)g_GlobeLights + iVar7) = *(uint *)((int)g_CoronaGlobes + iVar7);
        iVar7 = iVar10;
      } while (iVar10 < iVar11);
    }
    g_ColorCorrectionCount = g_OmniLightCount;
    iVar7 = g_OmniLightCount;
    if (0 < g_OmniLightCount) {
      iVar10 = g_OmniLightCount * 4;
      iVar11 = 0;
      do {
        iVar7 = iVar11 + 4;
        *(uint *)((int)g_VisibleOmniLights + iVar11) =
             *(uint *)((int)g_OmniLights + iVar11);
        iVar11 = iVar7;
      } while (iVar7 < iVar10);
    }
  }
  else {
    local_24 = 0;
    g_PrimaryDirectionalLightCount = 0;
    if (0 < g_DynamicLightCount) {
      iVar9 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_DynamicLights + iVar9))[1].rect_array[0x61].right != 0) &&
           (iVar7 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                              (*(CDemonCamera **)((int)g_DynamicLights + iVar9),position,orientation
                               ,aabb_min,aabb_max), iVar7 != 0)) {
          g_PrimaryDirectionalLights[g_PrimaryDirectionalLightCount] =
               *(CDemonLight **)((int)g_DynamicLights + iVar9);
          g_PrimaryDirectionalLightCount = g_PrimaryDirectionalLightCount + 1;
        }
        local_24 = local_24 + 1;
        iVar9 = iVar9 + 4;
      } while (local_24 < g_DynamicLightCount);
    }
    local_20 = 0;
    g_SecondaryDirectionalLightCount = 0;
    if (0 < g_SpotLightCount) {
      iVar7 = 0;
      do {
        if (((*(CDemonCamera **)((int)g_SpotLightList + iVar7))[1].rect_array[0x61].right != 0) &&
           (iVar11 = core_dcamera_cpp_CDemonCamera_isBoundingBoxVisible_FUN_00452180
                               (*(CDemonCamera **)((int)g_SpotLightList + iVar7),position,
                                orientation,aabb_min,aabb_max), iVar11 != 0)) {
          g_SecondaryDirectionalLights[g_SecondaryDirectionalLightCount] =
               *(CDemonLight **)((int)g_SpotLightList + iVar7);
          g_SecondaryDirectionalLightCount = g_SecondaryDirectionalLightCount + 1;
        }
        local_20 = local_20 + 1;
        iVar7 = iVar7 + 4;
      } while (local_20 < g_SpotLightCount);
    }
    local_1c = 0;
    g_ColorCorrectionCount = 0;
    if (0 < g_OmniLightCount) {
      local_2c = 0;
      do {
        pCVar1 = *(C3DSLight **)((int)g_OmniLights + local_2c);
        local_64.x = (pCVar1->pos).x - position->x;
        local_64.y = (pCVar1->pos).y - position->y;
        local_64.z = (pCVar1->pos).z - position->z;
        pCVar7 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                           (rotation_matrix,local_a0,&local_64);
        if (&local_64 != pCVar7) {
          local_64.x = pCVar7->x;
          local_64.y = pCVar7->y;
          local_64.z = pCVar7->z;
        }
        if ((((aabb_min->x <= local_64.x + pCVar1->atten_end) &&
             (aabb_min->y <= local_64.y + pCVar1->atten_end)) &&
            (aabb_min->z <= local_64.z + pCVar1->atten_end)) &&
           (((local_64.x - pCVar1->atten_end <= aabb_max->x &&
             (local_64.y - pCVar1->atten_end <= aabb_max->y)) &&
            (local_64.z - pCVar1->atten_end <= aabb_max->z)))) {
          g_VisibleOmniLights[g_ColorCorrectionCount] = pCVar1;
          g_ColorCorrectionCount = g_ColorCorrectionCount + 1;
        }
        local_2c = local_2c + 4;
        local_1c = local_1c + 1;
      } while (local_1c < g_OmniLightCount);
    }
    local_28 = 0;
    g_GlobeLightCount = 0;
    iVar7 = g_CoronaGlobeCount;
    if (0 < g_CoronaGlobeCount) {
      iVar11 = 0;
      do {
        iVar7 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                          (*(CDemonGlobe **)((int)g_CoronaGlobes + iVar11),position,rotation_matrix,
                           aabb_min,aabb_max);
        if (iVar7 != 0) {
          g_GlobeLights[g_GlobeLightCount] = *(CDemonGlobe **)((int)g_CoronaGlobes + iVar11);
          g_GlobeLightCount = g_GlobeLightCount + 1;
        }
        iVar7 = local_28 + 1;
        iVar11 = iVar11 + 4;
        local_28 = iVar7;
      } while (iVar7 < g_CoronaGlobeCount);
    }
    local_18 = 0;
    if (0 < g_VisibleCoronaGlobeCount) {
      iVar11 = 0;
      do {
        iVar10 = core_dglobe_cpp_CDemonGlobe_intersectAABB_FUN_00471770
                           (*(CDemonGlobe **)((int)g_VisibleCoronaGlobes + iVar11),position,
                            rotation_matrix,aabb_min,aabb_max);
        iVar7 = 0;
        if (iVar10 != 0) {
          g_GlobeLightCount = g_GlobeLightCount + 1;
          iVar7 = *(int *)((int)g_VisibleCoronaGlobes + iVar11);
          (&g_GlobeLightCount)[g_GlobeLightCount] = iVar7;
        }
        local_18 = local_18 + 1;
        iVar11 = iVar11 + 4;
      } while (local_18 < g_VisibleCoronaGlobeCount);
    }
    if (0 < g_ColorCorrectionCount) {
      local_ac.x = aabb_max->x - aabb_min->x;
      local_ac.y = aabb_max->y - aabb_min->y;
      local_ac.z = aabb_max->z - aabb_min->z;
      pCVar8 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (rotation_matrix,local_58,&local_ac);
      iVar7 = 0;
      local_80 = 0.0;
      local_84 = 0.0;
      local_88 = 0.0;
      local_b0 = 0.0;
      local_b4 = 0.0;
      local_b8 = 0.0;
      if (0 < g_ColorCorrectionCount) {
        iVar11 = 0;
        do {
          iVar10 = *(int *)((int)g_VisibleOmniLights + iVar11);
          if ((*(uint *)(iVar10 + 0x11d4) & 0x7fffffff) == 0) {
            local_b8 = *(float *)(iVar10 + 0x11c4) + local_b8;
            local_b4 = *(float *)(iVar10 + 0x11c8) + local_b4;
            local_b0 = *(float *)(iVar10 + 0x11cc) + local_b0;
            iVar7 = iVar7 + 1;
          }
          else {
            fVar4 = *(float *)(iVar10 + 0x104) - (position->x + pCVar8->x);
            fVar2 = *(float *)(iVar10 + 0x108) - (position->y + pCVar8->y);
            fVar3 = *(float *)(iVar10 + 0x10c) - (position->z + pCVar8->z);
            fVar1 = fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4;
            if (fVar1 <= *(float *)(iVar10 + 0x11d8)) {
              fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + INT_02d7a7b8) * *(float *)(iVar10 + 0x11dc)
                      ) * 0.666f;
              fVar5 = (float)2;
              local_88 = fVar1 * *(float *)(iVar10 + 0x11c4) * fVar5 + local_88;
              local_84 = fVar1 * *(float *)(iVar10 + 0x11c8) * fVar5 + local_84;
              local_80 = fVar1 * *(float *)(iVar10 + 0x11cc) * fVar5 + local_80;
            }
          }
          iVar11 = iVar11 + 4;
        } while (iVar11 < g_ColorCorrectionCount * 4);
      }
      if (iVar7 == 0) {
        local_78 = 0xaaaa;
        local_74 = 0xaaaa;
        local_7c = 0xaaaa;
      }
      else {
        local_7c = (int)ROUND(local_b8 * 256.0f);
        local_78 = (int)ROUND(local_b4 * 256.0f);
        local_74 = (int)ROUND(local_b0 * 256.0f);
      }
      g_ColorCorrectionLightMultiplier = (int)ROUND(local_88 * 256.0f) + local_7c;
      g_ColorCorrectionColorMultiplier = (int)ROUND(local_84 * 256.0f) + local_78;
      iVar7 = (int)ROUND(local_80 * 256.0f) + local_74;
      if (0xffff < g_ColorCorrectionLightMultiplier) {
        g_ColorCorrectionLightMultiplier = 0xffff;
      }
      if (0xffff < g_ColorCorrectionColorMultiplier) {
        g_ColorCorrectionColorMultiplier = 0xffff;
      }
      g_ColorCorrectionFogMultiplier = iVar7;
      if (0xffff < iVar7) {
        g_ColorCorrectionFogMultiplier = 0xffff;
        return iVar7;
      }
    }
  }
  return iVar7;
}
